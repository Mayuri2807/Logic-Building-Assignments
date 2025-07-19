/* 1)write a program which display ASCII table.table contains symbol, decimal,hexadecimal,and octal representation of every member from o to 255

*/
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////




#include<stdio.h>
void DisplayASCII()
{
	int i=0;
	for(i=0;i<=255;i++)
	{

		printf("%c\t%d\t%x\t%o\n", i, i, i, i);
	}

}


int main()
{

	DisplayASCII();
	return 0;
}
