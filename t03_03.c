// 12S23037 - Oracle Tio Panjaitan

#include <stdio.h>

int main(int _argc, char **_argv)
{

  int n;

  scanf("%d", &n);
  float angka[n];
  float smallest;
  float biggest;
  float div;
  float range;


  for(int i=0; i<n; i++)
  {
    scanf("%f", &angka[i]);
    smallest = angka[i];
    biggest = angka[i];
  }

  for(int i=0;i<n;i++)
  {
    if(angka[n]<smallest)
    {
      smallest = angka[n];      
    }
  }
  for(int i=1;i<n;i++)
  {
    if(angka[i]> biggest)
    {
      biggest = angka[i];
    }
  }

  for(int i=0;i<n;i++)
  {
    div = div + angka[i];    
  }
  
  div = div / n;
  range = biggest + smallest;
  
  printf("%g", smallest);
  printf("\n%g", biggest);
  printf("\n%.2f", div);
  printf("\n%g", range);

  return 0;
}
