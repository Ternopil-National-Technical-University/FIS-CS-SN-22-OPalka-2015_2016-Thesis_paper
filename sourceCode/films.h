#ifndef FILMS_H
#define FILMS_H

#include <Wt/WApplication>

#include "ui_films.h"

class Films : public Wt::WApplication
{

public:
	Films(const Wt::WEnvironment& env);
	~Films();
private:
	Ui_Films *ui;
	
};

#endif // FILMS_H
