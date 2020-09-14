#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int a,b,c;
    float x,x1;
    cout<<"Enter a ,b ,c";
    cin>>a>>b>>c;
    
    if(a==0 && b==0){
        cout<<"No solution";
    }
    else{
        if(a==0){
            cout<<"There is only one root:"<<(-c/b);
    }else{
    if((b*b-(4*a*c))<0){
        cout<<"There are no roots";
    }else{
        cout<<"the roots are : x"<<-b+sqrt(b*b-(4*a*c)/2*a);
        cout<<"x1"<<-b-sqrt(b*b-(4*a*c)/(2*a));
    }
    }}
    return 0;
}