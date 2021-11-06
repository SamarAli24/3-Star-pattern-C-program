#include<stdio.h>
int main()
 {
 
 int row=1;
 do
  {
 	
 	
 	int col=1;
 	do{
 		printf("*");
 		col++;
	 }
 	


while(col<=row);
printf("\n");
row++;
}
while(row<=3);
return 0;
}
