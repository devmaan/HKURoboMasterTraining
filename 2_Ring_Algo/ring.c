#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int luopan(int m)



{
	if (abs(m) > 180)
	{
		if (m > 0)
		{
			m = m - 360;
		}
		else
		{
			m = m - 360;
		}
        }
return m;
}


int main()
{
        int w,i=0, m=0 , d=0;
	char x[8];
	
	while(i==0)
	{
	   scanf("%s",x);
	   
         

           if(x[0] == 45)
	   {
		   m = 1;
	   }
           else
	   {
		   if (x[0] < 48 || x[0] > 57)
		   {
			   i = 1;
		   }
	   }
           int k = 0;
           for (int k=1 ; k < strlen(x)-1; k++ )
	   {
		  if (x[k] < 48 || x[k] > 57)
		  {
			  i = 1;
	          
		  }
		
	   }
	   if (i==1 && m==0 )
	   {
		   break;
	   }
	   if (strlen(x)==1 && m==1)
	   {
		   break;
	   }


	   
	   w = atoi(x);
           w = w % 360;
	   d = d + w;
	   d = luopan(d);
	   printf("%d\n",d);
	}
	return 0;
}