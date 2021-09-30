#include <stdio.h>
#include <string.h>  
#include <mpi.h>     

int main(void) {
   /* Número de processos */
   int comm_sz; 
   
   /* Rank   do processos */
   int my_rank; 

   /* Inicia MPI */
   MPI_Init(NULL, NULL); 

   /* Obter número de processos */
   MPI_Comm_size(MPI_COMM_WORLD, &comm_sz); 

   /* Obter rank (id) do processo */
   MPI_Comm_rank(MPI_COMM_WORLD, &my_rank); 

   printf("Número de processos: %d | Rank do processos corrente: %d \n", comm_sz, my_rank);

   /* Encerra MPI */
   /* Liberar buffer, espaço alocado, etc */
   MPI_Finalize(); 

   return 0;
}  /* main */
