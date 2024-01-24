
#include <stdio.h>

void Sho(int number, char symbol)
{

	if (number == 1)
	{
		printf("\0");
		return;
	}
	else
		printf("%c", symbol);
	Sho(number - 1, symbol);

}
void Ss(int i, int height, char symbol)
{
	if (i != height)
	{
		Sho(i + 1, symbol);
		printf("\n");
		Ss(i + 1, height, symbol);

	}
	else
		return;
}



 void Show(int number, char symbol)
 {
	 
	 if (number==1)
	 {
		 
		 printf("\0");
		 
		

	 }
	 else
		
	 Show(number-1, symbol);
	 printf("%c", symbol);
	 
 }
 void A(int height,char symbol)
 {
	 int i = 1;

	 Ss(i, height, symbol);

	 
 }
 void RtIs(int height, char symbol)
 {
	 int i = height + 1;
	
	 if (i== 1)
	 {

		 printf("\n");
		 return;
	 }
	 if (i>1)
	 {
		 Show(height, symbol);
		 printf("\n");
		 
		 RtIs(height-1, symbol);
	 }
		
 }
 void RtIso(int height, char symbol)
 {
	
	 A(   height,  symbol);
	 RtIs(height, symbol);
 }
 int main()
 {
	 int n;
	 char s;
	 scanf_s("%d %c", &n, &s);
	 RtIso(n, s);
	 putchar('\n');
	 return 0;
 }
 