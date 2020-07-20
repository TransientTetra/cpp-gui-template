#ifndef PROJECT_HPP
#define PROJECT_HPP


#include "application.hpp"

class Project : public Application
{
private:
protected:
public:
	Project(const std::string &title, int height, int width);

	void run() override;
};


#endif //PROJECT_HPP
