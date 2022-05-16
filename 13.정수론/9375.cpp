#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    int n1;
    cin >> n1;
    int n2;
    for(int i = 0; i < n1; i++){
        cin >> n2;

        vector<pair<string,int> > arr;
        string temp1,temp2;

        for(int j = 0; j < n2; j++){
            cin >> temp1 >> temp2;
            if(j == 0) arr.push_back(pair<string,int>(temp2,0));
            for(int k = 0; k < arr.size(); k++){
                if(arr[k].first == temp2) {
                    arr[k].second++;
                    break;
                }
                if(k == arr.size()-1) arr.push_back(pair<string,int>(temp2,0));
                   
            }
        }
        
        int sum = 1;
        for(int j = 0; j < arr.size(); j++){
                sum *= (arr[j].second + 1);
        }

        cout << sum-1<<endl;
    }
}