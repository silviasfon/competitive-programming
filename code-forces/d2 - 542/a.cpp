#include<bits/stdc++.h>
#define INF 0x3f3f3f3f

using namespace std;
typedef long long ll;

int main(){

	int n, pos=0, neg=0, d=0, half; 
	int a[103];

	scanf("%d", &n);

	half = n/2 + n%2;

	for(int i = 0; i < n; i++){
		scanf("%d", &a[i]);
		if(a[i]>0)
			pos++;
		else if(a[i]<0)
			neg++;
	}

	if(pos >= half)
		d = 1;
	else if(neg >= half)
		d = -1;

	printf("%d\n", d);

	return 0;
}