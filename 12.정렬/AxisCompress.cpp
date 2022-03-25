#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n;
    scanf("%d",&n);

    vector<int> input(n);
    for(int i = 0; i < n; i++){
        scanf("%d",&input[i]);
    }

    vector<int> original = input;
    sort(input.begin(),input.end());
    input.erase(unique(input.begin(),input.end()),input.end());

    for(int i = 0; i < original.size(); i++){
        for(int j = 0; j < input.size(); j++){
            if(original[i] == input[j]){
                cout << j << ' ';
            }
        }
    }
}