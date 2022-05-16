#include<iostream>
using namespace std;

int main(){

    int n;
    cin >> n;
    int arr[n];

    int temp;
    for(int i = 0; i < n; i++){
        scanf("%d",&temp);
        arr[i] = temp;
    }

    int fibo[41][2];
    fibo[0][0] = 1;
    fibo[0][1] = 0;
    fibo[1][0] = 0;
    fibo[1][1] = 1;
    for(int i = 2; i <= 40; i++){
        fibo[i][0] = fibo[i-1][0] + fibo[i-2][0];
        fibo[i][1] = fibo[i-1][1] + fibo[i-2][1];
    }
    for(int i = 0; i < n; i++){
        printf("%d %d\n",fibo[arr[i]][0],fibo[arr[i]][1]);
    }

}