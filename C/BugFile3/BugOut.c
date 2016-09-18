#include<stdio.h>

int main(){
    int c;
    scanf("%d",&c);
    //if(c<=1000000){
        int i = 0, j, b, a[1000001];
        while(i < 1000001){
          a[i] = 0;
          i++;
        }
        i = 0;
        while(c>i){
            scanf("%d",&b);
            //if(b<=1000000&&b>=0){
                i++;
                a[b]++;
            //}
            //else 
              //  return 0;
        }
        i=0;
        while(i<1000001){
            j=1;
            while(j<=a[i]){
                printf("%d\n",i);
                j++;
            }
            i++;
        }
    //}
    return 0;
} 
