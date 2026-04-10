#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    while(cin>>n){
        vector<int> x(n);
        for(int i=0;i<n;i++){
            cin>>x[i];
        }
        sort(x.begin(),x.end());
        int m1=x[(n-1)/2];
        int m2=x[n/2];
        int count=0;
        for(int i=0;i<n;i++){
            if(x[i]>=m1&&x[i]<=m2){
                count++;
            }
        }
        int total=m2-m1+1;
        cout<<m1<<" "<<count<<" "<<total<<endl;
    }
}
