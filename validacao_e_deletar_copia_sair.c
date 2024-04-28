#include <stdio.h>//BIBLIOTECA DE COMUNICAÇAO COM O SEU USUARIO
#include <stdlib.h>//biblioteca de alocacao de espaço e memoria
#include <locale.h>//biblioteca de alcaçoes de texto por regiao
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
fprintf(file,",");//função que retorna o numero de bytes ou numero negativo se ocorrer erro
fclose(file);// função que determina o arquivo a ser fechado

printf("digite o nome a ser cadastrado:");//coletando informacao do usuario
scanf("%s",nome);//função responsavel por ler os dados e atribuir a uma variável

file = fopen (arquivo,  "a");//retorna um ponteiro para acessar um arquivo aberto
fprintf(file,nome);//função que retorna o numero de bytes ou numero negativo se ocorrer erro
fclose( file);// função que determina o arquivo a ser fechado
	
file =fopen(arquivo, " a ");//retorna um ponteiro para acessar um arquivo aberto
fprintf(file,",");//função que retorna o numero de bytes ou numero negativo se ocorrer erro
fclose(file);// função que determina o arquivo a ser fechado

printf("digite o sobre nome a ser cadastrado:");//coletando informacao do usuario
scanf("%s", sobrenome);//função responsavel por ler os dados e atribuir a uma variável

file= fopen(arquivo , "a"),//retorna um ponteiro para acessar um arquivo aberto
fprintf(file,sobrenome);//função que retorna o numero de bytes ou numero negativo se ocorrer erro
fclose(file);// função que determina o arquivo a ser fechado


	
printf("Digite o cargo a ser cadastrado :");//coletando informacao do usuario
scanf("%s", cargo );//função responsavel por ler os dados e atribuir a uma variável

file=fopen(arquivo, "a");//retorna um ponteiro para acessar um arquivo aberto
fprintf(file,cargo);//função que retorna o numero de bytes ou numero negativo se ocorrer erro
fclose(file);// função que determina o arquivo a ser fechado

system ("pause");//para a execução do programa	
	
}


int consulta()//declarando a variável consulta
{
char cpf[40];
char conteudo[200];

printf ("Digite o cpf a ser consultado: ");//coletando informacao do usuario
scanf("%s",cpf );//função responsavel por ler os dados e atribuir a uma variável
 
FILE *file; //conjunto de estruturas logica
file = fopen(cpf,"r");//retorna um ponteiro para acessar um arquivo aberto

if(file == NULL)//declarando fubnção de arquivo nulo
{
printf(" Nao foi possivel abrir o arquivo, nao localizado!./n");//retorna ao usuário esta informação
}

while(fgets(conteudo, 200 , file)!=NULL)//loço de repetição
 {
 printf("\nEssas sao as informaçoes do usuario: ");//retorna ao usuário esta informação
printf("%s",conteudo);//retorna ao usuário esta informação
printf("\n\n");//retorna ao usuário esta informação

}

system("pause");//para a execução do programa


	
}


int deletar()//declarando a variável deletar
{
char cpf [40];

printf("Digite o cpf do usuario a ser deletado: ");//coletando informacao do usuario
scanf("%s",cpf);//função responsavel por ler os dados e atribuir a uma variável

remove(cpf);//função para remover está informação

FILE *file;//conjunto de estruturas logica
file = fopen(cpf,"r");//retorna um ponteiro para acessar um arquivo aberto

  if(file == NULL)//declarando fubnção de arquivo nulo
{
	printf("o usuario nao se encontra no sistema!.\n");//coletando informacao do usuario
	system("pause");//para a execução do programa
	
}


	
}




int main()//declarando a variável main
{
	int opcao=0;//definindo as variaveis
	int laco=1;//definindo o laço
	
	for(laco=1;laco=1;)//responsável por delimitar a quantidade de repetição do laço

{
	system("cls");//responsavel por limpar a tela



  setlocale(LC_ALL, "PORTUGUESE");//definindo a linguagem
  
  printf("####cartorio da ebac ###\n\n");//inicio do menu
  printf("escolha a opçao desejada do menu:\n\n");
  printf("\t1 -registrar nomes\n");
  printf("\t2 -consultar nomes\n");
  printf("\t3 -deletar nomes\n\n");
    printf("\t4 - sair do sistema\n\n");
  printf("Opcao: ");//fim do menu
   
   scanf("%d", &opcao);//ermazenando a escolha do usuaria
   
    system("cls"); // responsavel por linpara tela
   
   
   switch(opcao)//inicio da selecao do menu
{
	case 1://função que substitui a função if 
	registro();//chamada de funcoes
	break;//função que encerra o loop
	
	case 2://função que substitui a função if 
	consulta();//função consultar arquivo
		break;//função que encerra o loop
		
		case 3://função que substitui a função if 
		deletar();//função deletar arquivo
		break;//função que encerra o loop
	
		case 4:
		printf("obrigada por utilizar o sistema!\n");
		return 0;
		break;

		
		default://palavra chave reservada do sistema para imprimir um valor invalido
			
			printf("esta opcao nao esta disponivel!\n");//retorna ao usuário esta mensagem de opção não disponivel
			system("pause");//para a execução do programa
			break;//função que encerra o loop
// fim de selecao
}
}
   
}
   

