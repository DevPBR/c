#include <stdio.h>

main()
{
      int scelta=7, counter, giorni;
      char feb, bis;
      do{printf("Che giorno e' il primo del mese?");
      printf("\n0) Lun\n1) Mar\n2) Mer\n3) Gio\n4) Ven\n5) Sab\n6) Dom");
      printf("\nInserire la scelta: ");
      scanf("%d",&scelta);
      printf("\n\n");}while(scelta>6);
      counter=scelta;
      printf("E febbraio?? 'S' per il si 'N' per no \n");
      getchar();
      scanf("%c", &feb);//ottiene input se è febbraio
      printf("E un anno Bissestile ? 'S' per si 'N' per no ");
      getchar();
      scanf("%c", &bis);//riceve l'iscrizione se è bisestile
      
      if(feb == 'S' && bis == 'S')//controlla se è febbraio e se è bisestile
      {
      printf("\n\n Lun Mar Mer Gio Ven Sab Dom\n");
                      while(scelta>0){
                                 scelta--;
                                 printf("    ");
                                 }
      for(giorni = 1; giorni < 30; giorni++){
                 printf("%4d",giorni);
                 if((giorni+counter)%7==0)printf("\n");
                 }
      fflush(stdin);
      }
      else if(feb == 'S' && bis == 'N')//controlla se è febbraio e se è bisestile
      {
            printf("\n\n Lun Mar Mer Gio Ven Sab Dom\n");
                      while(scelta>0){
                                 scelta--;
                                 printf("    ");
                                 }
      for(giorni = 1; giorni < 29; giorni++){
                 printf("%4d",giorni);
                 if((giorni+counter)%7==0)printf("\n");
                 }
    
      fflush(stdin);
      }
      else if(feb == 'N' && bis == 'N')//controlla se è febbraio e se è bisestile
      {
           printf("\n\n Lun Mar Mer Gio Ven Sab Dom\n");
     
                      while(scelta>0){
                                 scelta--;
                                 printf("    ");
                                 }
      for(giorni = 1; giorni < 32; giorni++){
                 printf("%4d",giorni);
                 if((giorni+counter)%7==0)printf("\n");
                 }
      }
      else if(feb == 'N' && bis == 'S') //controlla se è febbraio e se è bisestile
      {
            printf("\n\n Lun Mar Mer Gio Ven Sab Dom\n");
                      while(scelta>0){
                                 scelta--;
                                 printf("    ");
                                 }
      for(giorni = 1; giorni < 32; giorni++){
                 printf("%4d",giorni);
                 if((giorni+counter)%7==0)printf("\n");
                 }
      }
      else
      {
            printf("Failed"); //Qualsiasi inserimento errato, comporterà un fallimento
      }
      return(0);  
}
