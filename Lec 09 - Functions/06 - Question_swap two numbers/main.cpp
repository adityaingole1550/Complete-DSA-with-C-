// Question : value in a and value in b 

// #include<iostream>
// using namespace std;
// int main(){
//     int a,b,c;
//     cout<<"enter value of a and b: ";
//     cin>>a>>b;
//     c = a;
//     a=b;
//     b=c;
//     cout<<"Swaped value of a and b are "<< a << " "<<b;
//     return 0;
// }


//swap function

#include<iostream>
using namespace std;

int a,b;

int swap(int x ,int y){
    a = y;
    b = x;

}

int main(){
    cout<<"Enter value of a and b: ";
    cin>>a>>b;
    swap(a,b);
    cout<<"Swaped value of a and b are "<< a << " "<<b;
    return 0;
}

//without extra veriable

// #include<iostream>
// using namespace std;
// int main(){
//     int a,b;
//     cout<<"enter value of a and b: ";
//     cin>>a>>b;
//     a = a+b;
//     b = a-b;
//     a = a-b;
//     cout<<"Swaped value of a and b are "<< a << " "<<b;
//     return 0;
// }