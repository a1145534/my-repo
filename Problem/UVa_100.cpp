#include<bits/stdc++.h>
using namespace std;

int main(){
    int i,j;
    while(cin>>i>>j){
        cout<<i<<" "<<j<<" ";
        int start=min(i,j);
        int end=max(i,j);
        int max_len=0;
        for(int a=start;a<=end;a++){
            long long temp=a;
            int count=1;//要包含數字本身，算進去
            while(temp!=1){
                if(temp%2==1){
                    temp=temp*3+1;
                }
                else{
                    temp=temp/2;
                }
                count++;
            }
            if(count>max_len){
                max_len=count;
            }
        }
        cout<<max_len<<"\n";
    }
}
