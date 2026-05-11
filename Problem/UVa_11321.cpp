#include<bits/stdc++.h>
using namespace std;

int n,m;
bool compare(int a,int b){
    int modA=a%m;
    int modB=b%m;
    if(modA!=modB){
        return modA<modB;
    }
    bool isoddA=abs(a%2)==1;
    bool isoddB=abs(b%2)==1;
    if(isoddA&&!isoddB){
        return true;
    }
    if(!isoddA&&isoddB){
        return false;
    }
    if(isoddA&&isoddB){
        return a>b;
    }
    return a<b;
}

int main(){
    while(cin>>n>>m&&(n!=0||m!=0)){
        vector<int> nums(n);
        for(int i=0;i<n;i++){
            cin>>nums[i];
        }
        sort(nums.begin(),nums.end(),compare);
        cout<<n<<" "<<m<<endl;
        for(int i=0;i<n;i++){
            cout<<nums[i]<<endl;
        }
    }
    cout<<"0 0\n";
}
