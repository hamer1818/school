#include <conio.h>
#include<stdio.h>


int main(){
    system("color a");
    int sayi,i,topla=0,a;
    printf("Lütfen yapmak istediğiniz işlemi seçin(1-2) ");
    printf("\n1'i seçerseniz mükemmel sayı bulma programı çalışır");
    printf("\n2 programı kapatır\n:  ");
    scanf("%d",&a);
    switch (a)
    {
    menu: case 1:
    system("cls");
        printf("Lütfen sayı gir:  ");
        scanf("%d",&sayi);
        for (i = 1; i < sayi; i++)
    {
        if (sayi%i==0)
        {
            printf("%d\n",i);
            topla+=i;
            
        }
 
        
    }
    if (sayi==topla)
    {
        printf("Seçtiğiniz sayı mükemmel sayıdır \nSeçilen sayı:  %d\n",sayi);
        topla=0;
    }else
    {
        printf("Seçilen sayı mükkemel sayı değildir.\nSeçilen sayı:  %d\n",sayi);
        topla=0;
    }
        printf("\nprogramı yeniden başlatmak için 1 e basın\nkapatmak için 2 ye: \n");
        scanf("%d",&a);
        switch (a)
        {
        secim: case 1:
            goto menu;
            break;
        case 2:
            goto kapa;
        
        default:
        printf("\nLütfen 1-2 arasında sayı seçiniz!!\n");
        goto secim;
            break;
        }
        break;
    case 2:
        kapa:printf("Program kapatılıyor...");
        
        break;
    
    default:
    printf("\nLütfen 1-2 arasında sayı seçiniz!!\n");
    goto menu;
        break;
    }
    
    
    
    
    

return 0;

}