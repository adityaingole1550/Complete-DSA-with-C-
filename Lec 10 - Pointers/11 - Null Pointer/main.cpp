// Good practice of using pointers
// like we just do int x;
// we cant do same for pointer like ine*ptr;

#include<iostream>
using namespace std;
int main(){
    int *ptr1 = NULL; // \0 -> null character
    int *ptr2 = '\0';
    cout<<*ptr1; // will give randon but i want reserved so we use null pointer
    cout<<*ptr1;
    return 0;
}