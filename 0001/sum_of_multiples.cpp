#include <iostream>
using namespace std;

int main()
{
    int n = 999/3;
    int m = 999/5;
    int p = 999/15;

    int sum_mltpl_3 = 3 * ((n*n + n)/2);
    int sum_mltpl_5 = 5 * ((m*m + m)/2);
    int sum_mltpl_15 = 15 * ((p*p + p)/2);

    int result = sum_mltpl_3 + sum_mltpl_5 - sum_mltpl_15;

    cout << "The sum is: " << result <<endl;
    return 0;
}