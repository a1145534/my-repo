#include<bits/stdc++.h>
using namespace std;

bool isprime(int n){
    if(n<=1)
        return false;
    if(n==2)
        return true;
    if(n%2==0)
        return false;
    for(int i=3;i*i<=n;i+=2){
        if(n%i==0)
            return false;
    }
    return true;
}

int reversenum(int n){
    int ren=0;
    while(n>0){
        ren=ren*10+(n%10);
        n/=10;
    }
    return ren;
}

int main(){
    int n;
    while(cin>>n){
        if(!isprime(n)){
            cout<<n<<" is not prime."<<endl;
        }
        else{
            int ren=reversenum(n);
            if(n!=ren&&isprime(ren)){
                cout<<n<<" is emirp."<<endl;
            }
            else
                cout<<n<<" is prime."<<endl;
        }
    }
}
