#include <stdio.h>
#include <time.h> //necessário para usar localtime() e struct tm
int main(void)
{
    
  struct tm *date;     
  
  time_t segundos;
  
  time(&segundos);   

  date = localtime(&segundos);  

  printf("\nHoje e dia %i do mes %i do ano de %i \n\n", date->tm_mday, date->tm_mon+1, date->tm_year+1900);  
  return 0;
}