//*****************
// Kilian Pfeifer *
// 1AHELS 21.10.21*
//  zeit_tasch.   *
//*****************

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sek;
    int ergs;
    int ergsp;
    int min;
    int ergm;
    int ergmp;
    int stun;
    int ergst;
    int ergstp;
    int tag;
    int ergtp;
    int ergt;
    int jar;
    int ergy;
    int ergyp;
    int ergw;
    int ergwp;
    int ergypp;
    int ergyppp;
    int stu;

    printf("Zeitrechner\n");
    printf("Fuer Sekunden bitte 1 eingeben!\n");
    printf("Fuer Minuten bitte 2 eingeben!\n");
    printf("Fuer Stunden bitte 3 eingeben!\n");
    printf("Eingabe:");
    int zahl;
    char zeich;
    scanf("%d",&zahl);
    switch  (zahl)

    {
case 1:     //sekundeneungabe
    printf("Bitte schreiben sie eine Sekunden-zahl:");
    scanf("%d",&sek);
    printf("Sekunden:%d\n", sek);
    ergm=sek/60;
    ergmp=sek%60;
    printf("Sekunden:%d\n", ergmp);
    ergst=ergm/60;
    ergstp=ergm%60;
    printf("Minuten:%d\n", ergstp);
    ergt=ergst/24;
    ergtp=ergst%24;
    printf("Stunden:%d\n", ergtp);
    ergw=ergt/7;
    ergwp=ergt%7;
    printf("Tage:%d\n", ergwp);
    ergy=ergw/52;
    ergyp=ergw%52;
    printf("wochen:%d\n", ergyp);
    ergypp=ergy/365;
    ergyppp=ergy%365;
    printf("Jahr:%d\n", ergyppp);
     break;

case 2:     //Minutenrechner
    printf("Bitte schreiben sie eine Minuten-zahl:");
    scanf("%d",&min);
    printf("Minuten:%d\n", min);
    ergm=min/60;
    ergmp=min%60;
    printf("Minuten:%d\n", ergmp);
    ergst=ergm/24;
    ergstp=ergm%24;
    printf("Stunden:%d\n", ergstp);
    ergt=ergst/7;
    ergtp=ergst%7;
    printf("Tage:%d\n", ergtp);
    ergw=ergt/52;
    ergwp=ergt%52;
    printf("Wochen:%d\n", ergwp);
    ergy=ergw/356;
    ergyp=ergw%356;
    printf("Jahre:%d\n", ergyp);

    break;

case 3:
     printf("Bitte schreiben sie eine Stunden-zahl:");
    scanf("%d",&stu);
    printf("Stunden:%d\n", stu);
    ergst=stu/24;
    ergstp=stu%24;
    printf("Stunden:%d\n", ergstp);
    ergt=ergst/7;
    ergtp=ergst%7;
    printf("Tage:%d\n", ergtp);
    ergw=ergt/52;
    ergwp=ergt%52;
    printf("Wochen:%d\n", ergwp);
    ergy=ergw/356;
    ergyp=ergw%356;
    printf("Jahre:%d\n", ergyp);

    }

    return 0;
}
