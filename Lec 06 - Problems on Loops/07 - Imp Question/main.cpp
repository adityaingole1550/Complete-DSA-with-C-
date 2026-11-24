//Question  : Print the factorial of a given number 'n'.
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the Number : ";
    cin>>n;
    long fact = 1;
    for(int i = n ; i >= 1 ; i--){
        fact *= i;
    }
    cout<<"Factorial of "<<n<<" is : "<<fact;
    return 0;
}