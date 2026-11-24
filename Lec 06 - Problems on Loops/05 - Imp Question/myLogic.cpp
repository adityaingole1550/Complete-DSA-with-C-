// Question - WAP to print reverse of a given number
#include<iostream>
using namespace std;
int main(){
    int n,c,multFact;
    int newNo = 0;
    cout<<"Enter the Number : ";
    cin>> n;
    c = abs(n);
    int count = 0;
    do{
        c = c/10;
        count++;
    } while(c != 0);
  
    for(int i = 0 ; i<count ; i++){
        int ten = 1;
        for(int j = (count-i-1) ; j > 0 ; j--){
            ten = ten *10;
        }
        
        newNo = newNo + (n % 10) * ten;
        n = n / 10;

    }

    cout<<"The reversed Number is : "<<newNo;
    
    return 0;
}