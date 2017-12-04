#pragma once

namespace SeaJay
{
	class Kit
	{
	public:
		Kit(int argc, char** argv);
		~Kit();

		void run();
	private:
		bool debug = false;
		int argc;
		char** argv;

		void printInformation();
	};
}
