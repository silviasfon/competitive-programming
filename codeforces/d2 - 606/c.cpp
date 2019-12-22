#include <bits/stdc++.h>
#define pb push_back

using namespace std;

int main()
{
	int t, n, one = 0, two = 0, ans;
	vector<int> check;
	string s;
	vector<int> a;

	cin >>  t;

	while(t--){
		cin >> s;
		n = s.length();
		check.clear();
		check.resize(n, 0);
		a.clear();
		ans = 0;

		for(int i = 0; i < n; i++){
			if(s[i] == 't')
				two=1;
			else if(s[i] == 'w' && two == 1)
				two++;
			else if(s[i] == 'o' && two == 2){
				two++;
				check[i]=1;
			}
			else if(s[i] == 'o' && two == 3){
				check[i]=2;
			}
			else
				two = 0;

			if(s[i] == 'o')
				one = 1;
			else if(s[i] == 'n' && one == 1)
				one++;
			else if(s[i] == 'e' && one == 2){
				one++;
				check[i]=1;
			}
			else if(s[i] == 'e' && one == 3){
				check[i]=2;
			}
			else
				one = 0;
		}

		for(int i = 0; i < n; i++){
			if(check[i] == 1 && check[i-2]!= 1){
				ans++;
				if(check[i+2] == 1)
					a.pb(i+1);
				else
					a.pb(i);
			}
		}

		cout << ans << endl;
		for (int i = 0; i < ans; ++i)
		{
			cout << a[i] << " ";
		}
		cout << endl;
	}
}
