#include<stdio.h>
//C:\\Users\\USER-PC\\Desktop\\test.txt

int main(){
	FILE *taptin = NULL;
	int kyTuHienTai = 0;
	taptin = fopen("C:\\Users\\USER-PC\\Desktop\\test.txt","r");
	if(taptin != NULL){
		//Doc tung ki tu
		do{
			kyTuHienTai = fgetc(taptin); // doc tung ki tu
			printf("%c",kyTuHienTai); // In tung ki tu ra man hinh
		}while(kyTuHienTai != EOF);
		fclose(taptin);
	}
}
