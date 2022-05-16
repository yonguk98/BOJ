#include<iostream>
using namespace std;

long divide(long m,long n,long divisor){
    long count1 = 0;
    for(long i = divisor; i <= m; i*=divisor){
        count1 += m/i;
    }
    long count2 = 0;
    for(long i = divisor; i <= n; i*=divisor){
        count2 += n/i;
    }
    long count3 = 0;
    for(long i = divisor; i <= m-n; i*=divisor){
        count3 += (m-n)/i;
    }
    return count1 - (count2 +count3);

}
int main(){
    long m,n;
    cin >> m >> n;

    cout << min(divide(m,n,5),divide(m,n,2));

}