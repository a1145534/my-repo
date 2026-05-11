#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    while(cin>>n){
        int total=n;
        int empty=n;
        while(empty>=3){
            int new_cola=empty/3;
            total+=empty/3;
            empty=(empty%3)+new_cola;
        }
        if(empty==2){
            total+=1;
        }
        cout<<total<<endl;
    }
}
