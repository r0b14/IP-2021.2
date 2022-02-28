/* Rebeka e a volta para casa*/

#include <stdio.h>
int main()
{
    int premio, porc1, porc2, porc3; 
    float x1, x2, x3, money; // x1, x2, x3 para valores
    
    
    scanf("%d", &premio);
    scanf("%d", &porc1);
    scanf("%d", &porc2);
    scanf("%d", &porc3);
    
    money = 3;
    
    x1 = (premio*porc1)/100.0; // Porcentagem de cada
    x2 = (premio*porc2)/100.0;
    x3 = (premio*porc3)/100.0;
    
    if ((x1 == (int)x1) && (x2 == (int)x2) && (x3 == (int)x3)){
        printf("Cada homem ficou com %.0f, %.0f e %.0f reais, respectivamente\n", x1, x2, x3);
        money = money + (premio-(x1+x2+x3)); 
    }
    else {
        money -= 1;
        premio += 1; // Rebeka adiiona 1 real
        x1 = (premio*porc1)/100.0; // Porcentagem de cada
        x2 = (premio*porc2)/100.0;
        x3 = (premio*porc3)/100.0;
        
        if ((x1 == (int)x1) && (x2 == (int)x2) && (x3 == (int)x3)){ // condi??o para inteiro
            if ((premio-(x1+x2+x3)>=2)){
                money += (premio-(x1+x2+x3));
                printf("Cada homem ficou com %.0f, %.0f e %.0f reais, respectivamente\n", x1, x2, x3);
            }
            else{
                printf("Nao foi dessa vez que Rebeka pode ajudar...\n");
            }
        } 
        else {
            money -= 1;
            premio += 1; // Rebeka adiiona 2 reais
            x1 = (premio*porc1)/100.0; // Porcentagem de cada
            x2 = (premio*porc2)/100.0;
            x3 = (premio*porc3)/100.0;
            if ((x1 == (int)x1) && (x2 == (int)x2) && (x3 == (int)x3)){
                if ((premio-(x1+x2+x3)>=3)){
                    money += (premio-(x1+x2+x3));
                    char l1, l2, l3; // Char a serem lidas
                    scanf("%s", &l1);
                    scanf("%s", &l2);
                    scanf("%s", &l3);
                    printf("Cada homem ficou com %.0f, %.0f e %.0f reais, respectivamente\n", x1, x2, x3);
                    int soma = 0;
                    soma = ((l1 - 96)+(l2 - 96)+(l3 - 96));
                    printf("%d\n", soma);
                }
                else{
                    printf("Nao foi dessa vez que Rebeka pode ajudar...\n");
                }
            }
            else{
                money -= 1;
                premio += 1; // Rebeka adiiona 3 reais
                x1 = (premio*porc1)/100.0; // Porcentagem de cada
                x2 = (premio*porc2)/100.0;
                x3 = (premio*porc3)/100.0;
                if ((x1 == (int)x1) && (x2 == (int)x2) && (x3 == (int)x3)){
                    if ((premio-(x1+x2+x3)>=4)){
                    money += (premio-(x1+x2+x3));
                            int i1, i2, i3, x=0; // idade a serem lidas
                            scanf("%d", &i1);
                            scanf("%d", &i2);
                            scanf("%d", &i3);
                            printf("Cada homem ficou com %.0f, %.0f e %.0f reais, respectivamente\n", x1, x2, x3);
                            if ( (i1%3) == 0){
                                x += (i1/3);
                            } 
                            if ((i2%3) == 0){
                                x += (i2/3);
                            } 
                            if ((i3%3) == 0){
                                x += (i3/3);
                            } 
                            if(x!=0){
                                printf("%d\n", x);
                            }
                        } else {
                            printf("Nao foi dessa vez que Rebeka pode ajudar...\n");
                            }
                    } else {
                    printf("Nao foi dessa vez que Rebeka pode ajudar...\n");
                    }
                }
                
        
            }
        }
    if (money >= 7){ // Condi??o para volta de Rebeka
        printf("Ela conseguiu! Rebeka voltou para casa e apanhou da mae por sumir noite passada!\n");
    }
    else  if (money < 7){
        printf("E parece que Rebeka vai ter que voltar andando...\n");
    }    
    
    return 0;
}


