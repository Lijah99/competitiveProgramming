// #include <iostream>
// using namespace std;

// int main()
// {	
	// int trials, sum, kids,temp;
	// cin >> trials;
	// for(int i = 0; i < trials; i++)
	// {
		// sum = 0; cin >> kids;
		// for(int j = 0; j < kids; j++)
		// {
			// cin >> temp;
			// sum += temp;
		// }
		// if(sum % kids == 0)
			// cout << "YES" << endl;
		// else cout << "NO" << endl;
	// }
	// return 0;
// }


#include <bits/stdc++.h>
using namespace std;

int main() {
    long long temp;
    int tc,n,tot=0;
    cin>>tc;
    for(int i=0;i<tc;i++)
    {
        cin>>n;
        tot=0;
        for(int j=0;j<n;j++)
        {
            cin>>temp;
            tot+=temp%n;
        }
        if(tot%n==0){cout<<"YES\n";}else{cout<<"NO\n";}
    }
    return 0;
}