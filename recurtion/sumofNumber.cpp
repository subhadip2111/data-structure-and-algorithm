#include <iostream>
using namespace std;

// sum of n natural number
int sumOfNum(int n){
if(n==0){
    return 0;
}
return n + sumOfNum(n-1);

}
int main(){
    int n;
    cout << "Enter the number  ";
    cin >> n;
    cout << "Sum of first " << n << " natural number is " << sumOfNum(n);
    return 0;
}
