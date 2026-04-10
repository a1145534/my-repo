#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        int count=0;
        int b1=a;
        while(b1>0){
            if(b1%2==1){
                count++;
            }
            b1=b1/2;
        }
        int b2=a;
        int sum=0;
        while(b2>0){
            int digit=b2%10;
            while(digit>0){
                if(digit%2==1){
                    sum++;
                }
                digit=digit/2;
            }
            b2=b2/10;
         }
         cout<<count<<" "<<sum<<"\n";
    }
}
