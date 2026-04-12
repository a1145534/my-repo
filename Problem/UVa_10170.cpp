#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int s,d;
    while(cin>>s>>d){
        long long int current_day=0;
        while(current_day<d){
            current_day+=s;
            if(current_day>=d){
                cout<<s<<endl;
            }
            s++;
        }
    }
}
