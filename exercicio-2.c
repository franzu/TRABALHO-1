#include<stdio.h>
#include <stdlib.h>

void quicksort(int v[],int inicio, int fim){
	int pivo, tmp, a, b, r;
	a=inicio;
	b=fim;
	r=rand()%fim;//DETERMINA O PIVO ATRIBUINDO UMA POSIÇÃO ALEATORIA
	pivo=v[r];
	do{
		while(v[a]<pivo)a++;//VETORES ANTES DO PIVO TEM Q SER MENORES QUE O PIVO
		while(v[b]>pivo)b--;//VETORES APOS O PIVO DEVEM SER MAIORES QUE O PIVO
		if(a<=b){//TROCA OS ELEMENTOS 
			tmp=v[a];
			v[a]=v[b];//MENOR NO COMEÇO E MAIOR NO FIM
			v[b]=tmp;
			a++;
			b--;
		}
	}
	while(b>a);
	
	if(inicio<b) quicksort(v,inicio,b);//RECURSÃO PARA ORDENAR A PRIMEIRA PARTE DO
	//VETOR
	if(a<fim) quicksort(v,a,fim);//RECURSÃO PARA ORDENAR A SEGUNDA PARTE DO VETOR
}

void unit(int p,int v[]){
	if(p==0&&v[0]!=v[1])printf("%d\n",v[p]);//SE FOR O PRIMEIRO ELEMENTO DO VETOR, CHECA SE O ELEMENTO
	//É DIFERENTE DO PRÓXIMO, POIS ESTA ORDENADO E SE FOR É UNICO
	else{
	if(v[p]!=v[p-1]&&v[p]!=v[p+1])printf("%d\n",v[p]);//CHECA SE O ELEMENTO É DIFERENTE DOS VIZINHOS
	//SE FOR, COMO ESTA ORDENADO, É UNICO
}
}

void main(){
	int n,i,j=0,k;
	int v[101];
	int *pv;
	pv = (int *) calloc(100, sizeof (int));
	v[0]=*pv;
	printf("numero de elementos inteiros do vetor(entre 0 e 100):");
	scanf("%d",&n);//LE O NUMERO DE ELEMENTOS DO VETOR
	if(n==0||n==1)return;
	else{
	printf("digite os inteiros:");
	for(i=0;i<n;i++){
		scanf("%d",&v[i]);//LE TODOS OS N ELEMENTOS
	}
	quicksort(v,0,n-1);	//ORDENA O VETOR EM ORDEM CRESCENTE A PARTIR DA FUNÇÃO CRIADA
	while(j<n){
	printf("%d\n",v[j]);//MOSTRA O VETOR ORDENADO
	j++;
	} 
	printf("os elementos que ocorrem uma unica vez sao:\n");
	for(j=0;j<n;j++){
		unit(j,v);//MOSTRA O VETOR DE ELEMENTOS UNICOS
	}
	free(pv);
}
}
