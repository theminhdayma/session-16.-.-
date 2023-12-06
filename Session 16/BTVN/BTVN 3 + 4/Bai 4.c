#include<stdio.h>

//C:\\Users\\USER-PC\\Desktop\\BTVN3.txt

int main(){
	// In noi dung trong file BTVN3
	FILE *file;
	char filename[] = "C:\\Users\\USER-PC\\Desktop\\BTVN3.txt";
    int numLines;
    file = fopen(filename, "r");
    if (file == NULL) {
        printf("Khong the mo file\n");
        return 1;
    }
    printf("\nNoi dung file:\n");
    char line[100];
    while (fgets(line, sizeof(line), file)) {
        printf("%s", line);
    }
    // Dong file
    fclose(file);
	return 0;
}
