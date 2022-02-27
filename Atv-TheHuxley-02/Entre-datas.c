#include <stdio.h>
#include <stdlib.h>


int main() {

  	int anoi = 0, anof = 0, dias = 0, diai=0, diaf=0;
    int mesi=0, mesf =0, anoX = 0, mesX = 0;
    
    
    scanf("%d/%d/%d", &diai, &mesi, &anoi); 
    scanf("%d/%d/%d", &diaf, &mesf, &anof); 
    anoX = anoi + 1;

    if(anoi != anof){
        while(anoX < anof){
            if(anoX % 400 == 0 || anoX%100 != 0 && anoX%4 == 0){
            	dias = dias + 366;
			}
            else {
            	 dias = dias + 365;
			}
            anoX++;
        }
        mesX = mesi;
        while(mesX <= 12){
            if(mesX == mesi){
            	if(mesi <= 7 && mesi % 2 == 1) {
                	dias += 31 - (diai - 1);
                }
                else if (mesi <= 7 && mesi%2 == 0 && mesi != 2){
                    dias += 30 - (diai - 1);
				}
                else if(mesi == 2){
                    if(anoi % 400 == 0) {
                	    dias = dias + 29 - (diai - 1);
				    }
                    else if(anoi % 100 != 0 && anoi % 4 == 0){
					    dias += 29 - (diai - 1);
				    }
                    else{
					    dias += 28 - (diai - 1);
				    } 
                }
                else if(mesi > 7 && mesi%2== 0){
                    dias += 31 - (diai - 1);
				}
                else if(mesi > 7 && mesi%2== 1){
				    dias += 30 - (diai - 1);
				}
            }
            else { 
                if(mesX <= 7 && mesX%2 == 1){
                    dias += 31;
				}
                else if (mesX <= 7 && mesX %2 == 0 && mesX != 2) {
				    dias += 30;
				} 
                else if(mesX == 2){
                    if(anoi % 400 == 0) dias = dias + 29;
                    else if(anoi % 100 != 0 && anoi % 4 == 0) dias += 29;
                    else dias += 28;
                }
                else if (mesX > 7 && mesX % 2== 0){
			        dias += 31;
				}
                else if	(mesX > 7 && mesX%2== 1){
			        dias += 30;
				}
            }

            mesX++;
        }
        mesX = mesf;
        while (mesX >= 1){
            if(mesX == mesf){
                dias+= diaf;
            }
            else{ 
                if(mesX <= 7 && mesX % 2 == 1){
                    dias += 31;
				}
                else if (mesX <= 7 && mesX%2 == 0 && mesX != 2){
                	dias+=30;
				}
                else if(mesX == 2){
                    if(anof%400 == 0){
                        dias += 29;
					}
                    else if(anof%100 != 0 && anof%4 == 0){
                       dias += 29;	
					} 
                    else{
                    	dias += 28;
					} 
                }
                else if(mesX > 7 && mesX%2== 0){
                   dias+=31;	
				} 
                else if(mesX > 7 && mesX%2== 1){
                	dias+=30;
				}
            }   
        mesX--;   
        }
    /////////////////////////////////////////////////////////////////////////////////////////////////////////////
    } else {
            mesX = mesi;
        while(mesX < mesf){
            if(mesX == mesi){
                if(mesi <= 7 && mesi%2 == 1){
                dias+=31 - (diai - 1);	
				} 
                
                else if (mesi <= 7 && mesi%2 == 0 && mesi != 2){
                	dias+=30 - (diai - 1);
				}
                else if(mesi == 2){
                	
                if(anoi%400 == 0){
                	 dias = dias + 29 - (diai - 1);
				}
                else if(anoi%100 != 0 && anoi%4 == 0){
                      dias += 29 - (diai - 1);	
				}
                else {
                	dias += 28 - (diai - 1);
				}
                } 
                else if(mesi > 7 && mesi%2== 0) {
                dias+=31 - (diai - 1);	
				}
                else if(mesi > 7 && mesi%2== 1){
                	dias+=30 - (diai - 1);
				}
            } else{ 
                if(mesX <= 7 && mesX%2 == 1){
                	dias+=31;
				} 
                else if (mesX <= 7 && mesX%2 == 0 && mesX != 2){
                	dias+=30;
				} 
                else if(mesX == 2){
                    if(anoi%400 == 0){
                     dias = dias + 29;	
					} 
                    else if(anoi%100 != 0 && anoi%4 == 0){
                    	dias += 29;
					} 
                    else{
                    	 dias += 28;
					}
                }
                else if(mesX > 7 && mesX%2== 0){
                 dias+=31;	
				}
                else if(mesX > 7 && mesX%2== 1){
                	dias+=30;
				} 
            }
            
            mesX++;           
        }
        dias+= diaf; 
    } 
    printf(" %d", dias-1);
    return 0;
}