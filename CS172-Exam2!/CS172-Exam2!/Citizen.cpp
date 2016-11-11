//I affirm that all code given below was written solely by me, Ian, and that any help I received
//adhered to the rules stated for this exam.//

#include <iostream>
#include <fstream>
#include <vector>
#include "Citizen.h"

using namespace std;

// ** Need to implement code below **


	//Creates a new Citizen object with the passed in
	//id, name, and favorite color
	//Once a citizen is created, you can't change their id or name
	//but you can change their favorite color\

// from my understanding this constructor just initializes the 4 passed in vals
Citizen::Citizen( int id, string firstName, string lastName, string color) {
	id = 0; // sets default value for id for the constructor: 0
	firstName = " "; // sets the default value for first name for the constructor: whitespace character
	lastName = " "; // sets the default value for the last name for the constructor: whitespace char.
	color = " "; // sets the default value for the color of constructor: whitespace char again
}

	//Creates a new Citizen object by copying data from the
	//passed in citizen
// my interpretation is that i would just copy over to a new citizen1 object
// then delete the old
Citizen::Citizen(Citizen* citizen) {
	Citizen new citizen1(citizen); // use copy constructor...attempting to use new to create a new object called citizen1
	delete &citizen1; // after creating citizen, a copy of citizen, must delete old memory
}

	//Returns the first name of this citizen
	// to return this, we need to access the file of citizens and locate/output the first name
string Citizen::getFirstName() {
	fstream fin1(cityName + ".txt", ios::in|ios::out); // opens the file "cityName + ".txt" for output/input
		if (!fin1.fail()) { // tests if the file can open or not
			while (cityName >> FName) { // checks through file for the first name
				if (FName = cityName >> FName) { // if the desired first name matches a value in text file
					return FName; // return this name
				}
				else return 0; // else, return 0 in this case

			}
		}
}

	//Returns the last name of this citizen
string Citizen::getLastName() {
	fstream fin1(cityName + ".txt", ios::in | ios::out); // opens the file "cityName + ".txt" for output/input in this function
	if (!fin1.fail()) { // tests if the file can open or not
		while (cityName >> LName) { // checks through file for the last name
			if (LName = cityName >> LName) { // if the desired last name matches a name in the file
				return FName; // return this name
			}
			else return 0; // else, return 0 in this case
		}
	}
}

	//Returns the id for this citizen
int Citizen::getId() {
	fstream fin1(cityName + ".txt", ios::in | ios::out); // opens the file "cityName + ".txt" for output/input
	if (!fin1.fail()) { // tests if the file can open or not
		while (cityName >> Id) { // checks through file for the ID number
			if (Id = cityName >> Id) { // if the desired ID value matches a value in text file
				return Id; // return this ID
			}
			else return 0; // else, return 0 in this case

		}
	}
}

	//Returns the favorite color for this citizen
string Citizen::getFavoriteColor() {
	fstream fin1(cityName + ".txt", ios::in | ios::out); // opens the file "cityName + ".txt" for output/input
	if (!fin1.fail()) { // tests if the file can open or not
		while (cityName >> color) { // checks through file for the color
			if (color = cityName >> color) { // if the desired color matches a color in text file
				return color; // return this color...for the specific citizen in question
			}
			else return 0; // else, return 0 in this case

		}
	}
}

	//Sets the favorite color for this citizen
// the process of this function is read data from the specific file for each city, then analyse the file and find the particular
// citizen that needs their color changed
// finally, fout the right color at that line in the file
void Citizen::setFavoriteColor(string color) {
	ofstream fout1("Nameof City"); // NEED TO FIX THIS: ofstream to read data to file
	if (!fout1.fail()) { // if the file opens...
		for (int i = 0; i < data.size(); i++) {
			if (fout1 = Citizen) { // if the loop arives at the correct citizen
				fout1 << color << " " << endl; // sets the color as what is passed in for the citizen
			}
			else

		}
	}
}

};