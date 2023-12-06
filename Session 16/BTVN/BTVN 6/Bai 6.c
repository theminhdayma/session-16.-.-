#include <stdio.h>
#include <stdlib.h>

struct SinhVien {
    char name[50];
    int age;
    char phoneNumber[15];
    char email[50];
};

int main() {
    int quantity;
    printf("Nhap so sinh vien: ");
    scanf("%d", &quantity);
    getchar();

    struct SinhVien danhSachSV[quantity];
    for (int i = 0; i < quantity; i++) {
        printf("Nhap thong tin cho SV %d: \n", i + 1);
        printf("Ho va ten: ");
        gets(danhSachSV[i].name);
        printf("Tuoi: ");
        scanf("%d", &danhSachSV[i].age);
        getchar();
        printf("So dien thoai: ");
        gets(danhSachSV[i].phoneNumber);
        printf("Email: ");
        gets(danhSachSV[i].email);
    }

    // Mo file
    FILE *file;
    file = fopen("C:\\Users\\USER-PC\\Desktop\\Students.txt", "w");
    if (file == NULL) {
        printf("Khong mo duoc file\n");
        return 1;
    }

    // Ghi thong tin sinh vien vào file
    for (int i = 0; i < quantity; i++) {
        fprintf(file, "%s\t", danhSachSV[i].name);
        fprintf(file, "%d\t", danhSachSV[i].age);
        fprintf(file, "%s\t", danhSachSV[i].phoneNumber);
        fprintf(file, "%s\n", danhSachSV[i].email);
    }

    // Dong file
    fclose(file);

    // Mo file
    file = fopen("C:\\Users\\USER-PC\\Desktop\\Students.txt", "r");
    if (file == NULL) {
        printf("Khong mo duoc file\n");
        return 1;
    }

    printf("Danh sach sinh vien la: \n");
    char buffer;
    while ((buffer = fgetc(file)) != EOF) {
        printf("%c", buffer);
    }

    // Dong file
    fclose(file);
    return 0;
}
