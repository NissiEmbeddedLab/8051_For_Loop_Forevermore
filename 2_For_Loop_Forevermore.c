#include<reg51.h>
void main(void)
{
for(;;)
	{
	P1 = 0x55;
	P1 = 0xAA;
}
}
