#include<stdio.h>
#include <stdbool.h> // for boolean variables
main(){
    //checking the given number is a perfect square
    int a,n,c;
    printf("Enter any number \n");
    scanf("%d",&n);
    bool flag = false;   // a boolean variable stores only 'true' and 'false', or 1 and 0
    for(a=0;a<=n;a++) {

        if(n==a*a)  {
        	flag = true;
        	break;
        }


    }

	if (flag)			// equivalent to if (flag == true) 
		printf("YEs the number is a perfect square");
	else
		printf("No the number is not a perfect square");

return 0;
}
