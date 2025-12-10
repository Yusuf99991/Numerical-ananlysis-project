#include<stdio.h>

int main(){
	int row,i,j,k;
	float matrix[50][50],dizi[50],tmp;
	printf("denklem sayisini giriniz.");
	scanf("%d",&row);
	for(i=0;i<row;i++){
		for(j=0;j<row;j++){
			printf("%d.denklemin %d.degiskeninin kat sayisini giriniz:",i+1,j+1);
			scanf("%f",&matrix[i][j]);
		}
		printf("%d.denklemin esit oldugu degeri giriniz.",i+1);
		scanf("%f",&dizi[i]);
	}

	for(i=0;i<row;i++){
		for(j=i+1;j<row;j++){
			tmp=matrix[j][i];
			for(k=0;k<row;k++){
				matrix[j][k]=matrix[j][k]-(matrix[i][k]/matrix[i][i])*tmp;
					
			}
			dizi[j]=dizi[j]-(dizi[i]/matrix[i][i])*tmp;

		}
	}
	for(i=0;i<row;i++){
		for(j=0;j<row;j++){
			printf("|%5.3f|",matrix[i][j]);
		}
		printf("|%f|\n",dizi[i]);
	}
	for(i=2;i>=0;i--){
		
		for(j=i-1;j>=0;j--){
		    tmp=matrix[j][i];
			matrix[j][i]=matrix[j][i]-(matrix[i][i]/matrix[i][i])*matrix[j][i];
			dizi[j]=dizi[j]-(dizi[i]/matrix[i][i])*tmp;
		}
		
    }
	for(i=0;i<row;i++){
    	dizi[i]=dizi[i]/matrix[i][i];
    	matrix[i][i]=1;
    }	
	for(i=0;i<row;i++){
    	for(j=0;j<row;j++){
    		printf("|%5.3f|",matrix[i][j]);
	    }
	    printf("|%f|\n",dizi[i]);
    }
		
		
	return 0;	
}
