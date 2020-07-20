#include <controller/project.hpp>

// Main code
int main(int argc, char** argv)
{
	Project application(DEFAULT_WINDOW_TITLE, DEFAULT_WINDOW_HEIGHT, DEFAULT_WINDOW_WIDTH);
	application.run();
	return 0;
}
