#include<stdio.h>	  
#include <stdlib.h>

typedef struct cdnt{//STRUCT P/ ARMAZENAR AS COORDENADAS DOS PonTOS
	int x;
	int y;
}ponto;

int orientacao(ponto a, ponto b, ponto c){//DEFINE A ORIENTAÇAO DE 3 PONTOS DO VETOR
	int o=(b.y-a.x)*(c.x-b.x)-(b.x-a.x)*(c.y-b.y);
	if(o==0)return o;//SE FOREM COLINEARES A DIFERENÇA ENTRE É NULA
	return(o>0)?1:-1;//SE A DIFERENÇA ENTRE AS DIFERENCIAIS FOREM MAIOR OU MENOR QUE 0, ESTAO NO SENTIDO
	//HORARIO OU ANTI-HORARIO
}

void pconvex(ponto v[],int n){ 
	int o[n],i,j,k,esq=0;
	for(i=0;i<n;i++)o[i]=-1;//CRIAMOS UM VETOR PARA ARMAZENAR A ORIENTAÇÃO DOS ELEMENTOS, SE FOR 
							//ANTI-HORARIA, ELE PERTENCE AO POLIGONO
	for(i=1;i<n;i++){	//ACHAMOS O ELEMENTO MAIS A ESQUERDA DO VETOR
		if(v[i].x<v[esq].x)esq=i;
	}
	j=esq;
	do{
		k=(j+1)%n;
		for(i=0;i<n;i++){
          if(orientacao(v[j],v[i],v[k])==-1)//PROCURAMOS PELOS ELEMENTOS K TAL QUE A ORIENTAÇÃO DA
          //AREA SEJA ANTI-HORARIA E ARMAZENAMOS EM o[]
             k=i;
        o[j]=k;}
        j=k;
	}while(j!=esq);
	for(i=0;i<n;i++){
		if(o[i]!=-1)printf("(%d,%d)\n",v[i].x,v[i].y);//SE O ELEMENTO TIVER A ORIENTAÇÃO DEFINIDA
													//IMPRIMIMO-LO POIS PERTENCE AO HULL
	}
}

void main(){
	int n,i,j=0,k;
	ponto v[101];
	ponto *pv;
	pv = (ponto *) calloc(101, sizeof (ponto));
	v[0]=*pv;
	printf("Numero de pontos inteiros do vetor (entre 3 e 100):");
	scanf("%d",&n);//LE O NUMERO DE ELEMENTOS DO VETOR
	if(n<3)return;
	else{
		printf("Digite os pontos de acordo com suas coordenadas(x y):\n");
		for(i=0;i<n;i++){//LE TODOS OS N ELEMENTOS
			printf("x(%d)=",i);
			scanf("%d",&v[i].x);
			printf("y(%d)=",i);
			scanf("%d",&v[i].y);
	}
		pconvex(v,n);
	} 

}
