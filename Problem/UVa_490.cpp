#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<string> v;
    string s;
    int maxlen=0;
    while(getline(cin,s)){
        v.push_back(s);
        if(s.length()>maxlen){
                maxlen=s.length();
        }
    }
    for(int j=0;j<maxlen;j++){
        for(int i=v.size()-1;i>=0;i--){
            if(j<v[i].length()){
                cout<<v[i][j];
            }
            else{
                cout<<" ";
            }
        }
        cout<<"\n";
    }
}
