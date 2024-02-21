#include <iostream>
#include <math.h>
#include <stdbool.h>
bool a;
char ege,rp='s';
void sdnpei();
void fcbw();
void cdd();
void odn();
int main()
{
	while(rp=='s'||rp=='S')
	{
		std::cout<<"Opciones"<<std::endl<<"a) suma de numeros pares e impares"<<std::endl<<"b) factorial con bucle while"<<std::endl<<"c) contador de digitos"<<std::endl<<"d) ordenamiento de numeros (ascendente)"<<std::endl<<"ingrese su opcion > ";
		std::cin>>ege;
		switch(ege)
    	{
    		case 'a':
    		{
    			sdnpei();
			}
    		break;
    		case 'b':
    		{
    			fcbw();
			}
    		break;
    		case 'c':
    		{
    			cdd();
			}
    		break;	
    		case 'd':
    		{
				odn();
			}
    		break;
		}
		std::cout<<std::endl<<"desea repetir programa? (s/n) > ";
		std::cin>>rp;
		system("cls");
	}
}
void sdnpei()
{
	int n1,n2;
	std::cout<<"ingrese el numero > ";
    std::cin>>n1;
	if(n1%2==0)
	{
		for(int i=0;i<=n1;i+=2)
		{
			n2+=i;
			if (i==0)
			std::cout<<"suma de numeros pares > "<<i;
			else
			std::cout<<"+"<<i;
		}
		std::cout<<"="<<n2;
	}
    else
    {
    	for(int i=1;i<=n1;i+=2)
		{
			n2+=i;
			if (i==1)
			std::cout<<"suma de numeros impares > "<<i;
			else
			std::cout<<"+"<<i;
		}
		std::cout<<"="<<n2;
	}
}
void fcbw()
{
	int i=1,n1,n2;
	std::cout<<"ingrese el numero > ";
    std::cin>>n1;
	while(i<=n1)
	{
		n2*=i;
		i++;
	}
	std::cout<<"factorial de "<<n1<<"!="<<n2;
}
void cdd()
{
	int n1,n2;
	std::cout<<"ingrese el numero > ";
    std::cin>>n1;
	do 
	{
		n2++; 
		n1/=10;
	}
	while (n1>0);
	std::cout<<"digitos del numero ingresado > "<<n2<<" digitos";
}
void odn()
{
	int n1,n2,n3,no1,no2,no3;
	std::cin>>n1>>n2>>n3;
	if (n1<=n2 && n1<=n3)
	{
		no1=n1;
		if (n2<=n3)
		{
			no2=n2;
			no3=n3;
		}
		else
		{
			no2=n3;
			no3=n2;
		}
	}
	else if (n2<=n1 && n2<=n3)
	{
		no1=n2;
		if(n1<=n3)
		{
			no2=n1;
			no3=n3;
		}
		else
		{
			no2=n3;
			no3=n1;
		}
	}
	else
	{
		no1=n3;
		if (n1<=n2)
		{
			no2=n1;
			no3=n2;
		}
		else
		{
			no2=n2;
			no3=n1;
		}
	}
	std::cout<<"numeros ordenados > "<<std::endl<<no1<<std::endl<<no2<<std::endl<<no3;
}