/*
 * server.h
 *
 *  Created on: Jun 17, 2014
 *      Author: rafael
 */

#ifndef SERVER_H_
#define SERVER_H_
#include <pthread.h>		//lib das threads

#define TRUE 1
#define FALSE 1

#define FIRST_GUESS_OFFSET 32768

void *thread_function(void *args);
int get_numberof_threads(int file_size);

typedef struct thread_args{
	int fd;
	int client_sock;
	int file_offset;
	int chunk_size;
	int thread_number;
	int fd_to_write;
}_thread_args;
void initialize_thread(pthread_t *thread, struct thread_args *args, int thread_number, int client_sock, int fd, int *file_size, int *curr_offset, int fd_to_write);
void clean_up(int fd, int fd_to_write, pthread_t *threads, struct thread_args *args, int *number_of_threads,
		int *file_size, int *curr_offset, char *file_path);
#endif /* SERVER_H_ */