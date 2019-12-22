#include <bits/stdc++.h>

#define MAXN 105

using namespace std;

int main()
{
	int n, m, total = 0, maior = 0;
	int resp[1005][5];
	int valor[1005];
	char c;

	memset(resp, 0, sizeof(resp));

	scanf("%d %d ", &n, &m);

	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < m; j++)
		{
			scanf(" %c", &c);
			resp[j][c-'A']++;
		}
	}

	for(int i = 0; i < m; i++)
	{
		scanf("%d", &valor[i]);
		maior = 0;
		for(int j = 0; j < 5; j++)
		{
			maior = max(maior, resp[i][j]);
		}
		total += (maior*valor[i]);
	}

	printf("%d\n", total);
}