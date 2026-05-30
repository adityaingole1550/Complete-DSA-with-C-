#include<iostream>
using namespace std;
int main(){
    int x = 4, y = 5, z = 2;

    //Arithmetic Operators 
    int add = x + y; //addition operator (+) returns 9
    int sub = x - z; //subtraction operator (-) return 2
    int mult = x * z; //Multiply operatio (*) return 8
    int div = x / z; //division operatio (/) return 2
    int mod = y % z; //modulus orpratior [returns reminder] (%) return 1
    cout<<add<<endl<<sub<<endl<<mult<<endl<<div<<endl<<mod<<endl;

    return 0;
}