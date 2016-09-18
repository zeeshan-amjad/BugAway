    #include<stdio.h>
    int main(){
        int c;
        scanf("%d",&c);
        if(c<=1000000){         //unnecessary condition check, value of c will stick to the constraints
            int i=0,j,b[1000000],a[1000001];    // no need to declare array 'b', a single variable will work
            while(i<1000001){
              a[i]=0;
           }                // i is not incremented
            while(c>i){         // i is not zeroed before loop starts
                scanf("%d",&b[i]);
                if(b[i]<=1000000&&b[i]>=1){     //unnecessary condition check, value will stick to the constraints
                    i++;
                    a[b[i]]++;
                }
                else return 0;
            }
            i=0;
            while(i<1000001){
                j=1;
                while(j<a[i]){
                    printf("%d\n",i);
                    j++;
                }
                i++;
            }
        }
        
        return 0;
    } 
