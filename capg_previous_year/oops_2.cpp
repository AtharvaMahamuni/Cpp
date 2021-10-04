#include <iostream>
#include <string>
using namespace std;

class Money
{
public:
    void gotMoney()
    {
        puts("Got 5K USD in my account");
    }
};

class Man
{
    string _name;
    int _age;
    Man() {}

    friend class Spiderman;

protected:
    Man(const string &name, const int &age) : _name(name), _age(age) {}

    void run() { puts("I can run"); }

public:
    void sayName() const;
};

void Man::sayName() const
{
    cout << "My name is: " << _name << " and age is: " << _age << endl;
}

//Super-man
class Superman : public Man
{
    bool flight;

public:
    Superman(string name) : Man(name, 25){};

    void run() { puts("I can run at light speed"); }
};

//Spider-man
class Spiderman : public Man, public Money
{
    bool webbing;

public:
    Spiderman(string name) : Man(name, 19) {}
    void run() { puts("I can run at normal speed"); }
    // void run() { cout << _name << " " << _age << endl; }
};

int main()
{

    Superman clark("kent");
    clark.sayName();
    clark.run();

    Spiderman peter("peter");
    peter.sayName();
    peter.run();

    peter.gotMoney();

    return 0;
}