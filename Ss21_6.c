#include <stdio.h>

int main() {
	char a;
    FILE *fptr1, *fptr2;
  
    fptr1 = fopen("bt01.txt", "r");
    if (fptr1 == NULL){
        printf("Loi mo file bt01.txt");
        return 1;
    }
    
    fclose(fptr1);

    fptr2 = fopen("bt06.txt", "w");
    if (fptr2 == NULL){
        printf("Loi tao file bt06.txt");
        fclose(fptr1);
        return 1;
    }

    while ((a = fgetc(fptr1)) != EOF){
        fputc(a, fptr2);
    }

    fclose(fptr2);
    printf("Sao chep thanh cong");

    return 0;
}
