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

    vector<int> origin(n);
    origin = input;
    
    sort(input.begin(),input.end());
    input.erase(unique(input.begin(),input.end()),input.end());

    for(int i = 0; i < n; i++){
        printf("%ld ", lower_bound(input.begin(), input.end(), origin[i]) - input.begin());
        //lower_bound(vector.begin(), vector.end(), 찾으려는 값) - vector.begin()
    }
}