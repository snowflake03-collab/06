#include <stdio.h>
#include <stdlib.h>


int factorial(int n)
{
  int res = 1, i;
  for(i = 1; i <= n; i++)
    res = res * i;
    
    return res;
}

int combination(int n, int r){
    
    int up, down;
    up = factorial(n);
    down = factorial(n-r) * factorial(r);
    return up/down;   
}

int main(void)
{  
   //variable declare
  int n, r;
  int res;
 
 
  //input data
  printf("input n and r for combination calculation:" );
  scanf("%d" "%d", &n, &r); 
  
  //compute combination()
  res = combination(n, r); 
  
  
  //print result 
  printf("the result is: %d\n", res);
    
  
     
  system("PAUSE");	
  return 0;
}

