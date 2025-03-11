#include<iostream>
using namespace std;
void reverseNumber(int n){
    int rev=0;
    while(n>0){
        int ld=n%10;
        rev=rev*10+ld;
        n=n/10;
    }
    cout << rev << endl;
}

int main(){
    reverseNumber(1234);
    return 0;
};