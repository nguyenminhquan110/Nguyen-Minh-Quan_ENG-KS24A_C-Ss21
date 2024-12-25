#include <stdio.h>

int main(){
    FILE *fptr;
    int n;
    char a[100];

    fptr = fopen("bt05.txt","w");
    if (fptr == NULL) {
        printf("Loi mo tep tin\n");
        return 1;
    }

    printf("Nhap so luong dong: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++){
        printf("Nhap dog thu %d: ",i+1);
        scanf(" %[^\n]",a);
        fprintf(fptr,"%s\n",a);
    }

    fclose(fptr);

    fptr = fopen("bt05.txt","r");
    if (fptr == NULL){
        printf("Loi doc tep tin");
        return 1;
    }

    printf("Nhap noi dung file: ");
    while (fgets(a,100,fptr) != NULL){
        printf("%s",a);
    }

    fclose(fptr);
    return 0;
}
