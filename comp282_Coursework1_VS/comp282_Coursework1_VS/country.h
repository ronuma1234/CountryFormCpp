#ifndef COUNTRY_HPP
#define COUNTRY_HPP

#include <iostream>
#include <string>
using namespace std;

class Country {
private:
    std::string name;
    long popSize;

public:
    Country(std::string name, long pop);
    Country();

    std::string getName();
    long getPop();

    void setName(std::string n) { name = n; }
    void setPop(long p) { popSize = p; }

    friend ostream& operator<<(ostream& output, const Country& countr);
    friend istream& operator>>(istream& input, Country& countr);

    bool operator==(const Country& countr);
    bool operator<(const Country& countr);
    bool operator>(const Country& countr);
};

#endif
