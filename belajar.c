#include <stdio.h>// header untuk C
#include <conia.h>
int main()
{
    char nama[50];
    int nim;
    char kom;
    float ip;

    printf("hallo world\n");//fungsi keluaran pada c
    printf("masukan nama :");
    gets(nama);// get string

    printf("masukan nim:");
    scanf("%d",&nim); //fungsi masukan pada c

    getchar();

    printf("masukan kom:");
    scanf("%c",&kom); 
    printf("masukan ip:");
    scanf("%f",&ip); 

    /*untuk ouput*/
    printf("nama :");
    puts(nama); //put string digunakan untuk string dalam bentuk array char

    printf("Nim : %d/n",nim);
    printf("Kom : %c/n",kom);
    puts(kom);
    printf("ip : %f/n",ip);

    printf("press any button to continue...");
    getch(); 

}

