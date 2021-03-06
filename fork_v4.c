/*
 *  fork_v4.c
 *  version 4
 *  Created on: 2010-5-29
 *      Author: wangth
 */
#include <unistd.h>
#include <stdio.h>
int main() {
	pid_t fpid;//fpid表示fork函数返回的值
	//printf("fork!");
	printf("fork!\n");
	fpid = fork();
	if (fpid < 0)
		printf("error in fork!");
	else if (fpid == 0)
		printf("I am the child process, my process id is %d\n", getpid());
	else
		printf("I am the parent process, my process id is %d\n", getpid());
	return 0;
}
