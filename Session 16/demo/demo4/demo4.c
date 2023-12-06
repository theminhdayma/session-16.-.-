#include<stdio.h>
//C:\Users\USER-PC\Desktop\demoNhi Phan.bin

int main(){
	FILE *f;
	int ia[5], ib[5];
	
	for(int i=0;i<5;i++){
		printf("Nhap vao 1 so: ");
		scanf("%d",&ia[5]);
	}
	//Mo tep tin de doc nhi phan
	f = fopen("C:\\Users\\USER-PC\\Desktop\\demoNhi Phan.bin", "wb");
	
	//Kiem tra co mo duoc file de ghi hay khong
	if(f == NULL){
		printf("Khong the mo file de ghi\n");
		return 1;
	}
	
	//Ghi du lieu vao file nhi phan
	fwrite(ia, sizeof(ia), 1, f);
	
	//Dong tep tin
	fclose(f);
	
	//Mo tep tin de doc nhi phan
	f = fopen("C:\\Users\\USER-PC\\Desktop\\demoNhi Phan.bin", "rb");
	
	//Kiem tra co mo duoc file de ghi hay khong
	if(f == NULL){
		printf("Khong the mo file de ghi\n");
		return 1;
	}
	
	//Doc file nhi phan
	fread(ib, sizeof(ib), 1, f);
	
	//In du lieu trong file nhi phan 
	for(int i=0;i<5;i++){
		printf("%d\t",ib[i]);
	}
	//Dong tep tin
	fclose(f);
	
	return 0;
}
