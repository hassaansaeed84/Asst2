#include "fileCompressor.h"
/*
int main (int argc, char** argv) {
	FILE *fptr;
	fptr = fopen(argv[1], "r");
	char c;
	int numWords = 0;
	while(!feof(fptr)) {
		fscanf(fptr, "%c", &c);
		if (c == ' ') {
			numWords++;
		}
	}
	printf("There are %d words in this file.\n", numWords+1);
	fclose(fptr);
	/*
	fopen(fptr);
	char** strings[numWords][100];
	while(!feof(fptr)){
		fscanf(fptr, "%s", 
	}
	return 0;
}
*/
void buildCB(char * file)
{
 mode_t mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH;
 int CB = creat("HuffmanCodeBook", mode);
 write(CB, "my cock", strlen("my cock")); 
}
void compress(char * file)
{

}
void decompress(char* file)
{

}
void printDirectory() {
	/*
		Prints out files in current directory
	*/
	struct dirent *de;
	
	DIR *dr = opendir(".");
	
	if (dr == NULL) {
		printf("error\n");
	}
	while ((de = readdir(dr)) != NULL) {
		printf("%s\n", de->d_name);
	}
	closedir(dr);
}
int main (int argc, char ** argv)
{
 int fd;
 char* flag = argv[1];
 char* file = argv[2];
 char* codebook = argv[3];
 printf("%s %s %s", flag, file, codebook);
 printDirectory();
 buildCB(file);
 	switch(flag[1])
 	{
 	 case('b'):
 	  fd = open(file, 0);
 	  break;
 	 case('c'):
 	  break;
 	 case('d'):
 	  break;
 	 case('R'):
 	 break;
 	}
  return 0;
}
