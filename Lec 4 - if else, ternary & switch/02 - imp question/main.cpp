// predict the output

#include<iostream>
using namespace std;
int main(){
    int x;
    x = 5 > 8 ? 10 : 1 != 2 < 5 ? 20 : 30;
    cout<<"Value of x : "<<x;
    return 0;
}

// Answer : 
// x = condition false hence { 1 !=2 < 5? 20 : 30} execute 
// 1 != 2<5  false hennce first expression i.e 20 
// therefore x = 30;