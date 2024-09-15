#include <stdio.h> // Biblioteca de comunicação com o usuário
#include <stdlib.h> // Biblioteca de alocação de espaço em memória
#include <locale.h> // Biblioteca de alocações de texto por região
#include <string.h> //Biblioteca responsável por cuidar das string

void registro() //funçaõ responsável por registrar os usuários no sistema

{
    //inicío criação de variáveis/string
    char arquivo[40];
    char cpf[40];
    char nome[40];
    char sobrenome[40];
    char cargo[40];
    //inicío criação de variáveis/string
    
    printf("Digite o CPF a ser cadastrado: "); //coletando informação do usuário
    scanf("%s", cpf); //%s refere-se a string
    
    strcpy(arquivo, cpf); // Responsável por copiar os valores das string
    
    FILE  *file;// Cria o arquivo
    file= fopen(arquivo, "w"); // Cria o arquivo e "w" significa escrever
    fprintf(file,cpf); // Salva o valor da variável
    fclose(file); // Fecha o arquivo
    
    file= fopen (arquivo, "a");
    fprintf (file, ",");
    fclose(file);
    
    printf ("Digite o nome a ser cadastrado: ");
    scanf("%s", nome);
    
    file= fopen(arquivo, "a");
    fprintf(file,nome);
    fclose(file);
    
    file= fopen (arquivo, "a");
    fprintf (file, ",");
    fclose(file);
    
    printf ("Digite o sobrenome a ser cadastrado: ");
    scanf("%s", sobrenome);
    
    file= fopen(arquivo, "a");
    fprintf(file,sobrenome);
    fclose(file);
    
    file= fopen (arquivo, "a");
    fprintf (file, ",");
    fclose(file);
    
    printf ("Digite o cargo a ser cadastrado: ");
    scanf("%s", cargo);
    
    file= fopen(arquivo, "a");
    fprintf(file,cargo);
    fclose(file);
    
    file= fopen (arquivo, "a");
    fprintf (file, ",");
    fclose(file);
    
    system ("read");
    
}

void consulta()
{
    setlocale (LC_ALL, "Portuguese"); // definindo a linguagem
    
    char cpf[40];
    char conteudo[200];
    
    printf("Digite o CPF a ser consultado: ");
    scanf("%s", cpf);
    
    FILE  *file;
    file= fopen(cpf,"r"); //"r" significa ler
    
    if (file == NULL)
{
        printf("Não foi possível abrir o arquivo, não localizado! \n");
}
    while(fgets(conteudo,200,file) !=NULL)
{
        printf("\nEssas são as informações do usuário: ");
        printf("%s",conteudo);
        printf("\n\n");
        
        system ("read"); // pausa no sistema MAC
}
          
}

void deletar()
{
    char cpf[40];
    
    printf("Digite o CPF do usuário a ser deletado: ");
    scanf("%s",cpf);
    
    remove (cpf);
    
    FILE  *file;
    file= fopen(cpf,"r");
    
    if (file == NULL)
{
        printf("O usuário não se encontra no sistema! \n");
    
        system ("read");
}
    
}
    
    int main()
{
        int opcao=0; // definindo variáveis
        
        int laco=1;
        
        for(laco=1;laco=1;)
            
        {
            
            system ("clear");
            
            setlocale (LC_ALL, "Portuguese"); // definindo a linguagem
            
            printf ("### Cartório da EBAC ###\n\n"); // início do menu
            printf ("Escolha a opção desejada do menu:\n\n");
            printf ("\t1 Registrar  nomes\n");
            printf ("\t2 Consultar nomes\n");
            printf ("\t3 Deletar nomes\n"); // fim do menu
            printf ("\t4 Sair do sistema\n");
            
            scanf("%d", &opcao); // armazenando a escolha do usuário
            
            system ("clear"); // comando para limpar a tela
            
            switch(opcao)
            {
                case 1:
                    registro();
                    break;
                    
                case 2:
                    consulta();
                    break;
                    
                case 3:
                    deletar();
                    break;
                    
                case 4:
                    printf ("Obrigado por utilizar o sistema!\n");
                    return 0;
                    break;
                    
                default:
                    printf ("Essa opção não está disponível\n");
                    system ("read"); // fim da seleção
                    break;
                    
            }
        }
    }

