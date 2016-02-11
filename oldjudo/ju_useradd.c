/*
 * ju_useradd.c
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

int isNumeric(char c) {
	if (c >= '0' && c <= '9')
		return 1;
	else
		return 0;
}
///tmp/judo_temphomes/ju_tpoidefault.8892.23809
int checkWorkPath(char *path, char *prefix) {
	int len = strlen(path)-1;
	int prefixLen = strlen(prefix) - 1;
	int step = 0;
	if (len < 30 || len > 70){
		//printf("len error\n");
		return 0;
	}

	int i = 0;
	while (i < len) {
		if (i < prefixLen) {
			if (path[i] != prefix[i]){
				//printf("prefix error\n");
				return 0;
			}
		} else {
			if (step == 0)
				step = 1;
			switch (step) {
			default:
			case 1:
				if (!isAlphanumeric(path[i]) && path[i] != '.') {
					//printf("step 1 error\n");
					return 0;
				} else if (path[i] == '.') {
					step++;
				}

				break;
			case 2:
				if (!isNumeric(path[i]) && path[i] != '.') {
					//printf("step 2 error\n");
					return 0;
				} else if (path[i]  == '.') {
					step++;
				}

				break;
			case 3:
				if (!isNumeric(path[i]) && path[i] != '/') {
					//printf("step 3 error\n");
					return 0;
				} else if (path[i] == '/') {
					step++;
				}

				break;
			case 4:
				//printf("step 4 error\n");
				return 0;
			}

		}

		i++;
	}
	if(step ==3 || step ==4 )
		return 1;
	else
		return 0;

}

int main(int argc, char **argv) {
	if (argc < 3) {
		printf("ju_useradd needs two arguments: uid and workpath\n");
		return 1;
	}
	int uid = str2int(argv[1]);
	printf("Arguments: %s => %d, %s\n", argv[1], uid, argv[2]);
	if (uid < 8800 || uid > 9800) {
		printf("non valid uid\n");
		return 1;
	}
	if(! checkWorkPath(argv[2],"/tmp/judo_temphomes/ju_")){
		printf("non valid workpath\n");
		return 1;
	}
	char *cmd;

	asprintf (&cmd, "/usr/sbin/useradd -u %d -d '%s' -M ju%d", uid,argv[2],uid);
	puts(cmd);
	system(cmd);

	return 0;
}
