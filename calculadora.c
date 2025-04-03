//Práctica 6
// Ana Tonalli Hernández Atlatenco 


#include<stdio.h>

int main()
{
    int a;
    int res =0;
    int b;
    int opcion;
    
    {
        
     printf("menu:\n");
     printf("escoge una opcion: \n");
     printf("suma = 1 \n");
     printf("resta = 2 \n");
     printf("mul. = 3 \n");
     printf("división = 4 \n");
     printf("salida = 0 \n");
    
     scanf("%d", &opcion);
     
    while(opcion !=0);
    {
        printf("dame un numero: ");
        scanf("%d", &a);
        printf("dame otro numero: ");
        scanf("%d", &b);

    
        if(opcion == 1)
        {
           res = a+b;
        }
        else 
        {
           if(opcion == 2)
           {
              res = a-b;
           }
           else 
              {
              if (opcion == 3)
              {
                 res = a*b;
              }
              else
                {
                if (opcion == 4);
                { 
                   res = a/b;
                }
               
     printf("el resultado final es: %d \n", res);
    
     printf("menu:\n");
     printf("escoge \n");
     printf("suma = 1 \n");
     printf("resta = 2 \n");
     printf("mul. = 3 \n");
     printf("división = 4 \n");
     printf("salida = 0 \n");
    
     scanf("%d", &opcion);
    }
    
    return 0;
}
