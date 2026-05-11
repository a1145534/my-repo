#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    int daysinmonth[]={0,31,28,31,30,31,30,31,31,30,31,30,31};
    string dayname[]={"Saturday","Sunday","Monday","Tuesday","Wednesday","Thursday","Friday"};
    while(cin>>t){
        for(int i=0;i<t;i++){
            int m,d;
            cin>>m>>d;
            int totaldays=0;
            for(int j=1;j<m;j++){
                totaldays+=daysinmonth[j];
            }
            totaldays+=d;
            cout<<dayname[(totaldays-1)%7]<<endl;
        }
    }
}
