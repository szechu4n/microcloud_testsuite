/*
*
*   model.cpp
*
*/
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>
#include "globals.h"

struct packet{
	int ID;
	char message[100];
} modelPacket;
void modelTest(void){
    printf("Model Test Pass! %d\n", getppid());
    packet modelPacket;
	int strlimit = 100;
	char newstr[strlimit];
	wait(NULL);
	read(pip1[0], newstr, strlimit);
	printf("Received from ControlPipeline: %s\n", newstr);
}
