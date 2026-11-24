// Let's create new bigger Patterns

// Take a, b, c as input and print the following pattern: 
// a= 3, b= 4, c= 5

// *
// * *
// * * *
// *
// * *
// * * *
// * * * *
// *
// * *
// * * *
// * * * *
// * * * * * 

#include<iostream>
using namespace std;

int starTriangle(int a){
        for(int i = 1 ; i <=a ; i++){
            for(int j=1 ; j<=i ; j++){
                cout<<"* ";
            }
            cout<<endl;
        }
    }

int main(){
    
    starTriangle(3);
    starTriangle(4);
    starTriangle(5);

    return 0;
}