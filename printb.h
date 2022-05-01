#ifndef  PRINTB_H
#define  PRINTB_H

#include <stdio.h>
#include <math.h>

typedef unsigned char byte;

/**
 * Prints the given amount of bytes starting at startaddr in binary to stream
 */
void fprintb(FILE * stream, void * startaddr, size_t len);

/**
 * Prints the given amount of bytes starting at startaddr in binary to stdout
 */
void printb(void * startaddr, size_t len);

#endif// PRINTB_H

