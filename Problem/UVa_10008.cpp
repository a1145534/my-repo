#include<bits/stdc++.h>
using namespace std;

struct alpha{
        char ch;
        int count=0;
    };
    bool compare(alpha a,alpha b){
        if(a.count!=b.count){
            return a.count>b.count;
        }
        else{
            return a.ch<b.ch;
        }
    }
int main(){
    int n;
    cin>>n;
    cin.ignore(); // 跳過讀完 n 之後的換行符號
    vector<alpha> list(26);
    for(int i=0;i<26;i++){
        list[i].ch='A'+i;
    }
    string line;
    while(getline(cin,line)){
        for(char c:line){
            if(isalpha(c)){
                list[toupper(c)-'A'].count++;
            }
        }
    }
    sort(list.begin(),list.end(),compare);
    for(int i=0;i<26;i++){
        if(list[i].count>0){
            cout<<list[i].ch<<" "<<list[i].count<<"\n";
        }
    }
}
