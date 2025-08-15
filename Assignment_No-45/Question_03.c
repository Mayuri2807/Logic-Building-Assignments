/*3)write a program which accept file name from user and count number of white spaces from
that file.
input:Demo.txt
output:Number of captial chararcter are 23
*/

/////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

int CountWhite(char Fname[])
 {
    int fd = 0;
    int iCount = 0;
    char ch;

    fd = open(Fname, O_RDONLY);
    if (fd == -1) {
        perror("Error opening file");
        return -1;
    }

    while (read(fd, &ch, 1) == 1)
     {
        if (ch == ' ') 
        {
            iCount++;
        }
    }

    close(fd);
    return iCount;
}

int main()
 {
    char FileName[30];
    int iRet = 0;

    printf("Enter file name: ");
    scanf("%s", FileName);

    iRet = CountWhite(FileName);
    printf("Number of white Spaces are %d\n", iRet);

    return 0;
}
