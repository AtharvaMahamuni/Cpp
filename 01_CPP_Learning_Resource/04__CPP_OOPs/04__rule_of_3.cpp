#include <iostream>
#include <string>
using namespace std;

class User
{
    int _secret = 22;

public:
    string name = "default";
    void classMessage();

    void setSecret(const int &newSecret)
    {
        _secret = newSecret;
    }

    int getSecret() const;
};

void User::classMessage()
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

    sam.setSecret(222);
    cout << sam.getSecret() << endl;

    atharva.classMessage();

    const User rock;
    cout << rock.getSecret() << endl;

    User peter = sam; //all the properties of sam are copied into peter
    //Bydefault copy constructor get invoked
    cout << peter.getSecret() << endl;

    return 0;
}

//This are some of the good practices.
//Rule of three:
// https://stackoverflow.com/questions/4172722/what-is-the-rule-of-three
