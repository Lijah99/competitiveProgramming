#include <iostream>
#include <string>
using namespace std;

int main()
{
    int num;
    string s;
    cin >> num >> s;

    for(int i = num; i > 0; i--)
    {
        if(i == 1)
        {
        cout << i << " bottle of " << s <<  " on the wall, " << i << " bottle of " << s <<  "." << endl;
        cout << "Take it down, pass it around, no more bottles of " << s <<  " on the wall.";
            return 0;
        }
        if(i == 2)
        {
        cout << i << " bottles of " << s <<  " on the wall, " << i << " bottles of " << s <<  "." << endl;
        cout << "Take one down, pass it around, " << i - 1 << " bottle of " << s <<  " on the wall." << endl << endl;
        }
        else
        {
        cout << i << " bottles of " << s <<  " on the wall, " << i << " bottles of " << s <<  "." << endl;
        cout << "Take one down, pass it around, " << i - 1 << " bottles of " << s <<  " on the wall." << endl << endl;
        }
    }
    return 0;
}