#include<iostream.>
#include<conio.h>
using namespace std;

main()

{
int i,j,k,l,m,n;

int datax  [3][5]={{40000,40000,50000,30000,30000},{30000,30000,40000,20000,30000},{50000,40000,20000,20000,20000},};
int dataR	[3][5]={{80000,10000,10000,10000,10000},{60000,75000,80000,66667,10000},{10000,10000,40000,66667,66667},};
int dataW	[1][5]={{50000,30000,40000,40000,20000}};
int dataRW	[3][5]={{40000,30000,40000,40000,20000},{30000,22500,32000,66667,20000},{50000,30000,16000,66667,13333},};

cout<<"\n\t\t\tNAMA 	: GUSTI MUHAMMAD RAGHIB\n";
cout<<"\n\t\t\tNAMA 	: 3 B REG PAGI\n";
cout<<"\t\t\tNPM 		: 16630904\n";
cout<<"\t\t\tPROGRAM 	: TEKNIK INFORMATIKA\n";
cout<<"\t\t\tTEKNIK 	: MENGGUNAKAN FOR\n";
cout<<"\n MATRIK X\n";
for (i=0;i<3;i++)

{

for (j=0;j<5;j++)

{

cout<<datax[i][j];cout<<" | ";


}

cout<<endl;

}

cout<<"\nMatrik R\n";

for (k=0;k<3;k++)

{

for (l=0;l<5;l++)

{

cout<<dataR[k][l];cout<<" | ";

}

cout<<endl;

}
cout<<"\nBobot W\n";

for (m=0;m<1;m++)

{

for (n=0;n<5;n++)

{

cout<<dataW[m][n];cout<<" | ";
}

cout<<endl;
}
cout<<"\nMatrik R*W\n";

for (m=0;m<3;m++)

{

for (n=0;n<5;n++)

{

cout<<dataRW[m][n];cout<<" | ";
}

cout<<endl;
}
cout<<"\n HASIL AKHIR : ";
cout<<"\n Nilai A1 : 17.0000";
cout<<"\n Nilai A2 : 13.1167";
cout<<"\n Nilai A3 : 13.6000\n";

cout<<endl;

getch();

}

