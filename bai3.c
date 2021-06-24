#include<stdio.h> // Sua .dat thanh nhi phan
#include<string.h> 
#include<stdlib.h>
#include"student.h"

int main(){
	FILE* in;
	if ((in = fopen("sv2021.dat","rb")) == NULL){
       printf("Error! opening file");
	   exit(1);
	   }     
	char ten[25]; 
    student VN02[1000];
	int i = 0;
	while (fscanf(in,"%f",&VN02[i].diem) != EOF)
		{
			fflush(stdin);
			fgets(VN02[i].name,25,in);
			fflush(stdin);
			i++;
		}
	int n = i;
	fclose(in);
	printf("Chuong trinh quan ly sinh vien\n");
	printf("------------------------------------\n");
	printf("1.Xem danh sach sinh vien\n");
	printf("2.Nhap them sinh vien\n");
	printf("3.Tim sinh vien theo ten\n");
	printf("4.Thoat\n\n");
    tiep:	
    printf("Xin hay nhap so tu 1 den 4: ");
	int x;
	scanf("%d",&x);
	switch(x){
		case 1:{
			printf("Danh sach sinh vien:\n");
			printf("%-25s%-4s\n", " Ten", "Diem");
			for(int i=0;i<n;i++){
				int len = strlen(VN02[i].name);
				VN02[i].name[len-1] = '\0';
				printf("%-25s%-4.2f\n",VN02[i].name,VN02[i].diem);
				VN02[i].name[len-1] = '\n';
			}
			goto tiep;
			break;
		}
		case 2:{
			FILE* out;
			if ((out = fopen("sv2021.dat","ab")) == NULL){
                 printf("Error! opening file");
	            exit(1);
	        }
			printf("Nhap ten sinh vien can them: ");
			fflush(stdin);
			gets(VN02[n].name);
			int len = strlen(VN02[n].name);
			for (int i = len - 1; i >= 0; i--)
			{
				VN02[n].name[i+1]=VN02[n].name[i];
			}
			VN02[n].name[0] = ' '; VN02[n].name[len+1] = '\n'; VN02[n].name[len+2] = '\0';
			printf("Nhap diem sinh vien: ");
			scanf("%f",&VN02[n].diem);
			fprintf(out,"%.2f%s",VN02[n].diem,VN02[n].name);
			n++;
			fclose(out);
			goto tiep;
			break;
		}
		case 3:{
			printf("Nhap ten sinh vien can tim: ");
			fflush(stdin);
			gets(ten);
			fflush(stdin);
			FILE *out = fopen("output.txt", "a");
			fprintf(out,"Tim sinh vien co ten \"%s\":\n\n", ten);
			printf("Ket qua:\n");
			int exists = 0; char *sub;
			for (int i = 0; i < n; i++)
			{
				sub = strstr(VN02[i].name,ten);
			    if (sub != NULL)
			    {
			        printf("\nSinh vien:%sDiem :%.2f\n",VN02[i].name,VN02[i].diem);
					fprintf(out,"Sinh vien:%sDiem :%.2f\n\n",VN02[i].name,VN02[i].diem);
			        exists = 1;
			    }
			}
			if (exists == 0)
			{
				printf("Khong ton tai sinh vien!\n");
				fprintf(out, "%s", "Khong ton tai sinh vien!\n");
			}
			fprintf(out, "%s", "------------------------------------\n");
			fclose(out);
			goto tiep;
			break;
		}
		case 4:{
			printf("Hen gap lai!\n");
			break;
		}
		default:{
			printf("Xin hay nhap so tu 1 den 4!\n");
			goto tiep;
			break;
		}
			
	}
}
