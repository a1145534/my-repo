#include<bits/stdc++.h>
using namespace std;

int main(){
    int i;
while(cin>>i&&i!=0){
    int sum=0;
    int temp=i;
    string binary="";
    while(temp>0){
    if(temp%2==1){
        binary+="1";
        sum++;
    }
    else{
        binary+="0";
    }
    temp/=2;
    }
    reverse(binary.begin(),binary.end());
    printf("The parity of %s is %d (mod 2).\n",binary.c_str(),sum);
}
}
