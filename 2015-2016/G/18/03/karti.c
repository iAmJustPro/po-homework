#include <stdio.h>
#include <string.h>
int main()
{
char cards[13];
int i=0,a,b,n;
while(i<13){
scanf("%[^\n]s",cards);
if(cards[i]=='2') cards[i]=2;
if(cards[i]=='3') cards[i]=3;
if(cards[i]=='4') cards[i]=4;
if(cards[i]=='5') cards[i]=5;
if(cards[i]=='6') cards[i]=6;
if(cards[i]=='7') cards[i]=7;
if(cards[i]=='8') cards[i]=8;
if(cards[i]=='9') cards[i]=9;
if(cards[i]=='T') cards[i]=10;
if(cards[i]=='J') cards[i]=11;
if(cards[i]=='Q') cards[i]=12;
if(cards[i]=='K') cards[i]=13;
if(cards[i]=='A') cards[i]=14;
i++;
}
n=13;
for(i=0;i<n;i++)
for(b=n-1;b>i;b--)
{
if(cards[b-1]>cards[b])
{
a=cards[b-1];
cards[b-1]=cards[b];
cards[b]=a;	
}
}	
for(i=0;i<8;i++){
printf("\n%d",cards[i]);
}
for(i=8;i<n;i++){
if(cards[i]==10) cards[i]='T';
if(cards[i]==11) cards[i]='J';
if(cards[i]==12) cards[i]='Q';
if(cards[i]==13) cards[i]='K';
if(cards[i]==14) cards[i]='A';
printf("\n%c",cards[i]);
}
printf("\n");
return 0;
}
