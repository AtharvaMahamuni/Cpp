/*The time complexity of an algorithm is denoted O(¢ ¢ ¢ ) where the three dots
represent some function. Usually, the variable n denotes the input size. For
example, if the input is an array of numbers, n will be the size of the array, and if
the input is a string, n will be the length of the string*/

/*
Asymptotic Notations
=====================

Asymptotic Notations are the expressions that are used to represent the complexity of an algorithm.

Best Case: In which we analyse the performance of an algorithm for the input, for which the algorithm 
takes less time or space.

Worst Case: In which we analyse the performance of an algorithm for the input, for which the algorithm 
takes long time or space.

Average Case: In which we analyse the performance of an algorithm for the input, for which the algorithm 
takes time or space that lies between best and worst case.

Types of Data Structure Asymptotic Notation
1. Big-O Notation (Ο) – Big O notation specifically describes worst case scenario.
2. Omega Notation (Ω) – Omega(Ω) notation specifically describes best case scenario.
3. Theta Notation (θ) – This notation represents the average complexity of an algorithm.


Big-O Notation (Ο):
Big O notation specifically describes worst case scenario. It represents the upper bound running 
time complexity of an algorithm. Lets take few examples to understand how we represent the time 
and space complexity using Big O notation.
EG.-
O(1):
Big O notation O(1) represents the complexity of an algorithm that always execute in same time 
or space regardless of the input data.


O(n):
Big O notation O(N) represents the complexity of an algorithm, whose performance will grow 
linearly (in direct proportion) to the size of the input data.


O(n^2):
Big O notation O(n^2) represents the complexity of an algorithm, whose performance is directly
proportional to the square of the size of the input data.


Omega Notation (Ω):
Omega notation specifically describes best case scenario. It represents the lower bound 
running time complexity of an algorithm. So if we represent a complexity of an algorithm in 
Omega notation, it means that the algorithm cannot be completed in less time than this, it 
would at-least take the time represented by Omega notation or it can take more (when not in best case scenario).


Theta Notation (θ):
This notation describes both upper bound and lower bound of an algorithm so we can say
that it defines exact asymptotic behaviour. In the real case scenario the algorithm not
always run on best and worst cases, the average running time lies between best and worst 
and can be represented by the theta notation.
*/

#include <iostream>
using namespace std;

int main()
{
    int n, m;

    /*FIXME: LOOPS
    
    A common reason why an algorithm is slow is that it contains many loops that go
    through the input. The more nested loops the algorithm contains, the slower it is.
    If there are k nested loops, the time complexity is O(nk).
    */

    //TODO: 1.The time complexity of the following code is O(n)
    for (int i = 1; i <= n; i++)
    {
        // code
    }

    //TODO: 2.The time complexity of the following code is O(n2)
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            // code
        }
    }

    /*FIXME: ORDER OF MAGNITUDE
    A time complexity does not tell us the exact number of times the code inside
    a loop is executed, but it only shows the order of magnitude. In the following
    examples, the code inside the loop is executed 3n, nÅ5 and dn/2e times, but the
    time complexity of each code is O(n)
    */

    //TODO: 1.
    for (int i = 1; i <= 3 * n; i++)
    {
        // code
    }

    //TODO: 2.
    for (int i = 1; i <= n + 5; i++)
    {
        // code
    }

    //TODO: 3.
    for (int i = 1; i <= n; i += 2)
    {
        // code
    }

    //TODO: 4. Time compexity is O(n2) in this example.
    for (int i = 1; i <= n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            // code
        }
    }

    /*FIXME: PHASES
    If the algorithm consists of consecutive phases, the total time complexity is the
    largest time complexity of a single phase. The reason for this is that the slowest
    phase is usually the bottleneck of the code.  
    */
    //TODO: 1.For example, the following code consists of three phases with time complexities
    // O(n), O(n2) and O(n). Thus, the total time complexity is O(n2).
    for (int i = 1; i <= n; i++)
    {
        // code
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            // code
        }
    }
    for (int i = 1; i <= n; i++)
    {
        // code
    }

    /*FIXME: Several variables
    Sometimes the time complexity depends on several factors. In this case, the time
    complexity formula contains several variables.  
    */
    //TODO: The time complexity of the following code is O(nm):
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            // code
        }
    }

    /*FIXME: Recursion
    The time complexity of a recursive function depends on the number of times
    the function is called and the time complexity of a single call. The total time
    complexity is the product of these values.
    */

    // TODO: 1. The call f(n) causes n function calls, and the time complexity of each call is O(1).
    // Thus, the total time complexity is O(n).
    void f(int n)
    {
        if (n == 1)
            return;
        f(n - 1);
    }

    // TODO: 2.O(n2)
    void g(int n)
    {
        if (n == 1)
            return;
        g(n - 1);
        g(n - 1);
    }

    return 0;
}
