#include<iostream>
using namespace std;
int add(int num1,int num2){
    int sum= num1+num2;
    return sum;
}
float mult(float num1, float num2){
    float ans=num1*num2;
    return ans;
}

int main(){
    float num1=4.2;
    float num2=3.0;
    cout<<mult(4.2,3.0)<<endl;
    return 0;
}