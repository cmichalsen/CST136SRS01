// main.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "RangeInt.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	try
	{
		// TEST 1: test defaults to unbound
		RangeInt testUnbound;
		testUnbound.setValue(10);
		std::cout << "Set value is "
			<< testUnbound.getValue()
			<< std::endl;


		// TEST 2: test with bounds
		//RangeInt withBounds{ 1,5 };
		//const char * testCstring = "testing c-string";
		//string testString{ "testing string" };

		// TEST 2a integer out of boundaries
		//withBounds.setValue(6);

		// TEST 2b lowerbound string input
		//withBounds.setLowerBound(testString);

		// TEST 2c upperbound string input
		//withBounds.setUpperBound(testString);

		// TEST 2d lowerbound char input
		//withBounds.setLowerBound(testCstring);

		// TEST 2e upperbound char input
		//withBounds.setUpperBound(testCstring);

		// TEST 2f valid lowerbound int input
		//withBounds.setLowerBound(7);

		// TEST 2g valid upperbound int input
		//withBounds.setUpperBound(8);

		// TEST 2h valid set value
		//withBounds.setValue(4);

		// TEST 2i output stored values 
		//std::cout << "Lower bound is "
		//	<< withBounds.getLowerBound()
		//	<< endl
		//	<< "Upper bound is "
		//	<< withBounds.getUpperBound()
		//	<< endl
		//	<< "Value is set to "
		//	<< withBounds.getValue()
		//	<< std::endl;

	}
	catch (const std::exception& errorHandler) {
		std::cout << errorHandler.what();
	}

	return 0;

}

