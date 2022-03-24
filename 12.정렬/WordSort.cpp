#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

bool comp(string left, string right){
    if(left.length() == right.length()){
        for(int i = 0; i < left.length(); i++){
            if(left[i] != right[i]) return left[i] < right[i];
        }
    }
    return left.length() < right.length();
}

int main(){
    int n;

    scanf("%d",&n);

    vector<string> input;
    for(int i = 0; i < n; i++){
        string temp;
        cin >> temp;
        input.push_back(temp);
    }

    sort(input.begin(),input.end());
    input.erase(unique(input.begin(),input.end()),input.end());
    sort(input.begin(),input.end(),comp);

    for(int i = 0; i < input.size() ; i++){
        cout << input[i] << endl;
    }
}