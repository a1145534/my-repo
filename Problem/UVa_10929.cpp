#include<bits/stdc++.h>
using namespace std;

int main(){
string n;
while(cin>>n&&n!="0"){
    int oddsum=0;
    int evensum=0;
    for(int i=0;i<n.length();i++){
        int digit=n[i]-'0';
        if(i%2==0){
            evensum=evensum+digit;
        }
        else{
            oddsum=oddsum+digit;
        }
    }
    if(abs(evensum-oddsum)%11==0){
        cout<<n<<" is a multiple of 11."<<"\n";
    }
    else{
        cout<<n<<" is not a multiple of 11."<<"\n";
    }
}
}
