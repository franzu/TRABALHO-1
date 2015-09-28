		**README**
	
	Este repositorio do github cont�m exercicios feitos para um trabalho de Linguagens
de Programa��o e Aplica��es, disciplina oferecida pelo ICMC(Instituto de Ci�ncias
Matem�ticas e de Computa��o) na EESC(Escola de Engenharia de S�o Carlos).
	
	O trabalho pertence a: 
		
	Francesco Paer� Leit�o - N� USP: 9312623 - username:franzu 
	
	Onde e como compilar o codigo?
	
	Os codigos foram elaborados em Linguagem C, no compilador Dev-C++.Este �
um IDE(Integrated Development Environment/Ambiente de Desenvolvimento Integrado) que
usa a porta Mingw do GCC (GNU Compiler Collection) como compilador. Os programas gerados
podem ser executados em Win32, console ou GUI. 
	As bibliotecas em C ultilizadas foram: 
	stdio.h - fun��es de saidas e entradas padr�o em C(Exemplos: printf, scanf).
	stdlib.h - fun��es envolvendo aloca��o de mem�ria, controle de processos, 
convers�es e outras.
	A compila��o do codigo fonte � feita pelo GCC/Mingw do Windows ap�s ter as linhas de comando escritas
e clicando no bot�o de compila��o Compile(F9) na barra de tarefas da interface do ambiente.Ent�o,
se n�o houverem erros de compila��o, ser� criado um arquivo .exe na pasta onde esta o arquivo .c
e este sim ser� o programa a ser exercutado com o codigo fonte escrito.
	
	Como usar os programas?
	Neste repositorio do github encontram-se exemplos de entradas para os programas elaborados, 
est�o na pasta Exemplos-de-entradas que cont�m um exemplo para cada exercicio.
	Note que os programas apenas ultilizar�o numeros inteiros como entradas e saidas, como
exemplificado nos exemplos. Al�m disso, os programas foram limitados para receber no m�ximo 100 inteiros. 
Se entradas de outro tipo forem ultilizadas ocorrer�o erros. Ap�s o programa atigir seu objetivo, um comando 
foi ultilizado para que a tela do prompt de comando permane�a ativa, ela ir� fechar ap�s o usu�rio teclar 
qualquer coisa.
		*Exercicio 1-Closest Pair: est� codigo tem o objetivo de descobrir qual o par de inteiros
	que possui a menor difere�a entre eles, o par mais proximo, como diz o titulo. Primeiro,
	ser� pedido ao usuario que entre com o numero de quantos inteiros deseja comparar(deve ser maior que
	1 pois n�o � possivel formarmos pares com apenas 1 elemento), logo, ele entra
	os inteiro e o programa imprime os pares mais proximos, n�o h� problema se houver mais de um par, ele
	imprimir� todos. Se houverem entradas com numeros iguais, a diferen�a ser� 0 e o par mais proximo ser�
	as duplas dos proprios n�meros.
		Para descobrir o par mais proximo ele pega um elemento do vetor e compara com o resto at� achar
	a menor diferen�a, que ser� armaenada numa variavel.O processo � feito com todos elementos do vetor. Se a
	diferen�a de dois pares diferentes forem iguais ele ir� salvar o endere�o do novo par num vetor para imprimir
	depois.
		Olhar o arquivo .txt Exercicio 1-Closest Pair na pasta Exemplos-de-entradas como exemplo.
		
		*Exercicio 2-Element Uniqueness: aqui queremos encontrar aqueles elementos que n�o tem
	repeti��es, ocorrem uma unica vez. A entrada � a mesma do exercicio anterior, n� de inteiros a serem
	inspecionados(tamb�m deve ser maior que 1) e, depois, os inteiros. Ao fim, o programa devolve aqueles 
	elementos que n�o tem iguais no resto da lista digitada.Se n�o houverem elementos unicos, ele nao devolve
	nada.
		Na descoberta dos elementos unicos, a fun��o faz a diferen�a entre todos elementos do vetor. Aqueles
	que n�o tiverem nenhuma diferen�a =0 ser�o unicos e s�o impressos na hora da checagem.
		Olhar o arquivo .txt Exercicio 2-Element Uniqueness na pasta Exemplos-de-entradas como exemplo.
		
		*Exercicio 3-Frequency Distribuition: este tem o objetivo quase inverso ao do Exercicio 2, uma 
	vez que, dados os inteiros, ele retorna aquele(s) que possuem maior n�mero de repeti��es. Se v�rios inteiros
	tiverem o mesmo n�mero de repeti��es, ele ir� retornar todos e suas repeti��es.
		Este programa usa tamb�m o pricipio da diferen�a nula para determinar a unicidade ou n�o dos elementos,
	aqueles que tiverem mais 0's nas diferen�as ser�o os mais frequentes e seu valor � armazenado em outro vetor para
	posterior impress�o.Contudo o programa foi optimizado para n�o imprimir varias vezes o mesmo elemento nas compara��es.
		Olhar o arquivo .txt Exercicio 3-Frequency Distribuition na pasta Exemplos-de-entradas como exemplo.
		
		*Exercicio 4-Convex Hull: o programa recebe varios pontos em coordenadas cartesianas que ser�o armazenadas numa
	struct. Este � o unico exercicio que n�o h� nececidade de ordena��o. A fun��o de forma��o do poligono convexo procura primeiro
	pelo elemento na mais esquerda do plano(se houver mais de 1, s� o primeiro ser� considerado, mas n�o h� problema). Logo ele usar�
	este elemento da esquerda, um elemento a direita e o resto dos elemento para compara��o da orienta��o. Essa compara��o nos dar�
	aqueles mais externos, que s�o os que possuem sentido anti-horario no caso. Ent�o ele faz a compara��o com todos elementos e ao fim
	imprime os pontos que fomam nosso Hull.
		Note que devem ser inseridos 3 ou mais pontos, pois 2 pontos ou menos n�o formam poligonos.
		Olhar o arquivo .txt Exercicio 4-Convex Hull na pasta Exemplos-de-entradas como exemplo.
				-------------------------THE END-----------------------