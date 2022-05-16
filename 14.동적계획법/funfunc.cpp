#include<iostream>
using namespace std;

int main(){
    int a,b,c;



    while(true){
        cin >> a >> b >> c;

        if(a==-1 && b == -1 & c == -1) break;
        if(a <=0 || b <= 0 || c <= 0) printf("w(%d, %d, %d) = 1\n",a,b,c);
        if(a > 20 || b > 20 || c > 20) printf("w(%d, %d, %d) = 1048576\n",a,b,c);

    }
}