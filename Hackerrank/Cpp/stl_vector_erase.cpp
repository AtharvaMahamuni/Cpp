#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

// https://www.hackerrank.com/challenges/vector-erase/problem


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    
    int n, num;
    vector<int> nums;
    
    cin >> n;
    
    for(int i = 0; i < n; i++)
    {
        cin >> num;
        nums.push_back(num);
    }
    
    //deleting value from the nth postion
    cin >> n;
    nums.erase(nums.begin()+(n-1));
    
    // deleting values between n and m range.
    int m;
    cin >> n >> m;
    nums.erase(nums.begin()+(n-1), nums.begin()+(m-1));


    //Size of a vector.
    cout << nums.size() << endl;
    
    //Printing vector.
    for(int i : nums)
        cout << i << " ";
    
      
    return 0;
}

