#include <stdio.h>
#include <string.h>

struct SinhVien{
    int id;
    char name[50];
    int age;
};

int main(){
    int n;
    struct SinhVien sv[100];

    printf("Nhap so luong sinh vien: ");
    scanf("%d",&n);

    FILE *fptr = fopen("students.txt","r");
    if (fptr == NULL){
        printf("Loi mo tep tin");
        return 1;
    }

    for (int i = 0; i < n && !feof(fptr);i++){
        fscanf(fptr,"%d %s %d",&sv[i].id,sv[i].name,&sv[i].age);
    }
    fclose(fptr);

    printf("Thong tin sinh vien:\n");
    for (int i = 0; i < n; i++){
        printf("Sinh vien thu %d:\n",i + 1);
        printf("ID sv: %d\n",sv[i].id);
        printf("Ten sv: %s\n",sv[i].name);
        printf("Tuoi sv: %d\n",sv[i].age);
    }
    printf("Doc file thanh cong");

    return 0;
}
