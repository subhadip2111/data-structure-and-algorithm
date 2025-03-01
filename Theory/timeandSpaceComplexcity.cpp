/**In this lecture we will learn about time and space complexity of a program.
 * Time complexcity does not means the time taken by the program to run. It means how many times the program will run.
 * Space complexcity Means the sum of auxilary space and input space.
 * In the given below I will describe a simeple sum program and will calculate its time and space complexcity.
 */

#include <iostream>
using namespace std;

int sum(int a, int b)
{
    return a + b;
};
int main()
{

    int c = sum(10, 20);
    cout << "The sum of a and b is " << c;
    return 0;
}

/**In the above code we have a function sum which takes two integers a and b as input and returns the sum of a and b.
 * In the main function we have called the sum function with 10 and 20 as input and stored the result in integer c.
 * Then we have printed the value of c.
 * Look at this code and try to understand the time and space complexcity of this code.
 *Earlier we have discussed that time complexcity is the number of times the program will run.
 * In this code the sum function will run only once. So the time complexcity of this code is O(1).
 * Space complexcity is the sum of auxilary space and input space.
 * In this  code the input space is  two integers a and b. So the space complexcity is the sum of auxilary space and input space.
 * In this code the auxilary space is only one integer c. So  the sum of auxilary space and input space is 3.
 * So the space complexcity of this code is O(3).But we write it as O(1) because the space complexcity is constant.
 */
