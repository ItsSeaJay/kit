#include <iostream>
#include <conio.h>

int main(int argc, char** argv)
{
	int countArguments(int argc);

	std::cout << countArguments(argc);

	_getch();
	return 0;
}

int countArguments(int argc)
{
	return argc;
}