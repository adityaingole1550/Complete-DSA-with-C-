//Question : Print the given pattern for n=4 ( n= no. of rows)
// 1
// 0 1
// 1 0 1       -> Binary Triangle
// 0 1 0 1


#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    for(int i = 1 ; i <= n ; i ++){
        bool x = false;
        bool y = true;

        for(int j = 1 ; j <= i ; j ++){
        
           if(i % 2 == 0){
            cout<<(int)x;
            x = !x;
           } else{
            cout<<(int)y;
            y = !y;
           }

        }

        
        
         
        cout<<endl;
    }
    return 0;
}