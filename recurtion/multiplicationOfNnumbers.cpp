#include <iostream>
using namespace std;

// sum of n natural number
int multiple(int n){
if(n==1){
    return 1;
}
return n * multiple(n-1);

}
int main(){
    int n;
    cout << "Enter the number  ";
    cin >> n;
    cout << "Sum of first " << n << " natural number is " << multiple(n);
    return 0;
}
