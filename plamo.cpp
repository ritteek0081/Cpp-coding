#include<iostream>
using namespace std;
int main(void){
    int a,b;
    cout<<"Enter sell and cost amount:";
    cin>>a>>b;
    if(a-b>=0){
        cout<<"profit = +"<<a-b;
    }
    else{
        cout<<"loss = -"<<b-a;
    }
}