// Libraries
#include <conio.h>
#include <iostream>
#include <string>

#include "kit.h"

int main(int argc, char** argv)
{
	SeaJay::Kit kit(argc, argv);

	kit.run();

	_getch();
	return 0;
}