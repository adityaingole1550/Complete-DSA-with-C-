//Question : Print the given patter for n=4 ( n= no. of rows)
//       * 
//     * * * 
//   * * * * *            -> Star Diamond
// * * * * * * *
//   * * * * * 
//     * * * 
//       * 


#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the Value of n : ";
    cin>>n;

    for(int i = 1; i < 2*n; i++){

        if(i <= n){

            for(int j = 1; j<= (n-i) ; j++){
                cout<<"  ";
            }

            for(int k = 1 ; k< (i*2); k++){
                cout<<"* ";
            }

        } else{

            for(int l = 1 ; l <= (i-n) ; l++) {
                cout<<"  ";
            }

            for(int m = 1 ; m < (2*n-i)*2  ; m++ ){
                cout<<"* ";
            }
        

        }

        cout<<endl;
    }
    return 0;
}