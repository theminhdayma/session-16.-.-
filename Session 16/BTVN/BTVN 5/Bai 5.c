#include <stdio.h>

//file1: C:\\Users\\USER-PC\\Desktop\\Session 16\\BTVN\\BTVN 1 + 2\\bt01.txt
//file2: C:\\Users\\USER-PC\\Desktop\\Session 16\\BTVN\\BTVN 3 + 4\\BTVN3.txt
//file3: C:\\Users\\USER-PC\\Desktop\\BTVN5.txt

int main() {
    FILE *file1, *file2, *file3;
    char temp;
    // Mo file bt01
    file1 = fopen("C:\\Users\\USER-PC\\Desktop\\Session 16\\BTVN\\BTVN 1 + 2\\bt01.txt", "r");
    if (file1 == NULL) {
        printf("Khong the mo file\n");
        return 1;
    }
    //Mo file bt3
    file2 = fopen("C:\\Users\\USER-PC\\Desktop\\Session 16\\BTVN\\BTVN 3 + 4\\BTVN3.txt", "r");
    if (file2 == NULL) {
        printf("Khong the mo file\n");
        return 1;
    }
    // Tao file bt5
    file3 = fopen("C:\\Users\\USER-PC\\Desktop\\BTVN5.txt", "w");
    if (file3 == NULL) {
        printf("Khong the mo file\n");
        return 1;
    }
    // Sao chep noi dung file 1 sang file 5
    while ((temp = fgetc(file1)) != EOF) {
        fputc(temp, file3);
    }
    // Sao chep noi dung file 3 sang file 5
    while ((temp = fgetc(file2)) != EOF) {
        fputc(temp, file3);
    }
    // Dong file
    fclose(file1);
    fclose(file2);
    fclose(file3);
    
    // Mo file 3 (bt5)
    file3 = fopen("C:\\Users\\USER-PC\\Desktop\\BTVN5.txt", "r");
    while ((temp = fgetc(file3)) != EOF) {
        printf("%c", temp);
    }
    // Dong file
    fclose(file3);
    return 0;
}
