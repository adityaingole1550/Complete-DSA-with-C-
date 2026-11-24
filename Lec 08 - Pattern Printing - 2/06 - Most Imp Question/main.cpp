//**Question : Print the given patter for n=4 ( n= no. of rows)

// 4 4 4 4 4 4 4 
// 4 3 3 3 3 3 4     
// 4 3 2 2 2 3 4
// 4 3 2 1 2 3 4       -> Number Spiral
// 4 3 2 2 2 3 4
// 4 3 3 3 3 3 4
// 4 4 4 4 4 4 4


#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the Value of n : ";
    cin>>n;

    for(int i = 1; i < 2*n; i++){
        int m = n;
        if(i<=n){
            
            for(int j = 1 ; j <= i; j++){
                cout<<m+1-j<<" ";
            }

            for(int k = 1; k <= (2*(n-i)) -1; k++){
                cout<<n-i+1<<" ";
            }

            for(int l = 1; l <= i; l++){

                if(i != n || l != 1){
                    cout<<m-i+l<<" ";

                } 
                
            }
        } else{

            for(int j = 1 ; j <= 2*n - i; j++){
                cout<<m+1-j<<" ";
            }

            for(int k = 1; k <= 2*(i-n)-1 ; k++){
                cout<<i-n+1<<" ";
            }

            for(int l = 1; l <= 2*n-i; l++){
                cout<<m-(2*n-i)+l<<" ";
            }
        }

            
        cout<<endl;
    }
    return 0;
}