#include<stdio.h>
int main(){
	int E,N,dizi[100],i,k,j;
	float H,A,B,X1,X2,X3,toplam1,toplam2,toplam3;
	printf("fonksiyonun derecesini giriniz.");
	scanf("%d",&N);
	for(i=0;i<N+1;i++){
		printf("%d.dereceden elemanin kat sayisini giriniz.",i);
		scanf("%d",&dizi[i]);
	}
	printf("alanin bulunacagi araliklari sirayla giriniz:");
	scanf("%f""%f",&A,&B);
	printf("ayrilacak bolge sayisini giriniz:");
	scanf("%d",&E);
	H=(B-A)/E;
	B=A;
	A=A-H;
	toplam1=0;
	toplam2=0;
	toplam3=0;
	for(k=0;k<E;k++){		    
	    A=A+H;
		B=B+H;
		toplam1=0;
		toplam2=0;
		for(i=0;i<N+1;i++){
            X1=dizi[i];
		    X2=dizi[i];
		    for(j=0;j<i;j++){
			    X1=X1*A;
			    X2=X2*B;
		    }
		    toplam1=toplam1+X1;
		    toplam2=toplam2+X2;

	    }
	    toplam3=toplam3+toplam1+toplam2;
	    
	}
    toplam3=toplam3*H/2;
	printf("alanin yaklasik degeri:|%8.4f|",toplam3);
	return 0;
}
