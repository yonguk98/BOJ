#include<iostream>
using namespace std;

int main(){
    int n,k;

    cin >> n >> k;
    int comb[n+1][n+1];
    for(int i = 1; i <= n; i++) {
        comb[i][0] = 1;
    }
    for(int i = 1; i <= n; i++){
        comb[i][i] = 1;
    }
    for(int i = 2; i <= n; i++){
        for(int j = 1; j < i; j++){
            comb[i][j] = comb[i-1][j-1] + comb[i-1][j];
        }
    }

    printf("%d",comb[n][k]);

}