#include<stdio.h>

int main(){
	int *filePointer;
	char buffer[] = "KyQuanThu7";
	char buffer2[50];
	
	//Mo tep tin doc va ghi
	filePointer = fopen("C:\\Users\\USER-PC\\Desktop\\demoSeekFolesesssion27.txt", "w+");
	
	//Ghi du lieu len tep tin
	fwrite(buffer, 1, sizeof(buffer), filePointer);
	
	//Chuyen con tro den dau tep tin
	fseek(filePointer, SEEK_SET, 0);
	
	//Doc noi dung tep tin
	fread(buffer2, sizeof(buffer2), 1, filePointer);
	
	//Hien thi noi dung
	printf("%s",buffer2);
	
	//Dong tep tin sau khi su dung
	fclose(filePointer);
	
	return 0;
}
