//Question : Print the given patter for n=4 ( n= no. of rows)
//       * 
//     * * * 
//   * * * * *            -> Star Pyramid
// * * * * * * *


#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the Value of n : ";
    cin>>n;

   for(int i = 1; i <=n ; i++){

    for(int j = 1; j <= (n-i) ; j++){
        cout<<"  ";
    }

    for(int k = 1; k < (i*2) ; k++){
        cout<<"* ";
    }

    cout<<endl;

   }
    return 0;
}