#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int l;
        cin>>l;
        int train[55];
        for(int j=0;j<l;j++){
            cin>>train[j];
        }
        int sum=0;
        for(int a=0;a<l;a++){
            for(int b=a+1;b<l;b++){
                if(train[a]>train[b]){
                    int temp=train[a];
                    train[a]=train[b];
                    train[b]=temp;
                    sum++;
                }
            }
        }
        cout<<"Optimal train swapping takes "<<sum<<" swaps."<<"\n";
    }
}
