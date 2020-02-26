#include <bits/stdc++.h>

#define INF 0x3f3f3f3f

using namespace std;

int main()
{
	int t, l, p, c, d, k, a1, a2;

	scanf("%d", &t);

	while(t--){
		scanf("%d %d %d %d %d", &l, &p, &c, &d, &k);
		a1 = l/c + (l%c?1:0);
		a2 = p/d + (p%d?1:0);
		if(a1+a2<=k)
			printf("%d %d\n", a1, a2);
		else
			printf("-1\n");
	}
	
	return 0;
}
