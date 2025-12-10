#include<stdio.h>
int main(){
	int E,N,dizi[100],i,j,k;
	float A,B,C,X1,X2,X3,toplam1,toplam2,toplam3,toplam,H;
	printf("fonksiyonun derecesini giriniz.");
	scanf("%d",&N);
	printf("\n");
	for(i=0;i<N+1;i++){
		printf("%d.dereceden elemanin kat sayisini giriniz.",i);
		scanf("%d",&dizi[i]);
	}
	printf("integralin bulunacagi araliklari sirayla giriniz:");
	scanf("%f""%f",&A,&B);
	printf("ayrilacak bolge sayisini giriniz:");
	scanf("%d",&E);
	E=2*E;
	H=(B-A)/E;
	B=A+2*H;
	E=E/2;
	toplam=0;
	for(k=0;k<E;k++){		    
   
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
			    X3=X3*(A+B)/2;
		    }
		    toplam1=toplam1+X1;
		    toplam2=toplam2+X2;
            toplam3=toplam3+X3;
	    }
	    toplam=toplam+(4*toplam3+toplam1+toplam2)*H/3;
	    A=A+2*H;
	    B=B+2*H;
	    
	}
	printf("integralin yaklasik degeri:|%f|",toplam);
		
	return 0;
}
