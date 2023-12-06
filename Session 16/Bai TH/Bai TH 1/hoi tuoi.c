#include<stdio.h>

int main(){
	FILE *taptin = NULL;
	int tuoi = 0;
	taptin = fopen("C:\\Users\\USER-PC\\Desktop\\test.txt", "w");
	if(taptin != NULL){
		//Hoi tuoi
		printf("may bao tuoi?\n");
		printf("Tao: ");
		scanf("%d",&tuoi);
		// Ghi du lieu vao tep tin
		fprintf(taptin,"Nguoi dang su dung may tinh nay %d tuoi", tuoi);
		fclose(taptin);
	}
	return 0;
}
