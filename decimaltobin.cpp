#include<iostream>
using namespace std;
int main(){
    int n,paritydigit,power;
    cin>>n;
    int binary=0;
    power=1;
    while(n>0){
    paritydigit=n%2;
    binary+=paritydigit*power;
    power*=10;
    n/=2;   
    }
    cout<<binary<<endl;
    return 0;
}