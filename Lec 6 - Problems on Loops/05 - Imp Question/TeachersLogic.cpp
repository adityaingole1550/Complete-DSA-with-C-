// Question - WAP to print reverse of a given number
#include<iostream>
using namespace std;
int main(){
    int n,newNo = 0;
    cout<<"Enter the Number : ";
    cin>>n;
    
          do{
        newNo = newNo + (n % 10);
        n = n/10;
        if(n != 0){
            newNo = newNo*10;
        }
        
    }while(n != 0);
   
  

    cout<< newNo;
    return 0;
}