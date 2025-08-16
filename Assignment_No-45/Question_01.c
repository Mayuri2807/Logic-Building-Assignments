/*1) write a program which accept file name from user and count number of captial character from
that file.

input:Demo.txt
output:Number of captial chararcter are 23

*/

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

int CountCapital(char Fname[]) {
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
        if (ch >= 'A' && ch <= 'Z') {
            iCount++;
        }
    }

    close(fd);
    return iCount;
}

int main() {
    char FileName[30];
    int iRet = 0;

    printf("Enter file name: ");
    scanf("%s", FileName);

    iRet = CountCapital(FileName);
    printf("Number of capital characters are %d\n", iRet);

    return 0;
}
