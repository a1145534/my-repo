#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    int sum=0;
    while(getline(cin,s)){
        for(int i=0;i<s.length();i++){
            if(s[i]=='"'){
                sum++;
                if(sum%2==1){
                    cout<<"``";
                }
                else{
                    cout<<"''";
                }
            }
            else{
            cout<<s[i];
            }
        }
        cout<<"\n";
    }
}
