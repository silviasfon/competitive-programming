// https://codeforces.com/contest/1131/problem/A?locale=en

#include <bits/stdc++.h>

using namespace std;

int main(){
	
	int w1, h1, w2, h2, ans;

	scanf("%d %d %d %d", &w1, &h1, &w2, &h2);

	ans = (w1+2)*(h1+2)-(w1*h1);

	ans -= min(w1+1, w2);

	ans = ans + (w2+2)*(h2) - (w2*(h2-1));

	printf("%d\n", ans);

	return 0;
}
