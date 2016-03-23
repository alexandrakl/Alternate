#include <iostream>
#include <string>

int main()
{
	std::cout << "How many lines would you like to be printed?" << std::endl;

	int number;
	std::cin >> number;

	//Create input validation loop to check that input is a positive integer.
	while (number <= 0) {
		std::cout << "Please enter a positive integer. " << std::endl;
		std::cin >> number;
	}

	std::string X = "XXXXXXXXXXXXXXXXXXXX"; 
	std::string space = " ";
	int n = 0; //number of spaces
	bool toggle = 1; //intial toggle = true

	//create a loop to print out number of inputed lines
	for (int i = 0; i < number; i++) {

		//toggle when it hits each 50 lines
		if (i % 100 == 0) {
				toggle = 1;
		}
		else if(i % 50 == 0) {
				toggle = 0;
		}
		
		//when toggle is true increment the number of spaces
		if (toggle == 1) {
			n++;
		}
		//when toggle is false decrement the number of spaces
		else if (toggle == 0) {
			n--;
		}

		//create a for loop to print out the spaces
		for (int i = 0; i < n; i++) {
			std::cout << space;
		}

		//print out the Xs' string
		std::cout << X << std::endl;
	}

	return 0;
}