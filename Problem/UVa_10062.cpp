#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<char,int> a,pair<char,int> b){
    if(a.second!=b.second){
        return a.second<b.second;
    }
    else
        return (int)a.first>(int)b.first;
}

int main(){
    string s;
    bool first=true;
    while(getline(cin,s)){
        if(!first){
            cout<<endl;
        }
        first=false;
        map<char,int> m;
        for(int i=0;i<s.length();i++){
            m[s[i]]+=1;
        }
        vector<pair<char,int>> v(m.begin(),m.end());
        sort(v.begin(),v.end(),cmp);
        for(int i=0;i<v.size();i++){
            cout<<(int)v[i].first<<" "<<v[i].second<<endl;
        }
    }
}
