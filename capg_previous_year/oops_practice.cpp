#include <iostream>
#include <string>
using namespace std;

class Phone
{
    string _name = "";
    string _os = "";
    int _price = 0;

public:
    Phone(); // default constructor

    Phone(const string &name, const string &os, const int &price); //parameterized constructor

    Phone(const Phone &); //copy constructor

    string getName() { return _os; };

    ~Phone(); //destructor
};

Phone::Phone() : _name(), _os("Andy"), _price()
{
    puts("Default constructor");
}

Phone::Phone(const string &name, const string &os, const int &price) : _name(name), _os(os), _price(price)
{
    puts("Parameter constructor");
}

Phone::Phone(const Phone &values)
{
    puts("Overwrite over copy constructor");
    _name = values._name;
    _os = "Skinned " + values._os;
    _price = values._price;
}

Phone::~Phone()
{
    cout << "Destuructor called for " << _os << endl;
}

int main()
{
    Phone samsungA1;
    cout << samsungA1.getName() << endl;

    Phone onePlus("nord", "Oxygen Os", 1999);
    cout << onePlus.getName() << endl;

    Phone OnePlus9 = onePlus;
    cout << OnePlus9.getName() << endl;

    return 0;
}