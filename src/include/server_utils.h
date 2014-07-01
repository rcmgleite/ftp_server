/*
 * server_utils.h
 *
 *  Created on: Jun 17, 2014
 *      Author: rafael
 */

#ifndef SERVER_UTILS_H_
#define SERVER_UTILS_H_

#include <sys/socket.h>
#include <arpa/inet.h>		//usado para criar endereços de internet
#include <fcntl.h>

//CONFIGS
#define SERVER_PORT 30000
#define ROOT_PATH "/home/rafael/Desktop/rafael/C/proj_redes_server/Debug/"
#define NEW_ROOT_PATH "/home/rafael/Desktop/rafael/C/proj_redes_server/"
//CONFIGS

char *build_file_path(char* file_name, int is_new);
int read_from_client(int sock, char *buf, int len);
int write_to_client(int sock, char *buf, int length);
void print_header(int sock, int number_of_threads, int file_size);
#endif /* SERVER_UTILS_H_ */