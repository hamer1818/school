# Sayı Tahmin Oyunu
## Oyun Mantığı:
- Oyun Başlangıcı: Oyuncudan, bilgisayar tarafından rastgele oluşturulan ve rakamları farklı olan 4 haneli bir sayıyı tahmin etmesi istenir.
- Rastgele Sayı Üretimi: Bilgisayar 1000 ile 9999 arasında rastgele bir sayı oluşturur. Ancak, sayının tüm basamaklarının farklı olması sağlanır.
- Tahmin: Oyuncu her tahmininde 1000 ile 9999 arasında bir sayı girmelidir. Yanlış girişlerde veya aynı rakamları içeren sayılarda puan azalır.
- Geri Bildirim: Oyuncuya her tahminde doğru tahmin edilen basamaklar için +1, doğru rakam ama yanlış basamaklar için -1 şeklinde geri bildirim verilir.
- Puanlama: Her yanlış tahminde puan 10 azalır. Eğer oyuncu 10 tahmin hakkı dolmadan doğru sayıyı bulursa kazanır, aksi halde oyun biter.