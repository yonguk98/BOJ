#include<iostream>
#include<algorithm>
using namespace std;

int binarysearch(int arr[], int first, int last, int target){
    int mid = (first+last)/2;
    if(arr[mid] == target) return 1;
    else if(arr[mid] < target) return binarysearch(arr, mid + 1, last, target);
    else if(arr[mid] > target) return binarysearch(arr, first, mid - 1, target);
    else if(first >= last) return 0;
    return 0;
}

int main(){
    int n1,n2;
    cin >> n1;
    int arr[n1];

    for(int i = 0; i < n1; i++){
        cin >> arr[i];
    }
    sort(arr, arr + n1);
    
    cin >> n2;
    int target[n2];
    for(int i = 0; i < n2; i++){
        cin >> target[i];
    }

    for(int i = 0; i < n2; i++){
        int tar = target[i];
        cout << binarysearch(arr, 0, n1-1, tar) << '\n';
    }

}