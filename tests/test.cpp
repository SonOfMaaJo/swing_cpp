#include <iostream>
#include <string>

int	main(void){
	std::string age;
	std::string reste;
	int full;

	std::cout << "Entrez votre age" << std::endl;
	std::getline(std::cin, age);
	if (age == "") {
		std::cout << "Age could'nt be empty." << std::endl;
	}
	std::cout << age << std::endl;
	std::cin >> full;
	std::cin.ignore();
	std::cout << full;
	if (full != 0){
		std::getline(std::cin, reste);
		std::cout << "Le reste est : " << reste << std::endl;
	}
	else {
		std::cout << "something went wrong";
	}
}
