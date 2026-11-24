// Question: Write a function to find out the first and last digit of a number without returning anything.

#include<iostream>
using namespace std;
void find(int*p1,int*p2,int*p3){
    int temp = *p1;
    do{
        *p2 = temp/10;
        *p3 = *p1%10;
        temp = temp/10;
    }while(temp>=10);
}
int main(){
    int x,a,b;
    cout<<"enter tha number: ";
    cin>>x;
    if(x<10){
        cout<<"It is single digit number which is "<<x;
    }else{
    find(&x,&a,&b);
    cout<<"First Digit: "<<a<<endl;
    cout<<"Last Digit: "<<b;
    }
    

    return 0;
}