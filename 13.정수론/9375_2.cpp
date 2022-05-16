#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main(){
	int testcase;
	cin >> testcase;
	while(testcase--){
		int type;
		cin >> type;

		string s1,s2;
		vector<pair<string, int> > v;

		for(int i = 0; i < type; i++){
			cin >> s1 >> s2;
			if(i==0) v.push_back(pair<string,int>(s2,1)); // without 'continue',for loop will be executed

			for(int j = 0; j < v.size(); j++){
				if(v[j].first==s2) {v[j].second++; break;}

				if(j == v.size()-1) v.push_back(pair<string,int>(s2,0)); // caution: vector size increased
			}
		}

		int ans = 1;
		for(int i = 0; i < v.size(); i++){
			ans *= (v[i].second + 1); // all the possible case
		}

		cout << ans-1 << endl;
	}
}