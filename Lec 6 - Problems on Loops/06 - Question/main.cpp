// Question : Print the sum of this series: 1 - 2 + 3 - 4 + 5 - 6..... upto 'n'.
#include<iostream>
using namespace std;
int main(){
    cout<<"Enter the value of 'n' : ";
    int n;
    cin>>n;
    int sum = 0;
    for (int i = 1 ; i <= n ; i++){
        if( i%2 != 0){
            sum = sum + i;
        }else {
            sum = sum - i;
        }
    }
    cout<<sum;
    return 0;
}