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


// nC(r+1)=  nCr * [(n-r)/(r+1)]   Very imp 

// that means we can find the next one using previous 

// suppose we have 6 = iCj now 4 = iC(j+1)

// just we have to multiply previous with [(i-j)/(j+1)] 


#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter value of n ";
    cin>>n;

    for(int i=0; i<=n;i++){
        int x=1;
        for(int j=0;j<=i;j++){
            cout<<x<<" ";
            x = x*(i-j)/(j+1);
        }
        cout<<endl;
    }

    return 0;
} 