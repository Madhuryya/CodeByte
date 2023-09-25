#include<iostream>
using namespace std;
int add(int num1, int num2){
    int sum=num1+num2;
    return sum;
}
float add(float num3, float num4){
    float sum=num3+num4;
    return sum;
}
int main(){
    int num1=4;
    int num2=5;
    float num3=1.1;
    float num4=3.1;
    cout<<add(num3,num4)<<endl;
    return 0;
}