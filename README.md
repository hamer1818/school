# Sayı Tahmin Oyunu

## Açıklama
Sayı Tahmin Oyunu, kullanıcıdan bilgisayar tarafından rastgele oluşturulan ve rakamları farklı olan 4 haneli bir sayıyı tahmin etmesini isteyen interaktif bir C programıdır. Oyun, kullanıcıya her tahminde geri bildirim sağlayarak doğru sayıyı bulma sürecini eğlenceli hale getirir.

## Özellikler
- **Rastgele Sayı Üretimi:** Bilgisayar, 1000 ile 9999 arasında benzersiz rakamlardan oluşan rastgele bir sayı oluşturur.
- **Tahmin Girişi:** Kullanıcı, her tahmininde 4 haneli bir sayı girer.
- **Geri Bildirim:** Doğru basamaklar için +1, doğru rakam fakat yanlış basamaklar için -1 puan verilir.
- **Puanlama Sistemi:** Yanlış tahminlerde puan 10 azalır. Kullanıcı, 10 tahminden önce doğru sayıyı bulursa kazanır.
- **Kullanıcı Dostu Arayüz:** Renkli konsol çıktıları ile etkileşimli oyun deneyimi.

## Gereksinimler
- **İşletim Sistemi:** Windows
- **Derleyici:** GCC veya başka bir C derleyicisi
- **IDE:** Visual Studio Code (tercih edilen)

## Kurulum
1. **Depoyu Klonlayın:**
   ```bash
   git clone https://github.com/hamer1818/sayi-tahmin-oyunu.git
   ```
2. **Proje Dizinine Geçin:**
   ```bash
    cd sayi-tahmin-oyunu
    ```
3. **Programı Derleyin:**
    ```bash
    gcc sayi_tahmin_oyunu.c -o sayi_tahmin_oyunu
    ```
4. **Programı Çalıştırın:**
    ```bash
    sayi_tahmin_oyunu
    ```
5. **Oyunu Oynayın ve Keyfini Çıkarın!**

## Kullanım
1. Programı çalıştırdıktan sonra, bilgisayarın rastgele oluşturduğu 4 haneli sayıyı tahmin etmek için bir tahmin yapın.
2. Her tahminde, doğru basamaklar için +1, doğru rakamlar fakat yanlış basamaklar için -1 puan alırsınız.
3. Toplam puanınız 100'den başlar ve her yanlış tahminde 10 azalır.
4. 10 tahminden önce doğru sayıyı bulursanız, oyunu kazanırsınız.
