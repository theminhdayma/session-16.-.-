#include<stdio.h>

//?C:\Users\USER-PC\Desktop\test.txt
int main(){
	FILE *taptin = NULL;
	taptin = fopen("C:\\Users\\USER-PC\\Desktop\\test.txt","w");
	if(taptin != NULL){
		fputc('A',taptin);// Ghi them vao tap tin ki tu A
		fclose(taptin);
	}
	return 0;
}
