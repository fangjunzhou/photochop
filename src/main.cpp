#include <GLFW/glfw3.h>
#include <stdexcept>

int main(int argc, char *argv[]) {
  // Init GLFW.
  if (!glfwInit()) {
    throw std::runtime_error("GLFW initialization failed.");
  }

  // Create a GLFW window.
  glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 2);
  glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 0);
  GLFWwindow *window = glfwCreateWindow(640, 480, "Hello World", NULL, NULL);
  if (!window) {
    throw std::runtime_error("GLFW window creation failed.");
  }
  glfwMakeContextCurrent(window);
  glfwSwapInterval(1);

  while (!glfwWindowShouldClose(window)) {

    glfwSwapBuffers(window);
    glfwPollEvents();
  }

  glfwDestroyWindow(window);

  glfwTerminate();

  return 0;
}
