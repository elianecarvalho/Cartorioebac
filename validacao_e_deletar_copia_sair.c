#include <stdio.h>//BIBLIOTECA DE COMUNICA�AO COM O SEU USUARIO
#include <stdlib.h>//biblioteca de alocacao de espa�o e memoria
#include <locale.h>//biblioteca de alca�oes de texto por regiao
#include <string.h>// biblioteca responsavel  por cuidar das string

int registro() // a funcao responsavel  por cadastrar os usuarios no sistema

{
//inicio criacao de variaveis/string
char cpf[40];
char nome[40];
char sobrenome[40];
char cargo[40];
char arquivo[40];
//final da  criacao de variaveis/string

printf("digite o cpf a ser cadastrado: ");//coletando informacao do usuario
scanf("%s", cpf);//%s refere-se  a string

     strcpy(arquivo, cpf); //Responsavel por copiar os valores das string

FILE *file; // cria o arquivo
file = fopen(arquivo, "w"); // criar arquivo e o "w"significa escrever

fprintf(file,cpf); // salvo o valor da variavel
fclose(file); // fecha  o arquivo

file =fopen(arquivo, " a ");//retorna um ponteiro para acessar um arquivo aberto
fprintf(file,",");//fun��o que retorna o numero de bytes ou numero negativo se ocorrer erro
fclose(file);// fun��o que determina o arquivo a ser fechado

printf("digite o nome a ser cadastrado:");//coletando informacao do usuario
scanf("%s",nome);//fun��o responsavel por ler os dados e atribuir a uma vari�vel

file = fopen (arquivo,  "a");//retorna um ponteiro para acessar um arquivo aberto
fprintf(file,nome);//fun��o que retorna o numero de bytes ou numero negativo se ocorrer erro
fclose( file);// fun��o que determina o arquivo a ser fechado
	
file =fopen(arquivo, " a ");//retorna um ponteiro para acessar um arquivo aberto
fprintf(file,",");//fun��o que retorna o numero de bytes ou numero negativo se ocorrer erro
fclose(file);// fun��o que determina o arquivo a ser fechado

printf("digite o sobre nome a ser cadastrado:");//coletando informacao do usuario
scanf("%s", sobrenome);//fun��o responsavel por ler os dados e atribuir a uma vari�vel

file= fopen(arquivo , "a"),//retorna um ponteiro para acessar um arquivo aberto
fprintf(file,sobrenome);//fun��o que retorna o numero de bytes ou numero negativo se ocorrer erro
fclose(file);// fun��o que determina o arquivo a ser fechado


	
printf("Digite o cargo a ser cadastrado :");//coletando informacao do usuario
scanf("%s", cargo );//fun��o responsavel por ler os dados e atribuir a uma vari�vel

file=fopen(arquivo, "a");//retorna um ponteiro para acessar um arquivo aberto
fprintf(file,cargo);//fun��o que retorna o numero de bytes ou numero negativo se ocorrer erro
fclose(file);// fun��o que determina o arquivo a ser fechado

system ("pause");//para a execu��o do programa	
	
}


int consulta()//declarando a vari�vel consulta
{
char cpf[40];
char conteudo[200];

printf ("Digite o cpf a ser consultado: ");//coletando informacao do usuario
scanf("%s",cpf );//fun��o responsavel por ler os dados e atribuir a uma vari�vel
 
FILE *file; //conjunto de estruturas logica
file = fopen(cpf,"r");//retorna um ponteiro para acessar um arquivo aberto

if(file == NULL)//declarando fubn��o de arquivo nulo
{
printf(" Nao foi possivel abrir o arquivo, nao localizado!./n");//retorna ao usu�rio esta informa��o
}

while(fgets(conteudo, 200 , file)!=NULL)//lo�o de repeti��o
 {
 printf("\nEssas sao as informa�oes do usuario: ");//retorna ao usu�rio esta informa��o
printf("%s",conteudo);//retorna ao usu�rio esta informa��o
printf("\n\n");//retorna ao usu�rio esta informa��o

}

system("pause");//para a execu��o do programa


	
}


int deletar()//declarando a vari�vel deletar
{
char cpf [40];

printf("Digite o cpf do usuario a ser deletado: ");//coletando informacao do usuario
scanf("%s",cpf);//fun��o responsavel por ler os dados e atribuir a uma vari�vel

remove(cpf);//fun��o para remover est� informa��o

FILE *file;//conjunto de estruturas logica
file = fopen(cpf,"r");//retorna um ponteiro para acessar um arquivo aberto

  if(file == NULL)//declarando fubn��o de arquivo nulo
{
	printf("o usuario nao se encontra no sistema!.\n");//coletando informacao do usuario
	system("pause");//para a execu��o do programa
	
}


	
}




int main()//declarando a vari�vel main
{
	int opcao=0;//definindo as variaveis
	int laco=1;//definindo o la�o
	
	for(laco=1;laco=1;)//respons�vel por delimitar a quantidade de repeti��o do la�o

{
	system("cls");//responsavel por limpar a tela



  setlocale(LC_ALL, "PORTUGUESE");//definindo a linguagem
  
  printf("####cartorio da ebac ###\n\n");//inicio do menu
  printf("escolha a op�ao desejada do menu:\n\n");
  printf("\t1 -registrar nomes\n");
  printf("\t2 -consultar nomes\n");
  printf("\t3 -deletar nomes\n\n");
    printf("\t4 - sair do sistema\n\n");
  printf("Opcao: ");//fim do menu
   
   scanf("%d", &opcao);//ermazenando a escolha do usuaria
   
    system("cls"); // responsavel por linpara tela
   
   
   switch(opcao)//inicio da selecao do menu
{
	case 1://fun��o que substitui a fun��o if 
	registro();//chamada de funcoes
	break;//fun��o que encerra o loop
	
	case 2://fun��o que substitui a fun��o if 
	consulta();//fun��o consultar arquivo
		break;//fun��o que encerra o loop
		
		case 3://fun��o que substitui a fun��o if 
		deletar();//fun��o deletar arquivo
		break;//fun��o que encerra o loop
	
		case 4:
		printf("obrigada por utilizar o sistema!\n");
		return 0;
		break;

		
		default://palavra chave reservada do sistema para imprimir um valor invalido
			
			printf("esta opcao nao esta disponivel!\n");//retorna ao usu�rio esta mensagem de op��o n�o disponivel
			system("pause");//para a execu��o do programa
			break;//fun��o que encerra o loop
// fim de selecao
}
}
   
}
   

