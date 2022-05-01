#include "printb.h"

int main()
{
  size_t lol = 0xFF00000000;

  printb(&lol, sizeof(lol));
  puts("");

  return 0;
}

