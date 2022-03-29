#include<iostream>
#define MAX 9
using namespace std;

int N,M;
int arr[MAX] = {0, };
bool visited[MAX] = {0, };

void dfs(int count, int k){
    if(count == M){
        for(int i = 0; i < M; i++){
            cout << arr[i]+1 << ' ';
        }
        cout << '\n';
        return;
    }
    for(int i = 0; i < N; i++){
        if(!visited[i]){
            arr[count] = i;
            dfs(count+1,k+1);
        }
        if(count == 0){
            visited[i] = true;
        }
    }
    
}

int main(){
    cin >> N >> M;
    int k = 0;
    dfs(0,k);
}