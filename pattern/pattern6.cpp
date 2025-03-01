/**
 * This is the pattern that 
 *  123456
 *  12345
 *  1234
 *  123
 *  12
 *  1
 * 
 * 
 */

#include <iostream>
using namespace std;
void printpattern(int n){

for(int i=0;i<=n;i++){
    for(int j=1;j<=n-i;j++){
cout << j;
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