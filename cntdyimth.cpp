/*
Convert date to day count
Input date and calculate approximately how many days remaining in month.
*/

#include<iostream>
using namespace std;
int main(void){
    int d,m,y;
    cout<<"Enter date by DD MM YYYY:";
    cin>>d>>m>>y;
    cout<<d<<m<<y;
    if(d<0||m<0||d>=31||m>=12){
        cout<<"invalid\n";
    }
    else if(m!=2){
        if(m==4||m==6||m==9||m==11){
            cout<<"Remaining days in that month: "<<30-d;
        }
        else{
            cout<<"Remaining days in that month: "<<31-d;
        }
    }
    else{
        if((y%4==0 && y%100!=0) || y%400==0){
            cout<<"Remaining days in that month: "<<29-d;
        }
        else{
            cout<<"Remaining days in that month: "<<28-d;
        }
    }
}