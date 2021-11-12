#include <conio.h>
#include<stdio.h>


int main(){
    system("color a");
    int sayi,i,topla=0,a;
    printf("Lutfen yapmak istediğiniz islemi secin(1-2) ");
    printf("\n1'i secerseniz mukemmel sayi bulma programı calısır");
    printf("\n2 programı kapatır\n:  ");
    scanf("%d",&a);
    switch (a)
    {
    menu: case 1:
    system("cls");
        printf("Lutfen sayi gir:  ");
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
        printf("Sectiğiniz sayi mukemmel sayidır \nSecilen sayi:  %d\n",sayi);
    }else
    {
        printf("Secilen sayi mukkemel sayi değildir.\nSecilen sayi:  %d\n",sayi);
    }
        printf("\nprogramı yeniden baslatmak icin 1 e basın\nkapatmak icin 2 ye: \n");
        scanf("%d",&a);
        switch (a)
        {
        secim: case 1:
            goto menu;
            break;
        case 2:
            goto kapa;
        
        default:
        printf("\nLutfen 1-2 arasında sayi seciniz!!\n");
        goto secim;
            break;
        }
        break;
    case 2:
        kapa:printf("Program kapatılıyor...");
        
        break;
    
    default:
    printf("\nLutfen 1-2 arasında sayi seciniz!!\n");
    goto menu;
        break;
    }
    
    
    
    
    

return 0;

}