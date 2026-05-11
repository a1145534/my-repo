#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,casenum=1;
    while(cin>>n){
        vector<int> b(n);
        bool isb2=true;
        for(int i=0;i<n;i++){
            cin>>b[i];
            if(b[i]<1){
                isb2=false;
            }
            if(i>0&&b[i]<=b[i-1]){
                isb2=false;
            }
        }
        set<int> sums;
        if(isb2){
            for(int i=0;i<n;i++){
                for(int j=i;j<n;j++){
                   int s=b[i]+b[j];
                   if(sums.count(s)){
                    isb2=false;
                    break;
                   } 
                   sums.insert(s);
                }
                if(!isb2){
                    break;
                }
            }
        }
        cout<<"Case #"<<casenum++<<": ";
        if(isb2){
            cout<<"It is a B2-Sequence."<<endl;
        }
        else{
            cout<<"It is not a B2-Sequence."<<endl;
        }
        cout<<endl;
    }
}
