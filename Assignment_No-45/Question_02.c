/*2) write a program which accept file name from user and count number of small character from
that file.
input:Demo.txt
output:Number of captial chararcter are 23
*/

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

int CountSmall(char Fname[]) {
    int fd = 0;
    int iCount = 0;
    char ch;

    fd = open(Fname, O_RDONLY);
    if (fd == -1) 
    {
        printf("Error opening file");
        return -1;
    }

    while (read(fd, &ch, 1) == 1) {
        if (ch >= 'a' && ch <= 'z') {
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

    iRet = CountSmall(FileName);
    printf("Number of small characters are %d\n", iRet);

    return 0;
}
