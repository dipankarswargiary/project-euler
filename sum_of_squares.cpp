/*
 * This program was written to find the
 * result of a problem that was required 
 * to solve for completing registration 
 * in the website. (Preety cool right? You
 * need to solve a question even to register
 * in the website)
 */

#include <iostream>
using namespace std;

int main()
{
    unsigned long long int sum = 0;
    unsigned long long i;

    for (i = 1; i <= 933000; ++i)
    {
        if ((i*i)%2 == 1)
            sum += i*i;
    }

    cout << sum << endl;
    return 0;
}