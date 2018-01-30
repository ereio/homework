/*
 ============================================================================
 Name        : homework3.c
 Author      : taylor ereio
 Version     : 0.0.1
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

int main(void) {
	pid_t pid;

	const int NUM_CHARS = 35;
	const char* message_one = "I'm a little teapot short and stout"; /* 35 chars */
	const char* message_two = "Here is my handle here is my spout."; /* 35 chars */
	int x = 0;
	int y = 0;
	int MAX_CHARS = 10000;
	int CUR_CHARS = 0;
	FILE* f= fopen("test", "w+");

	if(f == NULL) return -1;

	if((pid = fork()) == 0){
		while(CUR_CHARS < MAX_CHARS){
			for(x = 0; x < NUM_CHARS; x++){
				CUR_CHARS = CUR_CHARS + 1;
				fprintf(f,"%c", message_one[x]);

			}
		}
	} else {
		while(CUR_CHARS < MAX_CHARS){
			y = 0;
			for(y = 0; y < NUM_CHARS; y++){
				CUR_CHARS = CUR_CHARS + 1;
				fprintf(f,"%c", message_two[y]);
			}
		}
	}
	return EXIT_SUCCESS;
}
