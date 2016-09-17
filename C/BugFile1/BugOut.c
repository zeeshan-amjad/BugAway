// Printing asterisk pyramid of a certain height
#include<stdio.h>

int main(){
	int i,rows,space,k;
 	//printf("Enter the number of rows you wanted to print\n");
 	scanf("%d",&rows);
    	for(i=1;i<=rows;i++) {
    		for(space=1;space<=rows-i;space++) 
    			printf("  ");
        	for(space=1;space<=2*i-1;space++) 
        		printf("* ");
		printf("\n");
    	}
	return 0;
}
