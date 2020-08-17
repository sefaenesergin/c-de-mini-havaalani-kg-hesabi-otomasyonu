//SEFA ENES ERGİN-KG HESAP OTOMASYONU
#include <stdio.h>
int main(int argc, const char * argv[]) {
    printf("Havaalanı KG ölçme sistemine hoşgeldiniz.\n");
    printf("Lütfen sırt çantası ve valiz ağırlıklarınızı kg cinsinden yazınız.Sırt için 8KG, valiz için 15KG hakkınız bulunmakta.\nEğer fazla kg yüklenmişseniz\nsırt için fazladan her kg'de: 4 TL\nvaliz için fazladan her kg'de : 8TL ödeyeceksiniz.\n");
    printf("Lütfen sırt çantanızın ağırlığınızı yazınız...\n");
    int sirt,valiz;
    int ücret=0;
    scanf("%d",&sirt);
    printf("Lütfen valiz ağırlığınızı yazınız...\n");
    scanf("%d",&valiz);
    if(sirt>8){
        ücret+=(sirt-8)*4;
    }
    if(valiz>15){
        ücret+=(valiz-15)*5;
    }
    printf("Ödemeniz gereken ekstra ücret : %d TL'dir. İyi günler dileriz...\n",ücret);

    return 0;
}
