#include "stdio.h"
#include "conio.h"
main()
{
 float yol,hiz,sure;
 printf("Km'yi giriniz: ");scanf("%f",&yol);
 printf("Ortalama hizinizi giriniz(km/sa): ");scanf("%f",&hiz);
 sure=yol/hiz;
 printf("Bu yolu alis sureniz:%1.2f saat",sure);
 getch();
}
