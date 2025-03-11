#include <iostream>
using namespace std;

// Function to check if a string is palindrome
bool palindrome(string str ,int n) {
   int mid=n/2;
   while(mid>=0){
       if(str[mid]!=str[n-mid-1]){
           return false;
       }
       mid--;
   }
   return true;
}


int main() {
string str="madams";
int n=str.length();
    cout << palindrome( str,n);


    return 0;
}
