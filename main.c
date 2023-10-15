/******************************************************************************

                            Emre Üçbudak
                        KTÜ YAZILIM MÜHENDİSLİĞİ
                            SINIF NOT ORTALAMA
                                ARACI

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a;
    int b = 0;
    int c = 0;
    int x = 20;
    int y;
    int z = 0;
    do 
    {
       jump:
       printf ("Sayi Girin = ");
       scanf("%d", &y);
       if (y<0)
       {
           goto jump;
       }
       if (y>100)
       {
           goto jump;
       }
       z = z+y;
       printf("Toplam Not = %d\n", z);
       b++;
       a = z/b;
       printf ("Not Ortalaması = %d\n" , a);
       c++;
       printf("Notu Girilen Öğrenci Adedi = %d\n", c);
       
       x--;
       
    }   
    while (x!=0);

    return 0;
}
