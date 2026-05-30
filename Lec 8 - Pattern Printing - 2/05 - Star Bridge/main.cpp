//Question : Print the given patter for n=4 ( n= no. of rows)

// * * * * * * *
// * * *   * * *      -> Star Bridge
// * *       * * 
// *           * 


#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the Value of n : ";
    cin>>n;

    for(int i = 0; i < n; i++){

        for(int j = 1; j < 2*n; j++){

            if(  ((n-i) < j) &&  (j < (n+i))){
                cout<<"  ";
            } else {
                cout<<"* ";
            }

        }
        cout<<endl;
    }
    return 0;
}