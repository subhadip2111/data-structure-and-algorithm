/**
 *      *
 *     ***
 *    *****
 *  ********* 
 */

#include <iostream>
using namespace std;

void printPattern(int n ){
for (int i=0;i<n;i++){
   // space
for(int j=0;j<n-i-1;j++){
cout << " ";

}
   // star

for(int j=0;j<=2*i+1;j++){
cout << "*";

}
for(int j=0;j<n-1;j++){
cout << " ";

}

cout << endl;
   // space 
}

}
int main(){
    int n ;
    cout << "Enter the number";
    cin >> n;

    printPattern(n);
    return 0;

}