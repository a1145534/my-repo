#include<bits/stdc++.h>
using namespace std;

int main(){
    string n="`1234567890-=qwertyuiop[]\\asdfghjkl;'zxcvbnm,./";
    string temp=n;
    getline(cin,temp);
    for(int i=0;i<temp.length();i++){
        if(temp[i]>='A'&&temp[i]<='Z'){
                temp[i]+=32;
        }
        if(temp[i]==' ')
            printf(" ");
        else
            for(int j=0;j<n.length();j++){
                    if(temp[i]==n[j]){
                    printf("%c",n[j-2]);
                    break;
                    }
            }
    }
    printf("\n");
}
