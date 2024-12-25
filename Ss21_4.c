#include<stdio.h>
#include<string.h>

int main(){
	char a[100]="Hello World";
	FILE *fptr;
	fptr = fopen("bt01.txt","r");
	if(fptr == NULL){
		printf("Loi mo tep tin");
		return 1;
	}
	fgets(a,100,stdin);
	
	printf("Doc dong dau tien: %s\n",a);
	
	fclose(fptr);
	printf("Doc thanh cong");

	return 0;
}

