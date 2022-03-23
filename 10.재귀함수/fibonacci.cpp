#include<iostream>
using namespace std;

int main(void){
    int n;
    cin >> n;

    if(n==0){ 
        cout << 0;
    }
    else if(n==1 || n==2){ //n = 0,1,2인 경우의 예외처리
        cout << 1;
    }
    else{
        int a[n];
        a[0]=0, a[1]=1, a[2]=1;

        for (int i=3; i<=n; i++){
            a[i] = a[i-1] + a[i-2];
        }
        cout << a[n];
    }

}