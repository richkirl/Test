#include "WindowLauncher.hpp"

int WindowLauncher::init()
{
    if (!glfwInit())
        return -1;
    glfwDefaultWindowHints();
    glfwWindowHint(GLFW_DECORATED, false);
    /* Create a windowed mode window and its OpenGL context */
    
    window = glfwCreateWindow(1280, 768, "", NULL, NULL);
    if (!window)
    {
        close();
        return -1;
    }

    const GLFWvidmode* vidmode = glfwGetVideoMode(glfwGetPrimaryMonitor());

    glfwSetWindowPos(
        window,
        //(vidmode->width() - 1280) / 2,
        //(vidmode->height() - 768) / 2
        (vidmode->width - 1280) / 2,
        (vidmode->height - 768) / 2
    );

    glfwMakeContextCurrent(window);
    // glad: load all OpenGL function pointers
    // ---------------------------------------
    if (!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress))
    {
        std::cout << "Failed to initialize GLAD" << std::endl;
        return -1;
    }
}

void WindowLauncher::refresh()
{
    /* Swap front and back buffers */
    glfwSwapBuffers(window);

    /* Poll for and process events */
    glfwPollEvents();
}

void WindowLauncher::close()
{
    glfwTerminate();
}

//void WindowLauncher::draw()
//{ 
//
//}

GLFWwindow* WindowLauncher::GetWindowCurrrent()
{
    return window;
}

void WindowLauncher::setFullscreen(bool f)
{
    this->fullscrean = f;
}

bool WindowLauncher::getFullscreen()
{
    return this->fullscrean;
}
