#include "films.h"

Films::Films(const Wt::WEnvironment& env) : Wt::WApplication(env), ui(new Ui_Films)
{
	ui->setupUi(root());

}

Films::~Films()
{
	delete ui;
	remove("marks.txt");
}