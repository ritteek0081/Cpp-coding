#include<iostream>
#include<cmath>
using namespace std;
int main(void){
    float p,r,t;
    cout<<"enter p r t :";
    cin>>p>>r>>t;
    cout<<p*r*t<<endl;
    cout<<p*pow((1+r),t);
}