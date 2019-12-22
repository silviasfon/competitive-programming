#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t, n, d, last, ans;
	scanf("%d", &t);
	set<int> nums;
	set<int>::reverse_iterator rit;

	while(t--){
		nums.clear();
		ans = 0;

		scanf("%d", &n);
		for(int i = 0; i < n; i++){
			scanf("%d", &d);
			if(!(d&1))
				nums.insert(d);
		}

		while(nums.size() > 0){

			rit = nums.rbegin();
			last = *rit;
			ans++;
			nums.erase(last);
			if((last/2)%2 == 0)
				nums.insert(last/2);
		}

		printf("%d\n", ans);
	}
}