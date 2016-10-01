#include<stdio.h>
#include<string.h>
int main(){
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        char ch1[1000],ch2[1000];
        scanf("%s %s",&ch1 ,&ch2);
        int a,b,j,k,flag=0;
        a=strlen(ch1);
        b=strlen(ch2);
        for(j=0;j<a;j++){
            for(k=0;k<b;k++){     //Fixed :)
                if(ch1[j]==ch2[k]){
                    flag=1;
                    break;
                }
            }
            if(flag==1) break;
        }
        if(flag==1) printf("Yes\n");
        else printf("No\n");
    }
    return 0;
} 
