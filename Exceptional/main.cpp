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

		// test integer out of boundaries
		//withBounds.setValue(6);

		// test lowerbound string input
		//withBounds.setLowerBound(testString);

		// test upperbound string input
		//withBounds.setUpperBound(testString);

		// test lowerbound char input
		//withBounds.setLowerBound(testCstring);

		// test upperbound char input
		//withBounds.setUpperBound(testCstring);

		// test valid lowerbound int input
		//withBounds.setLowerBound(7);

		// test valid upperbound int input
		//withBounds.setUpperBound(8);

		// test valid set value
		//withBounds.setValue(4);

		// test output stored values 
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

