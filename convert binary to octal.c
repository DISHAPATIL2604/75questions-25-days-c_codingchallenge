#include<stdio.h>
#include<math.h>
long binaryToOctal(bin){
	int oct = 0, dec = 0, i = 0;
    while (bin != 0) {
        dec += (bin % 10) * pow(2, i);
        ++i;
        bin /= 10;
    }
    i = 1;
    while (dec != 0) {
        oct += (dec % 8) * i;
        dec /= 8;
        i *= 10;
    }
    return oct;
}
int main(){
	long bin = 1101;
	long oct = binaryToOctal(bin);
	printf("%d",oct);
}