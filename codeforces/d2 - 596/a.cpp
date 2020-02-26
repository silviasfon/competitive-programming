#include <bits/stdc++.h>

#define INF 0x3f3f3f3f

using namespace std;

int main()
{
	int da, db, dif;

	scanf("%d %d", &da, &db);

	dif = db - da;
	if(da == db)
		printf("%d2 %d3\n", da, db);
	else if(dif == 1)
		printf("%d9 %d0\n", da, db);
	else
		printf("-1\n");

	return 0;
}