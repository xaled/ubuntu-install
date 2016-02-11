/*
 * ju_userdel.c
 *
 *  Created on: Apr 15, 2015
 *      Author: xaled
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int str2int(char *str) {
	int len = strlen(str);
	if (len > 6 || len < 4) {
		return -1;
	}
	int uid = 0;
	int i = 0;
	//printf("len=%d\n",len);
	for (i = 0; i <= len - 1; i++) {
		//printf("str[%d]=%c",i,str[i]);
		if (str[i] >= '0' && str[i] <= '9') {
			uid = uid * 10 + (str[i] - '0');
			//printf("uid= %d\n",uid);
		} else {
			return -1;
		}
	}
	return uid;

}

int main(int argc, char **argv) {
	if (argc < 2) {
		printf("ju_userdel needs one arguments: uid\n");
		return 1;
	}
	int uid = str2int(argv[1]);
	printf("Arguments: %s => %d\n", argv[1], uid);
	if (uid < 8800 || uid > 9800) {
		printf("non valid uid\n");
		return 1;
	}

	char *cmd;
	asprintf(&cmd, "/usr/bin/pkill -9 -u ju%d", uid);
	puts(cmd);
	system(cmd);
	asprintf(&cmd, "/usr/sbin/userdel ju%d", uid);
	puts(cmd);
	system(cmd);

	return 0;
}
