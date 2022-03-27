#include<iostream>
#define MAX 9
using namespace std;

int N,M,k;
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
    for(int i = k; i < N; i++){
        if(!visited[i]){
            visited[i] = true;
            arr[count] = i;
            dfs(count+1,i+1);
            visited[i] = false;
        }
    }
}

int main(){
    cin >> N >> M;
    k = 0;
    dfs(0,k);
    
}