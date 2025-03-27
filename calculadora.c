int main()
{
    int a;
    int res=0;
    int b;
    int opcion 
    
    printf("menu");
    printf ("escoge:");
    printf("suma=1");
    printf("resta=2");
    printf("mult.=3");
    printf("division=4");
    printf("salida=0");
    scanf("%i", opcion);
    
    while(opcion  != 0);
    {
        printf("dame un numero: ");
        scanf("%d", a);
        printf("dame otro numero: ");
        scanf("%d", b);

    
        if(opción == 1)
        {
        res = a+b;
        }
    
        else 
        {
          if(opción == 2)
        {
            res = a-b;
        }
        else 
        {
          if (opción == 3)
        {
            res = a*b;
        }
    }
    else
    {
        if (opción == 4);
        { 
            res = a/b;
        }
    }

    printf("res"); 
}
