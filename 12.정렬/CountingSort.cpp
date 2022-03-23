#include<iostream>
 using namespace std;

int main(void){

    int n;

    scanf("%d",&n);

    int tmp[10001];
    int temp;

    for(int i = 0; i < 10001; i++){
        tmp[i]=0;
    }
    
    for(int i = 0; i < n; i++){
        scanf("%d",&temp);
        tmp[temp]++;
    }

    for(int i = 0; i < 10000+1; i++){
        if(tmp[i] >= 1){
            for(int j = 0; j < tmp[i]; j++){
                printf("%d ",i);
            }
        }
    }

}