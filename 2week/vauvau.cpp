#include <iostream>
using namespace std;

int main()
{
    int as,ae,bs,be,count = 0;
    int p,m,g;
    cin >> as >> ae >> bs >> be >> p >> m >> g;
    int temp;

    temp = (p-1) % (as+ae);
    if(temp >= as) count++;
    temp = (p-1) % (bs+be);
    if(temp >= bs) count++;
    if(count == 0) cout << "both" << endl;
    else if(count ==1) cout << "one" << endl;
    else cout << "none" << endl;
    count = 0;
    
    temp = (m-1) % (as+ae);
    if(temp >= as) count++;
    temp = (m-1) % (bs+be);
    if(temp >= bs) count++;
    if(count == 0) cout << "both" << endl;
    else if(count ==1) cout << "one" << endl;
    else cout << "none" << endl;
    count = 0;

    temp = (g-1) % (as+ae);
    if(temp >= as) count++;
    temp = (g-1) % (bs+be);
    if(temp >= bs) count++;
    if(count == 0) cout << "both" << endl;
    else if(count ==1) cout << "one" << endl;
    else cout << "none" << endl;
    return 0;
}