#include<bits/stdc++.h>
using namespace std;

int main(){
int n,m;

int Field=1;
while(cin>>n>>m){
    if(n==0&&m==0)break;
        string str[110];
        if(Field!=1)
        printf("\n");
        printf("Field #%d:\n",Field);
        Field++;
for(int i=1;i<=n;i++){
    cin>>str[i];
    str[i]=" " + str[i];
}
int a[110][110];
for(int i=0;i<=109;i++){
    for(int j=0;j<=109;j++){
        a[i][j]=0;
    }
}
for(int i=1;i<=n;i++){
    for(int j=1;j<=m;j++){
        if(str[i][j]=='*'){
            a[i][j]=-10;
            a[i-1][j-1]+=1;
            a[i-1][j]+=1;
            a[i-1][j+1]+=1;
            a[i][j-1]+=1;
            a[i][j+1]+=1;
            a[i+1][j-1]+=1;
            a[i+1][j]+=1;
            a[i+1][j+1]+=1;
        }
    }
}
for(int i=1;i<=n;i++){
    for(int j=1;j<=m;j++){
        if(a[i][j]<0)
            printf("*");
        else
            printf("%d",a[i][j]);
    }
    printf("\n");
}
}
return 0;
}
