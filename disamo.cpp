#include<iostream>
using namespace std;
int main(void){
    int a;
    float d,da;
    cout<<"Enter amount and discount:";
    cin>>a>>d;
    da=(d/100)*a;
    cout<<"final amount:"<<a-da;
}