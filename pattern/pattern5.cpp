/**
 * This is the pattern that 
 *  ******
 *  *****
 *  ****
 *  *** 
 *  **
 *  *
 * 
 * 
 */

#include <iostream>
using namespace std;
void printpattern(int n){

for(int i=1;i<=n;i++){
    for(int j=i;j<=n;j++){
cout << "*";
    }
    cout << endl;
}

}
int main(){
int n;
cout <<"Enter the Number" ;
cin >> n;

printpattern(n);
    return 0;
}
