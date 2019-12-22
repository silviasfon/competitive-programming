// https://codeforces.com/contest/1130/problem/D1
// https://codeforces.com/contest/1130/problem/D2

#include<bits/stdc++.h>
#define INF 0x3f3f3f3f

using namespace std;
typedef long long ll;

bool eMaior(int origem, int pos1, int pos2){
	if(pos1 > origem && pos2 > origem){
		return pos1>pos2;
	} else if(pos1 > origem && pos2 < origem){
		return false;
	} else if(pos1 < origem && pos2 > origem) {
		return true;
	} else {
		return pos1>pos2;
	}
}

int main(){

	int n, m, a, b, big = 0, bp, menor, maior = 0, ans = 0;
	vector<int> v[102];
	std::vector<pair<int, int> > left;

	scanf("%d %d", &n, &m);

	for(int i = 0; i<m; i++){
		scanf("%d %d", &a, &b);
		v[a].push_back(b);
	}

	for(int i = 1; i<= n; i++){
		left.clear();
		big = max((int)v[i].size()-1, 0);
		for(int j = 1; j <=n; j++){
			if(j!= i){
				if(v[j].size() > big)
					big = v[j].size();
			}
		}

		for(int j = 1; j<=n; j++){
			bp = 1;
			if(v[j].size() == big){
				if(eMaior(i, j, bp))
					bp = j;
				menor = n+1;
				for(int k = 0; k < big; k++){
					if (v[j][k] < menor)
						menor=v[j][k];
				}
				left.push_back(make_pair(j, menor));
			}
		}

		if(i == 1){
			maior = 1;
			for(int j = 0; j < left.size() && j < 8; j++){
				if(left[j].second > bp || (left[j].second < bp && left[j].first > bp)){
					if(left[j].second > maior)
						maior = left[j].second;
				}
				printf("%d %d\n", j, maior);
			}

			ans = big*n + maior;
		} else {
			maior = 1;
			for(int j = 0; j < left.size(); j++){
				if(eMaior(i,left[j].second, bp) || (!eMaior(i, left[j].second, bp) && eMaior(i, left[j].first, bp))){
					if(left[j].second > maior)
						maior = left[i].second;
				}
			}

			ans = big * n + ((maior<i)?(n-i+maior):maior-i);
		}

		printf("big: %d maior: %d ans: %d\n", big, maior, ans);
	}

	return 0;
}
