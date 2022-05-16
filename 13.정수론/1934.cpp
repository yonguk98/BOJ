#include<iostream>
using namespace std;

int main(void){
    int n;
    cin >> n;
    int arr[n][2];

    for(int i = 0; i < n; i++){
        cin >> arr[i][0] >> arr[i][1];
    }

    int a,b,c;
    int lcf,gcf;
    for(int i = 0; i < n; i++){
        a = max(arr[i][0], arr[i][1]);
        b = min(arr[i][0], arr[i][1]);
        gcf = a*b;

        c = a%b;
        while(c!=0){
            a = b;
            b = c;
            c = a%b;
        }
        lcf = b;
        gcf = gcf/lcf;
        
        printf("%d\n",gcf);
    }
}