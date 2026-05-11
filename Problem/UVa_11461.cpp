#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    while(cin>>a>>b&&(a!=0||b!=0)){
        int sum=0;
        for(int i=a;i<=b;i++){
            double root=sqrt(i);
            if(floor(root)==root)
                sum++;
        }
        cout<<sum<<endl;
    }
}
