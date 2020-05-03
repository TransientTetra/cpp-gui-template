#ifndef APPLICATION_HPP
#define APPLICATION_HPP


#include <string>
#include "view/window.hpp"
#include "constants.hpp"


struct ModifiableFields
{
};

class Application
{
private:
	ModifiableFields modifiableFields;
	std::string title;
	Window window;
protected:
public:
	Application(std::string title);

	void run();
};


#endif //APPLICATION_HPP
