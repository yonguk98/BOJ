#include<iostream>
using namespace std;


int main(){
    int n;
    cin >> n;

    int cnt5 = n/5;
    int cnt25 = n/25;
    int cnt125 = n/125;

    cout << cnt5+cnt25+cnt125;
}
    