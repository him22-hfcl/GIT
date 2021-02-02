	#include <stdio.h>
#include <string.h>

int main()
{
int i=0,count,la,temp;
char s[200];
char t[50][200];
printf("Enter the string: ");
gets(s);



char *tok=strtok(s," ");

	while ( tok!=NULL)
	{
		//printf("%s\n",tok);
		strcpy(t[i],tok);
		tok=strtok(NULL," ");
		i++;
	}
	temp=i;
	
	
	

		for(int y = 0; y < temp ; y++) 
	   	{    
        	for(int j = y + 1; j < temp; j++) 
		{    
        	    la=strcmp(t[y],t[j]);
		        if ( la == 0 )
				count++;
	        }    
	        }   
	printf("%d\n",temp-2*count);
return 0;
}
