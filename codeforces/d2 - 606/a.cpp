#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t, ans, nn, nk;
	string n, k;

	cin >> t;

	while(t--){
		cin >> n;
		ans = (n.length() - 1)*9;
		if((n.length() > 1) && n[1] > n[0]){
			ans += n[0]-'0';
		}
		else if(n.length() == 1){
			ans = n[0]-'0';
		}
		else
		{
			k = "";
			for(int i = 0; i < n.length(); i++){
				k+=n[0];
			}
			nn = stoi(n);
			nk = stoi(k);
			if(nn >= nk)
				ans += n[0] - '0';
			else
				ans+=n[0] -1 - '0';
		}
		cout << min(ans, stoi(n)) << endl;
	}
}