#include<iostream>
#include<string>
#include<stack>
using namespace std;

int main(){
    int n;
    cin >> n;
    string s;

    for(int i = 0; i < n; i++){
        stack<int> parenth;
        cin >> s;
        for(int j = 0; j < s.length(); j++){
            if(s[j] == ')' && parenth.empty()) {parenth.push(1); break;}
            else if (s[j] == ')') parenth.pop();
            else if(s[j] == '(') parenth.push(1);
        }

        if(parenth.empty() == true) cout << "YES\n";
        else cout << "NO\n";
    }
}