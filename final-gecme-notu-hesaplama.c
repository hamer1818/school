#include <stdio.h>

int main(){
    float vize,final=0,ort=60;
    printf("vize notunuzu giriniz: ");
    scanf("%f",&vize);
    vize*=0.4;
    ort-=vize;
    final=ort*10/6;
    printf("finalde alman gereken not : %.2f\n",final);
    system("pause");
    return 0;
}