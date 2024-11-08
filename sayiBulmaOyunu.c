// sayiBulmaOyunu.c
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void renk() {
    system("color a");
}

int main() {
    renk();
    srand(time(NULL));
    int random_digits[4], girilenSayi, sayi, artiSayac, eksiSayac;
    int puan = 100;

    // Benzersiz 4 basamaklı sayı oluştur
    do {
        random_digits[0] = 1 + rand() % 9; // Binler basamağı 1-9
        random_digits[1] = rand() % 10;
        random_digits[2] = rand() % 10;
        random_digits[3] = rand() % 10;
    } while (random_digits[0] == random_digits[1] || random_digits[0] == random_digits[2] || random_digits[0] == random_digits[3] ||
             random_digits[1] == random_digits[2] || random_digits[1] == random_digits[3] || random_digits[2] == random_digits[3]);

    sayi = random_digits[0] * 1000 + random_digits[1] * 100 + random_digits[2] * 10 + random_digits[3];
    printf("OYUN BAŞLADI\n");

    for (int sayac = 1; sayac <= 10; sayac++) {
        printf("Sayı gir: ");
        scanf("%d", &girilenSayi);

        // Girilen sayıyı kontrol et
        int digits[4] = { girilenSayi / 1000, (girilenSayi / 100) % 10, (girilenSayi / 10) % 10, girilenSayi % 10 };

        // Rakamların benzersiz ve sayının 4 basamaklı olup olmadığını kontrol et
        int valid = 1;
        for (int i = 0; i < 4; i++) {
            if (digits[i] < 0 || digits[i] > 9) valid = 0;
            for (int j = i + 1; j < 4; j++) {
                if (digits[i] == digits[j]) valid = 0;
            }
        }
        if (!valid || girilenSayi < 1000 || girilenSayi > 9999) {
            printf("%d.Tahmin==> Lütfen birbirinden farklı rakamlarla 4 haneli bir sayı giriniz.\n", sayac);
            puan -= 10;
            continue;
        }

        if (girilenSayi == sayi) {
            printf("Kazandınız! Puanınız: %d\n", puan);
            break;
        }

        artiSayac = eksiSayac = 0;
        for (int i = 0; i < 4; i++) {
            if (digits[i] == random_digits[i]) artiSayac++;
            else
                for (int j = 0; j < 4; j++)
                    if (digits[i] == random_digits[j]) eksiSayac--;
        }

        printf("%d.Tahmin==> Girilen sayı: %d\t+%d\t%d\n", sayac, girilenSayi, artiSayac, eksiSayac);
        puan -= 10;
    }

    if (girilenSayi != sayi) {
        printf("Kaybettiniz! Doğru sayı: %d, Puanınız: %d\n", sayi, puan);
    }

    system("pause");
    return 0;
}