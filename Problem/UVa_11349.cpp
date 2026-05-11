#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

void solve(int casenum){
    char junk;
    int n;
    cin>>junk>>junk>>n;
    vector<vector<ll>> matrix(n,vector<ll>(n));
    bool issymmetric=true;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>matrix[i][j];
            if(matrix[i][j]<0){
                issymmetric=false;
            }
        }
    }
    if(issymmetric){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j]!=matrix[n-1-i][n-1-j]){
                    issymmetric=false;
                    break;
                }
            }
            if(!issymmetric){
                break;
            }
        }
    }
    cout<<"Test #"<<casenum<<": ";
    if(issymmetric){
        cout<<"Symmetric."<<endl;
    }
    else
        cout<<"Non-symmetric."<<endl;
}

int main(){
    int t;
    cin>>t;
    for(int i=1;i<=t;i++){
        solve(i);
    }
}
