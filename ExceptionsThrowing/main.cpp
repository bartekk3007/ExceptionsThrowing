#include <iostream>
#include "Dzielenie.h"

int main()
{
	try
	{
		Dzielenie d1(4, 0);
		std::cout << d1;
	}
	catch (std::exception& e)
	{
		std::cerr << e.what();
	}
	
	return 0;
}