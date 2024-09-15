#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Konsolun rengini değiştiren fonksiyon
void renk() {
    system("color a");
}

// Telif bilgilerini yazdıran fonksiyon
void copyright() {
    printf("\n Yapımcı : Hamza ORTA\n");
    printf(" Tarih    : 2021\n");
}

int main() {
    renk();  // Konsol rengi değiştirilir
    int birler, onlar, yuzler, binler, artiSayac = 0, eksiSayac = 0;
    int random1, random2, random3, random4, girilenSayi, sayi, binlerDegisken;
    
    srand(time(NULL));  // Rastgele sayı üretimi için zaman tabanlı tohum
    menu: 
    random1 = rand() % 9;     // Birler basamağı için rastgele sayı
    random2 = rand() % 9;     // Onlar basamağı için rastgele sayı
    random3 = rand() % 9;     // Yüzler basamağı için rastgele sayı
    random4 = 1 + rand() % 8; // Binler basamağı için 1-8 arasında rastgele sayı

    // Eğer rakamlardan herhangi biri tekrar ediyorsa yeniden sayı üret
    if (random1 == random2 || random1 == random3 || random1 == random4 ||
        random2 == random3 || random2 == random4 || random3 == random4) {
        goto menu;
    } else {
        // 4 haneli rastgele sayıyı oluştur
        sayi = random1 + (random2 * 10) + (random3 * 100) + (random4 * 1000);
        printf("OYUN BASLADI\n");

        int sayac = 1, puan = 100;
        for (sayac = 1; sayac <= 10; sayac++) {
            printf("Sayi gir\n");
            scanf("%d", &girilenSayi);

            // Girilen sayının basamaklarını ayırma işlemi
            birler = girilenSayi % 10;
            onlar = ((girilenSayi % 100) - birler) / 10;
            yuzler = ((girilenSayi % 1000) - (onlar + birler)) / 100;
            binler = (girilenSayi - (birler + onlar + yuzler)) / 1000;
            binlerDegisken = girilenSayi - (birler + onlar + yuzler);

            // Sayı 1000 ila 9999 aralığında mı kontrol et
            if (binlerDegisken < 1000 || binlerDegisken > 9999) {
                printf("%d.Tahmin==> Lütfen 1000 ile 9999 arasında bir sayı giriniz.\n", sayac);
                puan -= 10;  // Yanlış girişlerde puan düşer
            } 
            // Rakamların birbirinden farklı olup olmadığını kontrol et
            else if (birler == onlar || birler == yuzler || birler == binler ||
                     onlar == yuzler || onlar == binler || yuzler == binler) {
                printf("%d.Tahmin==> Lütfen birbirinden farklı rakamlar ile 4 haneli bir sayı oluşturun.\n", sayac);
                puan -= 10;
            } 
            else {
                // Doğru tahmin yapılmış mı kontrol et
                if (girilenSayi == sayi) {
                    printf("Kazandiniz!\n");
                    puan = 100;
                    break;
                }

                // Geri bildirim ver: doğru yer/doğru rakam için artı, yanlış yer için eksi
                if (random1 == birler) artiSayac++;
                else if (random1 == onlar || random1 == yuzler || random1 == binler) eksiSayac--;

                if (random2 == onlar) artiSayac++;
                else if (random2 == birler || random2 == yuzler || random2 == binler) eksiSayac--;

                if (random3 == yuzler) artiSayac++;
                else if (random3 == birler || random3 == onlar || random3 == binler) eksiSayac--;

                if (random4 == binler) artiSayac++;
                else if (random4 == birler || random4 == onlar || random4 == yuzler) eksiSayac--;

                // Geri bildirim yazdırılır
                printf("\n%d.Tahmin==> Girilen sayi: %d\t+%d\t%d\n", sayac, girilenSayi, artiSayac, eksiSayac);
                
                artiSayac = 0;  // Her tahminden sonra sayaclar sıfırlanır
                eksiSayac = 0;
                puan -= 10;  // Her yanlış tahminde puan 10 azalır
            }
        }

        // Oyun sona erer: 10 tahmin hakkı dolmuşsa veya sayı doğru tahmin edilmişse
        if (girilenSayi == sayi) {
            printf("Kazandınız! Puanınız: %d\n", puan);
        } else {
            printf("Kaybettiniz! Doğru sayı: %d, Puanınız: %d\n", sayi, puan);
        }
    }

    system("pause");  // Oyunu sonlandırmadan önce bekletir
    copyright();  // Telif bilgileri yazdırılır
    return 0;
}
