// 12S23037 - Oracle Tio Panjaitan

#include <stdio.h>

int main(int _argc, char **_argv)
{

  int n;

  scanf("%d", &n);
  int angka[n];
  int smallest;
  int biggest;


  for(int i=0; i<n; i++)
  {
    scanf("%d", &angka[i]);
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

  

  printf("%d", smallest);
  printf("\n%d", biggest);

  return 0;
}
