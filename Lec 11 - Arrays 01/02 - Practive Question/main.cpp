// Question: Given an array of marks of students, if the mark of any student is less then 35 print its roll number.[roll number here refers to the index of the array.]

#include<iostream>
using namespace std;
int main(){
    int marks[6] = {90,30,32,85,34,97};
    cout<<"Roll no. of students whos marks less then 35: ";
    for(int i = 0; i<=5;i++){
        if(marks[i]<35){
            cout<<i<<" ";
        }
    }
    return 0;
}