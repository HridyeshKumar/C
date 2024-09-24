#include <stdio.h>
void reset()
{
  printf("\033[0m");
}
int main()
{
  printf("\n\033[0;35m SHOBHA JANGADE");
  reset();

  printf("\n\033[4;34m SHOBHA JANGADE");
  reset();
  printf("\n\033[40m SHOBHA JANGADE");
  reset();
  printf("\n\033[0;33m SHOBHA JANGADE");
  reset();
  printf("\n\033[0;31m SHOBHA JANGADE");
  reset();
  printf("\n\033[1;32m SHOBHA JANGADE");
  reset();
  return 0;
}