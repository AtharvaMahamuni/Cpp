#include <iostream>
#include <string>
using namespace std;

class User
{
    int _secret = 22; //private members are declared with _

public:
    string name = "default";
    void classMessage();

    void setSecret(const int &newSecret)
    {
        _secret = newSecret;
    }

    int getSecret() const; //This is getter which will give us the value from private.
    // {
    //     return _secret;
    // }
};

void User::classMessage() //this is method sepration.
{
    cout << "Class is great, " << name << endl;
}

int User::getSecret() const
{
    return _secret;
}

int main()
{

    User sam;
    User atharva;

    sam.name = "sam";
    sam.classMessage();
    // sam.-secret = 222;
    sam.setSecret(222); //calling setter.
    cout << sam.getSecret() << endl;

    atharva.classMessage();

    const User rock;                  //Here we made object constant
    cout << rock.getSecret() << endl; //It will give error.
    //We need to mark getSecret() method as an constant to resolve this issue.
    //non-constant objects can access constant methods,
    //but, constant objects can't access non-constant methods.

    return 0;
}