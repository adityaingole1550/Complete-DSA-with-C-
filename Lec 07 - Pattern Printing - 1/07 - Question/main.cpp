//Question : Print the given pattern for n=4 ( number of rows n)
// 1
// 2 3             --> Floyd's Triangle
// 4 5 6
// 7 8 9 10


#include<iostream>
using namespace std;
int main(){
    int n, x = 1;
    cout<<"Enter the value of n : ";
    cin>>n;
    for(int i = 1 ; i <= n ; i ++){

        for(int j = 1 ; j <= i ; j ++){

          cout<<x<<" ";
          x++;

        }

        cout<<endl;
        
         

    }
    return 0;
}