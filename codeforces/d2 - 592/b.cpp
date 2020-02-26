#include <bits/stdc++.h>

#define INF 0x3f3f3f3f

using namespace std;

int main()
{
	int t, n, ans, f, l, af, al;
	char c;
	string str;

	scanf("%d", &t);
	while(t--){
		scanf("%d", &n);
		af = al = 0;
		ans = n;
		cin >> str;
		if(str[0] == '1' || str[n-1]=='1')
			ans = 2*n;
		else{
			f = str.find_first_of("1");
			l = str.find_last_of("1");
			if(f!=std::string::npos){
				af = max((f+1)*2, (n-f)*2);
			}
			if(l!=std::string::npos){
				al = max((l+1)*2, (n-l)*2);
			}
			ans = max(n,max(af, al));
		}
		printf("%d\n", ans);
	}

	return 0;
}
