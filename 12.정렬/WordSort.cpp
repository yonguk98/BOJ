#include<iostream>
#include<string>
#include<vector>
#include<algorithm>

using namespace std;

//compare func to acsending with size and dict order
bool comp(string left, string right){
    if(left.length() == right.length()){
        for(int i = 0; i < left.length(); i++){
            if(left[i] != right[i]) return left[i] < right[i];
        }
    }
    return left.length() < right.length();
}

int main(){

    //input
    int n;
    scanf("%d",&n);
    vector<string> input;
    for(int i = 0; i < n; i++){
        string temp;
        cin >> temp;
        input.push_back(temp);
    }

    //erase overlapping and sort
    sort(input.begin(),input.end());
    input.erase(unique(input.begin(),input.end()),input.end()); // unique() returns address of garbage value
    sort(input.begin(),input.end(),comp);

    //print  *caution: loop number is vector size, not input size because of overlapping
    for(int i = 0; i < input.size() ; i++){
        cout << input[i] << endl;
    }
}