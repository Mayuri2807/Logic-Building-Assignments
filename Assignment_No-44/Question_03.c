/*3)write a application which accept file name from user and read all data from that  file and display content on screen
 input:demo.txt
output:display all data of file
*/

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    char Name[30];
    char Arr[20] = {'\0'};
    int fd = 0;

    printf("Please enter the file name that you want to open\n");
    scanf("%[^'\n']s",Name);

    fd = open(Name,O_RDONLY);

    read(fd,Arr,2);

    printf("Data from the file is : %s\n",Arr);
    
    return 0;
}
