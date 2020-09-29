#include <iostream>
#include <string>
using namespace std;

class Phone
{
    string _name = "";
    string _os = "";
    int _price = 0;

    Phone();

public:
    Phone(const string &name, const string &os, const int &price);

    Phone(const Phone &);

    string getName() { return _os; }

    int getPrice();

    ~Phone();
};

int Phone::getPrice()
{
    printf("Value of get price is: %p\n", this);
    return _price;
}

Phone::Phone() : _name(), _os("Andy"), _price()
{
    puts("Default constructor.");
}

Phone::Phone(const string &name, const string &os, const int &price) : _name(name), _os(os), _price(price)
{
    puts("This is parameter constructor.");
}

Phone::Phone(const Phone &values)
{
    puts("OVERWRITE  COPY CONSTRUCTOR.");
    _name = "new " + values._name;
    _os = "skinned " + values._os;
    _price = values._price;
}

Phone ::~Phone()
{
    printf("Distructor is called for %s\n", _name.c_str());
    cout << _name << endl;
}

int main()
{

    Phone OnePlus8("OP6", "Oxygen OS", 39999);
    // cout << OnePlus8.getName() << endl;

    printf("Value of object is %p\n", &OnePlus8);
    cout << OnePlus8.getPrice() << endl;

    Phone OnePlus8s = OnePlus8;
    // cout << OnePlus8s.getName() << endl;

    return 0;
}