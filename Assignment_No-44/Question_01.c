/*1)write a application which accept file name from user and open that file in read mode
input:demo.txt
output:file open suuccefully

*/

////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
	int fd=0;
	char Name[30];
	printf("Please enter the file name:\n");
	scanf("%[^'\n']s",Name);

	fd=open(Name,O_RDONLY);

	if(fd==-1)
	{
		printf("Unable to open file\n");

	}
	else
	{
		printf("file open succesfully with FD %d\n",fd);
	}
	return 0;

}
