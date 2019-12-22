// https://codeforces.com/contest/1162/problem/B

#include <bits/stdc++.h>

#define INF 0x3f3f3f3f
#define mp make_pair
#define pb push_back
#define fori(i, n) for(int i = 0; i < n; i++)

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> ii;
typedef vector<pair<int,int> > vii;


int m1[52][52], m2[52][52];
int n, m;

bool checkswapl(int i, int j){
	if(m1[i][j] >= m2[i][j+1])
		return false;
	if(m2[i][j] >= m1[i][j+1])
		return false;
	return true;
}
bool checkswapc(int i, int j){	
	if(m1[i][j] >= m2[i+1][j]){
		return false;
	}
	if(m2[i][j] >= m1[i+1][j])
		return false;
	return true;
}

int main(){

	int i, j, aux;
	bool poss = true;

	scanf("%d %d", &n, &m);

	for(i = 0; i < n; i++){
		for (j = 0; j < m; j++){
			scanf("%d", &m1[i][j]);
		}
	}

	for(i = 0; i < n; i++){
		for (j = 0; j < m; j++){
			scanf("%d", &m2[i][j]);
		}
	}

	for(i = 0; i < n; i++){
		for (j = 0; j < m-1; j++){
			if(m1[i][j] >= m1[i][j+1] || m2[i][j] >= m2[i][j+1]){
				if(checkswapl(i, j)){
					aux = m1[i][j+1];
					m1[i][j+1] = m2[i][j+1];
					m2[i][j+1] = aux;
				} else{
					poss = false;
					break;
				}
			}
		}
	}

	for(i = 0; i < m; i++){
		for (j = 0; j < n-1; j++){
			if(m1[j][i] >= m1[j+1][i] || m2[j][i] >= m2[j+1][i]){
				if(checkswapc(j, i)){
					aux = m1[j][i];
					m1[j][i] = m2[j][i];
					m2[j][i] = aux;
				} else{
					poss = false;
					break;
				}
			}
		}
	}

	if(poss)
		printf("Possible\n");
	else
		printf("Impossible\n");

	return 0;
}
