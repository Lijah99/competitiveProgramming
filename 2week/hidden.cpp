#include <iostream>
#include <string>
using namespace std;

int main()
{
    string pass, phrase, check;
    int pIndex = 0;
    int phIndex = 0;
    cin >> pass >> phrase;

    while(pIndex <= pass.length() && phIndex <= phrase.length())
    {
        if(pass[pIndex] == phrase[phIndex])
        {
            pIndex++; phIndex++; continue;
        }
        else
        {
            check = pass.substr(pIndex,pass.length());
            if(check.find(phrase[phIndex]) != string::npos)
            {
                cout << "FAIL" << endl;
                return 0;
            }
            else phIndex++;
        }
    }

    if(pass.length() != (pIndex - 1))
    {
        cout << "FAIL" << endl;
        return 0;
    }
    else cout << "PASS" << endl;
    return 0;
}