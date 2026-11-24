#include<iostream>
using namespace std;
int main(){
    float x = 7.1;
    int y = x; //This is OK but what for char to int or boolean to int
    cout<<y<<endl;
    bool p = true;
    cout<<p+9; // also worked
     
    char ch = 'A';
    int q = (int)ch;
    int r = ch;
    cout<<endl<<q; 
    cout<<endl<<r; // C++ audo typecasts 



    return 0;
}