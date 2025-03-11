#include<iostream>
using namespace std;
#include<vector>
#include <algorithm> // for sort()

void printAlltheDivisor(int n){
    // declare a vector to store the divisor
    vector<int> divisor;

   for(int i =1;i*i<=n;i++){
    cout << i << " ";
    cout << endl;

if(n%i==0){
    divisor.push_back(i);  
}
if((n/i)!=i){
    divisor.push_back(n/i);
}
   }
   sort(divisor.begin(),divisor.end());
   for(auto i:divisor){
       cout << i << " ";
   }
    cout << endl;
}

int main(){
    printAlltheDivisor(54);
    return 0;
};