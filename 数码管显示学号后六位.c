#include<reg52.h>
#define uint unsigned int 
#define uchar unsigned char 
sbit dula=P2^6;
sbit wela=P2^7;
 
uchar code table[]={
0x3f,0x06,0x5b,0x4f,
0x66,0x6d,0x7d,0x07,
0x7f,0x6f,0x77,0x7c,
0x39,0x5e,0x79,0x71};
void delay(uint z);
void main()
{
while(1)
	{

		dula=1;
		P0=table[1];//1
		dula=0;
	  P0=0xff;
		wela=1;
		P0=0xfe;
		wela=0;
		delay(1);
	
	       dula=1;
	       P0=table[2];//2
	       dula=0;
	       P0=0xff;
	       wela=1;
	       P0=0xfd;
	       wela=0;
	       delay(1);

	      dula=1;
	      P0=table[4];//4
	      dula=0;
	      P0=0xff;
	      wela=1;
        P0=0xfb;
	      wela=0;
        delay(1);
				
	  dula=1;
		P0=table[0];//0
		dula=0;
		P0=0xff;
		wela=1;
		P0=0xf7;
		wela=0;
		delay(1);
				
	  dula=1;
		P0=table[8];//8
		dula=0;
		P0=0xff;
	  wela=1;
		P0=0xef;
		wela=0;
		delay(1);
		
		dula=1;
		P0=table[9];//9
    dula=0;
	  P0=0xff;
		wela=1;
		P0=0xdf;
		wela=0;
    delay(1);
	
       }
}

void delay(uint z)
{
	uint x,y;
	for(x=z;x>0;x--)
	for(y=110;y>0;y--);	
}
