#include <iostream>
#include <string>
#include <sstream>
#include "country.h"
using namespace std;

// Constructor 1
Country::Country(std::string name, long pop) {
    this->name = name;
    popSize = pop;
}

// Constructor 2
Country::Country() {
    this->name = "";
    popSize = 0;
}

std::string Country::getName() {
    return this->name;
}

long Country::getPop() {
    return this->popSize;
}

ostream& operator<<(ostream& output, const Country& countr) {
    output << countr.name << " " << countr.popSize;
    return output;
}

istream& operator>>(istream& input, Country& countr) {
    string s1;
    long l1;

    input >> s1 >> l1;
    countr.setName(s1);
    countr.setPop(l1);
    return input;
}

bool Country::operator==(const Country& countr) {
    return this->popSize == countr.popSize;
}

bool Country::operator<(const Country& countr) {
    return this->popSize < countr.popSize;
}

bool Country::operator>(const Country& countr) {
    return this->popSize > countr.popSize;
}