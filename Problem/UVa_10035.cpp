#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b;
    while(cin>>a>>b&&(a!=0||b!=0)){
        int count=0;
        int carry=0; //用來儲存進位
        while(a>0||b>0){
            int sum=a%10+b%10+carry;
            if(sum>=10){
                count++;
                carry=1; //要進位
            }
            else{
                carry=0; //不用進位
            }
            a=a/10;
            b=b/10;
        }
        if(count==0){
                cout<<"No carry operation."<<"\n";
        }
        else if(count==1){
            cout<<"1 carry operation."<<"\n";
        }
        else{
            cout<<count<<" carry operations."<<"\n";
        }
    }
}
