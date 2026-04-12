#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    while(getline(cin,s)){
        long long sum=0;
        int mx=1;
        for(int i=0;i<s.length();i++){
            int val=-1;
            if(s[i]>='0'&&s[i]<='9'){
                val=s[i]-'0';
            }
            else if(s[i]>='A'&&s[i]<='Z'){
                val=s[i]-'A'+10;
            }
            else if(s[i]>='a'&&s[i]<='z'){
                val=s[i]-'a'+36;
            }
            if(val!=-1){
                sum+=val;
                if(val>mx){
                    mx=val;
                }
            }
        }
        bool found=false;
        for(int n=mx+1;n<=62;n++){
            if(sum%(n-1)==0){
                cout<<n<<endl;
                found=true;
                break;
            }
        }
        if(!found){
            cout<<"such number is impossible!"<<endl;
        }
    }
}
