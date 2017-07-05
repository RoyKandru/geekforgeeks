#include <stdio.h>
#include <string.h>

int main()
{
  int start,stop,i,test;
  int prev,rem,flag;
  
  printf ("Enter start and Stop\n");
  scanf("%d %d", &start, &stop);
  

  printf("start:%d\n",start);
  for(i=start;i<=stop;i++)
  {

    test=i;
    flag=0;
     while(test!=0 && flag==0)
    {
       rem=test%10;
       if(i!=test)
       {
           if(!(prev==rem-1 || prev==rem+1))
           {flag++;}
       }
       prev = rem;
       test/=10;
    }
    if(flag==0)
    {printf("%d\n",i);}    
  }
  
  printf("stop:%d\n",stop);
}
