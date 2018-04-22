#include<stdio.h>
#include<conio.h>
/* the first row is '1' and the last row is '12345'.
there for the loop is start by(i=1) the last condition is (i<=5).
the second loop is (j=1) and the condition is (j<=i)i.e(i=1,2,3,4,5).
*/
void main(void)
{
	int i,j;
	clrscr();
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",j);
		}
		printf("\n");
	}
	getch();
}
/*	output

1
12                                                                              
123                                                                             
1234                                                                            
12345     */
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
