#include <iostream>
#include <ctime>

int main(void)
{
	std::time_t timestamp = std::time(nullptr); // recuperer le temps ecoulee en seconde
	// transformer ce temps en heure locale
	std::tm*	local_time = std::localtime(&timestamp);

	char buffer[100];

	// Formater la date
	// %d = Jour (01-31) / %m = Mois (01-12) / %Y = Annee
	// %H = Heure (00-23) / %M = Minute (00-59) / %S = Seconde (00-59)
	std::strftime(buffer, sizeof(buffer), "[%Y%m%d_%H%M%S]", local_time);
	std::cout << "Date formatee : " << buffer << std::endl;

	return 0;
}
