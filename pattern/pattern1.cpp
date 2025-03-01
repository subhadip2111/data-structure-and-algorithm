/** while solving any kind of a pattern related problem make sure you need to kepp in mind 4 things.
 * 1. every pattern is based on  nested loops.
 * 2 . The  Outer lopp or the parent or the first loop is  responsible for row.alignas
 *  The inner loop or the child loop is responsible for column.
 * 3.The outer lopp is count the number of line or the number of rows.
 * and  the Inner loop is responsible for the number of column
 * now If we some how connect them  we will get the pattern.
 *  what ever the pattern you need to print it will be in the inner loop.
 * 4. This is optional  that observe the symemtry of the pattern.
 */
/**
 *
 *
 *     ****
 ****
 ****
 ****
 * lets solved  a 4 by 4 matix problem
 *  */

#include <iostream>
using namespace std;

void printPattern(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cout << "Enter the number of rows you want to print the pattern: ";
    cin >> n;

    printPattern(n);
    return 0;
}