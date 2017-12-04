#include <iostream>
#include "kit.h"

SeaJay::Kit::Kit(int argc, char** argv)
{
	// Store a copy of the command-line arguments
	this->argc = argc;
	this->argv = argv;

	if (debug)
	{
		std::cout << this->argc << '\n';
		std::cout << this->argv[0] << '\n';
	}
}

SeaJay::Kit::~Kit() {}

void SeaJay::Kit::run()
{
	if (argc > 1)
	{

	}
	else
	{
		printInformation();
	}
}

void SeaJay::Kit::printInformation()
{
	std::cout << "Kit Copyright (C) Callum John 2017, MIT License" << '\n';
	std::cout << "Outputs the contents of a file to the console." << '\n';
	std::cout << "Usage: Kit [path]" << '\n';
	std::cout << '\t' << "[path] - Path to the file you wish to output" << '\n';
}