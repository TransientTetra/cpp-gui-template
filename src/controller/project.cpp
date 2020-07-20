#include "controller/project.hpp"

Project::Project(const std::string &title, int height, int width)
: Application(title, height, width)
{}

void Project::run()
{
	while (window.isOpen())
	{
		SDL_Event event;
		while (SDL_PollEvent(&event))
		{
			ImGui_ImplSDL2_ProcessEvent(&event);
			bool quit = (event.type == SDL_QUIT);
			quit |= (event.type == SDL_WINDOWEVENT && event.window.event == SDL_WINDOWEVENT_CLOSE
				 && event.window.windowID == SDL_GetWindowID(window.getSDLWindow()));
			if (quit)
			{
				window.setClose();
			}
		}
//		currentView->draw();
		window.render();
	}
}

