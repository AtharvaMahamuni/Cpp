#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

// https://www.hackerrank.com/challenges/cpp-lower-bound/problem


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
    
    //FIXME: This is the iterator variable which is required to store iterating values which come from the lower_bound() function.
     vector<int> :: iterator low;
    
    cin >> n;
    for (int i = 0; i < n; i++) 
    {
        int check;
        cin >> check;
        
        //Here we are storing entire iterated values.
        low = lower_bound(nums.begin(), nums.end(), check);
        
        num = low - nums.begin();
        if(nums[num] == check)
            cout << "Yes " << num+1 << endl;
        else 
        {
            cout << "No " << num+1 << endl;
        }
        
    }
      
    return 0;
}
