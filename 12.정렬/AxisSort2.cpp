#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

//
bool comp(pair<int, int> a, pair<int, int> b) {
    if (a.second == b.second) return a.first < b.first;
    return a.second < b.second;
}

int main() {
    //input
    int n;
    scanf("%d",&n);

    //initialize vector pair
    vector<pair <int,int> > tmp;

    //input to vector
    int x,y;
    for(int i = 0; i < n; i++){
        scanf("%d %d",&x,&y);
        tmp.push_back(pair<int,int>(x,y));
    }

    //sort
    sort(tmp.begin(),tmp.end(),comp);

    //print
    for(int i = 0; i < n; i++){
        printf("%d %d\n",tmp[i].first,tmp[i].second); // tmp.first() -> x , tmp.first -> o
    }
}