#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int N;
struct B{
	int g;//khoi luong
	float v;//gia tri
	char name[20];
}; 
int main(){
	FILE *fptr;
	if ((fptr = fopen("Bag.INP","r")) == NULL){
       printf("Error! opening file");
	   exit(1);
	   }
	FILE* out;
	if ((out = fopen("Bag.OUT","w")) == NULL){
       printf("Error! opening file");
	   exit(1);
	   }
	int W;
	char ten[20];
	fscanf(fptr,"%d%d",&N,&W);
	struct B Bag[20];
	for(int i=0;i<N;i++){
		fscanf(fptr,"%d%f",&Bag[i].g,&Bag[i].v);  
		fscanf(fptr,"%s",ten);
		strcpy(Bag[i].name,ten); 
	}
	float a[100][100];
	float b[100];
	int max;
	int z[100];
	for(int i=0;i<N;i++){
		z[i]=0;
	}
	// i la khoi luong
	// j la vat o vi tri thu i trong N vat
	for(int i=0;i<=W;i++){
		max=0;
		for(int j=0;j<N;j++){
			if(i==0){
				a[i][j]=0;
			}
			if(Bag[j].g>i){
				a[i][j]=0;
			}else{
				a[i][j]=b[i-Bag[j].g]+Bag[j].v;
			}
			if(a[i][j]>max){
				max = a[i][j];
			}
		}
		b[i]=max;
	}
	int w=W;
	int min=Bag[0].g;
	for(int i=0;i<N;i++){
		if(min>Bag[i].g){
			min = Bag[i].g;
		}
	}
	while(w>=min){
		for(int i=0;i<N;i++){
			if(w>=Bag[i].g&&b[w]==(b[w-Bag[i].g]+Bag[i].v)){
				z[i]++;
				w-=Bag[i].g;
				break;
			}
		}
	}
	fprintf(out,"%.0f\n",b[W]);
    for(int i=0;i<N;i++){
    	if(z[i]>0){
    		fprintf(out,"%s %d\n",Bag[i].name,z[i]);
		}
	}
	  fclose(fptr); 
}
