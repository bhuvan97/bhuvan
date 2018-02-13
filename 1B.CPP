#include<iostream.h>
#include<conio.h>
class copy
{
int var,fact;
public:
 double calculate();
 copy(int temp)
 {
 var=temp;
 }
};
double copy ::calculate()
{
fact=1;
for(int i=1;i<=var;i++)
{
fact=fact*i;
}
return fact;
}
void main()
{clrscr();
int n;
cout<<"\n\tenter the number:";
cin>>n;
copy obj(n);
copy cpy=obj;
cout<<"\n\t"<<n<<"factorial is:"<<obj.calculate();
cout<<"\n\t"<<n<<"factorial is:"<<cpy.calculate();
getch();
}