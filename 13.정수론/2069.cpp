#include<iostream>
#include<vector>
using namespace std;

int main(){
    int a,b,c;

    cin >> a >> b;
    int gcf = a*b;
    c = a%b;
    
    while(c!=0){
        a = b;
        b = c;
        c = a%b;
    }
    int lcm = b;
    gcf = gcf/lcm;

    printf("%d\n%d",lcm,gcf);

    
}