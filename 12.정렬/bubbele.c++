 #include<iostream>
 using namespace std;

int main(void){
    int n;

    scanf("%d",&n);

    int tmp[n];
    for(int i = 0; i < n; i++){
        scanf("%d",&tmp[i]);
    }

    int temp;
    for(int i = 0; i<n; i++){
        for(int j = i; j < n; j++){
            if(tmp[i] > tmp[j]){
                temp = tmp[j];
                tmp[j] = tmp[i];
                tmp[i] = temp;
            }

        }
    }
    for(int i = 0; i < n; i++){
        cout << tmp[i] << " ";
    }

}