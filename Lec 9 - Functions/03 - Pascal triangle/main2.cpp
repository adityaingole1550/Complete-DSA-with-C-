// pascal triangle for n=6

//           1
//         1   1
//       1   2   1
//     1   3   3   1
//   1   4   6   4   1
// 1   5   10  10  5   1


// for solving this  this it as 

//      0  1  2  3  4  5

// 0    1
// 1    1  1
// 2    1  2  1
// 3    1  3  3  1
// 4    1  4  6  4  1
// 5    1  5  10 10 5  1 


// and nCr = n!/r!*(n-r)!  (combination formula)


int fact(int x){
       int factorial = 1;
       for(int i=1 ; i<=x; i++){
        factorial= factorial*i;
       }
       return factorial;
}

int comb(int n, int r){
    return  fact(n)/(fact(r)*fact(n-r));
}

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter value of n ";
    cin>>n;
    
    for(int i=0; i<n;i++){
        for(int j=0-n+i;j<2*n;j++){
            if(comb(i,j) && (i!=0||j!=-1) && (i!=0||j!=1)){
                cout<<comb(i,j)<<"   ";
            }else{
                cout<<"* ";
            }
            
        }
        cout<<endl;
    }

    return 0;
}