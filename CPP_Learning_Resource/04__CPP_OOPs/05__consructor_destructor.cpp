#include <iostream>
#include <string>
using namespace std;

class Phone
{
    string _name = "";
    string _os = "";
    int _price = 0;

    Phone(); // this is default constructor is now disabled now no one is allowed to make declaration with this object
    //Now this is less ambiguios because default constructor is disabled.

public:
    // //It is a default constructor.
    // Phone();

    // //parameter constructor.
    Phone(const string &name, const string &os, const int &price);

    // //copy constructor.
    Phone(const Phone &);

    string getName() { return _os; }

    ~Phone(); //destructor.
};

//defination of default constructor.
Phone::Phone() : _name(), _os("Andy"), _price()
{
    puts("Default constructor.");
}

//defination of parameter constructor.
Phone::Phone(const string &name, const string &os, const int &price) : _name(name), _os(os), _price(price)
{
    puts("This is parameter constructor.");
}

//defination of copy constructor.
Phone::Phone(const Phone &values)
{
    puts("OVERWRITE  COPY CONSTRUCTOR.");
    _name = "new " + values._name;
    _os = "skinned " + values._os;
    _price = values._price;
}

//defination of destructor.
Phone ::~Phone()
{
    printf("Distructor is called for %s\n", _name.c_str()); //c_str is used for error
    cout << _name << endl;
}

int main()
{

    //This samsungA1 object now not allowed because we disabled this default constructor.
    // Phone samsungA1; //For this Andy will get overwritten for empty os.
    // cout << samsungA1.getName() << endl;

    Phone OnePlus8("OP6", "Oxygen OS", 39999);
    cout << OnePlus8.getName() << endl;

    Phone OnePlus8s = OnePlus8;
    cout << OnePlus8s.getName() << endl;

    return 0;
}

//  name of constructor is same as function name without any return type.