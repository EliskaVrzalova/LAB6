//name: eliska vrzalova
//login: c00301768
//date: 16/10/2023
//estimated time taken: 15 min
//actual time taken: 15 mins
//program title and description:
//any known bugs: No validation on user input

#include <iostream>

int main()
{
	// variables
	int change = 0;
	int money = 0; //entered
	int itemCost = 0; //cost of selected item
	int no50cents = 0; // number of 50 cents coins
	int no20cents = 0;
	int no10cents = 0;
	int no5cents = 0;
	int no2cents = 0;
	int no1cents = 0;

	// ask user for input
	std::cout << "Enter the amount of money:" << std::endl;
	std::cin >> money;
	std::cout << "Enter the cost of selected item:" << std::endl;
	std::cin >> itemCost;

	//error checking
	if (money < itemCost)
	{
		std::cout << "Error: not enough money entered." << std::endl;
	}
	else
	{
		//calculation
		change = money - itemCost; //calculates the change the vending machine gives back

		no50cents = change / 50; //calculates the number of 50 cent coins
		change = (change - 50 * no50cents); //reassign the variable “change” //change=change%50

		no20cents = change / 20; //calculates the number of 20 cent coins
		change = (change - 20 * no20cents);

		no10cents = change / 10; //calculates the number of 10 cent coins
		change = (change - 10 * no10cents);
		no5cents = change / 5; //calculates the number of 5 cent coins
		change = (change - 5 * no5cents);

		no2cents = change / 2; //calculates the number of 2 cent coins
		change = (change - 2 * no2cents);
		no1cents = change; //calculates the number of 1 cent coins
	} // end if

	//answer
	std::cout << "The number of 50 cent coins is:" << std::endl;
	std::cin >> no50cents;
	std::cout << "The number of 20 cent coins is:" << std::endl;
	std::cin >> no20cents;
	std::cout << "The number of 10 cent coins is:" << std::endl;
	std::cin >> no10cents;
	std::cout << "The number of 5 cent coins is:" << std::endl;
	std::cin >> no5cents;
	std::cout << "The number of 2 cent coins is:" << std::endl;
	std::cin >> no2cents;
	std::cout << "The number of 1 cent coins is:" << std::endl;
	std::cin >> no1cents;
}