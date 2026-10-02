#include <locale.h>

#include <stdio.h>


void task1()
{
	puts("Hello World!");
	puts("Нажмите Enter для продолжения...");
	getchar(); // ожидание нажатия Enter
	puts("Продолжение программы\n");
	return 0;
}

void name()
{
	printf("**********************************************\n");
	printf("*                                            *\n");
	printf("*  тема: Разработка консольного приложения   *\n");
	printf("*                                            *\n");
	printf("*           Выполнил Леонов А.А.             *\n");
	printf("*                                            *\n");
	printf("**********************************************\n");
}

void date()
{
	printf(" ___              __    ___  ___\n");
	printf("|   |  /|    /|     |  |   |    |\n");
	printf("|   |   |     |   __|  |   |    |\n");
	printf("|   |   |     |  |     |   |    |\n");
	printf("|___|   |     |  |__   |___|    |\n");
}

void homework()
{
	printf("\n");
	printf("  /\\ \n");
	printf(" /__\\ \n");
	printf("|    |\n");
	printf("|____|\n");
}

void main()

{
	setlocale(LC_ALL, "ru_RU.UTF-8");

	task1();
	name();
	date();
	homework();

}