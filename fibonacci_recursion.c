#include <stdio.h>

//Using Recursion
int main(void) {
  int fib(int);
  int num , i ;
  printf("Enter a Number up to which you need Fibonacci series ");
  scanf("%d", &num);

  for(i=1 ; i<=num ; i++)
    printf("%d ",fib(i));
  return 0;
}

int fib(int n){
  if(n==1 || n==2)
    return(1);
  return(fib(n-1)+fib(n-2));
}
