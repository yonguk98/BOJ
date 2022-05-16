#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    if(n == 1) printf("%d",arr[0]*arr[0]);
    else if(n == 2) printf("%d",arr[0]*arr[1]);
    else{
        sort(arr,arr+n);
        printf("%d",arr[0]*arr[n-1]);
    }

}