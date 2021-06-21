#include<stdio.h>
#include<string.h>
struct IT_E6{
	int MSSV;
	char name[20];
	int diem;
};
int main(){
	int n=3;
	struct IT_E6 VN02[30];
	VN02[0].MSSV = 20200156;
	strcpy(VN02[0].name,"Pham Ba Dong");
	VN02[0].diem=10;
	VN02[1].MSSV = 20200167;
	strcpy(VN02[1].name,"Nguyen Anh Duc");
	VN02[1].diem=10;
	VN02[2].MSSV = 20200231;
	strcpy(VN02[2].name,"Tran Van Hieu");
	VN02[2].diem=10;
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
	char ten[20];
	scanf("%d",&x);
	printf("\n");
	switch(x){
		case 1:{
			for(int i=0;i<n;i++){
				printf("%s %d diem :%d\n",VN02[i].name,VN02[i].MSSV,VN02[i].diem);
			}
			goto tiep;
			break;
		}
		case 2:{
			printf("nhap ten sinh vien can them :");
			fflush(stdin);
			gets(ten);
			strcpy(VN02[n].name,ten);
			printf("\nnhap MSSV sinh vien: ");
			scanf("%d",&VN02[n].MSSV);
			printf("\nnhap diem sinh vien:");
			scanf("%d",&VN02[n].diem);
			n++;
			goto tiep;
			break;
		}
		case 3:{
			printf("nhap ten sinh vien can tim: ");
			fflush(stdin);
			gets(ten);
			fflush(stdin);
			for(int i=0;i<n;i++){
				if(strcmp(VN02[i].name,ten)==0){
					printf("co sinh vien nay o VN02!!!");
					break;
				}
				else{
					if(i==n-1){
						printf("khong co ten sinh vien trong danh sach!!!");
					}
				}
			}
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
