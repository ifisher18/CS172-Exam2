//I affirm that all code given below was written solely by me, Ian, and that any help I received
//adhered to the rules stated for this exam.

//
#pragma once

#include <iostream>
using namespace std;

// 
class Citizen
{
public:

	//Creates a new Citizen object with the passed in
	//id, name, and favorite color
	//Once a citizen is created, you can't change their id or name
	//but you can change their favorite color
	Citizen(int id, string firstName, string lastName, string color);

	//Creates a new Citizen object by copying data from the
	//passed in citizen
	Citizen(Citizen* citizen);

	//Returns the first name of this citizen
	string getFirstName();

	//Returns the last name of this citizen
	string getLastName();

	//Returns the id for this citizen
	int getId();

	//Returns the favorite color for this citizen
	string getFavoriteColor();

	//Sets the favorite color for this citizen
	void setFavoriteColor(string color);

private:
	// what additional private properties the Citizen class needs?
	// I'm thinking that some additional private properties would be:
	string FName;
	string LName;
	int Id;
	string color;
	// created to hold the name of city when needed:
	string cityName;
	// in addition to what is passed in, we need to define the above as private elements of the data field

};