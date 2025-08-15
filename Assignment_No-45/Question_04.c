/*4)write a program which accepts file name and one character from user and 
count number of occurance of that character from that file.
input:Demo.txt
outPut:Frequency of M is 7
*/

///////////////////////////////////////////////////////////////////////////////////////////////

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

int CountChar(char Fname[], char ch) 
{
    int fd = 0;
    int iCount = 0;
    char temp;

    fd = open(Fname, O_RDONLY);
    if (fd == -1) 
    {
        perror("Error opening file");
        return -1;
    }

    while (read(fd, &temp, 1) == 1) 
    {
        if (temp == ch) 
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
    char cValue = '\0';

    printf("Enter a file name\n");
    scanf("%s", FileName);

    printf("Enter the character: ");
    scanf(" %c", &cValue);

    iRet = CountChar(FileName, cValue);
    printf("Frequency of  is %d\n",iRet);

    return 0;
}
