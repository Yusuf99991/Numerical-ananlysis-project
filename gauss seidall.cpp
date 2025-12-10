#include<stdio.h>

int main(){
	int row,i,j,k,max,f,n;
	float matrix[50][50],dizi[50],dizi1[50],dizi2[50],tmp,E,A;
	printf("denklem sayisini giriniz:");
	scanf("%d",&row);
	for(i=0;i<row;i++){
		for(j=0;j<row;j++){
			printf("%d.denklemin %d.degiskeninin kat sayisini giriniz:",i+1,j+1);
			scanf("%f",&matrix[i][j]);
		}
		printf("%d.denklemin esit oldugu degeri giriniz:",i+1);
		scanf("%f",&dizi[i]);
    }
    printf("denklemdeki degiskenlerin baslangic degerlerini giriniz\n");
    for(i=0;i<row;i++){
    	printf("%d. degiskenin degeri:",i+1);
    	scanf("%d",&dizi1[i]);
	}
	printf("hata miktarini giriniz");
	scanf("%f",&E);
	for(i=0;i<row;i++){
	    max=i;
	    for(j=i+1;j<row;j++){
	    	if(matrix[max][i]<matrix[j][i]||matrix[max][i]<-matrix[j][i]){
			    max=j;	
			}
		}
		if(max!=i){
			for(k=0;k<row;k++){
				tmp=matrix[i][k];
				matrix[i][k]=matrix[max][k];
				matrix[max][k]=tmp;
			}
		}
    }
    f=100;
    n=0;
	while(f!=1&&n<5){

		for(i=0;i<row;i++){
	    	dizi2[i]=dizi[i];
	    	for(j=0;j<row;j++){
			    if(i!=j){
			        dizi2[i]=dizi2[i]-matrix[i][j]*dizi1[j];	
			    }
		    }
		    dizi2[i]=dizi2[i]/matrix[i][i];
		    tmp=dizi1[i];
		    dizi1[i]=dizi2[i];
		    dizi2[i]=tmp;
     	}
	    i=0;
		f=1;  
		A=dizi1[i]-dizi2[i];
	    while(f=1&&i<row){
	    	if((A<E)&&(A>-E)){
			    f=1;
		    }
		    else{
		    	f=10;
			}
		    i++;
    	}
			
		n++;
	}	
	for(i=0;i<row;i++){
		printf("%d.degiskenin degeri:|%5.2f|\n",i+1,dizi1[i]);
	}
		
	return 0;	
}
    
