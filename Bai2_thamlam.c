#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int N;
float max(float a,float b){
	return a>b?a:b;
}
struct B{
	float g;//khoi luong
	float v;//gia tri
	char name[20];
	float point;//diem cua do vat theo tham lam
}; 
int main(){
	FILE* fptr;
	if ((fptr = fopen("Bag.INP","r")) == NULL){
       printf("Error! opening file");
	   exit(1);
	   }
	FILE* out;
	if ((out = fopen("Bag.OUT","w")) == NULL){
       printf("Error! opening file");
	   exit(1);
	   }
	float W;
	char ten[20];
	fscanf(fptr,"%d%f",&N,&W);
	struct B Bag[20];
	for(int i=0;i<N;i++){
		fscanf(fptr,"%f%f",&Bag[i].g,&Bag[i].v);
		fscanf(fptr,"%s",ten);
		strcpy(Bag[i].name,ten);
		Bag[i].point = Bag[i].v/Bag[i].g; 
	}
	float c;
	char name1[20];
	//xap sep lai 
	for(int i=0;i<N-1;i++){
		for(int j=i+1;j<N;j++){
			if(Bag[i].point<Bag[j].point){
				c = Bag[i].point;
				Bag[i].point=Bag[j].point;
				Bag[j].point=c;
				c = Bag[i].g;
				Bag[i].g=Bag[j].g;
				Bag[j].g=c;
				c = Bag[i].v;
				Bag[i].v=Bag[j].v;
				Bag[j].v=c;
				strcpy(name1,Bag[i].name);
				strcpy(Bag[i].name,Bag[j].name);
				strcpy(Bag[j].name,name1);
			}
		}
	}
	int dem;
	float V=0;
	int soluong[20];
	for(int i=0;i<N;i++){
		dem=0;
		while(W>=Bag[i].g){
			W-=Bag[i].g;
			dem++;
			V += Bag[i].v;
	    }
	    soluong[i]=dem;
	}
	fprintf(out,"%d\n",(int)(V));
	for(int i=0;i<N;i++){
		if(soluong[i]>0)
		fprintf(out,"%s %d\n",Bag[i].name,soluong[i]);
	}
}
