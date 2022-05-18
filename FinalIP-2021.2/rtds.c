/* final IP - 2021.2*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

// Agenda Digital - Consultorio

typedef struct
{
   int horas, minutos;
} Hora;

typedef struct
{
   int dia; // 1-segunda, 2-terca, etc.
   Hora horario;
   char paciente[50];
} Agendamento;

Agendamento *mostreAgenda(Agendamento *listaAgendamentos)
{

   Agendamento *ptrAux = listaAgendamentos;
   int i, j, qtdDias = 1;

   printf("Agendamento Atualizado\n");
   // Mostrando os Dias da Semana
   for (i = 0; i <= 5; i++)
   {
      switch (qtdDias)
      {
      case 1:
         printf("---Segunda---\n");
         break;
      case 2:
         printf("---Terça---\n");
         break;
      case 3:
         printf("---Quarta---\n");
         break;
      case 4:
         printf("---Quinta---\n");
         break;
      case 5:
         printf("---Sexta---\n");
         break;
      default:
         printf("ERROR!\n\n");
         exit(-1);
         break;
      }
      // Mostrando os horario
      for (j = 8; j <= 18; j++)
      {
         printf("%d:", j);
         for (int k = 0; k <= 30; k + 30)
         {
            printf("%d", k);
         }
         printf("\n");
      }
      printf("\n");
      qtdDias++;
   }
}

Agendamento **carregaAgenda(int *qtd)
{

   Agendamento **p = NULL;
   FILE *arq = NULL;
   int i;

   arq = fopen("agenda.bin", "rb");
   if (arq == NULL)
   {
      printf("Erro ao abrir o arq\n");
      fclose(arq);
      exit(-1);
   }

   printf("Arquivo aberto com sucesso!\n");

   fseek(arq, 0, SEEK_END);

   (*qtd) = (ftell(arq)) / (sizeof(Agendamento));

   rewind(arq);

   p = (Agendamento **)malloc((*qtd) * sizeof(Agendamento *));
   if (p == NULL)
   {
      printf("Erro ao alocar\n");
      exit(-1);
   }

   for (i = 0; i < (*qtd); i++)
   {
      p[i] = (Agendamento *)malloc(sizeof(Agendamento));
      if (p[i] == NULL)
      {
         printf("Erro ao alocar\n");
         exit(-1);
      }

      fread(p[i], sizeof(Agendamento), 1, arq);
   }

   fclose(arq);

   return p;
}

Agendamento *agendaPaciente(Agendamento *listaAgendamentos, char *nomePaciente, int qtdCompetidores) {

   int i, flag = 0;
   Agendamento *p = listaAgendamentos;

   for (i = 0; (i < qtdCompetidores) && (flag == 0); i++)
   {
      if (strcmp(nomePaciente, p[i].paciente) == 0)
      {

         if (p[i].paciente == 0) {
            p[i].dia = (Agendamento *)malloc((p[i].paciente + 1) * sizeof(Agendamento));
            if (p[i].dia == NULL) {
               printf("Erro Alocação\n");
               exit(-1);
            }
         }
         else {
            p[i].dia = (Agendamento *)realloc((p[i].dia), (p[i].paciente + 1) * sizeof(Agendamento));
            if (p[i].dia == NULL)
            {
               printf("Sem memoria\n");
               exit(-1);
            }
         }
      }
   }

   return p;
}

 encaixaPaciente() {
}

void salvaAgenda(Agendamento *ptr, int qtd)
{
   FILE *arq = NULL;

   arq = fopen("agenda.bin", "wb");
   if (arq == NULL)
   {
      printf("Erro ao abrir o arq\n");
      fclose(arq);
      exit(-1);
   }
   fwrite(ptr, sizeof(Agendamento), qtd, arq);

   fclose(arq);
}

menu(int *verificador)
{
   int temp; // Guarda o valor inserido pelo usuario
   printf("\n --- Marcacao de Consulta --- \n\n");
   printf("1 - Horarios Disponiveis\n");
   printf("2 - Marcar Consulta\n");
   printf("3 - Horarios\n");
   printf("0 - Sair do Marcador\n");
   scanf("%d", &temp);

   (*verificador) = temp; // Mudando o valor de verificador
}

horariosDisponiveis()
{
}

void criarArquivo(FILE *arqAux, int *numQtd, int *lista)
{
   arqAux = fopen("agendamentos.bin", "wb");
   if (arqAux == NULL)
   {
      printf("Erro ao abrir o Arquivo");
      fclose(arqAux);
      exit(-1);
   }
   fwrite(lista, sizeof(int), *numQtd, arqAux);
   fclose(arqAux);
}

int main()
{

   Agendamento *listaAgendamentos = NULL;
   Hora aux;
   int verificador = 0, qtd, lista = 0;
   char paciente[50];
   FILE *arqAgendamentos = NULL;

   do
   {
      menu(&verificador);
      switch (verificador)
      {
      // Mostra os Horarios disponiveis
      case 1:
         listaAgendamentos = mostreAgenda(listaAgendamentos);
         break;
      // Marcar consulta
      case 2:
         listaAgendamentos = agendaPaciente(listaAgendamentos, , );
         break;
      // Mostrar os horarios
      case 3:

         break;
      // Caso inserido valor incompativel
      default:
         printf("ERROR! :[\n\n");
         exit(-1);
         break;
      }
      salvaAgenda(listaAgendamentos, &qtd, &lista);
   } while (verificador != 0);

   free(listaAgendamentos);

   return 0;
}