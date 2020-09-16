// question: https://www.hackerrank.com/challenges/c-tutorial-functions/problem?h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen&h_r=next-challenge&h_v=zen

#include <iostream>
#include <cstdio>
using namespace std;

/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/

int max_of_four(int a, int b, int c, int d)
{
    return (a > b) ? (a > c) ? (a > d) ? a : d : (c > d) ? c : d : (b > c) ? (b > d) ? b : d : (c > d) ? c : d;
}

int max_of_three(int a, int b, int c)
{
    return (a > b) ? (a > c) ? a : c : (b > c) ? b : c;
}

int max_of_two(int a, int b)
{
    return (a > b) ? a : b;
}

int main()
{
    int a, b, c, d;
    //scanf("%d %d %d %d", &a, &b, &c, &d);

    //cout << max_of_two(1, 4) << endl;
    // cout << max_of_three(4, 7, 3) << endl;
    cout << max_of_four(2, 4, 6, 1) << endl;

    //int ans = max_of_four(a, b, c, d);
    //printf("%d", ans);

    return 0;
}