//**Question : Print the given patter for n=4 ( n= no. of rows)

// 4 4 4 4 4 4 4 
// 4 3 3 3 3 3 4     
// 4 3 2 2 2 3 4
// 4 3 2 1 2 3 4       -> Number Spiral
// 4 3 2 2 2 3 4
// 4 3 3 3 3 3 4
// 4 4 4 4 4 4 4


// use of min()
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the Value of n : ";
    cin>>n;

    for(int i = 1; i < 2*n; i++){
       
        
        for(int j = 1 ; j < 2*n ; j++){

            if( i <= n && j <=n ){
                cout<< n- min(i,j) + 1<<" ";
            } else if(i <=n && j > n) {
                cout<< n -min((2*n-j),i)+ 1<<" ";
            } else if(i>n && j <= n){
                cout<<n - min(2*n -i ,j) + 1<<" ";
            } else {
                cout<<n- min( 2*n - i, 2*n - j) + 1<<" ";
            }
            
           
        } 

            
        cout<<endl;
    }
    return 0;
}