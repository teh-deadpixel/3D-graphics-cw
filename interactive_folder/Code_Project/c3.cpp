#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>

int main()
{
    // Create the main window
    sf::RenderWindow window(sf::VideoMode(800, 600), "SFML Window");

    // Load the video file
    sf::VideoMode desktop = sf::VideoMode::getDesktopMode();
    sf::VideoTexture texture;
    sf::Sprite sprite;
    sf::VideoMode mode(800, 600, desktop.bitsPerPixel);
    sf::VideoCapture capture("video.mp4");
    capture.setVideoMode(mode);
    capture.play();

    // Main loop
    while (window.isOpen())
    {
        // Handle events
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        // Update the video texture
        if (capture.getState() == sf::Video::Playing)
        {
            texture.update(capture);
            sprite.setTexture(texture);
        }

        // Clear the screen
        window.clear();

        // Draw the video
        window.draw(sprite);

        // Update the window
        window.display();
    }

    return 0;
}
