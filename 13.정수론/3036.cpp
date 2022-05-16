#include<iostream>
using namespace std;

int gcdf(int a, int b) {
    return a % b ? gcdf(b, a%b) : b;
}

int main(){
    int n;

    cin >> n;

    int ring[n];
    for(int i = 0; i < n; i++){
        cin >> ring[i];
    }

    for(int i = 1; i < n; i++){
        if(ring[0]%ring[i]==0) printf("%d/1\n",ring[0]/ring[i]);
        else{
            int gcd = gcdf(ring[0],ring[i]);
            printf("%d/%d\n",ring[0]/gcd,ring[i]/gcd);
        }
    }
    
}