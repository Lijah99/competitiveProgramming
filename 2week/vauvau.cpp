#include <iostream>
using namespace std;

int main()
{
    int as,ae,bs,be,count = 0;
    int p,m,g;
    cin >> as >> ae >> bs >> be >> p >> m >> g;
    if(p > as && p <= as + ae) count++;
    if(p > bs && p <= bs + be) count++;
    if(count == 0) cout << "both" << endl;
    else if(count ==1) cout << "one" << endl;
    else cout << "none" << endl;
    count = 0;
    if(m > as && m <= as + ae) count++;
    if(m > bs && m <= bs + be) count++;
    if(count == 0) cout << "both" << endl;
    else if(count ==1) cout << "one" << endl;
    else cout << "none" << endl;
    count = 0;
    if(g > as && g <= as + ae) count++;
    if(g > bs && g <= bs + be) count++;
    if(count == 0) cout << "both" << endl;
    else if(count ==1) cout << "one" << endl;
    else cout << "none" << endl;
    return 0;
}