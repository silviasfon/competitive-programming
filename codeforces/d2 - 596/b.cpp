#include <bits/stdc++.h>

#define INF 0x3f3f3f3f

using namespace std;

int main()
{
	int t, n, k, d, ans;
	int shows[101];
	map<int, int> map;
  	std::map<int, int>::iterator it;

	scanf("%d", &t);

	while(t--){
		scanf("%d %d %d",  &n, &k, &d);
		ans = n;
		map.clear();
		for(int i = 1; i <= n; i++){
			scanf("%d", &shows[i]);
			map[shows[i]]++;
			if(i >= d){
				if(i > d){
					map[shows[i-d]]--;
					if(map[shows[i-d]] == 0)
						map.erase(shows[i-d]);
				}
				ans = map.size() < ans? map.size():ans;
			}
		}
		printf("%d\n", ans);
	}

	return 0;
}
