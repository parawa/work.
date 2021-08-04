
#include <stdio.h>
#include <string.h>
int main(){
	char str[' '];
	char a;
	int n;
	
	printf("char :");
	scanf("%s",str);
	 int count = 0;
   char repchar = str[0];
   int maxC = 1;
   for (int i=0; i<strlen(str); i++){
      if (str[i] == str[i+1] && i < strlen(str)-1 )
         maxC++;
      else{
         if (maxC > count){
            count = maxC;
            repchar = str[i];
         }
         maxC = 1;
         
      }
     

   }
   printf(" %c",repchar);
   printf("\n %d",count);
   return 0;
}



