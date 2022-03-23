#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){
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
    sort(tmp.begin(),tmp.end());

    //print
    for(int i = 0; i < n; i++){
        printf("%d %d\n",tmp[i].first,tmp[i].second); // tmp.first() -> x , tmp.first -> o
    }
}