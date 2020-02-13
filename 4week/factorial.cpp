#include <cmath>
#include <iostream>
using namespace std;

int main()
{
    int num;
    while(cin >> num)
    {
        double digits = 0;
        for(int i = 2; i <= num; i++)
            digits += log10(i);

        cout << int(digits) + 1 << endl;
    }
    return 0;
}