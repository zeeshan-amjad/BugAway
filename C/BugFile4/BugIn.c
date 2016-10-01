//Problem link: https://www.codechef.com/problems/STRPALIN

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
        for(j=0;j<a;j++){
            for(k=0;k<a;k++){  // iterating 'a' times, which is length of first string (iterate 'b' times instead, where 'b' is length of second string)
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
