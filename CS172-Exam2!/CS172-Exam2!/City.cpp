//I affirm that all code given below was written solely by me, Ian, and that any help I received
//adhered to the rules stated for this exam.

#include <iostream>
#include "City.h"
#include <vector>
#include <cctype>
#include <iomanip>
#include <cstdlib>
#include <fstream>

// I will use a file for each city, listed below:
// KatchemCityPop.txt
// SpokaneCityPop.txt
// SeattleCityPop.txt

using namespace std;

	//Creates a new city with the given name
	//When the city is created you need to restore
	//it's population from a file.
	//Hint: You will want to make the file name
	//be based on the name of the city.
City::City(string cityName) {
	ofstream fout;
	fout.open(cityName + ".txt"); // opens the file based on the city name...and creates the file
	for (int i = 0; i < cityName.size(); i++) {
		ifstream fin(cityName)
	}
	fout.close(); // closes fout
}

	//This is the destructor for the city. When
	//this city is destroyed, save the population of
	//the city to a file so that you can restore
	//it in the constructor the next time that
	//a city with this name is created.
City::~City() {
	ofstream fout;
	fout.open(City); // opens the file for city, need to first save the file
	saveDataToFile;
	for (int i = 0; i < fout.size(); i++) {
		getCityName--;
	}

}

	//Returns the city name
string City::getCityName() {
	ifstream fin(Cityname); // opens the correct file based on the name of city
	if (!fin.fail()) { // if the file opens correctly...
		string line;
		while (getline(fin, line)) { // cycles through each line of the text file
			string firstN = line.find(" "); // find the first whitespace character
			string key = line.substr(0, pos); // looks 
			return key; // 
		}
	}
	fin.close();
}

	//Returns the number of citizens in this city
int City::populationSize() {
	int count = 0; // creates a counter variable
	for (i = 0; i < vector.size(); i++) { // loops through the vector
		while (getCitizensforFavoriteColor >> Citizen) { // while loops that checks through for each citizen
			count++; // increment the counter variable
	}
}
	file.clear(); // clears all flags, counts
	file.keep(0, ios:beg); 

	//Returns the citizen at the given index.
	// Needs some work
City::Citizen* getCitizenAtIndex(int index) {
	ifstream fin(Cityname); // opens the correct file based on the name of city
	if (!fin.fail()) { // if the file opens correctly...
		string line;
		while (getline(fin, line)) { // cycles through each line of the text file
			string firstN = line.find(" "); // find the first whitespace character
			string key = line.substr(0, pos); // looks 
			return key; //
}

	//Adds a citizen to this city. You will need to
	//make a copy of this citizen so that you make
	//sure to keep it around for the life of the city.

		// generally speaking, this function adds a citizen and then makes a copy of this same citizen
void City::addCitizen(Citizen* citizen) {
	// adds a citizen to the city
	ifstream input(Cityname + ".txt"); // accesses the city text file and 'preps' for input
	input >> Citizen; // inputs the citizen into the file

		// need to make a copy
	// first need to create a file to make a copy of
	ofstream inputCopy;
	// Then need to transfer contents to inputCopy
	for (i = 0; i << input.size(); i++) {
		input[i] = inputCopy[i]; // copies the contents of this new entry
	}
	input.close(); // closes the file
}

	//Returns the citizen with the given id.
City::Citizen* getCitizenWithId(int id) {
	for (int i = 0; i < 1000; i++) { // loop is created to cycle through and identify the citizen with the given id.
		while (CityName + ".txt" >> id) { // loop that checks through the file for the given id
			return *citizen;
		}
	}
}

	//Returns a vector of citizens that all have
	//the given color as their favorite color.
	//For example, if color is “Blue” this will return all citizens
	//for this city who’s favorite color is Blue.
// not sure exactly how to implement this function, but the function will return a vector as mentions aboved that contains all citizens the like the same color
City::vector<Citizen*> getCitizensForFavoriteColor(string color) {
	vector<string> temp;
	fstream fin1(cityName + ".txt", ios::in | ios::out); // opens the file "cityName + ".txt" for output/input in this function
	if (!fin1.fail()) { // tests if the file can open or not
		while (cityName + ".txt" >> color) { // while the file is looped through to find the specific color
			if (color = cityName >> color) { // if this color found for a specific line is equal to the "key" color

				for (i = 0; i < 1000; i++) { // loops through the vector and assigns each now memory location with the specific citizen
					temp[i] = Citizen;
				}
			}
		}
	}
}

void City::saveDataToFile(string cityName) // added function to this class
{
	ofstream fout(cityName + ".txt"); 
	if (!fout.fail()) // if the file opens,
	{
		for (int i = 0; i < data.size(); i++) // for loop that checks through the data
		{
			fout << data.at(i).cityName + ".txt" << endl; // saves the data to the file CityName
		}
	}
	fout.close();
}
};