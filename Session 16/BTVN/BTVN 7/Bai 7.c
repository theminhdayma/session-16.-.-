#include <stdio.h>
#include <stdlib.h>

struct Book {
    int id;
    char nameBook[100];
    char author[100];
    float money;
    char genre[100];
};

int main() {
    struct Book books[100];
    int numOfBooks = 0;
    int choice;
    do {
        printf("MENU\n");
        printf("1. Nhap so luong va thong tin sach\n");
        printf("2. Luu thong tin sach vao file\n");
        printf("3. Hien thi thong tin sach tu file\n");
        printf("4. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1: 
                printf("Nhap so luong sach: ");
                scanf("%d", &numOfBooks);
                printf("Nhap thong tin cho %d cuon sach:\n", numOfBooks);
                for (int i = 0; i < numOfBooks; i++) {
                    printf("Sach thu %d:\n", i + 1);
                    printf("ID: ");
                    scanf("%d", &books[i].id);
                    printf("Ten sach: ");
                    scanf(" %[^\n]", books[i].nameBook);
                    printf("Tac gia: ");
                    scanf(" %[^\n]", books[i].author);
                    printf("Gia tien: ");
                    scanf("%f", &books[i].money);
                    printf("The loai: ");
                    scanf(" %[^\n]", books[i].genre);
                }
                break;
            case 2:{
                FILE *file = fopen("C:\\Users\\USER-PC\\Desktop\\Book.txt", "w");
                if (file == NULL) {
                    printf("Khong the mo file.\n");
                    return 1;
                }

                for (int i = 0; i < numOfBooks; i++) {
                    fprintf(file, "%d;%s;%s;%.2f;%s\n", books[i].id, books[i].nameBook, books[i].author, books[i].money, books[i].genre);
                }

                fclose(file);
                break;
            }
            case 3:{
                FILE *file = fopen("C:\\Users\\USER-PC\\Desktop\\Book.txt", "r");
			    if (file == NULL) {
			        printf("Khong the mo file.\n");
			        return 1;
			    }
			
			    struct Book book;
			    printf("Thong tin sach trong file:\n");
			    while (fscanf(file, "%d;%[^;];%[^;];%f;%[^\n]\n", &book.id, book.nameBook, book.author, &book.money, book.genre) == 5) {
			        printf("Ma sach: %d\n", book.id);
			        printf("Ten sach: %s\n", book.nameBook);
			        printf("Tac gia: %s\n", book.author);
			        printf("Gia tien: %.2f\n", book.money);
			        printf("The loai: %s\n", book.genre);
			        printf("\n");
			    }
			    //Dong file
			    fclose(file);
                break;
            }
            case 4:
                printf("Ket thuc chuong trinh!\n");
                exit(0);
                break;
            default:
                printf("Lua chon khong hop le.\n");
                break;
        }
        printf("\n");
    } while (1==1);
    return 0;
}
