// Question : Print the sum of this series: 1 - 2 + 3 - 4 + 5 - 6..... upto 'n' without using loops;

#include<iostream>
using namespace std;
int main(){
    int n,sum = 0;
    cout<<"Enter n : ";
    cin>>n;
    if(n%2 == 0) sum = -(n/2);
    else sum = (n+1)/2;
    cout<<sum;
    return 0;
}