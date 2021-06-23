#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct IT_E6{
	char name[20];
	float diem;
};
int main(){
	int n=3;
	FILE* in;
	if ((in = fopen("sv2021.dat","r")) == NULL){
       printf("Error! opening file");
	   exit(1);
	   }     
	char ten[20]; 
	struct IT_E6 VN02[30];
	for(int i=0;i<n;i++){
		fscanf(in,"%f",&VN02[i].diem);
		fflush(stdin);
		fgets(VN02[i].name,20,in);
		fflush(stdin);
	}
	fclose(in);
	printf("chuong trinh quan ly sinh vien\n");
	printf("------------------------------------\n");
	printf("1.xem danh sach sinh vien\n");
	printf("2.nhap them sinh vien\n");
	printf("3.tim sinh vien theo ten\n");
	printf("4.thoat\n");
    tiep:
    printf("\n");	
    printf("xin hay nhap so tu 1 den 4: ");
	int x;
	scanf("%d",&x);
	printf("\n");
	switch(x){
		case 1:{
			for(int i=0;i<n;i++){
				printf("Sinh vien :%s \nDiem :%.1f\n",VN02[i].name,VN02[i].diem);
			}
			goto tiep;
			break;
		}
		case 2:{
			FILE* out;
			if ((out = fopen("sv2021.dat","a")) == NULL){
                 printf("Error! opening file");
	            exit(1);
	        }
			printf("nhap ten sinh vien can them :");
			fflush(stdin);
			gets(VN02[n].name);
			printf("\nnhap diem sinh vien:");
			scanf("%f",&VN02[n].diem);
			fprintf(out,"%.1f %s",VN02[n].diem,VN02[n].name);
			n++;
			fclose(out);
			goto tiep;
			break;
		}
		case 3:{
			printf("nhap ten sinh vien can tim: ");
			fflush(stdin);
			gets(ten);
			fflush(stdin);
			char *sub;
			printf("ban dang tim :\n");
			for(int i=0;i<n;i++){
				sub = strstr(VN02[i].name,ten);
				if(sub != NULL){
					printf("sinh vien %s\n",sub);
					break;
			    }
			    else
			    if(i==n-1)
			    printf("khong co sinh vien nay o day");}
			goto tiep;
			break;
		}
		case 4:{
			printf("hen gap lai !\n");
			break;
		}
		default:{
			printf("xin hay nhap so tu 1 den 4 !\n");
			goto tiep;
			break;
		}
			
	}
}
