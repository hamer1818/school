#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void renk(){
	
	system("color a");
	
}
void copyright(){

printf("░░██╗██████╗░██╗░░░░░░█████╗░███╗░░██╗██╗░░██╗██╗░░\n");
printf("░██╔╝██╔══██╗██║░░░░░██╔══██╗████╗░██║██║░██╔╝╚██╗░\n");
printf("██╔╝░██████╦╝██║░░░░░███████║██╔██╗██║█████═╝░░╚██╗\n");
printf("╚██╗░██╔══██╗██║░░░░░██╔══██║██║╚████║██╔═██╗░░██╔╝\n");
printf("░╚██╗██████╦╝███████╗██║░░██║██║░╚███║██║░╚██╗██╔╝░\n");
printf("░░╚═╝╚═════╝░╚══════╝╚═╝░░╚═╝╚═╝░░╚══╝╚═╝░░╚═╝╚═╝░░");
	
}
int main()
{
	renk();
    int birler,onlar,yuzler,binler,artiSayac=0,eksiSayac=0;
	int random1,random2,random3,random4,girilenSayi,random,sayi,binlerDegisken;
    birler=1;
    onlar=2;
    yuzler=3;
    binler=4;
    menu:srand(time(NULL));
	random1 = rand()%9;
    random2 = rand()%9;
    random3 = rand()%9;
    random4 = 1+rand()%8;
    
    int sayac=1,puan=100;
    if(random1==random2||random1==random3||random1==random4||random2==random3||random2==random4||random3==random4)
    {
        goto menu;
    }else
    {
        sayi=random1+(random2*10)+(random3*100)+(random4*1000);
        //printf("secilen sayi: %d\n",sayi);
        printf("OYUN BASLADI\n");
        for(sayac=1;sayac<11,girilenSayi!=sayi;sayac++)
        {
             
            printf("Sayi gir\n");
            scanf("%d",&girilenSayi);
            birler=girilenSayi%10;
            onlar=((girilenSayi%100)-birler)/10;
            yuzler=((girilenSayi%1000)-(onlar+birler))/100;
            binler=(girilenSayi-(birler+onlar+yuzler))/1000;
            binlerDegisken=girilenSayi-(birler+onlar+yuzler);
            
            if(sayac>10){
            	
            	goto bitir;
            	
			}
            if(sayac==1 && girilenSayi==sayi){
            	
            	puan=100;
            	goto bitir;
            	
			}else{
	            
	            if(binlerDegisken<1000 || binlerDegisken>9999){
	            	printf("%d.Tahmin==>lutfen 1000 ila 9999 arasında sayı giriniz\n",sayac);
	            	puan-=10;
	            	
				}else if(birler==onlar||birler==yuzler||birler==binler||onlar==yuzler||onlar==binler||yuzler==binler){
					printf("%d.Tahmin==> Lutfen birbirinden farkli rakamlar ile 4 haneli sayi olusturun!!!\n",sayac);
					puan-=10;
					
				}else{
					
					if(random1==birler){
						
						artiSayac++;
						
					}else if(random1==onlar||random1==yuzler||random1==binler){
						
						eksiSayac--;
						
					}
					
					if(random2==onlar){
						
						artiSayac++;
						
					}else if(random2==birler||random2==yuzler||random2==binler){
						
						eksiSayac--;
						
					}
					
					if(random3==yuzler){
						
						artiSayac++;
						
					}else if(random3==onlar||random3==birler||random3==binler){
						
						eksiSayac--;
						
					}
					
					if(random4==binler){
						
						artiSayac++;
						
					}else if(random4==onlar||random4==yuzler||random4==birler){
						
						eksiSayac--;
						
					}
					
					printf("\n%d.Tahmin==> Girilen sayi:%d\t+%d	%d\n",sayac,girilenSayi,artiSayac,eksiSayac);
					artiSayac=0;
					eksiSayac=0;
					puan-=10;
				}
			}
        }

		bitir:system("cls");
		
		if(sayac>=10){
			
			printf("  Kaybettiniz Puan: %d",puan);
			
		}else{
			
			printf("Kazandiniz  puan: %d",puan);
			
		}
    }
    system("pause");
copyright();
    return 0;
}
