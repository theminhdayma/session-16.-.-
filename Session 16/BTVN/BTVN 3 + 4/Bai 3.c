#include <stdio.h>

//C:\\Users\\USER-PC\\Desktop\\BTVN3.txt
int main() {
    FILE *file;
    char fileName[] = "C:\\Users\\USER-PC\\Desktop\\BTVN3.txt";
    int numLines;

    // Nhap dong
    printf("Nhap dong: ");
    scanf("%d", &numLines);

    // Mo file
    file = fopen(fileName, "w");
    if (file == NULL) {
        printf("Khong the mo file\n");
        return 1;
    }

    // Nhap tung dong
    printf("Nhap noi dung tung dong:\n");
    for (int i = 0; i < numLines; i++) {
        char line[100];
        scanf(" %[^\n]", line);
        fprintf(file, "%s\n", line);
    }

    // Dong file
    fclose(file);
    return 0;
}
