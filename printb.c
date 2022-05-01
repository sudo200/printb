#include "printb.h"

void fprintb(FILE * stream, void * startaddr, size_t len)
{
  for(long int i = len - 1; i >= 0; i--)
  {
    byte b = * (((byte *)startaddr) + i);

    for(byte k = 0; k <= 7; ++k, fprintf(stream, "%u", !!((1 << (8 - k)) & b)));
  }
}

void printb(void * startaddr, size_t len)
{
  fprintb(stdout, startaddr, len);
}

