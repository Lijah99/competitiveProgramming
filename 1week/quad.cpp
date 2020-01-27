#include <iostream>

using namespace std;
int quad(int x, int y);
int main()
{
    int x, y, q;
    cin >> x;
    cin >> y;
    q = quad(x,y);
    cout << q;

    return 0;
}

int quad(int x, int y)
{
    if(x > 0)
    {
        if(y < 0)
            return 4;
        else return 1;
    }
    if(x < 0)
    {
        if(y < 0)
            return 3;
        else return 2;
    }
}