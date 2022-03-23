#include<iostream>
using namespace std;

void printingstars(int, int, int);


int main(void){
    int n;
    cin >> n;
    
    for(int i =0; i < n; i++){
        for(int j = 0; j < n; j++){
            printingstars(n, i, j);
        }
        cout << '\n';

    }
}

void printingstars(int n, int i, int j){

    if(((i/n)%3 == 1) && ((j/n)%3 == 1)){
        cout << ' ';
    }
    else{
        if(n / 3 == 0)
            cout <<'*';
        else
            printingstars(n/3,i,j);
    }
}
