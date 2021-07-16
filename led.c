#include <reg52.h>
#include<instrins. h>
#define uchar unsigned char
#define uint unsigned int
uchar code ledl= Oxfe, 0xfb, Oxfd,Oxf7,0xef,Oxbf,oxdf,0x7f};
delay(uint z)
{
uint x,y;
for(x=z;x>0;x--)
for(y=110;y>0;y--);
}
main()
{
uint i;
while(1)
{
P2=led[;
delay(500);
_crol_(led, 1);
}
}


