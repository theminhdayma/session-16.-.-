#include <stdio.h>

int main() {
    FILE *file;
    char chuoi[100];

    // Mo file doc
    file = fopen("C:\\Users\\USER-PC\\Desktop\\bt01.txt", "w");
    if (file == NULL) {
        printf("Khong the mo file.\n");
        return 1;
    }
    
    // Nhap chuoi
    printf("Nhap chuoi: ");
    fgets(chuoi, sizeof(chuoi), stdin);

    // nhap chuoi vao file
    fprintf(file, "%s", chuoi);

    // Dong file
    fclose(file);
}
