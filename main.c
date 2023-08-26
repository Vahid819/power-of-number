#include<stdio.h>
#include<math.h>
int main()
{
  float a;
  printf("enter a number");
  scanf("%f",&a);
  printf("\n squre of no:-%.4f",pow(a,2));
  printf("\n cube of no:-%.4f",pow(a,3));
  printf("\n forth power of no:-%.4f",pow(a,4));
  return 0;
}