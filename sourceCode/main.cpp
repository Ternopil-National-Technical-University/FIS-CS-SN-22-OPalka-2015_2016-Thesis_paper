#include "films.h"

Wt::WApplication *createApplication(const Wt::WEnvironment& env)
{
	return new Films(env);
}

int main(int argc, char *argv[])
{
	return Wt::WRun(argc, argv, &createApplication);
}
