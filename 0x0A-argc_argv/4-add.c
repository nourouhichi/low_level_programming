#include <stdlib.h>
#include <stdio.h>
/**
 */
int main(int argc, char *argv[])
{
  int i, s;
  
  for (i = 1; i < argc; i++)
    {
      if (*argv[i] >= '0' && *argv[i] <= '9')
	{
      s += atoi(argv[i]);
     
    }
    printf("%d\n",s);  
    else if (argc <= 1)
    printf("0\n");
  else
    {
      printf("Error\n");
      return (1);
      
    }
    }
  return (0);
}
