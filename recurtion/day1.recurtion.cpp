#include <iostream>
using namespace std;

// print name n time

// void printname(int i, int n)
// {
//     // write the base case
//     if (i > n)
//     {
//         return;
//     }

//     cout << "Subhadip";
//     cout << endl;

//     printname(i + 1, n);
//     cout << endl;
// };
/// print 1 to n number

// void Print(int i,int n){
//     // base case;
//     if(i>n){
//         return;
//     }
//     cout <<i;
//     cout << endl;
// Print(i+1,n);

// };

// print number n to 1 reverse way
// void reverse(int i ,int n){
//     if(i<1){
//         return ;
//     }
//     cout << i;
//     cout << endl;
// reverse(i-1,n);

// }

// print 1 to n using backtrack ;
// void printnum(int i,int n){
//     if(i<1){
//         return;
//     }
//     printnum(i-1,n);
//     cout << i;
//     cout << endl;
// }

// print the number n to 1 using backtrack; 54321
// void printnum(int i,int n){
//     // write the base case;
//     if(i>n){
//         return ;
//     }
//     printnum(i+1,n);
//         cout << i;
//     cout << endl;

// }

// Sum of first n number ;
// void sumOfDigit(int i, int n)
// {
//     // base case loop till n
//     if(i>n){

//     };

// }

// print number  1  to N;

int   recursition(int n)
{
if(n<1){
    return n;
}
     int sum =n+recursition(n-1);
cout << sum;
};

int main()
{
    int n;
    cout << "Enter the number";
    cin >> n;
    // printname(1, n);
    // Print(1,n);3
    // printnum(1,n);
    // 0,3
    // cout << "sum" << sum;

   recursition( n);
     

    return 0;
}