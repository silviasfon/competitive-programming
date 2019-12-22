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

int main(){

	int n, p;
	char c;
	string str;
	map<char, int> m;
	bool rep = true, seq = true;
	set<int> s;

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> n;
	while(n--){
		cin >> str;
		m.clear();
		s.clear();
		rep = true;
		seq = true;
		m[str[0]]++;
		s.insert(str[0]-'a');
		for(int i = 1; i < str.length(); i++){
			m[str[i]]++;
			s.insert(str[i]-'a');
			//cout << str[i] << " " << m[str[i]] << " ";
			if(m[str[i]]>1){
				rep = false;
				//cout << "false ";
				break;
			}
		}
		for(auto i:s){
	        //cout << i << " ";
			if(i != *(s.begin())){
				if(i-p > 1){
					seq = false;
					break;
				}
			}
			p = i;
		}
		if(rep && seq)
			cout << "YeS" << endl;
		else
			cout << "nO" << endl;
	}

	return 0;
}