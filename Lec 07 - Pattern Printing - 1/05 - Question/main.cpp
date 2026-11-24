//Question : Print the given pattern for n=5 ( n= odd)
//    *
//    *
//* * * * *    -> Star Plus
//    *
//    *


#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    for(int i = 0 ; i < n ; i ++){

        if(i == (n/2)){

            for(int k = 0; k < n; k++){
                cout<<"* ";
            }  

        } else {

            for(int j = 0 ; j < n; j++){

                if(j== n/2){
                    cout<<"* ";
                } else{
                    cout<<"  ";
                }

            }
            
        }
        
        cout<<endl;
    }
    return 0;
}