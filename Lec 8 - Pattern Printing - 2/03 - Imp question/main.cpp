//Question : Print the given patter for n=4 ( n= no. of rows)
//       1 
//     1 2 1 
//   1 2 3 2 1            -> Number Pyramid Palinndrome
// 1 2 3 4 3 2 1


#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the Value of n : ";
    cin>>n;

    for(int i = 1; i <= n; i++){
        
        for(int j = 1 ; j<= (n-i); j++){
            cout<<"  ";
        }

        for(int k = 1; k<= i; k++){
            cout<<k<<" ";
        }

        for(int l = i; l > 1 ;l-- ){
        //     if(i==1){
        //         break;   // No need of break cause i = 1 will never execute meanns this for look will skip
        //     }else{
        //         cout<<(l-1)<<" ";
        //     }
        // }

        cout<<(l-1)<<" ";
        }

        cout<<endl;
    }

    return 0;
}