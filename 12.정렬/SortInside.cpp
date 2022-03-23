#include <iostream>
#include<string>
#include<algorithm>
using namespace std;

int main() {
    //input
    string input;
    getline(cin,input);
    int size = input.size();

    //each digit string to integer
    int arr[size];
    for(int i = 0; i < size; i++){
        arr[i] = input[i] - '0';
    }

    //sort
    sort(arr,arr+size,greater<int>());

    //print
    for(int i = 0; i < size; i++){
        cout << arr[i];
    }
}