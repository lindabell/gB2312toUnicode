#include "stdio.h"
#include "unicodeToGB2312.h"

char Zn[]="鲁东大学";

u16 UnicodeTemp[10];


void main(void)
{ 
	u16 *pZn;
	u16 unicode_temp;
	pZn=(u16 *)Zn;

	GB2312ToUnicode_Str(UnicodeTemp,"鲁东大学");

	unicode_temp=GB2312ToUnicode(*pZn);	//郑的GB2312吗是0xD6A3  unicode是0x90D1
	printf("Unicode:%02X\t\t",unicode_temp);

	unicode_temp=UnicodeToGB2312(unicode_temp);
	printf("GB2312:%02X\n",unicode_temp);

}