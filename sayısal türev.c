#include<stdio.h>
int main(){
	int N,dizi[100],i,j;
	float E,A,B,C,X1,X2,X3,toplam1,toplam2,toplam3;
	printf("fonksiyonun derecesini giriniz.");
	scanf("%d",&N);
	printf("\n");
	for(i=0;i<N+1;i++){
		printf("%d.dereceden elemanin kat sayisini giriniz.",i);
		scanf("%d",&dizi[i]);
	}
	printf("turevinin alinacagi degeri giriniz.");
	scanf("%f",&X1);
	printf("fark degerini giriniz.");
	scanf("%f",&E);
	A=X1-E;
	B=X1;
	C=X1+E;
	toplam1=0;
	toplam2=0;
	toplam3=0;
    for(i=0;i<N+1;i++){
		X1=dizi[i];
		X2=dizi[i];
		X3=dizi[i];
		for(j=0;j<i;j++){
			X1=X1*A;
			X2=X2*B;
			X3=X3*C;
		}
		toplam1=toplam1+X1;
		toplam2=toplam2+X2;
		toplam3=toplam3+X3;
    }
    A=(toplam2-toplam1)/E;
    B=(toplam3-toplam2)/E;
    C=(toplam3-toplam1)/(2*E);
    printf("geri fark degeri: |%f|\n",A); 
    printf("ileri fark degeri: |%f|\n",B);
    printf("merkezi fark degeri: |%f|",C);    
	return 0;
}
    
