/**
 * NOW we are solving patten number-3 
 *  1
 *  12
 *  123
 *  1234
 *  12345
 *  123456
 * that is the pattern we need to print.
 *
 */ 


#include <iostream>
using namespace std;

void printPattern(int n ){
for(int i=1;i<n;i++){
    for(int j=1;j<=i;j++){
        cout << j;
    }
    cout << endl;
}
}

int main(){
    int n;
    cout << "Please Enter the number ";
    cin >>n;
    printPattern(n);
return 0; 
};