//Question : Print the given pattern for n=5 ( n= odd)
//*       *
//  *   * 
//    *    -> Star Plus
//  *   *
//*       *


#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    for(int i = 1 ; i <= n ; i ++){
        int k = 5;
        for(int j = 1 ; j <= n ; j ++){

            if(i == j || k == i){
                cout<<"* ";
                k--;
            } else{
                cout<<"  ";
                k--;
            }

        }

        
        
         
        cout<<endl;
    }
    return 0;
}