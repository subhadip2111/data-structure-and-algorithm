#include<iostream>
using namespace std;
bool palindrome(int n){
    int copy=n;
    int rev=0;
    while(n>0){
        int ld=n%10;
        rev=rev*10+ld;
        n=n/10;
    }
    if(rev== copy){
        return true;
    }else{
        return false;
    }
    cout << rev << endl;
}

int main(){
  bool res=  palindrome(121);
  cout << res << endl;
    return 0;
};