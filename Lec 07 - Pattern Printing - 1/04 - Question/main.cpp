//Question : Print the given pattern for n=4
// ABCD
// ABCD    -> Alphabet Square
// ABCD
// ABCD

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the value of n : ";
    cin>>n;
    for(int i = 1 ; i <= n ; i ++){
        for(int j = 0 ; j < n ; j++){
            cout<<(char)(65+j);
        }
        cout<<endl;
    }
    return 0;
}