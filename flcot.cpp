/*
Fuel Cost
Input distance travelled, vehicle mileage, and fuel price. Calculate the fuel cost.
*/
#include<iostream>
using namespace std;
int main(void){
    float d,m,p;
    cout<<"Enter d m p:";
    cin>>d>>m>>p;
    cout<<"fuel cost:"<<((d/m)*m)*p; //fuel cost=d*p;
}