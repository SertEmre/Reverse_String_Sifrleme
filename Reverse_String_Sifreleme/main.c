#include <stdio.h>
#include <string.h>

void tersCevir(char *metin){
int uzunluk = strlen(metin);
for(int i = 0; i<uzunluk/2;i++){
    char gecici= metin[i];
    metin[i]= metin[uzunluk - i - 1];
    metin [uzunluk- i - 1]= gecici;
    }
}
int main(){
char metin[100];
printf("Ters cevrilecek olan metni girin:");
fgets(metin, sizeof(metin), stdin);

metin[strcspn(metin, "\n")]= 0;

tersCevir(metin);
printf("Ters cevirilmis sifre: %s\n",metin);

return 0;
}
