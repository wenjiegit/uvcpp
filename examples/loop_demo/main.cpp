#include "mcoreapplication.hpp"

int main(int argc, char* argv[])
{
	MCoreApplication *a = new MCoreApplication(argc, argv);
	a->exec();
	
	printf("---> works\n");

	return 0;
}
