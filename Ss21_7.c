#include<stdio.h>
#include<string.h>

struct SinhVien{
	int id;
	char name[50];
	int age;
};
int main(){
	int n;
	printf("Moi ban nhap vao so luong sinh vien: ");
	scanf("%d",&n);
	struct SinhVien sv[50];
	for(int i = 0;i < n;i++){
		printf("Nhap thong tin sinh vien thu: %d\n",i + 1);
		printf("Nhap id sv: ");
		scanf("%d",&sv[i].id);
		fflush(stdin);
		printf("Nhap ten sv: ");
		fgets(sv[i].name,50,stdin);
		printf("Nhap tuoi sv: ");
		scanf("%d",&sv[i].age);
	}
	FILE *fptr;
	fptr = fopen("Students.txt","w");
	
	if(fptr == NULL){
		printf("Loi mo tep tin");
		return 1;
	}
	
	for(int i = 0; i < n;i++){
		fprintf(fptr,"%d\n %s\n %d\n",sv[i].id,sv[i].name,sv[i].age);
	}
	
	fclose(fptr);
	printf("Luu file thanh cong");
	return 0;
}

