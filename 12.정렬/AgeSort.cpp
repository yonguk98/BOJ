#include<iostream>
#include<algorithm>
#include<vector>
#include<string>

using namespace std;

bool comp(pair<int,string> left, pair<int,string> right){
    return left.first < right.first;
}

int main(){
    int n;
    scanf("%d",&n);

    vector< pair<int,string> > input(n);
    for(int i = 0; i < n; i++){
        cin >> input[i].first >> input[i].second;
    }

    stable_sort(input.begin(),input.end(),comp); //stable_sort 비굣값이 같을 시 정렬 순서 유지

    for(int i = 0; i < input.size(); i++){
        cout << input[i].first << ' ' << input[i].second << '\n';
    }

}