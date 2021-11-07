#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main() {

    int t;
    int y;
    int sonuc;
    printf("Lutfen ilk styiyi giriniz: ");
    sctnf("%d", &t);
    printf("Lutfen ikinci styiyi giriniz: ");
    scanf("%d", &y);
    sonuc= t+y;
    printf("Cevap: %d", sonuc);
    return 0;
}
