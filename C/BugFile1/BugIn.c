// Printing asterisk pyramid of a certain height
#include<stdio.h>
#include<conio.h>         // try not to use in online IDEs

main(){
int i,rows,space,k;
 //printf("Enter the number of rows you wanted to print\n");
 scanf("%d",&rows);
        for(i=1;i<=rows;i++){
            for(space=1;rows<=rows-i;space++) printf("   ");        // used wrong variable in condition check, printing 3 spaces instead of 2
            for(space=1;space<=2*i-1;space++) printf("* ");
 
printf("\n");
        }
 
getch ();         // try not to use in online IDEs
return 0;
}
// TIP : Use better indentations :) 
