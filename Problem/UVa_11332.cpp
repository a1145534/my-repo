#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int n;
    while(cin>>n&&n!=0){
        while(n>=10){
            long long int sum=0;
            while(n>0){
                sum=sum+(n%10);
                n=n/10;
            }
            n=sum;
        }
        cout<<n<<"\n";
    }
}
