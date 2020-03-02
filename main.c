#include "bintree.h"

/*
Nama        : GALIH EKA PRAKOSO
NIM         : A11.2016.09478
*/
int main()
{
    BinTree P = Nil;
    BinTree L = Nil;
    BinTree R = Nil;
    int X;

    printf("Pohon biner P kosong? %d\n", IsTreeEmpty(P));
    MakeTree(5,Nil,Nil,&P);
    MakeTree(8,L,P,&P);
    MakeTree(3,L,P,&P);
    printf("Akar pohon biner P: %d\n", GetAkar(P));
    printf("P merupakan pohon biner? %d\n", IsBiner(P));
    printf("P condong ke kiri? %d\n", IsSkewLeft(P));
    printf("P condong ke kanan? %d\n", IsSkewRight(P));
    printf("P satu elemen? %d\n", IsOneElmt(P));
    printf("P hanya punyai subpohon kiri? %d\n", IsUnerLeft(P));
    printf("P hanya punyai subpohon kanan? %d\n", IsUnerRight(P));

    printf("\nPohon InOrder: ");PrintInOrder(P);
    printf("\nPohon PreOrder: ");PrintPreOrder(P);

    printf("\n\nJumlah elemen %d\n", NbElmt(P));
    printf("Jumlah daun : %d\n", NbDaun(P));
    AddDaunTerkiri(&P,4);
    //AddDaun(&P,7,4,true);
    //AddDaun(&P,8,1,true);

    printf("\nPohon InOrder: ");PrintInOrder(P);
    printf("\nPohon PreOrder: ");PrintPreOrder(P);
    DelDaunTerkiri(&P,&X);
    printf("\nPohon PreOrder: ");PrintPreOrder(P);
    printf("\nPrintTree:");
    printf("\n");
    PrintTree(P,2);
    printf("\n");

    return 0;
}
