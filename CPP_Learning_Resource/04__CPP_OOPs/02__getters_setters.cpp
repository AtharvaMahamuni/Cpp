#include <iostream>
#include <string>
using namespace std;

class User
{
    int _secret = 22; //private members are declared with _

public:
    string name = "default";
    void classMessage()
    {
        cout << "Class is great, " << name << endl;
    }

    void setSecret(const int &newSecret) //This is setter to set the value
    {                                    //const is required if your are accepting the value in setters in the form of refernce. It is one of the security feature.
        //if(codition Meets)
        _secret = newSecret;
    }

    int getSecret() //This is getter which will give us the value from private.
    {
        return _secret;
    }
};

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

    return 0;
}

//Private memebers are not accessible outside classes but this are accessible for methods in public section.
