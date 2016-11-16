#include <stdio.h>
#include <conio.h>
#include <iostream.h>

main()
{
	char Tipe, Singkong[23], Lagi;
	int Jumbel = 0;
   long Harga = 0, Bayar = 0;

atas:
	clrscr();
   cout<<"                       ***Singkong Thailand Endes***"<<endl;
   cout<<"                     Rasakan Bedanya Sensasi Singkong"<<endl;
   cout<<"================================================================================"<<endl;
   cout<<"Menu Singkong :"<<endl;
   cout<<"         1. Singkong Cokelat Keju"<<endl;
   cout<<"         2. Singkong Cokelat"<<endl;
   cout<<"         3. Singkong Lainnya"<<endl;
   cout<<"Pilih Menu [1/2/3] : ";cin>>Tipe;
   cout<<"Jumlah Pembelian   : ";cin>>Jumbel;
   cout<<endl;
 //proses seleksi kondisi
switch(Tipe)
{
	case '1' :
   strcpy(Singkong, "Singkong Keju Cokelat");
   Harga = 12000;
   break;

   case '2' :
   strcpy(Singkong, "Singkong Cokelat");
   Harga = 10000;
   break;

	case '3' :
   strcpy(Singkong, "Singkong Lainnya");
   Harga = 8500;
	break;

 	default	:
   Harga = 0;
}

if (Harga==0)
{
	cout<<"Anda Salah Memasukkan Tipe"<<endl<<endl;
} else {

	printf("Menu Singkong      : %s\n", Singkong);
	printf("Harga Singkong     : %d\n", Harga);

   Bayar = Harga * Jumbel;
   printf("Total Bayar        : %d\n", Bayar);
	printf("================================================================================\n");
	printf("                              ***TERIMA KASIH***\n\n");
}
 cout<<"                      Apa Mau Input Lagi ??? [Y/T] : ";cin>>Lagi;
 if(Lagi == 'Y' || Lagi =='y')
 	goto atas;

}
