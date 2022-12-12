Assests were exported from blender in the gltf seperated format in to the assests folder of the provided template to provide texture and bin
a mouse and keyboard interaction was added in which moving the mouse rotates the model:
modelRotation.x += mouseX-1000;
	int mouseY = static_cast<int>(y);
	modelRotation.z +=mouseY-1000;
	cout<<"model x : ";
	cout<<modelRotation.x<<endl;
	cout<<"model y : ";
	cout<<modelRotation.y<<endl;;
	cout<<"mouse x : ";
	cout<<mouseX<<endl;
	cout<<"mouse y : ";
	cout<< mouseY;
the up and down arrow buttons zooms in and out to the model provided :
if (action == GLFW_PRESS)
		keyStatus[key] = true;
	else if (action == GLFW_RELEASE)
		keyStatus[key] = false;
	if (keyStatus[GLFW_KEY_UP]) cameraPosition.z -= 1.0f;
	if (keyStatus[GLFW_KEY_DOWN]) cameraPosition.z += 1.0f;

	if (key == GLFW_KEY_ESCAPE && action == GLFW_PRESS)
		glfwSetWindowShouldClose(window, GLFW_TRUE);