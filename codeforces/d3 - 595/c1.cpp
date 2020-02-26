#include <bits/stdc++.h>

#define INF 0x3f3f3f3f

using namespace std;

int main()
{
	int q;
	long long unsigned n, p1, dif, p2;
	long long unsigned exp[40];
	long long unsigned sum[40];

	exp[0] = 1;
	sum[0] = 1;
	for(int i = 1; i < 40; i++){
		exp[i] = exp[i-1]*3;
		if(i < 38)
			sum[i] = sum[i-1]+exp[i];
		else
			sum[i] = 0;
		//printf("%llu ", sum[i]);
	}

	scanf("%d", &q);
	while(q--){
		scanf("%llu", &n);
		p1 = 39;
		while(exp[p1] > n && p1 > 0)
			p1--;
		if(sum[p1] < n)
			printf("%llu\n", exp[p1+1]);
		else{
			dif = sum[p1] - n;
			p2 = p1;
			while(exp[p2] > dif && p2 > 0){
				p2--;
			}
			while(p2 >= 0 && dif > 0){
				while(exp[p2] > dif && p2 > 0)
					p2--;
				if(p2 >= 0 && dif >= exp[p2])
					dif -= exp[p2];
				p2--;
			}
			printf("%llu\n", n+dif);
		}
	}
}