#include <iostream>
#include <string>

using namespace std;

int main()
{
    int num;
    size_t sz;
    
    string s;
    cin >> num;
    cin.ignore();
    for(int i = 0; i < num; i++)
    {
        getline(cin,s);
        if(s.find("Simon") != string::npos)
        {
            s = s.substr(11);
            cout << s << endl;
        }
    }
    return 0;
}