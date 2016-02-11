/*
 * ju_usermod.c
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

int isAlphanumeric(char c) {
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')
			|| (c >= '0' && c <= '9') || c == '_')
		return 1;
	else
		return 0;
}


//group1,group2
int checkGroupVector(char *groupv) {
	int len = strlen(groupv) - 1;
	int step = 0;
	if (len < 1 || len > 70) {
		//printf("len error\n");
		return 0;
	}

	int i = 0;
	while (i < len) {
		switch (step) {
		default:
		case 0:
			if (!isAlphanumeric(groupv[i])) {
				//printf("step  0 error\n");
				return 0;
			} else {
				step = 1;
			}
			break;
		case 1:
			if (!isAlphanumeric(groupv[i]) && groupv[i] != ',') {
				//printf("step 1 error\n");
				return 0;
			} else if (groupv[i] == ',') {
				step = 0;
			}

			break;

		}

		i++;
	}
	if (step == 1)
		return 1;
	else
		return 0;

}

int main(int argc, char **argv) {
	if (argc < 3) {
		printf("ju_usermod needs two arguments: uid and group vector\n");
		return 1;
	}
	int uid = str2int(argv[1]);
	printf("Arguments: %s => %d, %s\n", argv[1], uid, argv[2]);
	if (uid < 8800 || uid > 9800) {
		printf("non valid uid\n");
		return 1;
	}
	if (!checkGroupVector(argv[2])) {
		printf("non valid group vector\n");
		return 1;
	}
	char *cmd;

	asprintf(&cmd, "/usr/sbin/usermod -a -G %s ju%d",  argv[2],uid);
	puts(cmd);
	system(cmd);

	return 0;
}
