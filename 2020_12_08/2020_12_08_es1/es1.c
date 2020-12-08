/*
Enrico Ribiani 3AUB 2020-12-07
La paga oraria di un lavoratore varia in base all’ora del giorno:
Dalle 8.00 alle 16.00 Paga base →
Dalle 16.01 alle 20.00 25% extra →
Dalle 20.01 alle 00.00 50% extra →
Dalle 00.01 alle 7.59 100% extra →
All’utente viene richiesto il numero di ore lavorare per ogni fascia oraria ed il
programma deve visualizzare la paga totale e se il lavoratore ha fatto più ore
extra che base.
*/
#include <stdio.h>
int main(){
  int ore_base, ore_25, ore_50, ore_100, sum_extra, paga_ore_base,percent;
  float sum_paga;
  printf("__________ inizio programma __________\ninserire paga per un'ora base\n");
  scanf("%d", &paga_ore_base);
  percent=paga_ore_base/100; //costante per calcolare la paga extra
  for(int k=0;k<4;k++)
  {//inizio for
  switch (k) {//inizio switch per calcolare ogni fascia oraria
    case 0:
    printf("inserire ore di lavoro svolte nella fascia\noraria che va dalle 8.00 alle 16.00\n");
    scanf("%d", &ore_base);
    sum_paga=sum_paga+(ore_base*paga_ore_base);
    break;
    case 1:
    printf("inserire ore di lavoro svolte nella fascia\noraria che va dalle 16.01 alle 20.00\n");
    scanf("%d", &ore_25);
    sum_paga=sum_paga+(ore_25*(paga_ore_base+(percent*25)));
    sum_extra=sum_extra+ore_25;
    break;
    case 2:
    printf("inserire ore di lavoro svolte nella fascia\noraria che va dalle 20.01 alle 00.00\n");
    scanf("%d", &ore_50);
    sum_paga=sum_paga+(ore_50*(paga_ore_base+(percent*50)));
    sum_extra=sum_extra+ore_50;
    break;
    case 3:
    printf("inserire ore di lavoro svolte nella fascia\noraria che va dalle 00.01 alle 7.59\n");
    scanf("%d", &ore_100);
    sum_paga=sum_paga+(ore_100*(paga_ore_base*2));
    sum_extra=sum_extra+ore_100;
    break;
      }  //fine switch
  }//fine for
//output
  printf("la paga totale è di %.2f euro\n", sum_paga);
  if(sum_extra>ore_base)
  {
    printf("le ore extra (%d) sono più di quelle base (%d)\n",sum_extra,ore_base);
  }//fine if
  printf("__________ fine programma __________\n");
}
