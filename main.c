#include <stdio.h>
#include <stdlib.h>


//call by value
void square(int a)
{
  a = a*a;     
}

int main()
{
  int a = 2;
  square(a);
  printf("a=%i\n", a);
  
  system("PAUSE");	
  return 0;
}


//반환형 만들어서 return 
int square(int a)
{
    return(a*a);
}

int main()
{
  int a = 2;
  a = square(a);
  printf("a=%i\n",a);
    
  system("PAUSE");	
  return 0;
}

