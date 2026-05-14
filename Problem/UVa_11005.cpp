#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    if(cin>>t){
        int cost[36];
        for(int num=1;num<=t;++num){
            if(num>1){
                cout<<endl;
            }
            cout << "Case " << num << ":"<<endl;
            for(int i=0;i<36;i++){
                cin>>cost[i];
            }
            int n;
            cin>>n;
            for(int j=0;j<n;++j){
                int s;
                cin>>s;
                int min=2e9; //代表2*10的九次方
                int de[37]={0};
                for(int k=2;k<=36;k++){
                    int a=s;
                    int sum=0;
                    do{
                        int re=a%k;
                        sum+=cost[re];
                        a/=k;
                    }while(a>0);
                    de[k]=sum;
                    if(sum<min){
                        min=sum;
                    }
                }
                cout << "Cheapest base(s) for number " << s << ":";
                for(int k=2;k<=36;k++){
                    if(de[k]==min){
                        cout<<" "<<k;
                    }
                }
                cout<<endl;
            }
        }
    }
}