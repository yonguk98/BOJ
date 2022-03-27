#include<iostream>
#define MAX 8
using namespace std;

int N,M,k;
int arr[MAX] = {0, };
bool visited[MAX] = {0, };

void dfs(int count,int k){
    if(count == M){
        for(int i = 0; i < M; i++){
            cout << arr[i] << ' ';
            
        }
        cout << '\n';
        return;
    }

    for(int i = 0; i < N; i++){
        if(!visited[i]){
            visited[i] = true;
            arr[count] = i;
            dfs(count+1,k);
            visited[i] = false;
        }
    }
}

int main(){
    cin >> N >> M;
    int k = 0;
    dfs(0,k);
    
}