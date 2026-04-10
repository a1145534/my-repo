#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    while(cin>>n){
        int array[3000];
        bool check[3000]={false}; //確保每次讀入新的 n 時，check 陣列都會清空重置
        for(int i=0;i<n;i++){
            cin>>array[i];
        }
        bool jolly=true; //先假設是對的
        for(int i=0;i<n-1;i++){
            int diff=abs(array[i+1]-array[i]);
            if(diff>=1&&diff<=n-1&&check[diff]==false){ //檢查差值是否在 1 到 n-1 之間，且沒出現過(false代表沒出現過)
                check[diff]=true;
            }
            else{
                jolly=false;
            }
        }
        if(jolly||n==1){
            cout<<"Jolly"<<"\n";
        }
        else{
            cout<<"Not jolly"<<"\n";
        }
    }
}
