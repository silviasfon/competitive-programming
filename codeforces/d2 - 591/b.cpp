#include <bits/stdc++.h>

#define INF 0x3f3f3f3f

using namespace std;

int main(){

	int q, ans = 0;
	string s, t;
	set<char> letras;

	scanf("%d", &q);

	while(q--)
	{
		cin >> s;
		cin >> t;

		letras.clear();
		ans = 0;

		for(int i = 0; i < s.size(); i++){
			letras.insert(s[i]);
			//printf("ins %c\n", s[i]);
		}

		for(int i = 0; i < t.size(); i++){
			if(letras.find(t[i]) != letras.end()){
				ans = 1;
				break;
			}
			//printf("nof %c\n", t[i]);
		}

		if(ans)
			printf("YES\n");
		else
			printf("NO\n");
	}
}