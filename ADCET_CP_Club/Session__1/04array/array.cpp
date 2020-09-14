#include<iostream>
using namespace std;
int main(){
    int arr[]={1,1,2,2,2,2,3};
    int x,arr_length,i,count=0;
    arr_length=sizeof(arr)/sizeof(arr[0]);
   
    x=0;

    for(i=0;i<arr_length;i++){
        if(x==arr[i]){
            count++;
        }
    }
    if(count>0)
    {
        cout<<count;
    }
    if(count==0)
    {
        cout<<"-1";
    }
}