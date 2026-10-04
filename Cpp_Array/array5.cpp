/*
5. Count Positive, Negative and Zero
*/

#include<iostream>
using namespace std;
int main(void){
    int s,p=0,n=0,z=0;
    cout<<"Enter the number of inputs: ";
    cin>>s;
    int a[s];
    for(int i=0;i<s;i++){
        cin>>a[i];
    }
    for(int i=0;i<s;i++){
        if(a[i]>0){
            p++;
        }
        else if(a[i]<0){
            n++;
        }
        else{
            z++;
        }
    }
    cout<<"Positivve Elements = "<<p<<" | Negative Elements = "<<n<<" | Zero Elements = "<<z;
}