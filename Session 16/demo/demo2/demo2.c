#include<stdio.h>

int main(){
	int *filePointer;
	char buffer[] = "ihklegtuewgt";
	
	// Su dung fopen de mo file co duong dan voi che do "r"
	filePointer = fopen("C:\\Users\\USER-PC\\Desktop\\demoIndexsesssion27.txt","w");
	
	//Su dung fwrite de nhap vao file 
	fwrite(buffer, sizeof(buffer), 1, filePointer);
	
	//Dong file
	fclose(filePointer);
	return 0; 	
}
