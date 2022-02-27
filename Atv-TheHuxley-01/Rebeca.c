#include <stdio.h>
#include <math.h>

int main() {

    int premio, porc1, porc2, porc3; 
    float x, y, z, dinheiro; // x, y, z para valores
    
    scanf("%d", &premio);
    scanf("%d", &porc1);
    scanf("%d", &porc2);
    scanf("%d", &porc3);
    
    dinheiro = 3;
    
    x = (premio*porc1)/100.0;
    y = (premio*porc2)/100.0;
    z = (premio*porc3)/100.0;
    
    if ((x == (int)x) && (y == (int)y) && (z == (int)z)){
        printf("Cada homem ficou com %.0f, %.0f e %.0f reais, respectivamente\n", x, y, z);
        dinheiro = dinheiro + (premio-(x+y+z)); 
    }
    else {
        dinheiro -= 1;
        premio += 1; 
        x = (premio*porc1)/100.0;
        y = (premio*porc2)/100.0;
        z = (premio*porc3)/100.0;
        
        if ((x == (int)x) && (y == (int)y) && (z == (int)z)){ 
            if ((premio-(x+y+z)>=2)){
                dinheiro += (premio-(x+y+z));
                printf("Cada homem ficou com %.0f, %.0f e %.0f reais, respectivamente\n", x, y, z);
            }
            else{
                printf("Nao foi dessa vez que Rebeka pode ajudar...\n");
            }
        } 
        else {
            dinheiro -= 1;
            premio += 1;
            x = (premio*porc1)/100.0;
            y = (premio*porc2)/100.0;
            z = (premio*porc3)/100.0;
            if ((x == (int)x) && (y == (int)y) && (z == (int)z)){
                if ((premio-(x+y+z)>=3)){
                    dinheiro += (premio-(x+y+z));
                    char l1, l2, l3;
                    scanf("%s", &l1);
                    scanf("%s", &l2);
                    scanf("%s", &l3);
                    printf("Cada homem ficou com %.0f, %.0f e %.0f reais, respectivamente\n", x, y, z);
                    int soma = 0;
                    soma = ((l1 - 96)+(l2 - 96)+(l3 - 96));
                    printf("%d\n", soma);
                }
                else{
                    printf("Nao foi dessa vez que Rebeka pode ajudar...\n");
                }
            }
            else{
                dinheiro -= 1;
                premio += 1; 
                x = (premio*porc1)/100.0; 
                y = (premio*porc2)/100.0;
                z = (premio*porc3)/100.0;
                if ((x == (int)x) && (y == (int)y) && (z == (int)z)){
                    if ((premio-(x+y+z)>=4)){
                    dinheiro += (premio-(x+y+z));
                            int i1, i2, i3, x=0; 
                            scanf("%d", &i1);
                            scanf("%d", &i2);
                            scanf("%d", &i3);
                            printf("Cada homem ficou com %.0f, %.0f e %.0f reais, respectivamente\n", x, y, z);
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
    if (dinheiro >= 7){
        printf("Ela conseguiu! Rebeka voltou para casa e apanhou da mae por sumir noite passada!\n");
    }
    else  if (dinheiro < 7){
        printf("E parece que Rebeka vai ter que voltar andando...\n");
    }    
    
    return 0;
}