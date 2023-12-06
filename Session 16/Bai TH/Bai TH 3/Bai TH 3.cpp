#include<stdio.h>

//C:\\Users\\USER-PC\\Desktop\\test.txt
int main(){
	FILE *taptin = NULL;
	const int SO_KY_TU_TOI_DA = 1000;
	char chuoi[SO_KY_TU_TOI_DA] = "";
	taptin = fopen("C:\\Users\\USER-PC\\Desktop\\test.txt","r");
	if(taptin == NULL){
		fgets(chuoi, SO_KY_TU_TOI_DA, taptin);
		printf("%s",chuoi);
		fclose(taptin);
	}
	return 0;
}
