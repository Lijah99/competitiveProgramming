#include <iostream>

using namespace std;


int main()
{
    int num, den, full, remainder = -2;

    while(cin >> num >> den)
    {
        if(num == 0 && den == 0) return 0;
        full = num / den;
        remainder = num % den;
        cout << full << " " << remainder << " / ";
        cout << den << endl;
    }

    return 0;
}