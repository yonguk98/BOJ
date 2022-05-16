#include<iostream>
#include<stack>
using namespace std;

int main(){
    int n,temp;
    cin >> n;

    stack<int> a;
    for(int i = 0; i < n; i++){
        cin >> temp;
        if(temp==0) {a.pop(); continue;}
        a.push(temp);
    }
    int sum = 0;
    while(a.empty() == false){
        sum += a.top();
        a.pop();
    }

    cout << sum;
}
