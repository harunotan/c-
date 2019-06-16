#include <stdio.h>

int main(int argv, char *argv[])
{
 FILE *fp;
  fp = fopen(*argv, "r+");
  
  
  
  fclose(fp);
  return 0;
}
