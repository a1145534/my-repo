#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    long long int fib[50];
    fib[0]=1;
    fib[1]=2;
    for(int k=2;k<50;k++){
        fib[k]=fib[k-1]+fib[k-2];
    }
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        cout<<num<<" = ";
        bool print_start=false;
        for(int i=49;i>=0;i--){
            if(num>=fib[i]){
                cout<<"1";
                num=num-fib[i];
                print_start=true;
            }
            else if(print_start){
                cout<<"0";
            }
        }
        cout<<" (fib)"<<"\n";
    }
}
