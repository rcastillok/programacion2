#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;
int dia,mes,anio;
char signo[30];
int caries=0,ctauro=0,cgeminis=0,ccancer=0,cleo=0,cvirgo=0,clibra=0,cescorpio=0,csagitario=0,ccapricornio=0,cacuario=0,cpiscis=0;
void ingresar(int &dia,int &mes,int &year)
{
    do
    {
        cout<<"Ingresar el dia......: ";
        cin>>dia;
    }while ((dia<1) or (dia>31));

    do
    {
        cout<<"Ingresar el mes.....: ";
        cin>>mes;
    }while ((mes<1) or (mes>12));

    cout<<"Ingresar el año.....: ";
    cin>>anio;
}
void determinar(int dia,int mes,int &cacuario,int &cpiscis,int &caries,int &ctauro,int &cgeminis,int &ccancer,int &cleo,int &cvirgo,int &clibra,int &cescorpio,int &csagitario,int &ccapricornio,char signo[])
{
    if (((mes==1) and ((dia>20) and (dia<32))) or ((mes==2) and ((dia>0) and (dia<21))))
    {
        strcpy(signo,"-Acuario-");
        cacuario++;
    }
    if (((mes==2) and ((dia>18) and (dia<29))) or ((mes==3) and ((dia>0) and (dia<21))))
    {
        strcpy(signo,"-Piscis-");
        cpiscis++;
    }
    if (((mes==3) and ((dia>20) and (dia<32))) or ((mes==4) and ((dia>0) and (dia<21))))
    {
        strcpy(signo,"-Aries-");
        caries++;
    }
    if (((mes==4) and ((dia>20) and (dia<31))) or ((mes==5) and ((dia>0) and (dia<22))))
    {
        strcpy(signo,"-Tauro-");
        ctauro++;
    }
    if (((mes==5) and ((dia>21) and (dia<32))) or ((mes==6) and ((dia>0) and (dia<22))))
    {
        strcpy(signo,"-Geminis-");
        cgeminis++;
    }
    if (((mes==6) and ((dia>21) and (dia<31))) or ((mes==7) and ((dia>0) and (dia<23))))
    {
        strcpy(signo,"-Cancer-");
        ccancer++;
    }
    if (((mes==7) and ((dia>22) and (dia<31))) or ((mes==8) and ((dia>0) and (dia<24))))
    {
        strcpy(signo,"-Leo-");
        cleo++;
    }
    if (((mes==8) and ((dia>23) and (dia<32))) or ((mes==9) and ((dia>0) and (dia<24))))
    {
        strcpy(signo,"-Virgo-");
        cvirgo++;
    }
    if (((mes==9) and ((dia>23) and (dia<31))) or ((mes==10) and ((dia>0) and (dia<24))))
    {
        strcpy(signo,"-Libra-");
        clibra++;
    }
    if (((mes==10) and ((dia>23) and (dia<32))) or ((mes==11) and ((dia>0) and (dia<23))))
    {
        strcpy(signo,"-Escorpio-");
        cescorpio++;
    }
    if (((mes==11) and ((dia>22) and (dia<31))) or ((mes==12) and ((dia>0) and (dia<22))))
    {
        strcpy(signo,"-Sagitario-");
        csagitario++;
    }
    if (((mes==12) and ((dia>21) and (dia<32))) or ((mes==1) and ((dia>0) and (dia<21))))
    {
        strcpy(signo,"-Capricornio-");
        ccapricornio++;
    }
}
void presentar(char signo[])
{
    cout<<"El signo zodiacal es....: "<<signo<<"\n";
}
int main()
{char resp;
    do
    {
        ingresar(dia,mes,anio);
        determinar(dia,mes,cacuario,cpiscis,caries,ctauro,cgeminis,ccancer,cleo,cvirgo,clibra,cescorpio,csagitario,ccapricornio,signo);
        presentar(signo);
        _flushall();

        do
        {
            cout<<"Desea continuar.....: ";
            cin.get(resp);
            _flushall();

        }while ((resp !='S') and  (resp !='N'));
        _flushall();

    } while (resp !='N');

    cout<<"\n";
    cout<<"Cantidad de Acuarios.....: "<<cacuario<<"\n";
    cout<<"Cantidad de Piscis.....: "<<cpiscis<<"\n";
    cout<<"Cantidad de Aries.....: "<<caries<<"\n";
    cout<<"Cantidad de Tauros......: "<<ctauro<<"\n";
    cout<<"Cantidad de Geminis.....: "<<cgeminis<<"\n";
    cout<<"Cantidad de Cancers.......: "<<ccancer<<"\n";
    cout<<"Cantidad de Leos....: "<<cleo<<"\n";
    cout<<"Cantidad de Virgos.....: "<<cvirgo<<"\n";
    cout<<"Cantidad de Libras.....: "<<clibra<<"\n";
    cout<<"Cantidad de Escorpios.....: "<<cescorpio<<"\n";
    cout<<"Cantidad de Sagitarios.....: "<<csagitario<<"\n";
    cout<<"Cantidad de Capricornios....: "<<ccapricornio<<"\n";

    return 0;
}
