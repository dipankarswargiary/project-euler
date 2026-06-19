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