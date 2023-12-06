#include<stdio.h>
#include<stdlib.h>

int main(){
	FILE *filePointer;
	char buffer[100];
	
	// Su dung fopen de mo file co duong dan voi che do "r"
	filePointer = fopen("C:\\Users\\USER-PC\Desktop\\demoIndex ss27.txt", "r");
	
	// Doc va hien thi noi dung cho nguoi dung
	fread(buffer, sizeof(char), sizeof(buffer), filePointer);
	
	// Hien thi noi dung co trong file
	printf("Noi dung: %s", buffer);
	
	// Dong file
	fclose(filePointer);	
	
	return 0;
}
//}C:\\Users\\USER-PC\\Desktop\\demoIndex ss27.txt
