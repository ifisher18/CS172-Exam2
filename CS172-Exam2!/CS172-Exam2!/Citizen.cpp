//I affirm that all code given below was written solely by me, Ian, and that any help I received
//adhered to the rules stated for this exam.

#include <iostream>
#include "Citizen.h"
using namespace std;

// ** Need to implement code below **


	//Creates a new Citizen object with the passed in
	//id, name, and favorite color
	//Once a citizen is created, you can't change their id or name
	//but you can change their favorite color
Citizen::Citizen(int id, string firstName, string lastName, string color) {}

	//Creates a new Citizen object by copying data from the
	//passed in citizen
Citizen::Citizen(Citizen* citizen) {}

	//Returns the first name of this citizen
string Citizen::getFirstName() {}

	//Returns the last name of this citizen
string Citizen::getLastName() {}

	//Returns the id for this citizen
int Citizen::getId() {}

	//Returns the favorite color for this citizen
string Citizen::getFavoriteColor() {}

	//Sets the favorite color for this citizen
void Citizen::setFavoriteColor(string color) {}

};