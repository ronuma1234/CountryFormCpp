#include <iostream>
#include <string>
#include <sstream>
#include "menupart3.h"
#include "country.h"
#include <vector>
#include <algorithm>
using namespace std;

bool countryComparator(Country firstCountry, Country secondCountry) {
	return firstCountry < secondCountry;
}

void MenuPart3::menu() {
	vector<Country> countries;
	bool exitFlag = false;
	while (exitFlag == false) {
		char input = ' ';
		cout << "1. Add country" << endl;
		cout << "2. List countries" << endl;
		cout << "3. Find largest country" << endl;
		cout << "4. Remove country" << endl;
		cout << "5. Sort countries" << endl;
		cout << "Q. Quit" << endl;
		cout << "Enter Option: ";
		cin >> input;

		if (input == 'Q') {
			exitFlag = true;
		}
		else if (input == '1') {
			Country countryToAdd;
			string countryInput;
			cout << "Enter details: ";
			cin >> countryToAdd;
			countries.push_back(countryToAdd);
		}
		else if (input == '2') {
			int countrNum = 1;
			for (auto countr : countries) {
				cout << "[" << countrNum << "] " << countr << endl;
				countrNum++;
			}
		}
		else if (input == '3') {
			if (countries.size() < 1) {
				cout << "There are no countries in the index currently" << endl;
			}
			else {
				Country largestCountry = countries[0];
				for (auto countr : countries) {
					if (countr > largestCountry) {
						largestCountry = countr;
					}
				}
				cout << "Largest: " << largestCountry << endl;
			}
		}
		else if (input == '4') {
			int index;
			cout << "Enter index: ";
			cin >> index;
			if (index < 1 || index > countries.size()) {
				cout << "No country has that index" << endl;
			}
			else {
				index--;
				countries.erase(countries.begin() + index);
			}
		}
		else if (input == '5') {
			sort(countries.begin(), countries.end(), countryComparator);
		}
	}
}