#include "stdio.h"
#include "unicodeToGB2312.h"

void main(void)
{ 
	u16 unicode_temp;

	printf("Unicode\t\tGB2312\n");

	unicode_temp=GB2312ToUnicode(0xD6A3);	//郑的GB2312吗是0xD6A3  unicode是0x90D1
	printf("%02X\t\t",unicode_temp);

	unicode_temp=UnicodeToGB2312(unicode_temp);
	printf("%02X\n",unicode_temp);
}