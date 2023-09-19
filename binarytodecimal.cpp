#include<iostream>
using namespace std;
int main(){
    int n,decimal,lastdigit;
    int power=1;
    cin>>n;
    while(n>0){
       lastdigit=n%10;
       decimal=(lastdigit*power);
       power*=2;
       power++;
       n/=10;
    }
    cout<<decimal;
    return 0;
}