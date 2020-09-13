#include <iostream>
using namespace std;

int lifeUp()
{
    //here every time when we call the lifeUp life will be get initialized to 3
    //and every time it will return 4 so to avoid that we can use static
    //keyword before declaring the life it will keep life variable as it is in memory
    // int life = 3;
    static int life = 3;

    // return life = life + 1;
    //Now it is the perfect scnario to learn about prefix and postfix

    //Now here you will notice that at the time of return life value which is returned
    //is not increamented at first call it will return 3, at second call it will return 4
    //and at third call it will return 5 as you noticed it will first get returned
    //and then it increamnted each time.
    //This is called as post-increament(post-fix operator).
    // return life++;

    //now this time value get increamented first and then it will get returned
    //it is similar to return life = life + 1;
    //this is known as pre-increament(pre-fix operator).
    return ++life;

    //this both increament types are useful for different scenarios.
}

int main()
{

    //const will not allow us to modify the value of variables.
    // const int i = 5;
    // i = 7

    int life = 3;
    cout << "Yout starting game life is: " << life << endl;

    //1st life up:
    life = lifeUp();
    cout << "Yout updated game life is: " << life << endl;

    //2nd life up:
    life = lifeUp();
    cout << "Yout updated game life is: " << life << endl;

    //3rd life up:
    life = lifeUp();
    cout << "Yout updated game life is: " << life << endl;

    return 0;
}

//Now one of the important thing to learn now is how C++ works
//and this can be understood by reading some notes on linkers and
//by reading little bit about compiation and linking process.

//This are the two stack overflow links were very precise answers are given
//you can refer this answers to learn more:
//1. https://stackoverflow.com/questions/6264249/how-does-the-compilation-linking-process-work
//2. https://stackoverflow.com/questions/3322911/what-do-linkers-do

//Qulifiers:
//There are 2 major qulifiers

//1. Modification Qualifiers:
//This qualifiers allow us or not allow us to modify
//the value inside the variable.
//eg. const, volatile(for multithreaded programs), mutable

//2. Life duration Qualifiers:
//This qualifier will will give an idea for how much time
//variable is available to me or for how much time the value
//inside the variable is available to me.
//eg. static, register(to store the variable for fast access), extern(It is used to add values at the time of linking), auto(now not used)