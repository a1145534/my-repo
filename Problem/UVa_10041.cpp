#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int r;
        cin>>r;
        vector<int> s(r);
        for(int j=0;j<r;j++){
            cin>>s[j];
        }
        sort(s.begin(),s.end());
        int m=s[r/2];
        int sum=0;
        for(int j=0;j<r;j++){
            sum=sum+abs(s[j]-m);
        }
        cout<<sum<<endl;
    }
}
