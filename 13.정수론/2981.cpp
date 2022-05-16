#include<iostream>
#include<algorithm>
using namespace std;

//recursive greatest common divisor function
int gcd(int a, int b) {
    return a % b ? gcd(b, a%b) : b;
}


int main(){
    int n;
    scanf("%d",&n);

    int N[n],sub[n-1];
    
    for(int i = 0; i < n; i++){
        scanf("%d",&N[i]);
    }
    sort(N,N+n);

    int max_M = N[1]-N[0];
    for(int i = 0; i < n-1; i++){
        max_M = gcd(max_M,N[i+1]-N[i]);
    }

    //print common factor
    for(int i = 2; i <= max_M/2; i++){
        if(max_M%i==0) printf("%d ",i);
    }
    printf("%d",max_M);
}