/*----------------------------------
 * Program name : LitToBigEndian.c
 * Descriptions : A C program to convert Little to Big endian integer.
 *                In little endian machines, last byte of binary representation of the multi-byte data is stored first
 *                In big endian machines, first byte of binary representation of the multibyte data is stored first
 * Algorithm:   :
 -----------------------------------*/ 
#include <stdio.h>

unsigned int LitToBigEndian(unsigned int x);
 
int main( )
{
	int Little_Endian = 0xAABBCCDD ;
	
	printf("\n Little_Endian = 0x%X\n",Little_Endian);
	
	printf("\n Big_Endian    = 0x%X\n",LitToBigEndian(Little_Endian));
 
}
 
unsigned int LitToBigEndian(unsigned int x)
{
	return (((x>>24) & 0x000000ff) | ((x>>8) & 0x0000ff00) | ((x<<8) & 0x00ff0000) | ((x<<24) & 0xff000000));
}