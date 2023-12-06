#include<stdio.h>

//C:\\Users\\USER-PC\\Desktop\\bt01.txt
int main(){
	FILE *file;
	char buffer[1000];
	// Mo tep
	file = fopen("C:\\Users\\USER-PC\\Desktop\\bt01.txt","r");
	fread(buffer, sizeof(char), sizeof(buffer), file);
	printf("Hien thi: %s",buffer);
	fclose(file);
	return;
}
