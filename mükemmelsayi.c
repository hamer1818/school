#include <conio.h>
#include<stdio.h>

int main(){
    int sayi,i,topla=0,a;
    printf("Lütfen sayı giriniz: ");
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
        printf("Seçtiğiniz sayı mükemmel sayıdır \nSeçilen sayı: %d",sayi);
    }else
    {
        printf("Seçilen sayı mükkemel sayı değildir.\nSeçilen sayı: %d",sayi);
    }
    
    
    
    
system("pause");
return 0;

}