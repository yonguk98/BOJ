#include<iostream>
#include<cmath>
#include<vector>
#include<algorithm>

using namespace std;

int main(void){

    int n;
    int tmp[8001] = {0, };
    vector<int> vec;

    scanf("%d",&n);

    //counting sort
    int temp;
    for(int i = 0; i < n; i++){
        scanf("%d",&temp);          //if intiger is positive, input to 4001~8000
        vec.push_back(temp);
        temp = temp + 4000;
        tmp[temp]++;
    }

    //vector sort for middle value
    sort(vec.begin(),vec.end());

    //variables for max frequent index
    int* maxaddr = max_element(tmp, tmp + 8001);
    int max = *maxaddr;
    int count = 0;
    int maxIndex;

    int sum = 0;

    //loops for maxIndex and average
    for(int i = 0; i < 8001; i++){
        if(tmp[i] > 0){
            sum += (i-4000) * tmp[i];
        }
        if((tmp[i] == max) && (count <= 1)){
            count++;
            maxIndex = i;
        }
    }

    //final calculations
    int avg = round(double(sum)/n);
    int middle = vec[n/2];
    int maxfreq = maxIndex - 4000;
    int cover = vec.back() - vec.front();

    printf("%d\n%d\n%d\n%d",avg,middle,maxfreq,cover);
}