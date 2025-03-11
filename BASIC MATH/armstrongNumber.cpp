#include <bits/stdc++.h>
using namespace std;
void  armStrongNumber(int n){
    //  first task to get the number of digit in given number
    int copy=n;
    int digit=log10(n)+1;
    cout << digit << endl;
    int sum=0;
    while(n>0){
int ld=n%10;
sum+=pow(ld,digit);
n=n/10;
    }
    if(sum==copy){
        cout << "Armstrong Number" << endl;
    }else{
        cout << "Not Armstrong Number" << endl;
    }

}


int main() {
armStrongNumber(153);
    return 0;
}
