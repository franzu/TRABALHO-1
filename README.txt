		**README**
	
	Este repositorio do github contém exercicios feitos para um trabalho de Linguagens
de Programação e Aplicações, disciplina oferecida pelo ICMC(Instituto de Ciências
Matemáticas e de Computação) na EESC(Escola de Engenharia de São Carlos).
	
	O trabalho pertence a: 
		
	Francesco Paeró Leitão - Nº USP: 9312623 - username:franzu 
	
	Onde e como compilar o codigo?
	
	Os codigos foram elaborados em Linguagem C, no compilador Dev-C++.Este é
um IDE(Integrated Development Environment/Ambiente de Desenvolvimento Integrado) que
usa a porta Mingw do GCC (GNU Compiler Collection) como compilador. Os programas gerados
podem ser executados em Win32, console ou GUI. 
	As bibliotecas em C ultilizadas foram: 
	stdio.h - funções de saidas e entradas padrão em C(Exemplos: printf, scanf).
	stdlib.h - funções envolvendo alocação de memória, controle de processos, 
conversões e outras.
	A compilação do codigo fonte é feita pelo GCC/Mingw do Windows após ter as linhas de comando escritas
e clicando no botão de compilação Compile(F9) na barra de tarefas da interface do ambiente.Então,
se não houverem erros de compilação, será criado um arquivo .exe na pasta onde esta o arquivo .c
e este sim será o programa a ser exercutado com o codigo fonte escrito.
	
	Como usar os programas?
	Neste repositorio do github encontram-se exemplos de entradas para os programas elaborados, 
estão na pasta Exemplos-de-entradas que contêm um exemplo para cada exercicio.
	Note que os programas apenas ultilizarão numeros inteiros como entradas e saidas, como
exemplificado nos exemplos. Além disso, os programas foram limitados para receber no máximo 100 inteiros. 
Se entradas de outro tipo forem ultilizadas ocorrerão erros. Após o programa atigir seu objetivo, um comando 
foi ultilizado para que a tela do prompt de comando permaneça ativa, ela irá fechar após o usuário teclar 
qualquer coisa.
		*Exercicio 1-Closest Pair: esté codigo tem o objetivo de descobrir qual o par de inteiros
	que possui a menor difereça entre eles, o par mais proximo, como diz o titulo. Primeiro,
	será pedido ao usuario que entre com o numero de quantos inteiros deseja comparar(deve ser maior que
	1 pois não é possivel formarmos pares com apenas 1 elemento), logo, ele entra
	os inteiro e o programa imprime os pares mais proximos, não há problema se houver mais de um par, ele
	imprimirá todos. Se houverem entradas com numeros iguais, a diferença será 0 e o par mais proximo será
	as duplas dos proprios números.
		Para descobrir o par mais proximo ele pega um elemento do vetor e compara com o resto até achar
	a menor diferença, que será armaenada numa variavel.O processo é feito com todos elementos do vetor. Se a
	diferença de dois pares diferentes forem iguais ele irá salvar o endereço do novo par num vetor para imprimir
	depois.
		Olhar o arquivo .txt Exercicio 1-Closest Pair na pasta Exemplos-de-entradas como exemplo.
		
		*Exercicio 2-Element Uniqueness: aqui queremos encontrar aqueles elementos que não tem
	repetições, ocorrem uma unica vez. A entrada é a mesma do exercicio anterior, nº de inteiros a serem
	inspecionados(também deve ser maior que 1) e, depois, os inteiros. Ao fim, o programa devolve aqueles 
	elementos que não tem iguais no resto da lista digitada.Se não houverem elementos unicos, ele nao devolve
	nada.
		Na descoberta dos elementos unicos, a função faz a diferença entre todos elementos do vetor. Aqueles
	que não tiverem nenhuma diferença =0 serão unicos e são impressos na hora da checagem.
		Olhar o arquivo .txt Exercicio 2-Element Uniqueness na pasta Exemplos-de-entradas como exemplo.
		
		*Exercicio 3-Frequency Distribuition: este tem o objetivo quase inverso ao do Exercicio 2, uma 
	vez que, dados os inteiros, ele retorna aquele(s) que possuem maior número de repetições. Se vários inteiros
	tiverem o mesmo número de repetições, ele irá retornar todos e suas repetições.
		Este programa usa também o pricipio da diferença nula para determinar a unicidade ou não dos elementos,
	aqueles que tiverem mais 0's nas diferenças serão os mais frequentes e seu valor é armazenado em outro vetor para
	posterior impressão.Contudo o programa foi optimizado para não imprimir varias vezes o mesmo elemento nas comparações.
		Olhar o arquivo .txt Exercicio 3-Frequency Distribuition na pasta Exemplos-de-entradas como exemplo.
		
		*Exercicio 4-Convex Hull: o programa recebe varios pontos em coordenadas cartesianas que serão armazenadas numa
	struct. Este é o unico exercicio que não há nececidade de ordenação. A função de formação do poligono convexo procura primeiro
	pelo elemento na mais esquerda do plano(se houver mais de 1, só o primeiro será considerado, mas não há problema). Logo ele usará
	este elemento da esquerda, um elemento a direita e o resto dos elemento para comparação da orientação. Essa comparação nos dará
	aqueles mais externos, que são os que possuem sentido anti-horario no caso. Então ele faz a comparação com todos elementos e ao fim
	imprime os pontos que fomam nosso Hull.
		Note que devem ser inseridos 3 ou mais pontos, pois 2 pontos ou menos não formam poligonos.
		Olhar o arquivo .txt Exercicio 4-Convex Hull na pasta Exemplos-de-entradas como exemplo.
				-------------------------THE END-----------------------