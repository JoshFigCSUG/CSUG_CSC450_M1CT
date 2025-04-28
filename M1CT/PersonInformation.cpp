/**
 * @file PersonInformation.cpp
 * @brief A simple console application that displays
 *        personal information of an individual.
 * @author joshd
 * @date Apr 23, 2025
 */

#include <iostream>
#include <string>
#include <conio.h>

using namespace std;

int main() {
	string firstName = "Stefan";
	string lastName = "Salvatore";
	string streeAddress = "598 Abernathy Road";
	string city = "Mystic Falls";
	int zipCode = 30014;

	cout << "Person's Information:" << endl;
	cout << "\tFirst Name: " << firstName << endl;
	cout << "\tLast Name: " << lastName << endl;
	cout << "\tStreet Address: " << streeAddress << endl;
	cout << "\tCity: " << city << endl;
	cout << "\tZip Code: " << zipCode << endl;

	printf("Press any key to end program...");
	getch();

    return 0;
}
