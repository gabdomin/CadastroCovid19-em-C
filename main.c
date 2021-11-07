/*PIM IV - UNIP*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

/*SISTEMA DE LOGIN*/
int opcao = 0;

int main ()
{
// DECLARAÇÃO DE PONTUAÇÃO E ACENTUAÇÃO EM PORTUGUÊS
  setlocale(LC_ALL, "Portuguese");

  //DECLARAÇÃO DE VARIÁVEIS
  char Login [30];
  char Senha [30];
  char RegLogin [30];
  char RegSenha [30];
  char Nome [30];
  char FuncHosp [30];
  char Confirma [1];

  // REGISTRO DE UM USUÁRIO
    printf("\n=================================");
    printf("\n====== REGISTRO DE USUÁRIO ======");
    printf("\n=================================");

    printf("\n\n=================================");
    printf("\n=== PREENCHA TODOS OS CAMPOS ====");
    printf("\n=================================");

  // ENTRADA DAS INFORMAÇÕES DIGITADAS PELO USUÁRIO
    printf("\n\nPrimeiro Nome: ");
      scanf("%s", Nome);

    printf("\nFunção no Hospital: ");
      scanf("%s", FuncHosp);

    printf("\n\nLogin: ");
      scanf("%s", RegLogin);

    printf("\n\nSenha: ");
      scanf("%s", RegSenha);

  //FINAL DO CADASTRO DAS INFORMAÇÕES
    printf("\n\n====== USUÁRIO CADASTRADO ======");

    printf("\n\nAPERTE '5' PARA CONTINUAR: ");
      scanf("%s", Confirma);

  system("cls"); // LIMPAR A TELA PARA A PÁGINA DE LOGIN

  // TELA DE LOGIN COM AS INFORMAÇÕES REGISTRADAS
    printf("\n=================================");
    printf("\n========= TELA DE LOGIN =========");
    printf("\n=================================");

    printf("\n\n=================================");
    printf("\n=== PREENCHA TODOS OS CAMPOS ====");
    printf("\n=================================");

    printf("\n\nLogin: ");
      scanf("%s", Login);

    printf("\nSenha: ");
      scanf("%s", Senha);

  // COMPARAÇÃO DO LOGIN E SENHA DIGITADOS COM OS REGISTRADOS NO COMEÇO
  while((strcmp (Login, RegLogin) != 0) || (strcmp(Senha,RegSenha) != 0))
  {
  //SE FOREM DIFERENTES ELE VOLTA PARA A PARTE DE LOGIN
    printf("\n\n====== LOGIN E/OU SENHA INCORRETOS ======\n\n");

  system("pause");
  system("cls");

    printf("\n=================================");
    printf("\n========= TELA DE LOGIN =========");
    printf("\n=================================");

    printf("\n\n=================================");
    printf("\n=== PREENCHA TODOS OS CAMPOS ====");
    printf("\n=================================");

    printf("\n\n======== TENTE NOVAMENTE ========");

    printf("\n\nLogin: ");
      scanf("%s", Login);

    printf("\nSenha: ");
      scanf("%s", Senha);
  }
  // SE OS DADOS FOREM IGUAIS ELE LIMPA A TELA PARA A PRÓXIMA PARTE
  system("cls");

  //MENSAGEM DE BOAS VINDAS USANDO O NOME REGISTRADO NO COMEÇO
    printf("======= Seja Bem-Vindo %s ========\n\n\n", Nome);

    printf("\nAPERTE '5' PARA VER O MENU PRINCIPAL: ");
      scanf("%s", Confirma);

  system("cls");

    /*SISTEMA DO MENU PRINCIPAL*/
    system("cls");
    int num=0;
    char nome[30];
    char dnasc[30];
    char end[30];
    char cep[30];
    char cpf[30];
    char email[30];
    char tel[30];
    char datadiag[30];
    char comorb[30];

while(num!=6)
{
    system("cls");
    printf("====================================\n");
    printf("========== MENU PRINCIPAL ==========\n");
    printf("====================================\n\n");
    printf("1. Cadastrar paciente: \n");
    printf("2. Consultar dados do paciente: \n");
    printf("3. Modificar dados do paciente: \n");
    printf("4. Excluir dados do paciente: \n");
    printf("5. Dados do sistema: \n");
    printf("6. Sair do sistema: \n\n");
    printf("Digite a opção: ");
      scanf("%d", &num);

    /*SISTEMA DE CADASTRO DE PACIENTES*/
    switch(num)
    {

    case 1:
        system("cls");
        printf("====================================\n");
        printf("====== CADASTRO DE PACIENTES =======\n");
        printf("====================================\n\n");
        printf("Nome completo: \n");
        fflush(stdin);
        scanf("%[^\n]s", nome);

        printf("Data de Nascimento: \n");
        fflush(stdin);
        scanf("%[^\n]s", dnasc);

        printf("Endereço: \n");
        fflush(stdin);
        scanf("%[^\n]s", end);

        printf("CEP: \n");
        fflush(stdin);
        scanf("%[^\n]s", cep);

        printf("CPF: \n");
        fflush(stdin);
        scanf("%[^\n]s", cpf);

        printf("Email: \n");
        fflush(stdin);
        scanf("%[^\n]s", email);

        printf("Telefone: \n");
        fflush(stdin);
        scanf("%[^\n]s", tel);

        printf("Data do Diagnóstico: \n");
        fflush(stdin);
        scanf("%[^\n]s", datadiag);

        printf("Comorbidade: \n");
        fflush(stdin);
        scanf("%[^\n]s", comorb);

        printf("\n\n");
        printf("Cadastro realizado com sucesso...\n");
        system("pause");
    break;

/*ADICIONAR UMA FUNÇÃO, PARA ASSIM QUE O CADASTRO FOR REALIZADO
 O SISTEMA JA INFORMA SE É OU NAO UM PACIENTE DO GRUPO DE RISCO
 E TAMBÉM JÁ REALIZAR A SAIDA DO ARQUIVO .TXT*/

    /*SISTEMA DE CONSULTA DE PACIENTES*/
    case 2:
        system("cls");
        printf("====================================\n");
        printf("====== CONSULTA DE PACIENTES =======\n");
        printf("====================================\n\n");
        printf("Nome completo: %s \n", nome);
        printf("Data de Nascimento: %s \n", dnasc);
        printf("Endereço: %s \n", end);
        printf("CEP: %s \n", cep);
        printf("CPF: %s \n", cpf);
        printf("Email: %s \n", email);
        printf("Telefone: %s \n", tel);
        printf("Data do Diagnóstico: %s \n", datadiag);
        printf("Comorbidade: %s \n\n", comorb);
        system("pause");
    break;

    /*SISTEMA DE MODIFICAR DADOS DE PACIENTES*/
    case 3:
        system("cls");
        int modifi;
        printf("====================================\n");
        printf("======= MODIFICAR CADASTROS ========\n");
        printf("====================================\n\n");
        printf("1. Modificar Nome: \n");
        printf("2. Modificar Data de Nascimento: \n");
        printf("3. Modificar Endereço: \n");
        printf("4. Modificar CEP: \n");
        printf("5. Modificar CPF: \n");
        printf("6. Modificar Email: \n");
        printf("7. Modificar Telefone: \n");
        printf("8. Modificar Data do Diagnóstico: \n");
        printf("9. Modificar Comorbidade: \n");
        printf("10. Modificar todos os dados: \n");
        scanf("%d", &modifi);

    if (modifi==1)
        {
            printf("Modificar Nome: \n");
            scanf("%s", nome);
        }

    else if(modifi==2)
        {
            printf("Data de Nascimento: \n");
            scanf("%s", dnasc);
        }

    else if(modifi==3)
        {
            printf("Modificar Endereço: \n");
            scanf("%s", end);
        }

    else if(modifi==4)
        {
            printf("Modificar CEP: \n");
            scanf("%s", cep);
        }

    else if(modifi==5)
        {
            printf("Modificar CPF: \n");
            scanf("%s", cpf);
        }

    else if(modifi==6)
        {
            printf("Modificar Email: \n");
            scanf("%s", email);
        }

    else if(modifi==7)
        {
            printf("Modificar Telefone: \n");
            scanf("%s", tel);
        }

    else if(modifi==8)
        {
            printf("Modificar Data do Diagnóstico: \n");
            scanf("%s", datadiag);
        }

    else if(modifi==9)
        {
            printf("Modificar Comorbidade: \n\n");
            scanf("%s", comorb);
        }

    else if(modifi==10)
        {
            printf("CADASTRO:\n\n");
            printf("Nome completo: \n");
            fflush(stdin);
            scanf("%[^\n]s", nome);

            printf("Data de Nascimento: \n");
            fflush(stdin);
            scanf("%[^\n]s", dnasc);

            printf("Endereço: \n");
            fflush(stdin);
            scanf("%[^\n]s", end);

            printf("CEP: \n");
            fflush(stdin);
            scanf("%[^\n]s", cep);

            printf("CPF: \n");
            fflush(stdin);
            scanf("%[^\n]s", cpf);

            printf("Email: \n");
            fflush(stdin);
            scanf("%[^\n]s", email);

            printf("Telefone: \n");
            fflush(stdin);
            scanf("%[^\n]s", tel);

            printf("Data do Diagnóstico: \n");
            fflush(stdin);
            scanf("%[^\n]s", datadiag);

            printf("Comorbidade: \n");
            fflush(stdin);
            scanf("%[^\n]s", comorb);
        }

    else
        {
            printf("Opção Inválida");
        }

    system("pause");
    break;

    /*SISTEMA DE EXCLUIR DADOS DE PACIENTES*/
    case 4:
        system("cls");
        printf("====================================\n");
        printf("======= EXCLUSÃO DE CADASTRO =======\n");
        printf("====================================\n\n");
        int excluir;
        printf("Nome: %s \n", nome);
        printf("Data de Nascimento: %s \n", dnasc);
        printf("Endereço: %s \n", end);
        printf("CEP: %s \n", cep);
        printf("CPF: %s \n", cpf);
        printf("Email: %s \n", email);
        printf("Telefone: %s \n", tel);
        printf("Data do Diagnóstico: %s \n", datadiag);
        printf("Comorbidade: %s \n", comorb);

        printf("Excluir dados do cliente: \n\n");
        printf(" 1. EXCLUIR...\n 2. NÃO EXCLUIR...\n\n");
        scanf("%d" ,&excluir);

    if(excluir == 1)
        {
            memset(nome,0,sizeof(nome));
            memset(dnasc,0,sizeof(dnasc));
            memset(end,0,sizeof(end));
            memset(cep,0,sizeof(cep));
            memset(cpf,0,sizeof(cpf));
            memset(email,0,sizeof(email));
            memset(tel,0,sizeof(tel));
            memset(datadiag,0,sizeof(datadiag));
            memset(comorb,0,sizeof(comorb));
            printf("Todos os dados foram excluidos! \n\n");
        }

    else
        {
            printf("Dados não excluidos. \n\n");
        }

    system("pause");
    break;

    /*SISTEMA DE EXIBIR DADOS*/
    case 5:
        system("cls");
        printf("====================================\n");
        printf("========= DADOS DO SISTEMA =========\n");
        printf("====================================\n\n");
        printf("NOME DOS PARTICIPANTES \n\n");
        printf("GABRIEL SILVA DOMINGUES - MATRÍCULA: 0446212\n\n");
        printf("PIM IV - ANÁLISE E DESENVOLVIMENTO DE SISTEMAS - UNIP \n\n");

    system("pause");
    break;
    }

}

    system("pause");

    return 0;
}







