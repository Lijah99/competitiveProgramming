#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int num,candidates;
    vector<int> votes;
    int winner, winnercand;
    bool tie = false;
    int temp;
    int total = 0;
    cin >> num;

    for(int i = 0; i < num; i++)
    {
        votes.clear();
        tie = false;
        total = 0;
        winner = 0;
        winnercand = 1;
        cin >> candidates;
        for(int j = 0; j < candidates; j++)
        {
            cin >> temp; votes.push_back(temp);
            total += temp;
        }
        for(int j = 0; j < candidates; j++)
        {
            if(votes[j] == winner)
                tie = true;
            if(votes[j] > winner)
            {
                winnercand = j + 1;
                winner = votes[j];
                tie = false;
            }
        }
        if(tie)
            cout << "no winner" << endl;
        else if(winner <= (total / 2))
            cout << "minority winner " << winnercand << endl;
        else cout << "majority winner " << winnercand << endl;

    }
    return 0;
}