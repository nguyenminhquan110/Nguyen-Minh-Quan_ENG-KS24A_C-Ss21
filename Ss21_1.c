#include <stdio.h>
#include <string.h>

int main(){
    FILE *fptr;
    


    fptr = fopen("bt01.txt","w");
    if (fptr == NULL) {
        printf("Loi mo tep tin\n");
        return 1;
    }

    fprintf(fptr,"Hello World");

    fclose(fptr);
    printf("Da ghi chuoi vao tep thanh cong");

    return 0;
}
