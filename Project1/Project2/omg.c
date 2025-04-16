#include <conio.h>

int main()
{
	puts("아무 키나 누르세요");

	char c;
	c = _getch();

	if (c=='a')
	{
		puts("당신은 a를 누르셨습니다.");
	}
	else
	{
		puts("???");
	}
	return 0;

}