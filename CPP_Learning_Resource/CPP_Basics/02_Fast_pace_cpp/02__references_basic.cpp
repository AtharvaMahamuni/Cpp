#include <iostream>
using namespace std;

int main()
{

    //Basic working of pointer and references
    int score = 200;
    int *myp = &score;

    printf("Value of score is %d\n", score);
    printf("Value of pointer is %p\n", myp);

    //Now this is IMP
    int &another_score = score; //Here we choose another_score as a refernce for score
    another_score = 800;        //whatever change we are going to do in the value of another_score is going to reflect in score

    printf("Value of score is %d\n", score);
    printf("Value of pointer is %p\n", myp);

    cout << endl;
    //Values of score and another_score
    printf("score value= %d   another_score value= %d", score, another_score);

    cout << endl;

    //address of score and another_score
    printf("score add.= %d   another_score add.= %d", &score, &another_score);

    return 0;
}

//as on line no. 15 and 16 it is like two different names for single memory location.
//That's why references are tricky than pointers, because they are the ones who actually change the values from variables.