/**
 * NOTE: This is a pattern problem. You need to write the code to print the pattern as given below.
 *  1
 *  22
 *  333
 *  4444
 *  55555
 *  666666
 *  7777777
 *  88888888
 *  999999999
 */

#include <iostream>
using namespace std;
void printPattern(int n)
{
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= i; j++)
    {
      cout << i;
    }
    cout << endl;
  }
};
int main()
{
  int n;
  cout << "Enter the number ";
  cin >> n;
  printPattern(n);
  return 0;
}