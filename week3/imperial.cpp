#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
    long double value;
    string from, to;
    cin >> value >> from >> to >> to;
    if(from == "thou" || from == "th")
    {
        if(to == "inch" || to == "in")
             value /= 1000;
        else if(to == "foot" || to == "ft")
            value /= 12000;
        else if(to == "yard" || to == "yd")
            value /= 36000;
        else if(to == "chain" || to == "ch")
            value /= (36000 * 22);
        else if(to == "furlong" || to == "fur")
            value /= (36000 * 220);
        else if(to == "mile" || to == "mi")
            value /= (36000 * 220 * 8);
        else if(to == "league" || to == "lea")
            value /= (36000 * 220 * 24);
    }
    else if(from == "inch" || from == "in")
    {
        if(to == "thou" || to == "th")
             value *= 1000;
        else if(to == "foot" || to == "ft")
            value /= 12;
        else if(to == "yard" || to == "yd")
            value /= 36;
        else if(to == "chain" || to == "ch")
            value /= (36 * 22);
        else if(to == "furlong" || to == "fur")
            value /= (36 * 220);
        else if(to == "mile" || to == "mi")
            value /= (36 * 220 * 8);
        else if(to == "league" || to == "lea")
            value /= (36 * 220 * 24);
    }
        else if(from == "foot" || from == "ft")
    {
        if(to == "thou" || to == "th")
             value *= 12000;
        else if(to == "inch" || to == "in")
            value *= 12;
        else if(to == "yard" || to == "yd")
            value /= 3;
        else if(to == "chain" || to == "ch")
            value /= (3 * 22);
        else if(to == "furlong" || to == "fur")
            value /= (3 * 220);
        else if(to == "mile" || to == "mi")
            value /= (3 * 220 * 8);
        else if(to == "league" || to == "lea")
            value /= (3 * 220 * 24);
    }
    else if(from == "yard" || from == "yd")
    {
        if(to == "thou" || to == "th")
             value *= 36000;
        else if(to == "inch" || to == "in")
            value *= 36;
        else if(to == "foot" || to == "ft")
            value *= 3;
        else if(to == "chain" || to == "ch")
            value /= (22);
        else if(to == "furlong" || to == "fur")
            value /= (220);
        else if(to == "mile" || to == "mi")
            value /= (220 * 8);
        else if(to == "league" || to == "lea")
            value /= (220 * 24);
    }
        else if(from == "chain" || from == "ch")
    {
        if(to == "thou" || to == "th")
             value *= (36000 * 22);
        else if(to == "inch" || to == "in")
            value *= 792;
        else if(to == "foot" || to == "ft")
            value *= 66;
        else if(to == "yard" || to == "yd")
            value *= (22);
        else if(to == "furlong" || to == "fur")
            value /= (10);
        else if(to == "mile" || to == "mi")
            value /= (10 * 8);
        else if(to == "league" || to == "lea")
            value /= (10 * 24);
    }
     else if(from == "furlong" || from == "fur")
    {
        if(to == "thou" || to == "th")
             value *= (360000 * 22);
        else if(to == "inch" || to == "in")
            value *= 7920;
        else if(to == "foot" || to == "ft")
            value *= 660;
        else if(to == "yard" || to == "yd")
            value *= (220);
        else if(to == "chain" || to == "ch")
            value *= (10);
        else if(to == "mile" || to == "mi")
            value /= (8);
        else if(to == "league" || to == "lea")
            value /= (24);
    }
         else if(from == "mile" || from == "mi")
    {
        if(to == "thou" || to == "th")
             value *= (360000 * 22 * 8);
        else if(to == "inch" || to == "in")
            value *= (7920* 8);
        else if(to == "foot" || to == "ft")
            value *= (660*8);
        else if(to == "yard" || to == "yd")
            value *= (220 * 8);
        else if(to == "chain" || to == "ch")
            value *= (10 * 8 );
        else if(to == "furlong" || to == "fur")
            value *= (8);
        else if(to == "league" || to == "lea")
            value /= (3);
    }
    else if(from == "league" || from == "lea")
    {
        if(to == "thou" || to == "th")
             value *= (360000 * 22 * 24);
        else if(to == "inch" || to == "in")
            value *= (7920* 24);
        else if(to == "foot" || to == "ft")
            value *= (660*24);
        else if(to == "yard" || to == "yd")
            value *= (220 * 24);
        else if(to == "chain" || to == "ch")
            value *= (30 * 8 );
        else if(to == "furlong" || to == "fur")
            value *= (24);
        else if(to == "mile" || to == "mi")
            value *= (3);
    }
    cout << setprecision(32)<< value << endl;
    return 0;
}