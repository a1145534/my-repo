#include<bits/stdc++.h>
using namespace std;

long long int gcd(long long int a,long long int b){
    while(b!=0){
        a%=b;
        swap(a,b);
    }
    return a;
}

int main(){
    int n;
    while(cin>>n){
        string s1,s2;
        for(int i=1;i<=n;i++){
            cin>>s1>>s2;
            cout<<"Pair #"<<i<<": ";
            long long int n1=0;
            for(int j=0;j<s1.length();j++){
                n1=n1*2+(s1[j]-'0');
            }
            long long int n2=0;
            for(int j=0;j<s2.length();j++){
                n2=n2*2+(s2[j]-'0');
            }
            if(gcd(n1,n2)==1){
                cout<<"Love is not all you need!"<<endl;
            }
            else
                cout<<"All you need is love!"<<endl;
        }
    }
}
