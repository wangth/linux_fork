/*
 *  fork_v5.c
 *  version 5
 *  Created on: 2010-5-29
 *      Author: wangth
 */

#include <stdio.h>
int main(int argc, char* argv[])
{
   fork();
   fork() && fork() || fork();
   fork();
   printf("+\n");
}

