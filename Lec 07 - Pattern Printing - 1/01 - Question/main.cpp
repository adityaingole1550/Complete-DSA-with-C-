// Question : Print the given pattern

// *****
// *****    -> Solid Rectangle
// *****

#include<iostream>
using namespace std;
int main(){
    int st,row;
    cout<<"No. of * in one row : ";
    cin>>st;
    cout<<"No. of Rows : ";
    cin>>row;
    for(int i = 0 ; i <  row; i ++){

        for(int j = 0 ; j < st ; j++){
        cout<<"*";
        }

        cout<<endl;

    }
    
    return 0;
}