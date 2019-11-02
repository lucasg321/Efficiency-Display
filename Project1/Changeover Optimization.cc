#include "MyForm.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
using namespace System;
using namespace System::Windows::Forms;
[STAThread]
void main(array<String^>^ args)
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Project1::MyForm form;
	Application::Run(%form);

	

}
void swap(char *x, char *y)
{ 
	char temp;
	temp = *x;
	*x = *y;
	*y = temp;
}
void permute(char *a, int l, int r, int p, char *s, char** optarr)
{
	static int optimal = 0;
	int i, x, j, time = 0, y = 0;
	char *t;

	if (p == 0) {

		for (x = 0; x<r + 1; x++) {
			for (j = 0; j<r + 1; j++) {
				if (j - x == 1) {
					if (a[x] == 'a') {
						if (a[j] == 'b')
							time = time + 90;
						else if (a[j] == 'c')
							time = time + 90;
						else if (a[j] == 'd')
							time = time + 90;
						else if (a[j] == 'e')
							time = time + 90;
						else if (a[j] == 'f')
							time = time + 90;
						else if (a[j] == 'g')
							time = time + 35;
						else if (a[j] == 'h')
							time = time + 90;
						else if (a[j] == 'i')
							time = time + 90;
						else if (a[j] == 'j')
							time = time + 90;
						else if (a[j] == 'k')
							time = time + 90;
						else if (a[j] == 'l')
							time = time + 55;
						else if (a[j] == 'm')
							time = time + 90;
						else if (a[j] == 'n')
							time = time + 90;
						else if (a[j] == 'o')
							time = time + 55;
						else if (a[j] == 'p')
							time = time + 55;
						else if (a[j] == 'q')
							time = time + 90;
						else if (a[j] == 'r')
							time = time + 90;
						else if (a[j] == 's')
							time = time + 90;
						else if (a[j] == 't')
							time = time + 90;
						else if (a[j] == 'u')
							time = time + 90;
						else if (a[j] == 'v')
							time = time + 90;
						else if (a[j] == 'w')
							time = time + 45;
						else if (a[j] == 'x')
							time = time + 40;
						else if (a[j] == 'y')
							time = time + 70;
						else if (a[j] == 'z')
							time = time + 90;
						else if (a[j] == 'A')
							time = time + 90;
						else if (a[j] == 'B')
							time = time + 90;
						else if (a[j] == 'C')
							time = time + 90;
						else if (a[j] == 'D')
							time = time + 40;
						else if (a[j] == 'E')
							time = time + 90;
						else if (a[j] == 'F')
							time = time + 90;
						else if (a[j] == 'G')
							time = time + 40;
						else if (a[j] == 'H')
							time = time + 90;
						else if (a[j] == 'I')
							time = time + 40;
						else if (a[j] == 'J')
							time = time + 90;
						else if (a[j] == 'K')
							time = time + 90;
						else if (a[j] == 'L')
							time = time + 90;
						else if (a[j] == 'M')
							time = time + 90;
						else if (a[j] == 'N')
							time = time + 90;
					} if (a[x] == 'b') {
						if (a[j] == 'a')
							time = time + 90;
						else if (a[j] == 'c')
							time = time + 90;

						else if (a[j] == 'd')
							time = time + 60;

						else if (a[j] == 'e')
							time = time + 30;

						else if (a[j] == 'f')
							time = time + 30;

						else if (a[j] == 'g')
							time = time + 45;

						else if (a[j] == 'h')
							time = time + 40;

						else if (a[j] == 'i')
							time = time + 40;

						else if (a[j] == 'j')
							time = time + 40;

						else if (a[j] == 'k')
							time = time + 40;

						else if (a[j] == 'l')
							time = time + 55;

						else if (a[j] == 'm')
							time = time + 55;

						else if (a[j] == 'n')
							time = time + 55;

						else if (a[j] == 'o')
							time = time + 55;

						else if (a[j] == 'p')
							time = time + 55;

						else if (a[j] == 'q')
							time = time + 40;

						else if (a[j] == 'r')
							time = time + 40;

						else if (a[j] == 's')
							time = time + 40;

						else if (a[j] == 't')
							time = time + 40;

						else if (a[j] == 'u')
							time = time + 45;

						else if (a[j] == 'v')
							time = time + 40;

						else if (a[j] == 'w')
							time = time + 45;

						else if (a[j] == 'x')
							time = time + 40;

						else if (a[j] == 'y')
							time = time + 70;

						else if (a[j] == 'z')
							time = time + 45;

						else if (a[j] == 'A')
							time = time + 35;

						else if (a[j] == 'B')
							time = time + 40;

						else if (a[j] == 'C')
							time = time + 45;

						else if (a[j] == 'D')
							time = time + 40;

						else if (a[j] == 'E')
							time = time + 65;

						else if (a[j] == 'F')
							time = time + 40;

						else if (a[j] == 'G')
							time = time + 40;

						else if (a[j] == 'H')
							time = time + 45;

						else if (a[j] == 'I')
							time = time + 55;

						else if (a[j] == 'J')
							time = time + 55;

						else if (a[j] == 'K')
							time = time + 55;

						else if (a[j] == 'L')
							time = time + 55;

						else if (a[j] == 'M')
							time = time + 55;

						else if (a[j] == 'N')
							time = time + 55;
					} if (a[x] == 'c') {
						if (a[j] == 'b')
							time = time + 90;

						else if (a[j] == 'a')
							time = time + 55;

						else if (a[j] == 'd')
							time = time + 30;

						else if (a[j] == 'e')
							time = time + 90;

						else if (a[j] == 'f')
							time = time + 90;

						else if (a[j] == 'g')
							time = time + 70;

						else if (a[j] == 'h')
							time = time + 90;

						else if (a[j] == 'i')
							time = time + 90;

						else if (a[j] == 'j')
							time = time + 90;

						else if (a[j] == 'k')
							time = time + 60;

						else if (a[j] == 'l')
							time = time + 85;

						else if (a[j] == 'm')
							time = time + 85;

						else if (a[j] == 'n')
							time = time + 90;

						else if (a[j] == 'o')
							time = time + 85;

						else if (a[j] == 'p')
							time = time + 85;

						else if (a[j] == 'q')
							time = time + 90;

						else if (a[j] == 'r')
							time = time + 90;

						else if (a[j] == 's')
							time = time + 90;

						else if (a[j] == 't')
							time = time + 90;

						else if (a[j] == 'u')
							time = time + 90;

						else if (a[j] == 'v')
							time = time + 70;

						else if (a[j] == 'w')
							time = time + 70;

						else if (a[j] == 'x')
							time = time + 70;

						else if (a[j] == 'y')
							time = time + 70;

						else if (a[j] == 'z')
							time = time + 90;

						else if (a[j] == 'A')
							time = time + 80;

						else if (a[j] == 'B')
							time = time + 90;

						else if (a[j] == 'C')
							time = time + 90;

						else if (a[j] == 'D')
							time = time + 70;

						else if (a[j] == 'E')
							time = time + 90;

						else if (a[j] == 'F')
							time = time + 90;

						else if (a[j] == 'G')
							time = time + 65;

						else if (a[j] == 'H')
							time = time + 90;

						else if (a[j] == 'I')
							time = time + 70;

						else if (a[j] == 'J')
							time = time + 90;

						else if (a[j] == 'K')
							time = time + 90;

						else if (a[j] == 'L')
							time = time + 90;

						else if (a[j] == 'M')
							time = time + 90;

						else if (a[j] == 'N')
							time = time + 90;
					} if (a[x] == 'd') {
						if (a[j] == 'a')
							time = time + 55;

						else if (a[j] == 'b')
							time = time + 90;

						else if (a[j] == 'c')
							time = time + 40;

						else if (a[j] == 'e')
							time = time + 90;

						else if (a[j] == 'f')
							time = time + 90;

						else if (a[j] == 'g')
							time = time + 70;

						else if (a[j] == 'h')
							time = time + 90;

						else if (a[j] == 'i')
							time = time + 90;

						else if (a[j] == 'j')
							time = time + 90;

						else if (a[j] == 'k')
							time = time + 60;

						else if (a[j] == 'l')
							time = time + 85;

						else if (a[j] == 'm')
							time = time + 85;

						else if (a[j] == 'n')
							time = time + 90;

						else if (a[j] == 'o')
							time = time + 85;

						else if (a[j] == 'p')
							time = time + 85;

						else if (a[j] == 'q')
							time = time + 90;

						else if (a[j] == 'r')
							time = time + 90;

						else if (a[j] == 's')
							time = time + 90;

						else if (a[j] == 't')
							time = time + 90;

						else if (a[j] == 'u')
							time = time + 90;

						else if (a[j] == 'v')
							time = time + 70;

						else if (a[j] == 'w')
							time = time + 70;

						else if (a[j] == 'x')
							time = time + 70;

						else if (a[j] == 'y')
							time = time + 70;

						else if (a[j] == 'z')
							time = time + 90;

						else if (a[j] == 'A')
							time = time + 80;

						else if (a[j] == 'B')
							time = time + 90;

						else if (a[j] == 'C')
							time = time + 90;

						else if (a[j] == 'D')
							time = time + 70;

						else if (a[j] == 'E')
							time = time + 90;

						else if (a[j] == 'F')
							time = time + 90;

						else if (a[j] == 'G')
							time = time + 65;

						else if (a[j] == 'H')
							time = time + 90;

						else if (a[j] == 'I')
							time = time + 70;

						else if (a[j] == 'J')
							time = time + 90;

						else if (a[j] == 'K')
							time = time + 90;

						else if (a[j] == 'L')
							time = time + 90;

						else if (a[j] == 'M')
							time = time + 90;

						else if (a[j] == 'N')
							time = time + 90;
					} if (a[x] == 'e') {
						if (a[j] == 'a')
							time = time + 20;

						else if (a[j] == 'b')
							time = time + 20;

						else if (a[j] == 'c')
							time = time + 30;

						else if (a[j] == 'd')
							time = time + 60;

						else if (a[j] == 'f')
							time = time + 10;

						else if (a[j] == 'g')
							time = time + 40;

						else if (a[j] == 'h')
							time = time + 35;

						else if (a[j] == 'i')
							time = time + 35;

						else if (a[j] == 'j')
							time = time + 20;

						else if (a[j] == 'k')
							time = time + 35;

						else if (a[j] == 'l')
							time = time + 50;

						else if (a[j] == 'm')
							time = time + 50;

						else if (a[j] == 'n')
							time = time + 50;

						else if (a[j] == 'o')
							time = time + 50;

						else if (a[j] == 'p')
							time = time + 50;

						else if (a[j] == 'q')
							time = time + 35;

						else if (a[j] == 'r')
							time = time + 35;

						else if (a[j] == 's')
							time = time + 10;

						else if (a[j] == 't')
							time = time + 35;

						else if (a[j] == 'u')
							time = time + 40;

						else if (a[j] == 'v')
							time = time + 30;

						else if (a[j] == 'w')
							time = time + 40;

						else if (a[j] == 'x')
							time = time + 35;

						else if (a[j] == 'y')
							time = time + 70;

						else if (a[j] == 'z')
							time = time + 35;

						else if (a[j] == 'A')
							time = time + 30;

						else if (a[j] == 'B')
							time = time + 35;

						else if (a[j] == 'C')
							time = time + 40;

						else if (a[j] == 'D')
							time = time + 35;

						else if (a[j] == 'E')
							time = time + 60;

						else if (a[j] == 'F')
							time = time + 35;

						else if (a[j] == 'G')
							time = time + 35;

						else if (a[j] == 'H')
							time = time + 40;

						else if (a[j] == 'I')
							time = time + 45;

						else if (a[j] == 'J')
							time = time + 90;

						else if (a[j] == 'K')
							time = time + 90;

						else if (a[j] == 'L')
							time = time + 90;

						else if (a[j] == 'M')
							time = time + 90;

						else if (a[j] == 'N')
							time = time + 90;
					} if (a[x] == 'f') {
						if (a[j] == 'a')
							time = time + 20;

						else if (a[j] == 'b')
							time = time + 20;

						else if (a[j] == 'c')
							time = time + 25;

						else if (a[j] == 'd')
							time = time + 40;

						else if (a[j] == 'e')
							time = time + 10;

						else if (a[j] == 'g')
							time = time + 40;

						else if (a[j] == 'h')
							time = time + 35;

						else if (a[j] == 'i')
							time = time + 35;

						else if (a[j] == 'j')
							time = time + 20;

						else if (a[j] == 'k')
							time = time + 30;

						else if (a[j] == 'l')
							time = time + 50;

						else if (a[j] == 'm')
							time = time + 35;

						else if (a[j] == 'n')
							time = time + 35;

						else if (a[j] == 'o')
							time = time + 50;

						else if (a[j] == 'p')
							time = time + 50;

						else if (a[j] == 'q')
							time = time + 35;

						else if (a[j] == 'r')
							time = time + 35;

						else if (a[j] == 's')
							time = time + 25;

						else if (a[j] == 't')
							time = time + 35;

						else if (a[j] == 'u')
							time = time + 25;

						else if (a[j] == 'v')
							time = time + 35;

						else if (a[j] == 'w')
							time = time + 40;

						else if (a[j] == 'x')
							time = time + 35;

						else if (a[j] == 'y')
							time = time + 70;

						else if (a[j] == 'z')
							time = time + 40;

						else if (a[j] == 'A')
							time = time + 25;

						else if (a[j] == 'B')
							time = time + 35;

						else if (a[j] == 'C')
							time = time + 25;

						else if (a[j] == 'D')
							time = time + 30;

						else if (a[j] == 'E')
							time = time + 35;

						else if (a[j] == 'F')
							time = time + 35;

						else if (a[j] == 'G')
							time = time + 35;

						else if (a[j] == 'H')
							time = time + 40;

						else if (a[j] == 'I')
							time = time + 45;

						else if (a[j] == 'J')
							time = time + 35;

						else if (a[j] == 'K')
							time = time + 35;

						else if (a[j] == 'L')
							time = time + 35;

						else if (a[j] == 'M')
							time = time + 35;

						else if (a[j] == 'N')
							time = time + 35;
					} if (a[x] == 'g') {
						if (a[j] == 'a')
							time = time + 65;

						else if (a[j] == 'b')
							time = time + 90;

						else if (a[j] == 'c')
							time = time + 90;

						else if (a[j] == 'd')
							time = time + 90;

						else if (a[j] == 'e')
							time = time + 90;

						else if (a[j] == 'f')
							time = time + 90;

						else if (a[j] == 'h')
							time = time + 90;

						else if (a[j] == 'i')
							time = time + 90;

						else if (a[j] == 'j')
							time = time + 90;

						else if (a[j] == 'k')
							time = time + 90;

						else if (a[j] == 'l')
							time = time + 60;

						else if (a[j] == 'm')
							time = time + 90;

						else if (a[j] == 'n')
							time = time + 90;

						else if (a[j] == 'o')
							time = time + 60;

						else if (a[j] == 'p')
							time = time + 60;

						else if (a[j] == 'q')
							time = time + 90;

						else if (a[j] == 'r')
							time = time + 90;

						else if (a[j] == 's')
							time = time + 90;

						else if (a[j] == 't')
							time = time + 90;

						else if (a[j] == 'u')
							time = time + 90;

						else if (a[j] == 'v')
							time = time + 90;

						else if (a[j] == 'w')
							time = time + 40;

						else if (a[j] == 'x')
							time = time + 40;

						else if (a[j] == 'y')
							time = time + 30;

						else if (a[j] == 'z')
							time = time + 90;

						else if (a[j] == 'A')
							time = time + 90;

						else if (a[j] == 'B')
							time = time + 90;

						else if (a[j] == 'C')
							time = time + 90;

						else if (a[j] == 'D')
							time = time + 40;

						else if (a[j] == 'E')
							time = time + 90;

						else if (a[j] == 'F')
							time = time + 90;

						else if (a[j] == 'G')
							time = time + 65;

						else if (a[j] == 'H')
							time = time + 90;

						else if (a[j] == 'I')
							time = time + 70;

						else if (a[j] == 'J')
							time = time + 90;

						else if (a[j] == 'K')
							time = time + 90;

						else if (a[j] == 'L')
							time = time + 90;

						else if (a[j] == 'M')
							time = time + 90;

						else if (a[j] == 'N')
							time = time + 90;
					} if (a[x] == 'h') {
						if (a[j] == 'a')
							time = time + 40;

						else if (a[j] == 'b')
							time = time + 40;

						else if (a[j] == 'c')
							time = time + 70;

						else if (a[j] == 'd')
							time = time + 70;

						else if (a[j] == 'e')
							time = time + 40;

						else if (a[j] == 'f')
							time = time + 40;

						else if (a[j] == 'g')
							time = time + 45;

						else if (a[j] == 'i')
							time = time + 35;

						else if (a[j] == 'j')
							time = time + 35;

						else if (a[j] == 'k')
							time = time + 35;

						else if (a[j] == 'l')
							time = time + 45;

						else if (a[j] == 'm')
							time = time + 45;

						else if (a[j] == 'n')
							time = time + 40;

						else if (a[j] == 'o')
							time = time + 45;

						else if (a[j] == 'p')
							time = time + 45;

						else if (a[j] == 'q')
							time = time + 40;

						else if (a[j] == 'r')
							time = time + 40;

						else if (a[j] == 's')
							time = time + 40;

						else if (a[j] == 't')
							time = time + 35;

						else if (a[j] == 'u')
							time = time + 25;

						else if (a[j] == 'v')
							time = time + 40;

						else if (a[j] == 'w')
							time = time + 45;

						else if (a[j] == 'x')
							time = time + 45;

						else if (a[j] == 'y')
							time = time + 70;

						else if (a[j] == 'z')
							time = time + 35;

						else if (a[j] == 'A')
							time = time + 55;

						else if (a[j] == 'B')
							time = time + 40;

						else if (a[j] == 'C')
							time = time + 45;

						else if (a[j] == 'D')
							time = time + 45;

						else if (a[j] == 'E')
							time = time + 70;

						else if (a[j] == 'F')
							time = time + 40;

						else if (a[j] == 'G')
							time = time + 40;

						else if (a[j] == 'H')
							time = time + 45;

						else if (a[j] == 'I')
							time = time + 55;

						else if (a[j] == 'J')
							time = time + 90;

						else if (a[j] == 'K')
							time = time + 90;

						else if (a[j] == 'L')
							time = time + 90;

						else if (a[j] == 'M')
							time = time + 90;

						else if (a[j] == 'N')
							time = time + 90;
					}if (a[x] == 'i') {
						if (a[j] == 'a')
							time = time + 35;

						else if (a[j] == 'b')
							time = time + 35;

						else if (a[j] == 'c')
							time = time + 60;

						else if (a[j] == 'd')
							time = time + 40;

						else if (a[j] == 'e')
							time = time + 35;

						else if (a[j] == 'f')
							time = time + 35;

						else if (a[j] == 'g')
							time = time + 30;

						else if (a[j] == 'h')
							time = time + 30;

						else if (a[j] == 'j')
							time = time + 10;

						else if (a[j] == 'k')
							time = time + 20;

						else if (a[j] == 'l')
							time = time + 30;

						else if (a[j] == 'm')
							time = time + 30;

						else if (a[j] == 'n')
							time = time + 30;

						else if (a[j] == 'o')
							time = time + 30;

						else if (a[j] == 'p')
							time = time + 30;

						else if (a[j] == 'q')
							time = time + 35;

						else if (a[j] == 'r')
							time = time + 35;

						else if (a[j] == 's')
							time = time + 35;

						else if (a[j] == 't')
							time = time + 20;

						else if (a[j] == 'u')
							time = time + 35;

						else if (a[j] == 'v')
							time = time + 30;

						else if (a[j] == 'w')
							time = time + 30;

						else if (a[j] == 'x')
							time = time + 15;

						else if (a[j] == 'y')
							time = time + 60;

						else if (a[j] == 'z')
							time = time + 40;

						else if (a[j] == 'A')
							time = time + 50;

						else if (a[j] == 'B')
							time = time + 35;

						else if (a[j] == 'C')
							time = time + 30;

						else if (a[j] == 'D')
							time = time + 15;

						else if (a[j] == 'E')
							time = time + 65;

						else if (a[j] == 'F')
							time = time + 35;

						else if (a[j] == 'G')
							time = time + 35;

						else if (a[j] == 'H')
							time = time + 40;

						else if (a[j] == 'I')
							time = time + 45;

						else if (a[j] == 'J')
							time = time + 90;

						else if (a[j] == 'K')
							time = time + 90;

						else if (a[j] == 'L')
							time = time + 90;

						else if (a[j] == 'M')
							time = time + 90;

						else if (a[j] == 'N')
							time = time + 90;
					} if (a[x] == 'j') {
						if (a[j] == 'a')
							time = time + 40;

						else if (a[j] == 'b')
							time = time + 40;

						else if (a[j] == 'c')
							time = time + 70;

						else if (a[j] == 'd')
							time = time + 70;

						else if (a[j] == 'e')
							time = time + 40;

						else if (a[j] == 'f')
							time = time + 40;

						else if (a[j] == 'g')
							time = time + 40;

						else if (a[j] == 'h')
							time = time + 30;

						else if (a[j] == 'i')
							time = time + 30;

						else if (a[j] == 'k')
							time = time + 30;

						else if (a[j] == 'l')
							time = time + 35;

						else if (a[j] == 'm')
							time = time + 35;

						else if (a[j] == 'n')
							time = time + 35;

						else if (a[j] == 'o')
							time = time + 35;

						else if (a[j] == 'p')
							time = time + 35;

						else if (a[j] == 'q')
							time = time + 30;

						else if (a[j] == 'r')
							time = time + 40;

						else if (a[j] == 's')
							time = time + 40;

						else if (a[j] == 't')
							time = time + 30;

						else if (a[j] == 'u')
							time = time + 25;

						else if (a[j] == 'v')
							time = time + 25;

						else if (a[j] == 'w')
							time = time + 40;

						else if (a[j] == 'x')
							time = time + 35;

						else if (a[j] == 'y')
							time = time + 70;

						else if (a[j] == 'z')
							time = time + 45;

						else if (a[j] == 'A')
							time = time + 55;

						else if (a[j] == 'B')
							time = time + 40;

						else if (a[j] == 'C')
							time = time + 25;

						else if (a[j] == 'D')
							time = time + 35;

						else if (a[j] == 'E')
							time = time + 70;

						else if (a[j] == 'F')
							time = time + 40;

						else if (a[j] == 'G')
							time = time + 40;

						else if (a[j] == 'H')
							time = time + 45;

						else if (a[j] == 'I')
							time = time + 55;

						else if (a[j] == 'J')
							time = time + 90;

						else if (a[j] == 'K')
							time = time + 90;

						else if (a[j] == 'L')
							time = time + 90;

						else if (a[j] == 'M')
							time = time + 90;

						else if (a[j] == 'N')
							time = time + 90;
					} if (a[x] == 'k') {
						if (a[j] == 'a')
							time = time + 40;

						else if (a[j] == 'b')
							time = time + 90;

						else if (a[j] == 'c')
							time = time + 90;

						else if (a[j] == 'd')
							time = time + 90;

						else if (a[j] == 'e')
							time = time + 90;

						else if (a[j] == 'f')
							time = time + 90;

						else if (a[j] == 'g')
							time = time + 35;

						else if (a[j] == 'h')
							time = time + 90;

						else if (a[j] == 'i')
							time = time + 90;

						else if (a[j] == 'j')
							time = time + 90;

						else if (a[j] == 'l')
							time = time + 35;

						else if (a[j] == 'm')
							time = time + 35;

						else if (a[j] == 'n')
							time = time + 90;

						else if (a[j] == 'o')
							time = time + 35;

						else if (a[j] == 'p')
							time = time + 35;

						else if (a[j] == 'q')
							time = time + 90;

						else if (a[j] == 'r')
							time = time + 90;

						else if (a[j] == 's')
							time = time + 90;

						else if (a[j] == 't')
							time = time + 90;

						else if (a[j] == 'u')
							time = time + 90;

						else if (a[j] == 'v')
							time = time + 35;

						else if (a[j] == 'w')
							time = time + 30;

						else if (a[j] == 'x')
							time = time + 35;

						else if (a[j] == 'y')
							time = time + 70;

						else if (a[j] == 'z')
							time = time + 90;

						else if (a[j] == 'A')
							time = time + 55;

						else if (a[j] == 'B')
							time = time + 90;

						else if (a[j] == 'C')
							time = time + 90;

						else if (a[j] == 'D')
							time = time + 45;

						else if (a[j] == 'E')
							time = time + 60;

						else if (a[j] == 'F')
							time = time + 90;

						else if (a[j] == 'G')
							time = time + 40;

						else if (a[j] == 'H')
							time = time + 90;

						else if (a[j] == 'I')
							time = time + 55;

						else if (a[j] == 'J')
							time = time + 90;

						else if (a[j] == 'K')
							time = time + 90;

						else if (a[j] == 'L')
							time = time + 90;

						else if (a[j] == 'M')
							time = time + 90;

						else if (a[j] == 'N')
							time = time + 90;
					} if (a[x] == 'l') {
						if (a[j] == 'a')
							time = time + 40;

						else if (a[j] == 'b')
							time = time + 90;

						else if (a[j] == 'c')
							time = time + 90;

						else if (a[j] == 'd')
							time = time + 90;

						else if (a[j] == 'e')
							time = time + 90;

						else if (a[j] == 'f')
							time = time + 90;

						else if (a[j] == 'g')
							time = time + 35;

						else if (a[j] == 'h')
							time = time + 90;

						else if (a[j] == 'i')
							time = time + 90;

						else if (a[j] == 'j')
							time = time + 90;

						else if (a[j] == 'k')
							time = time + 90;

						else if (a[j] == 'm')
							time = time + 90;

						else if (a[j] == 'n')
							time = time + 90;

						else if (a[j] == 'o')
							time = time + 20;

						else if (a[j] == 'p')
							time = time + 35;

						else if (a[j] == 'q')
							time = time + 90;

						else if (a[j] == 'r')
							time = time + 90;

						else if (a[j] == 's')
							time = time + 90;

						else if (a[j] == 't')
							time = time + 90;

						else if (a[j] == 'u')
							time = time + 90;

						else if (a[j] == 'v')
							time = time + 90;

						else if (a[j] == 'w')
							time = time + 55;

						else if (a[j] == 'x')
							time = time + 75;

						else if (a[j] == 'y')
							time = time + 80;

						else if (a[j] == 'z')
							time = time + 90;

						else if (a[j] == 'A')
							time = time + 90;

						else if (a[j] == 'B')
							time = time + 90;

						else if (a[j] == 'C')
							time = time + 90;

						else if (a[j] == 'D')
							time = time + 75;

						else if (a[j] == 'E')
							time = time + 90;

						else if (a[j] == 'F')
							time = time + 90;

						else if (a[j] == 'G')
							time = time + 40;

						else if (a[j] == 'H')
							time = time + 90;

						else if (a[j] == 'I')
							time = time + 90;

						else if (a[j] == 'J')
							time = time + 90;

						else if (a[j] == 'K')
							time = time + 90;

						else if (a[j] == 'L')
							time = time + 90;

						else if (a[j] == 'M')
							time = time + 90;

						else if (a[j] == 'N')
							time = time + 90;
					} if (a[x] == 'm') {
						if (a[j] == 'a')
							time = time + 40;

						else if (a[j] == 'b')
							time = time + 90;

						else if (a[j] == 'c')
							time = time + 90;

						else if (a[j] == 'd')
							time = time + 90;

						else if (a[j] == 'e')
							time = time + 90;

						else if (a[j] == 'f')
							time = time + 90;

						else if (a[j] == 'g')
							time = time + 55;

						else if (a[j] == 'h')
							time = time + 90;

						else if (a[j] == 'i')
							time = time + 90;

						else if (a[j] == 'j')
							time = time + 90;

						else if (a[j] == 'k')
							time = time + 35;

						else if (a[j] == 'l')
							time = time + 15;

						else if (a[j] == 'n')
							time = time + 90;

						else if (a[j] == 'o')
							time = time + 20;

						else if (a[j] == 'p')
							time = time + 20;

						else if (a[j] == 'q')
							time = time + 90;

						else if (a[j] == 'r')
							time = time + 90;

						else if (a[j] == 's')
							time = time + 90;

						else if (a[j] == 't')
							time = time + 90;

						else if (a[j] == 'u')
							time = time + 90;

						else if (a[j] == 'v')
							time = time + 75;

						else if (a[j] == 'w')
							time = time + 55;

						else if (a[j] == 'x')
							time = time + 75;

						else if (a[j] == 'y')
							time = time + 80;

						else if (a[j] == 'z')
							time = time + 90;

						else if (a[j] == 'A')
							time = time + 45;

						else if (a[j] == 'B')
							time = time + 90;

						else if (a[j] == 'C')
							time = time + 90;

						else if (a[j] == 'D')
							time = time + 75;

						else if (a[j] == 'E')
							time = time + 85;

						else if (a[j] == 'F')
							time = time + 90;

						else if (a[j] == 'G')
							time = time + 40;

						else if (a[j] == 'H')
							time = time + 90;

						else if (a[j] == 'I')
							time = time + 90;

						else if (a[j] == 'J')
							time = time + 90;

						else if (a[j] == 'K')
							time = time + 90;

						else if (a[j] == 'L')
							time = time + 90;

						else if (a[j] == 'M')
							time = time + 90;

						else if (a[j] == 'N')
							time = time + 90;
					} if (a[x] == 'n') {
						if (a[j] == 'a')
							time = time + 40;

						else if (a[j] == 'b')
							time = time + 90;

						else if (a[j] == 'c')
							time = time + 90;

						else if (a[j] == 'd')
							time = time + 90;

						else if (a[j] == 'e')
							time = time + 90;

						else if (a[j] == 'f')
							time = time + 90;

						else if (a[j] == 'g')
							time = time + 55;

						else if (a[j] == 'h')
							time = time + 90;

						else if (a[j] == 'i')
							time = time + 90;

						else if (a[j] == 'j')
							time = time + 90;

						else if (a[j] == 'k')
							time = time + 90;

						else if (a[j] == 'l')
							time = time + 25;

						else if (a[j] == 'm')
							time = time + 90;

						else if (a[j] == 'o')
							time = time + 25;

						else if (a[j] == 'p')
							time = time + 25;

						else if (a[j] == 'q')
							time = time + 90;

						else if (a[j] == 'r')
							time = time + 90;

						else if (a[j] == 's')
							time = time + 90;

						else if (a[j] == 't')
							time = time + 90;

						else if (a[j] == 'u')
							time = time + 90;

						else if (a[j] == 'v')
							time = time + 90;

						else if (a[j] == 'w')
							time = time + 55;

						else if (a[j] == 'x')
							time = time + 75;

						else if (a[j] == 'y')
							time = time + 80;

						else if (a[j] == 'z')
							time = time + 90;

						else if (a[j] == 'A')
							time = time + 90;

						else if (a[j] == 'B')
							time = time + 90;

						else if (a[j] == 'C')
							time = time + 90;

						else if (a[j] == 'D')
							time = time + 75;

						else if (a[j] == 'E')
							time = time + 90;

						else if (a[j] == 'F')
							time = time + 90;

						else if (a[j] == 'G')
							time = time + 40;

						else if (a[j] == 'H')
							time = time + 90;

						else if (a[j] == 'I')
							time = time + 90;

						else if (a[j] == 'J')
							time = time + 90;

						else if (a[j] == 'K')
							time = time + 90;

						else if (a[j] == 'L')
							time = time + 90;

						else if (a[j] == 'M')
							time = time + 90;

						else if (a[j] == 'N')
							time = time + 90;
					}if (a[x] == 'o') {
						if (a[j] == 'a')
							time = time + 40;

						else if (a[j] == 'b')
							time = time + 90;

						else if (a[j] == 'c')
							time = time + 90;

						else if (a[j] == 'd')
							time = time + 90;

						else if (a[j] == 'e')
							time = time + 90;

						else if (a[j] == 'f')
							time = time + 90;

						else if (a[j] == 'g')
							time = time + 55;

						else if (a[j] == 'h')
							time = time + 90;

						else if (a[j] == 'i')
							time = time + 90;

						else if (a[j] == 'j')
							time = time + 90;

						else if (a[j] == 'k')
							time = time + 90;

						else if (a[j] == 'l')
							time = time + 25;

						else if (a[j] == 'm')
							time = time + 90;

						else if (a[j] == 'n')
							time = time + 90;

						else if (a[j] == 'p')
							time = time + 25;

						else if (a[j] == 'q')
							time = time + 90;

						else if (a[j] == 'r')
							time = time + 90;

						else if (a[j] == 's')
							time = time + 90;

						else if (a[j] == 't')
							time = time + 90;

						else if (a[j] == 'u')
							time = time + 90;

						else if (a[j] == 'v')
							time = time + 90;

						else if (a[j] == 'w')
							time = time + 55;

						else if (a[j] == 'x')
							time = time + 75;

						else if (a[j] == 'y')
							time = time + 80;

						else if (a[j] == 'z')
							time = time + 90;

						else if (a[j] == 'A')
							time = time + 90;

						else if (a[j] == 'B')
							time = time + 90;

						else if (a[j] == 'C')
							time = time + 90;

						else if (a[j] == 'D')
							time = time + 75;

						else if (a[j] == 'E')
							time = time + 90;

						else if (a[j] == 'F')
							time = time + 90;

						else if (a[j] == 'G')
							time = time + 40;

						else if (a[j] == 'H')
							time = time + 90;

						else if (a[j] == 'I')
							time = time + 70;

						else if (a[j] == 'J')
							time = time + 90;

						else if (a[j] == 'K')
							time = time + 90;

						else if (a[j] == 'L')
							time = time + 90;

						else if (a[j] == 'M')
							time = time + 90;

						else if (a[j] == 'N')
							time = time + 90;
					} if (a[x] == 'p') {
						if (a[j] == 'a')
							time = time + 40;

						else if (a[j] == 'b')
							time = time + 90;

						else if (a[j] == 'c')
							time = time + 90;

						else if (a[j] == 'd')
							time = time + 90;

						else if (a[j] == 'e')
							time = time + 90;

						else if (a[j] == 'f')
							time = time + 90;

						else if (a[j] == 'g')
							time = time + 55;

						else if (a[j] == 'h')
							time = time + 90;

						else if (a[j] == 'i')
							time = time + 90;

						else if (a[j] == 'j')
							time = time + 90;

						else if (a[j] == 'k')
							time = time + 90;

						else if (a[j] == 'l')
							time = time + 25;

						else if (a[j] == 'm')
							time = time + 90;

						else if (a[j] == 'n')
							time = time + 90;

						else if (a[j] == 'o')
							time = time + 20;

						else if (a[j] == 'q')
							time = time + 90;

						else if (a[j] == 'r')
							time = time + 90;

						else if (a[j] == 's')
							time = time + 90;

						else if (a[j] == 't')
							time = time + 90;

						else if (a[j] == 'u')
							time = time + 90;

						else if (a[j] == 'v')
							time = time + 90;

						else if (a[j] == 'w')
							time = time + 45;

						else if (a[j] == 'x')
							time = time + 75;

						else if (a[j] == 'y')
							time = time + 80;

						else if (a[j] == 'z')
							time = time + 90;

						else if (a[j] == 'A')
							time = time + 90;

						else if (a[j] == 'B')
							time = time + 90;

						else if (a[j] == 'C')
							time = time + 90;

						else if (a[j] == 'D')
							time = time + 75;

						else if (a[j] == 'E')
							time = time + 90;

						else if (a[j] == 'F')
							time = time + 90;

						else if (a[j] == 'G')
							time = time + 40;

						else if (a[j] == 'H')
							time = time + 90;

						else if (a[j] == 'I')
							time = time + 90;

						else if (a[j] == 'J')
							time = time + 90;

						else if (a[j] == 'K')
							time = time + 90;

						else if (a[j] == 'L')
							time = time + 90;

						else if (a[j] == 'M')
							time = time + 90;

						else if (a[j] == 'N')
							time = time + 90;
					} if (a[x] == 'q') {
						if (a[j] == 'a')
							time = time + 40;

						else if (a[j] == 'b')
							time = time + 90;

						else if (a[j] == 'c')
							time = time + 90;

						else if (a[j] == 'd')
							time = time + 90;

						else if (a[j] == 'e')
							time = time + 90;

						else if (a[j] == 'f')
							time = time + 90;

						else if (a[j] == 'g')
							time = time + 45;

						else if (a[j] == 'h')
							time = time + 90;

						else if (a[j] == 'i')
							time = time + 90;

						else if (a[j] == 'j')
							time = time + 90;

						else if (a[j] == 'k')
							time = time + 40;

						else if (a[j] == 'l')
							time = time + 55;

						else if (a[j] == 'm')
							time = time + 40;

						else if (a[j] == 'n')
							time = time + 35;

						else if (a[j] == 'o')
							time = time + 35;

						else if (a[j] == 'p')
							time = time + 55;

						else if (a[j] == 'r')
							time = time + 15;

						else if (a[j] == 's')
							time = time + 25;

						else if (a[j] == 't')
							time = time + 90;

						else if (a[j] == 'u')
							time = time + 90;

						else if (a[j] == 'v')
							time = time + 30;

						else if (a[j] == 'w')
							time = time + 45;

						else if (a[j] == 'x')
							time = time + 45;

						else if (a[j] == 'y')
							time = time + 70;

						else if (a[j] == 'z')
							time = time + 90;

						else if (a[j] == 'A')
							time = time + 40;

						else if (a[j] == 'B')
							time = time + 25;

						else if (a[j] == 'C')
							time = time + 90;

						else if (a[j] == 'D')
							time = time + 45;

						else if (a[j] == 'E')
							time = time + 70;

						else if (a[j] == 'F')
							time = time + 90;

						else if (a[j] == 'G')
							time = time + 40;

						else if (a[j] == 'H')
							time = time + 90;

						else if (a[j] == 'I')
							time = time + 55;

						else if (a[j] == 'J')
							time = time + 90;

						else if (a[j] == 'K')
							time = time + 55;

						else if (a[j] == 'L')
							time = time + 55;

						else if (a[j] == 'M')
							time = time + 55;

						else if (a[j] == 'N')
							time = time + 55;
					} if (a[x] == 'r') {
						if (a[j] == 'a')
							time = time + 40;

						else if (a[j] == 'b')
							time = time + 90;

						else if (a[j] == 'c')
							time = time + 90;

						else if (a[j] == 'd')
							time = time + 90;

						else if (a[j] == 'e')
							time = time + 90;

						else if (a[j] == 'f')
							time = time + 90;

						else if (a[j] == 'g')
							time = time + 45;

						else if (a[j] == 'h')
							time = time + 90;

						else if (a[j] == 'i')
							time = time + 90;

						else if (a[j] == 'j')
							time = time + 90;

						else if (a[j] == 'k')
							time = time + 40;

						else if (a[j] == 'l')
							time = time + 55;

						else if (a[j] == 'm')
							time = time + 55;

						else if (a[j] == 'n')
							time = time + 55;

						else if (a[j] == 'o')
							time = time + 55;

						else if (a[j] == 'p')
							time = time + 55;

						else if (a[j] == 'q')
							time = time + 30;

						else if (a[j] == 's')
							time = time + 25;

						else if (a[j] == 't')
							time = time + 90;

						else if (a[j] == 'u')
							time = time + 90;

						else if (a[j] == 'v')
							time = time + 50;

						else if (a[j] == 'w')
							time = time + 45;

						else if (a[j] == 'x')
							time = time + 45;

						else if (a[j] == 'y')
							time = time + 70;

						else if (a[j] == 'z')
							time = time + 90;

						else if (a[j] == 'A')
							time = time + 55;

						else if (a[j] == 'B')
							time = time + 35;

						else if (a[j] == 'C')
							time = time + 90;

						else if (a[j] == 'D')
							time = time + 45;

						else if (a[j] == 'E')
							time = time + 70;

						else if (a[j] == 'F')
							time = time + 90;

						else if (a[j] == 'G')
							time = time + 40;

						else if (a[j] == 'H')
							time = time + 90;

						else if (a[j] == 'I')
							time = time + 55;

						else if (a[j] == 'J')
							time = time + 35;

						else if (a[j] == 'K')
							time = time + 90;

						else if (a[j] == 'L')
							time = time + 90;

						else if (a[j] == 'M')
							time = time + 55;

						else if (a[j] == 'N')
							time = time + 55;
					} if (a[x] == 's') {
						if (a[j] == 'a')
							time = time + 40;

						else if (a[j] == 'b')
							time = time + 90;

						else if (a[j] == 'c')
							time = time + 90;

						else if (a[j] == 'd')
							time = time + 90;

						else if (a[j] == 'e')
							time = time + 90;

						else if (a[j] == 'f')
							time = time + 90;

						else if (a[j] == 'g')
							time = time + 45;

						else if (a[j] == 'h')
							time = time + 90;

						else if (a[j] == 'i')
							time = time + 90;

						else if (a[j] == 'j')
							time = time + 90;

						else if (a[j] == 'k')
							time = time + 40;

						else if (a[j] == 'l')
							time = time + 55;

						else if (a[j] == 'm')
							time = time + 40;

						else if (a[j] == 'n')
							time = time + 40;

						else if (a[j] == 'o')
							time = time + 40;

						else if (a[j] == 'p')
							time = time + 55;

						else if (a[j] == 'q')
							time = time + 40;

						else if (a[j] == 'r')
							time = time + 35;

						else if (a[j] == 't')
							time = time + 90;

						else if (a[j] == 'u')
							time = time + 90;

						else if (a[j] == 'v')
							time = time + 35;

						else if (a[j] == 'w')
							time = time + 45;

						else if (a[j] == 'x')
							time = time + 45;

						else if (a[j] == 'y')
							time = time + 70;

						else if (a[j] == 'z')
							time = time + 90;

						else if (a[j] == 'A')
							time = time + 55;

						else if (a[j] == 'B')
							time = time + 30;

						else if (a[j] == 'C')
							time = time + 90;

						else if (a[j] == 'D')
							time = time + 45;

						else if (a[j] == 'E')
							time = time + 70;

						else if (a[j] == 'F')
							time = time + 90;

						else if (a[j] == 'G')
							time = time + 40;

						else if (a[j] == 'H')
							time = time + 90;

						else if (a[j] == 'I')
							time = time + 55;

						else if (a[j] == 'J')
							time = time + 55;

						else if (a[j] == 'K')
							time = time + 90;

						else if (a[j] == 'L')
							time = time + 55;

						else if (a[j] == 'M')
							time = time + 55;

						else if (a[j] == 'N')
							time = time + 55;
					} if (a[x] == 't') {
						if (a[j] == 'a')
							time = time + 40;

						else if (a[j] == 'b')
							time = time + 40;

						else if (a[j] == 'c')
							time = time + 70;

						else if (a[j] == 'd')
							time = time + 70;

						else if (a[j] == 'e')
							time = time + 40;

						else if (a[j] == 'f')
							time = time + 40;

						else if (a[j] == 'g')
							time = time + 40;

						else if (a[j] == 'h')
							time = time + 90;

						else if (a[j] == 'i')
							time = time + 30;

						else if (a[j] == 'j')
							time = time + 30;

						else if (a[j] == 'k')
							time = time + 30;

						else if (a[j] == 'l')
							time = time + 35;

						else if (a[j] == 'm')
							time = time + 35;

						else if (a[j] == 'n')
							time = time + 35;

						else if (a[j] == 'o')
							time = time + 35;

						else if (a[j] == 'p')
							time = time + 35;

						else if (a[j] == 'q')
							time = time + 40;

						else if (a[j] == 'r')
							time = time + 40;

						else if (a[j] == 's')
							time = time + 40;

						else if (a[j] == 'u')
							time = time + 40;

						else if (a[j] == 'v')
							time = time + 35;

						else if (a[j] == 'w')
							time = time + 40;

						else if (a[j] == 'x')
							time = time + 35;

						else if (a[j] == 'y')
							time = time + 70;

						else if (a[j] == 'z')
							time = time + 45;

						else if (a[j] == 'A')
							time = time + 55;

						else if (a[j] == 'B')
							time = time + 40;

						else if (a[j] == 'C')
							time = time + 40;

						else if (a[j] == 'D')
							time = time + 35;

						else if (a[j] == 'E')
							time = time + 70;

						else if (a[j] == 'F')
							time = time + 40;

						else if (a[j] == 'G')
							time = time + 40;

						else if (a[j] == 'H')
							time = time + 45;

						else if (a[j] == 'I')
							time = time + 55;

						else if (a[j] == 'J')
							time = time + 55;

						else if (a[j] == 'K')
							time = time + 55;

						else if (a[j] == 'L')
							time = time + 55;

						else if (a[j] == 'M')
							time = time + 55;

						else if (a[j] == 'N')
							time = time + 55;
					} if (a[x] == 'u') {
						if (a[j] == 'a')
							time = time + 65;

						else if (a[j] == 'b')
							time = time + 65;

						else if (a[j] == 'c')
							time = time + 80;

						else if (a[j] == 'd')
							time = time + 55;

						else if (a[j] == 'e')
							time = time + 65;

						else if (a[j] == 'f')
							time = time + 55;

						else if (a[j] == 'g')
							time = time + 70;

						else if (a[j] == 'h')
							time = time + 55;

						else if (a[j] == 'i')
							time = time + 55;

						else if (a[j] == 'j')
							time = time + 55;

						else if (a[j] == 'k')
							time = time + 45;

						else if (a[j] == 'l')
							time = time + 60;

						else if (a[j] == 'm')
							time = time + 50;

						else if (a[j] == 'n')
							time = time + 60;

						else if (a[j] == 'o')
							time = time + 60;

						else if (a[j] == 'p')
							time = time + 60;

						else if (a[j] == 'q')
							time = time + 60;

						else if (a[j] == 'r')
							time = time + 65;

						else if (a[j] == 's')
							time = time + 65;

						else if (a[j] == 't')
							time = time + 55;

						else if (a[j] == 'v')
							time = time + 70;

						else if (a[j] == 'w')
							time = time + 70;

						else if (a[j] == 'x')
							time = time + 70;

						else if (a[j] == 'y')
							time = time + 80;

						else if (a[j] == 'z')
							time = time + 70;

						else if (a[j] == 'A')
							time = time + 70;

						else if (a[j] == 'B')
							time = time + 55;

						else if (a[j] == 'C')
							time = time + 45;

						else if (a[j] == 'D')
							time = time + 70;

						else if (a[j] == 'E')
							time = time + 80;

						else if (a[j] == 'F')
							time = time + 65;

						else if (a[j] == 'G')
							time = time + 65;

						else if (a[j] == 'H')
							time = time + 70;

						else if (a[j] == 'I')
							time = time + 70;

						else if (a[j] == 'J')
							time = time + 55;

						else if (a[j] == 'K')
							time = time + 55;

						else if (a[j] == 'L')
							time = time + 55;

						else if (a[j] == 'M')
							time = time + 55;

						else if (a[j] == 'N')
							time = time + 55;
					}if (a[x] == 'v') {
						if (a[j] == 'a')
							time = time + 35;

						else if (a[j] == 'b')
							time = time + 90;

						else if (a[j] == 'c')
							time = time + 90;

						else if (a[j] == 'd')
							time = time + 90;

						else if (a[j] == 'e')
							time = time + 90;

						else if (a[j] == 'f')
							time = time + 90;

						else if (a[j] == 'g')
							time = time + 50;

						else if (a[j] == 'h')
							time = time + 90;

						else if (a[j] == 'i')
							time = time + 90;

						else if (a[j] == 'j')
							time = time + 90;

						else if (a[j] == 'k')
							time = time + 45;

						else if (a[j] == 'l')
							time = time + 70;

						else if (a[j] == 'm')
							time = time + 55;

						else if (a[j] == 'n')
							time = time + 90;

						else if (a[j] == 'o')
							time = time + 60;

						else if (a[j] == 'p')
							time = time + 60;

						else if (a[j] == 'q')
							time = time + 90;

						else if (a[j] == 'r')
							time = time + 90;

						else if (a[j] == 's')
							time = time + 90;

						else if (a[j] == 't')
							time = time + 90;

						else if (a[j] == 'u')
							time = time + 90;

						else if (a[j] == 'w')
							time = time + 50;

						else if (a[j] == 'x')
							time = time + 45;

						else if (a[j] == 'y')
							time = time + 60;

						else if (a[j] == 'z')
							time = time + 90;

						else if (a[j] == 'A')
							time = time + 50;

						else if (a[j] == 'B')
							time = time + 90;

						else if (a[j] == 'C')
							time = time + 90;

						else if (a[j] == 'D')
							time = time + 60;

						else if (a[j] == 'E')
							time = time + 100;

						else if (a[j] == 'F')
							time = time + 90;

						else if (a[j] == 'G')
							time = time + 55;

						else if (a[j] == 'H')
							time = time + 90;

						else if (a[j] == 'I')
							time = time + 70;

						else if (a[j] == 'J')
							time = time + 90;

						else if (a[j] == 'K')
							time = time + 90;

						else if (a[j] == 'L')
							time = time + 55;

						else if (a[j] == 'M')
							time = time + 90;

						else if (a[j] == 'N')
							time = time + 55;
					} if (a[x] == 'w') {
						if (a[j] == 'a')
							time = time + 90;

						else if (a[j] == 'b')
							time = time + 90;

						else if (a[j] == 'c')
							time = time + 90;

						else if (a[j] == 'd')
							time = time + 90;

						else if (a[j] == 'e')
							time = time + 90;

						else if (a[j] == 'f')
							time = time + 90;

						else if (a[j] == 'g')
							time = time + 90;

						else if (a[j] == 'h')
							time = time + 90;

						else if (a[j] == 'i')
							time = time + 90;

						else if (a[j] == 'j')
							time = time + 90;

						else if (a[j] == 'k')
							time = time + 90;

						else if (a[j] == 'l')
							time = time + 90;

						else if (a[j] == 'm')
							time = time + 90;

						else if (a[j] == 'n')
							time = time + 90;

						else if (a[j] == 'o')
							time = time + 90;

						else if (a[j] == 'p')
							time = time + 90;

						else if (a[j] == 'q')
							time = time + 90;

						else if (a[j] == 'r')
							time = time + 90;

						else if (a[j] == 's')
							time = time + 90;

						else if (a[j] == 't')
							time = time + 90;

						else if (a[j] == 'u')
							time = time + 90;

						else if (a[j] == 'v')
							time = time + 90;

						else if (a[j] == 'x')
							time = time + 90;

						else if (a[j] == 'y')
							time = time + 90;

						else if (a[j] == 'z')
							time = time + 90;

						else if (a[j] == 'A')
							time = time + 90;

						else if (a[j] == 'B')
							time = time + 90;

						else if (a[j] == 'C')
							time = time + 90;

						else if (a[j] == 'D')
							time = time + 90;

						else if (a[j] == 'E')
							time = time + 90;

						else if (a[j] == 'F')
							time = time + 90;

						else if (a[j] == 'G')
							time = time + 90;

						else if (a[j] == 'H')
							time = time + 90;

						else if (a[j] == 'I')
							time = time + 90;

						else if (a[j] == 'J')
							time = time + 90;

						else if (a[j] == 'K')
							time = time + 90;

						else if (a[j] == 'L')
							time = time + 90;

						else if (a[j] == 'M')
							time = time + 90;

						else if (a[j] == 'N')
							time = time + 90;
					} if (a[x] == 'x') {
						if (a[j] == 'a')
							time = time + 55;

						else if (a[j] == 'b')
							time = time + 90;

						else if (a[j] == 'c')
							time = time + 90;

						else if (a[j] == 'd')
							time = time + 90;

						else if (a[j] == 'e')
							time = time + 90;

						else if (a[j] == 'f')
							time = time + 90;

						else if (a[j] == 'g')
							time = time + 50;

						else if (a[j] == 'h')
							time = time + 90;

						else if (a[j] == 'i')
							time = time + 90;

						else if (a[j] == 'j')
							time = time + 90;

						else if (a[j] == 'k')
							time = time + 90;

						else if (a[j] == 'l')
							time = time + 70;

						else if (a[j] == 'm')
							time = time + 90;

						else if (a[j] == 'n')
							time = time + 90;

						else if (a[j] == 'o')
							time = time + 70;

						else if (a[j] == 'p')
							time = time + 70;

						else if (a[j] == 'q')
							time = time + 90;

						else if (a[j] == 'r')
							time = time + 90;

						else if (a[j] == 's')
							time = time + 90;

						else if (a[j] == 't')
							time = time + 90;

						else if (a[j] == 'u')
							time = time + 90;

						else if (a[j] == 'v')
							time = time + 90;

						else if (a[j] == 'w')
							time = time + 50;

						else if (a[j] == 'y')
							time = time + 60;

						else if (a[j] == 'z')
							time = time + 90;

						else if (a[j] == 'A')
							time = time + 90;

						else if (a[j] == 'B')
							time = time + 90;

						else if (a[j] == 'C')
							time = time + 90;

						else if (a[j] == 'D')
							time = time + 30;

						else if (a[j] == 'E')
							time = time + 90;

						else if (a[j] == 'F')
							time = time + 90;

						else if (a[j] == 'G')
							time = time + 55;

						else if (a[j] == 'H')
							time = time + 90;

						else if (a[j] == 'I')
							time = time + 70;

						else if (a[j] == 'J')
							time = time + 90;

						else if (a[j] == 'K')
							time = time + 90;

						else if (a[j] == 'L')
							time = time + 55;

						else if (a[j] == 'M')
							time = time + 90;

						else if (a[j] == 'N')
							time = time + 90;
					} if (a[x] == 'y') {
						if (a[j] == 'a')
							time = time + 45;

						else if (a[j] == 'b')
							time = time + 90;

						else if (a[j] == 'c')
							time = time + 90;

						else if (a[j] == 'd')
							time = time + 90;

						else if (a[j] == 'e')
							time = time + 90;

						else if (a[j] == 'f')
							time = time + 90;

						else if (a[j] == 'g')
							time = time + 50;

						else if (a[j] == 'h')
							time = time + 90;

						else if (a[j] == 'i')
							time = time + 90;

						else if (a[j] == 'j')
							time = time + 90;

						else if (a[j] == 'k')
							time = time + 90;

						else if (a[j] == 'l')
							time = time + 80;

						else if (a[j] == 'm')
							time = time + 90;

						else if (a[j] == 'n')
							time = time + 90;

						else if (a[j] == 'o')
							time = time + 80;

						else if (a[j] == 'p')
							time = time + 80;

						else if (a[j] == 'q')
							time = time + 90;

						else if (a[j] == 'r')
							time = time + 90;

						else if (a[j] == 's')
							time = time + 90;

						else if (a[j] == 't')
							time = time + 90;

						else if (a[j] == 'u')
							time = time + 90;

						else if (a[j] == 'v')
							time = time + 90;

						else if (a[j] == 'w')
							time = time + 50;

						else if (a[j] == 'x')
							time = time + 60;

						else if (a[j] == 'z')
							time = time + 90;

						else if (a[j] == 'A')
							time = time + 90;

						else if (a[j] == 'B')
							time = time + 90;

						else if (a[j] == 'C')
							time = time + 90;

						else if (a[j] == 'D')
							time = time + 70;

						else if (a[j] == 'E')
							time = time + 90;

						else if (a[j] == 'F')
							time = time + 90;

						else if (a[j] == 'G')
							time = time + 65;

						else if (a[j] == 'H')
							time = time + 90;

						else if (a[j] == 'I')
							time = time + 70;

						else if (a[j] == 'J')
							time = time + 90;

						else if (a[j] == 'K')
							time = time + 90;

						else if (a[j] == 'L')
							time = time + 55;

						else if (a[j] == 'M')
							time = time + 90;

						else if (a[j] == 'N')
							time = time + 90;
					} if (a[x] == 'z') {
						if (a[j] == 'a')
							time = time + 65;

						else if (a[j] == 'b')
							time = time + 65;

						else if (a[j] == 'c')
							time = time + 80;

						else if (a[j] == 'd')
							time = time + 80;

						else if (a[j] == 'e')
							time = time + 65;

						else if (a[j] == 'f')
							time = time + 65;

						else if (a[j] == 'g')
							time = time + 70;

						else if (a[j] == 'h')
							time = time + 50;

						else if (a[j] == 'i')
							time = time + 65;

						else if (a[j] == 'j')
							time = time + 65;

						else if (a[j] == 'k')
							time = time + 65;

						else if (a[j] == 'l')
							time = time + 70;

						else if (a[j] == 'm')
							time = time + 70;

						else if (a[j] == 'n')
							time = time + 60;

						else if (a[j] == 'o')
							time = time + 70;

						else if (a[j] == 'p')
							time = time + 70;

						else if (a[j] == 'q')
							time = time + 50;

						else if (a[j] == 'r')
							time = time + 55;

						else if (a[j] == 's')
							time = time + 65;

						else if (a[j] == 't')
							time = time + 65;

						else if (a[j] == 'u')
							time = time + 70;

						else if (a[j] == 'v')
							time = time + 70;

						else if (a[j] == 'w')
							time = time + 70;

						else if (a[j] == 'x')
							time = time + 70;

						else if (a[j] == 'y')
							time = time + 80;

						else if (a[j] == 'A')
							time = time + 70;

						else if (a[j] == 'B')
							time = time + 65;

						else if (a[j] == 'C')
							time = time + 70;

						else if (a[j] == 'D')
							time = time + 70;

						else if (a[j] == 'E')
							time = time + 80;

						else if (a[j] == 'F')
							time = time + 65;

						else if (a[j] == 'G')
							time = time + 65;

						else if (a[j] == 'H')
							time = time + 70;

						else if (a[j] == 'I')
							time = time + 70;

						else if (a[j] == 'J')
							time = time + 55;

						else if (a[j] == 'K')
							time = time + 55;

						else if (a[j] == 'L')
							time = time + 55;

						else if (a[j] == 'M')
							time = time + 55;

						else if (a[j] == 'N')
							time = time + 55;
					} if (a[x] == 'A') {
						if (a[j] == 'a')
							time = time + 40;

						else if (a[j] == 'b')
							time = time + 90;

						else if (a[j] == 'c')
							time = time + 90;

						else if (a[j] == 'd')
							time = time + 90;

						else if (a[j] == 'e')
							time = time + 90;

						else if (a[j] == 'f')
							time = time + 90;

						else if (a[j] == 'g')
							time = time + 45;

						else if (a[j] == 'h')
							time = time + 90;

						else if (a[j] == 'i')
							time = time + 90;

						else if (a[j] == 'j')
							time = time + 90;

						else if (a[j] == 'k')
							time = time + 30;

						else if (a[j] == 'l')
							time = time + 75;

						else if (a[j] == 'm')
							time = time + 90;

						else if (a[j] == 'n')
							time = time + 90;

						else if (a[j] == 'o')
							time = time + 75;

						else if (a[j] == 'p')
							time = time + 75;

						else if (a[j] == 'q')
							time = time + 90;

						else if (a[j] == 'r')
							time = time + 90;

						else if (a[j] == 's')
							time = time + 90;

						else if (a[j] == 't')
							time = time + 90;

						else if (a[j] == 'u')
							time = time + 90;

						else if (a[j] == 'v')
							time = time + 90;

						else if (a[j] == 'w')
							time = time + 60;

						else if (a[j] == 'x')
							time = time + 90;

						else if (a[j] == 'y')
							time = time + 100;

						else if (a[j] == 'z')
							time = time + 90;

						else if (a[j] == 'B')
							time = time + 90;

						else if (a[j] == 'C')
							time = time + 90;

						else if (a[j] == 'D')
							time = time + 90;

						else if (a[j] == 'E')
							time = time + 85;

						else if (a[j] == 'F')
							time = time + 90;

						else if (a[j] == 'G')
							time = time + 40;

						else if (a[j] == 'H')
							time = time + 90;

						else if (a[j] == 'I')
							time = time + 90;

						else if (a[j] == 'J')
							time = time + 90;

						else if (a[j] == 'K')
							time = time + 90;

						else if (a[j] == 'L')
							time = time + 90;

						else if (a[j] == 'M')
							time = time + 90;

						else if (a[j] == 'N')
							time = time + 55;
					} if (a[x] == 'B') {
						if (a[j] == 'a')
							time = time + 40;

						else if (a[j] == 'b')
							time = time + 90;

						else if (a[j] == 'c')
							time = time + 90;

						else if (a[j] == 'd')
							time = time + 90;

						else if (a[j] == 'e')
							time = time + 90;

						else if (a[j] == 'f')
							time = time + 90;

						else if (a[j] == 'g')
							time = time + 45;

						else if (a[j] == 'h')
							time = time + 90;

						else if (a[j] == 'i')
							time = time + 90;

						else if (a[j] == 'j')
							time = time + 90;

						else if (a[j] == 'k')
							time = time + 40;

						else if (a[j] == 'l')
							time = time + 55;

						else if (a[j] == 'm')
							time = time + 55;

						else if (a[j] == 'n')
							time = time + 55;

						else if (a[j] == 'o')
							time = time + 55;

						else if (a[j] == 'p')
							time = time + 55;

						else if (a[j] == 'q')
							time = time + 35;

						else if (a[j] == 'r')
							time = time + 40;

						else if (a[j] == 's')
							time = time + 15;

						else if (a[j] == 't')
							time = time + 90;

						else if (a[j] == 'u')
							time = time + 90;

						else if (a[j] == 'v')
							time = time + 30;

						else if (a[j] == 'w')
							time = time + 45;

						else if (a[j] == 'x')
							time = time + 45;

						else if (a[j] == 'y')
							time = time + 70;

						else if (a[j] == 'z')
							time = time + 90;

						else if (a[j] == 'A')
							time = time + 55;

						else if (a[j] == 'C')
							time = time + 90;

						else if (a[j] == 'D')
							time = time + 45;

						else if (a[j] == 'E')
							time = time + 70;

						else if (a[j] == 'F')
							time = time + 90;

						else if (a[j] == 'G')
							time = time + 40;

						else if (a[j] == 'H')
							time = time + 90;

						else if (a[j] == 'I')
							time = time + 55;

						else if (a[j] == 'J')
							time = time + 55;

						else if (a[j] == 'K')
							time = time + 90;

						else if (a[j] == 'L')
							time = time + 55;

						else if (a[j] == 'M')
							time = time + 55;

						else if (a[j] == 'N')
							time = time + 55;
					} if (a[x] == 'C') {
						if (a[j] == 'a')
							time = time + 65;

						else if (a[j] == 'b')
							time = time + 50;

						else if (a[j] == 'c')
							time = time + 80;

						else if (a[j] == 'd')
							time = time + 80;

						else if (a[j] == 'e')
							time = time + 65;

						else if (a[j] == 'f')
							time = time + 65;

						else if (a[j] == 'g')
							time = time + 30;

						else if (a[j] == 'h')
							time = time + 35;

						else if (a[j] == 'i')
							time = time + 55;

						else if (a[j] == 'j')
							time = time + 55;

						else if (a[j] == 'k')
							time = time + 40;

						else if (a[j] == 'l')
							time = time + 60;

						else if (a[j] == 'm')
							time = time + 40;

						else if (a[j] == 'n')
							time = time + 60;

						else if (a[j] == 'o')
							time = time + 60;

						else if (a[j] == 'p')
							time = time + 60;

						else if (a[j] == 'q')
							time = time + 50;

						else if (a[j] == 'r')
							time = time + 65;

						else if (a[j] == 's')
							time = time + 45;

						else if (a[j] == 't')
							time = time + 55;

						else if (a[j] == 'u')
							time = time + 30;

						else if (a[j] == 'v')
							time = time + 45;

						else if (a[j] == 'w')
							time = time + 70;

						else if (a[j] == 'x')
							time = time + 45;

						else if (a[j] == 'y')
							time = time + 80;

						else if (a[j] == 'z')
							time = time + 70;

						else if (a[j] == 'A')
							time = time + 70;

						else if (a[j] == 'B')
							time = time + 50;

						else if (a[j] == 'D')
							time = time + 70;

						else if (a[j] == 'E')
							time = time + 80;

						else if (a[j] == 'F')
							time = time + 65;

						else if (a[j] == 'G')
							time = time + 65;

						else if (a[j] == 'H')
							time = time + 70;

						else if (a[j] == 'I')
							time = time + 65;

						else if (a[j] == 'J')
							time = time + 55;

						else if (a[j] == 'K')
							time = time + 90;

						else if (a[j] == 'L')
							time = time + 55;

						else if (a[j] == 'M')
							time = time + 55;

						else if (a[j] == 'N')
							time = time + 55;
					} if (a[x] == 'D') {
						if (a[j] == 'a')
							time = time + 55;

						else if (a[j] == 'b')
							time = time + 90;

						else if (a[j] == 'c')
							time = time + 90;

						else if (a[j] == 'd')
							time = time + 90;

						else if (a[j] == 'e')
							time = time + 90;

						else if (a[j] == 'f')
							time = time + 90;

						else if (a[j] == 'g')
							time = time + 50;

						else if (a[j] == 'h')
							time = time + 90;

						else if (a[j] == 'i')
							time = time + 90;

						else if (a[j] == 'j')
							time = time + 90;

						else if (a[j] == 'k')
							time = time + 90;

						else if (a[j] == 'l')
							time = time + 70;

						else if (a[j] == 'm')
							time = time + 90;

						else if (a[j] == 'n')
							time = time + 90;

						else if (a[j] == 'o')
							time = time + 70;

						else if (a[j] == 'p')
							time = time + 70;

						else if (a[j] == 'q')
							time = time + 90;

						else if (a[j] == 'r')
							time = time + 90;

						else if (a[j] == 's')
							time = time + 90;

						else if (a[j] == 't')
							time = time + 90;

						else if (a[j] == 'u')
							time = time + 90;

						else if (a[j] == 'v')
							time = time + 90;

						else if (a[j] == 'w')
							time = time + 50;

						else if (a[j] == 'x')
							time = time + 20;

						else if (a[j] == 'y')
							time = time + 60;

						else if (a[j] == 'z')
							time = time + 90;

						else if (a[j] == 'A')
							time = time + 90;

						else if (a[j] == 'B')
							time = time + 90;

						else if (a[j] == 'C')
							time = time + 90;

						else if (a[j] == 'E')
							time = time + 90;

						else if (a[j] == 'F')
							time = time + 90;

						else if (a[j] == 'G')
							time = time + 55;

						else if (a[j] == 'H')
							time = time + 90;

						else if (a[j] == 'I')
							time = time + 70;

						else if (a[j] == 'J')
							time = time + 90;

						else if (a[j] == 'K')
							time = time + 90;

						else if (a[j] == 'L')
							time = time + 55;

						else if (a[j] == 'M')
							time = time + 90;

						else if (a[j] == 'N')
							time = time + 90;
					} if (a[x] == 'E') {
						if (a[j] == 'a')
							time = time + 55;

						else if (a[j] == 'b')
							time = time + 90;

						else if (a[j] == 'c')
							time = time + 90;

						else if (a[j] == 'd')
							time = time + 90;

						else if (a[j] == 'e')
							time = time + 90;

						else if (a[j] == 'f')
							time = time + 90;

						else if (a[j] == 'g')
							time = time + 80;

						else if (a[j] == 'h')
							time = time + 90;

						else if (a[j] == 'i')
							time = time + 90;

						else if (a[j] == 'j')
							time = time + 90;

						else if (a[j] == 'k')
							time = time + 40;

						else if (a[j] == 'l')
							time = time + 85;

						else if (a[j] == 'm')
							time = time + 90;

						else if (a[j] == 'n')
							time = time + 90;

						else if (a[j] == 'o')
							time = time + 85;

						else if (a[j] == 'p')
							time = time + 85;

						else if (a[j] == 'q')
							time = time + 90;

						else if (a[j] == 'r')
							time = time + 90;

						else if (a[j] == 's')
							time = time + 90;

						else if (a[j] == 't')
							time = time + 90;

						else if (a[j] == 'u')
							time = time + 90;

						else if (a[j] == 'v')
							time = time + 90;

						else if (a[j] == 'w')
							time = time + 55;

						else if (a[j] == 'x')
							time = time + 90;

						else if (a[j] == 'y')
							time = time + 100;

						else if (a[j] == 'z')
							time = time + 90;

						else if (a[j] == 'A')
							time = time + 85;

						else if (a[j] == 'B')
							time = time + 90;

						else if (a[j] == 'C')
							time = time + 90;

						else if (a[j] == 'D')
							time = time + 90;

						else if (a[j] == 'F')
							time = time + 90;

						else if (a[j] == 'G')
							time = time + 55;

						else if (a[j] == 'H')
							time = time + 90;

						else if (a[j] == 'I')
							time = time + 90;

						else if (a[j] == 'J')
							time = time + 90;

						else if (a[j] == 'K')
							time = time + 90;

						else if (a[j] == 'L')
							time = time + 55;

						else if (a[j] == 'M')
							time = time + 90;

						else if (a[j] == 'N')
							time = time + 55;
					} if (a[x] == 'F') {
						if (a[j] == 'a')
							time = time + 40;

						else if (a[j] == 'b')
							time = time + 40;

						else if (a[j] == 'c')
							time = time + 70;

						else if (a[j] == 'd')
							time = time + 70;

						else if (a[j] == 'e')
							time = time + 40;

						else if (a[j] == 'f')
							time = time + 40;

						else if (a[j] == 'g')
							time = time + 45;

						else if (a[j] == 'h')
							time = time + 40;

						else if (a[j] == 'i')
							time = time + 40;

						else if (a[j] == 'j')
							time = time + 40;

						else if (a[j] == 'k')
							time = time + 40;

						else if (a[j] == 'l')
							time = time + 55;

						else if (a[j] == 'm')
							time = time + 55;

						else if (a[j] == 'n')
							time = time + 55;

						else if (a[j] == 'o')
							time = time + 55;

						else if (a[j] == 'p')
							time = time + 55;

						else if (a[j] == 'q')
							time = time + 40;

						else if (a[j] == 'r')
							time = time + 40;

						else if (a[j] == 's')
							time = time + 40;

						else if (a[j] == 't')
							time = time + 40;

						else if (a[j] == 'u')
							time = time + 45;

						else if (a[j] == 'v')
							time = time + 45;

						else if (a[j] == 'w')
							time = time + 45;

						else if (a[j] == 'x')
							time = time + 45;

						else if (a[j] == 'y')
							time = time + 70;

						else if (a[j] == 'z')
							time = time + 45;

						else if (a[j] == 'A')
							time = time + 55;

						else if (a[j] == 'B')
							time = time + 40;

						else if (a[j] == 'C')
							time = time + 45;

						else if (a[j] == 'D')
							time = time + 45;

						else if (a[j] == 'E')
							time = time + 70;

						else if (a[j] == 'G')
							time = time + 35;

						else if (a[j] == 'H')
							time = time + 45;

						else if (a[j] == 'I')
							time = time + 55;

						else if (a[j] == 'J')
							time = time + 55;

						else if (a[j] == 'K')
							time = time + 90;

						else if (a[j] == 'L')
							time = time + 55;

						else if (a[j] == 'M')
							time = time + 55;

						else if (a[j] == 'N')
							time = time + 55;
					} if (a[x] == 'G') {
						if (a[j] == 'a')
							time = time + 40;

						else if (a[j] == 'b')
							time = time + 90;

						else if (a[j] == 'c')
							time = time + 90;

						else if (a[j] == 'd')
							time = time + 90;

						else if (a[j] == 'e')
							time = time + 90;

						else if (a[j] == 'f')
							time = time + 90;

						else if (a[j] == 'g')
							time = time + 45;

						else if (a[j] == 'h')
							time = time + 90;

						else if (a[j] == 'i')
							time = time + 90;

						else if (a[j] == 'j')
							time = time + 90;

						else if (a[j] == 'k')
							time = time + 90;

						else if (a[j] == 'l')
							time = time + 55;

						else if (a[j] == 'm')
							time = time + 90;

						else if (a[j] == 'n')
							time = time + 90;

						else if (a[j] == 'o')
							time = time + 55;

						else if (a[j] == 'p')
							time = time + 55;

						else if (a[j] == 'q')
							time = time + 90;

						else if (a[j] == 'r')
							time = time + 90;

						else if (a[j] == 's')
							time = time + 90;

						else if (a[j] == 't')
							time = time + 90;

						else if (a[j] == 'u')
							time = time + 90;

						else if (a[j] == 'v')
							time = time + 90;

						else if (a[j] == 'w')
							time = time + 45;

						else if (a[j] == 'x')
							time = time + 45;

						else if (a[j] == 'y')
							time = time + 70;

						else if (a[j] == 'z')
							time = time + 90;

						else if (a[j] == 'A')
							time = time + 90;

						else if (a[j] == 'B')
							time = time + 90;

						else if (a[j] == 'C')
							time = time + 90;

						else if (a[j] == 'D')
							time = time + 45;

						else if (a[j] == 'E')
							time = time + 90;

						else if (a[j] == 'F')
							time = time + 90;

						else if (a[j] == 'H')
							time = time + 90;

						else if (a[j] == 'I')
							time = time + 55;

						else if (a[j] == 'J')
							time = time + 90;

						else if (a[j] == 'K')
							time = time + 90;

						else if (a[j] == 'L')
							time = time + 55;

						else if (a[j] == 'M')
							time = time + 90;

						else if (a[j] == 'N')
							time = time + 90;
					} if (a[x] == 'H') {
						if (a[j] == 'a')
							time = time + 50;

						else if (a[j] == 'b')
							time = time + 90;

						else if (a[j] == 'c')
							time = time + 90;

						else if (a[j] == 'd')
							time = time + 90;

						else if (a[j] == 'e')
							time = time + 90;

						else if (a[j] == 'f')
							time = time + 90;

						else if (a[j] == 'g')
							time = time + 70;

						else if (a[j] == 'h')
							time = time + 90;

						else if (a[j] == 'i')
							time = time + 90;

						else if (a[j] == 'j')
							time = time + 90;

						else if (a[j] == 'k')
							time = time + 90;

						else if (a[j] == 'l')
							time = time + 70;

						else if (a[j] == 'm')
							time = time + 60;

						else if (a[j] == 'n')
							time = time + 70;

						else if (a[j] == 'o')
							time = time + 70;

						else if (a[j] == 'p')
							time = time + 70;

						else if (a[j] == 'q')
							time = time + 90;

						else if (a[j] == 'r')
							time = time + 90;

						else if (a[j] == 's')
							time = time + 90;

						else if (a[j] == 't')
							time = time + 90;

						else if (a[j] == 'u')
							time = time + 90;

						else if (a[j] == 'v')
							time = time + 90;

						else if (a[j] == 'w')
							time = time + 70;

						else if (a[j] == 'x')
							time = time + 70;

						else if (a[j] == 'y')
							time = time + 80;

						else if (a[j] == 'z')
							time = time + 90;

						else if (a[j] == 'A')
							time = time + 90;

						else if (a[j] == 'B')
							time = time + 90;

						else if (a[j] == 'C')
							time = time + 90;

						else if (a[j] == 'D')
							time = time + 70;

						else if (a[j] == 'E')
							time = time + 90;

						else if (a[j] == 'F')
							time = time + 55;

						else if (a[j] == 'G')
							time = time + 55;

						else if (a[j] == 'I')
							time = time + 60;

						else if (a[j] == 'J')
							time = time + 90;

						else if (a[j] == 'K')
							time = time + 90;

						else if (a[j] == 'L')
							time = time + 55;

						else if (a[j] == 'M')
							time = time + 55;

						else if (a[j] == 'N')
							time = time + 90;
					} if (a[x] == 'I') {
						if (a[j] == 'a')
							time = time + 55;

						else if (a[j] == 'b')
							time = time + 90;

						else if (a[j] == 'c')
							time = time + 90;

						else if (a[j] == 'd')
							time = time + 90;

						else if (a[j] == 'e')
							time = time + 90;

						else if (a[j] == 'f')
							time = time + 90;

						else if (a[j] == 'g')
							time = time + 60;

						else if (a[j] == 'h')
							time = time + 90;

						else if (a[j] == 'i')
							time = time + 90;

						else if (a[j] == 'j')
							time = time + 90;

						else if (a[j] == 'k')
							time = time + 90;

						else if (a[j] == 'l')
							time = time + 85;

						else if (a[j] == 'm')
							time = time + 90;

						else if (a[j] == 'n')
							time = time + 90;

						else if (a[j] == 'o')
							time = time + 85;

						else if (a[j] == 'p')
							time = time + 85;

						else if (a[j] == 'q')
							time = time + 90;

						else if (a[j] == 'r')
							time = time + 90;

						else if (a[j] == 's')
							time = time + 90;

						else if (a[j] == 't')
							time = time + 90;

						else if (a[j] == 'u')
							time = time + 90;

						else if (a[j] == 'v')
							time = time + 90;

						else if (a[j] == 'w')
							time = time + 60;

						else if (a[j] == 'x')
							time = time + 75;

						else if (a[j] == 'y')
							time = time + 75;

						else if (a[j] == 'z')
							time = time + 90;

						else if (a[j] == 'A')
							time = time + 90;

						else if (a[j] == 'B')
							time = time + 90;

						else if (a[j] == 'C')
							time = time + 90;

						else if (a[j] == 'D')
							time = time + 75;

						else if (a[j] == 'E')
							time = time + 90;

						else if (a[j] == 'F')
							time = time + 90;

						else if (a[j] == 'G')
							time = time + 55;

						else if (a[j] == 'H')
							time = time + 90;

						else if (a[j] == 'J')
							time = time + 90;

						else if (a[j] == 'K')
							time = time + 90;

						else if (a[j] == 'L')
							time = time + 55;

						else if (a[j] == 'M')
							time = time + 90;

						else if (a[j] == 'N')
							time = time + 90;
					} if (a[x] == 'J') {
						if (a[j] == 'a')
							time = time + 40;

						else if (a[j] == 'b')
							time = time + 90;

						else if (a[j] == 'c')
							time = time + 90;

						else if (a[j] == 'd')
							time = time + 90;

						else if (a[j] == 'e')
							time = time + 90;

						else if (a[j] == 'f')
							time = time + 90;

						else if (a[j] == 'g')
							time = time + 45;

						else if (a[j] == 'h')
							time = time + 90;

						else if (a[j] == 'i')
							time = time + 90;

						else if (a[j] == 'j')
							time = time + 90;

						else if (a[j] == 'k')
							time = time + 35;

						else if (a[j] == 'l')
							time = time + 55;

						else if (a[j] == 'm')
							time = time + 55;

						else if (a[j] == 'n')
							time = time + 55;

						else if (a[j] == 'o')
							time = time + 55;

						else if (a[j] == 'p')
							time = time + 55;

						else if (a[j] == 'q')
							time = time + 40;

						else if (a[j] == 'r')
							time = time + 40;

						else if (a[j] == 's')
							time = time + 15;

						else if (a[j] == 't')
							time = time + 90;

						else if (a[j] == 'u')
							time = time + 90;

						else if (a[j] == 'v')
							time = time + 30;

						else if (a[j] == 'w')
							time = time + 45;

						else if (a[j] == 'x')
							time = time + 45;

						else if (a[j] == 'y')
							time = time + 70;

						else if (a[j] == 'z')
							time = time + 90;

						else if (a[j] == 'A')
							time = time + 55;

						else if (a[j] == 'B')
							time = time + 50;

						else if (a[j] == 'C')
							time = time + 90;

						else if (a[j] == 'D')
							time = time + 45;

						else if (a[j] == 'E')
							time = time + 70;

						else if (a[j] == 'F')
							time = time + 90;

						else if (a[j] == 'G')
							time = time + 40;

						else if (a[j] == 'H')
							time = time + 90;

						else if (a[j] == 'I')
							time = time + 55;

						else if (a[j] == 'K')
							time = time + 90;

						else if (a[j] == 'L')
							time = time + 55;

						else if (a[j] == 'M')
							time = time + 55;

						else if (a[j] == 'N')
							time = time + 55;
					} if (a[x] == 'K') {
						if (a[j] == 'a')
							time = time + 40;

						else if (a[j] == 'b')
							time = time + 90;

						else if (a[j] == 'c')
							time = time + 90;

						else if (a[j] == 'd')
							time = time + 90;

						else if (a[j] == 'e')
							time = time + 90;

						else if (a[j] == 'f')
							time = time + 90;

						else if (a[j] == 'g')
							time = time + 45;

						else if (a[j] == 'h')
							time = time + 90;

						else if (a[j] == 'i')
							time = time + 90;

						else if (a[j] == 'j')
							time = time + 90;

						else if (a[j] == 'k')
							time = time + 40;

						else if (a[j] == 'l')
							time = time + 55;

						else if (a[j] == 'm')
							time = time + 55;

						else if (a[j] == 'n')
							time = time + 55;

						else if (a[j] == 'o')
							time = time + 55;

						else if (a[j] == 'p')
							time = time + 55;

						else if (a[j] == 'q')
							time = time + 35;

						else if (a[j] == 'r')
							time = time + 40;

						else if (a[j] == 's')
							time = time + 15;

						else if (a[j] == 't')
							time = time + 90;

						else if (a[j] == 'u')
							time = time + 90;

						else if (a[j] == 'v')
							time = time + 30;

						else if (a[j] == 'w')
							time = time + 45;

						else if (a[j] == 'x')
							time = time + 45;

						else if (a[j] == 'y')
							time = time + 70;

						else if (a[j] == 'z')
							time = time + 90;

						else if (a[j] == 'A')
							time = time + 55;

						else if (a[j] == 'B')
							time = time + 90;

						else if (a[j] == 'C')
							time = time + 90;

						else if (a[j] == 'D')
							time = time + 45;

						else if (a[j] == 'E')
							time = time + 70;

						else if (a[j] == 'F')
							time = time + 90;

						else if (a[j] == 'G')
							time = time + 40;

						else if (a[j] == 'H')
							time = time + 90;

						else if (a[j] == 'I')
							time = time + 55;

						else if (a[j] == 'J')
							time = time + 55;

						else if (a[j] == 'L')
							time = time + 55;

						else if (a[j] == 'M')
							time = time + 55;

						else if (a[j] == 'N')
							time = time + 55;
					} if (a[x] == 'L') {
						if (a[j] == 'a')
							time = time + 40;

						else if (a[j] == 'b')
							time = time + 90;

						else if (a[j] == 'c')
							time = time + 90;

						else if (a[j] == 'd')
							time = time + 90;

						else if (a[j] == 'e')
							time = time + 90;

						else if (a[j] == 'f')
							time = time + 90;

						else if (a[j] == 'g')
							time = time + 45;

						else if (a[j] == 'h')
							time = time + 90;

						else if (a[j] == 'i')
							time = time + 90;

						else if (a[j] == 'j')
							time = time + 90;

						else if (a[j] == 'L')
							time = time + 40;

						else if (a[j] == 'l')
							time = time + 55;

						else if (a[j] == 'm')
							time = time + 55;

						else if (a[j] == 'n')
							time = time + 55;

						else if (a[j] == 'o')
							time = time + 55;

						else if (a[j] == 'p')
							time = time + 55;

						else if (a[j] == 'q')
							time = time + 35;

						else if (a[j] == 'r')
							time = time + 40;

						else if (a[j] == 's')
							time = time + 15;

						else if (a[j] == 't')
							time = time + 90;

						else if (a[j] == 'u')
							time = time + 90;

						else if (a[j] == 'v')
							time = time + 30;

						else if (a[j] == 'w')
							time = time + 45;

						else if (a[j] == 'x')
							time = time + 45;

						else if (a[j] == 'y')
							time = time + 70;

						else if (a[j] == 'z')
							time = time + 90;

						else if (a[j] == 'A')
							time = time + 55;

						else if (a[j] == 'B')
							time = time + 90;

						else if (a[j] == 'C')
							time = time + 90;

						else if (a[j] == 'D')
							time = time + 45;

						else if (a[j] == 'E')
							time = time + 90;

						else if (a[j] == 'F')
							time = time + 90;

						else if (a[j] == 'G')
							time = time + 40;

						else if (a[j] == 'H')
							time = time + 90;

						else if (a[j] == 'I')
							time = time + 55;

						else if (a[j] == 'J')
							time = time + 55;

						else if (a[j] == 'K')
							time = time + 90;

						else if (a[j] == 'M')
							time = time + 55;

						else if (a[j] == 'N')
							time = time + 55;
					} if (a[x] == 'M') {
						if (a[j] == 'a')
							time = time + 40;

						else if (a[j] == 'b')
							time = time + 90;

						else if (a[j] == 'c')
							time = time + 90;

						else if (a[j] == 'd')
							time = time + 90;

						else if (a[j] == 'e')
							time = time + 90;

						else if (a[j] == 'f')
							time = time + 90;

						else if (a[j] == 'g')
							time = time + 45;

						else if (a[j] == 'h')
							time = time + 90;

						else if (a[j] == 'i')
							time = time + 90;

						else if (a[j] == 'j')
							time = time + 90;

						else if (a[j] == 'k')
							time = time + 90;

						else if (a[j] == 'l')
							time = time + 55;

						else if (a[j] == 'm')
							time = time + 90;

						else if (a[j] == 'n')
							time = time + 55;

						else if (a[j] == 'o')
							time = time + 55;

						else if (a[j] == 'p')
							time = time + 55;

						else if (a[j] == 'q')
							time = time + 90;

						else if (a[j] == 'r')
							time = time + 90;

						else if (a[j] == 's')
							time = time + 90;

						else if (a[j] == 't')
							time = time + 90;

						else if (a[j] == 'u')
							time = time + 90;

						else if (a[j] == 'v')
							time = time + 90;

						else if (a[j] == 'w')
							time = time + 45;

						else if (a[j] == 'x')
							time = time + 45;

						else if (a[j] == 'y')
							time = time + 70;

						else if (a[j] == 'z')
							time = time + 90;

						else if (a[j] == 'A')
							time = time + 90;

						else if (a[j] == 'B')
							time = time + 90;

						else if (a[j] == 'C')
							time = time + 90;

						else if (a[j] == 'D')
							time = time + 45;

						else if (a[j] == 'E')
							time = time + 90;

						else if (a[j] == 'F')
							time = time + 90;

						else if (a[j] == 'G')
							time = time + 40;

						else if (a[j] == 'H')
							time = time + 90;

						else if (a[j] == 'I')
							time = time + 55;

						else if (a[j] == 'J')
							time = time + 90;

						else if (a[j] == 'K')
							time = time + 90;

						else if (a[j] == 'L')
							time = time + 55;

						else if (a[j] == 'N')
							time = time + 90;
					} if (a[x] == 'N') {
						if (a[j] == 'a')
							time = time + 40;

						else if (a[j] == 'b')
							time = time + 90;

						else if (a[j] == 'c')
							time = time + 90;

						else if (a[j] == 'd')
							time = time + 90;

						else if (a[j] == 'e')
							time = time + 90;

						else if (a[j] == 'f')
							time = time + 90;

						else if (a[j] == 'g')
							time = time + 45;

						else if (a[j] == 'h')
							time = time + 90;

						else if (a[j] == 'i')
							time = time + 90;

						else if (a[j] == 'j')
							time = time + 90;

						else if (a[j] == 'k')
							time = time + 40;

						else if (a[j] == 'l')
							time = time + 55;

						else if (a[j] == 'm')
							time = time + 55;

						else if (a[j] == 'n')
							time = time + 90;

						else if (a[j] == 'o')
							time = time + 55;

						else if (a[j] == 'p')
							time = time + 55;

						else if (a[j] == 'q')
							time = time + 90;

						else if (a[j] == 'r')
							time = time + 90;

						else if (a[j] == 's')
							time = time + 90;

						else if (a[j] == 't')
							time = time + 90;

						else if (a[j] == 'u')
							time = time + 90;

						else if (a[j] == 'v')
							time = time + 30;

						else if (a[j] == 'w')
							time = time + 45;

						else if (a[j] == 'x')
							time = time + 45;

						else if (a[j] == 'y')
							time = time + 70;

						else if (a[j] == 'z')
							time = time + 90;

						else if (a[j] == 'A')
							time = time + 55;

						else if (a[j] == 'B')
							time = time + 90;

						else if (a[j] == 'C')
							time = time + 90;

						else if (a[j] == 'D')
							time = time + 45;

						else if (a[j] == 'E')
							time = time + 70;

						else if (a[j] == 'F')
							time = time + 90;

						else if (a[j] == 'G')
							time = time + 40;

						else if (a[j] == 'H')
							time = time + 90;

						else if (a[j] == 'I')
							time = time + 55;

						else if (a[j] == 'J')
							time = time + 90;

						else if (a[j] == 'K')
							time = time + 90;

						else if (a[j] == 'L')
							time = time + 55;

						else if (a[j] == 'M')
							time = time + 90;
					}
				}
			}
		}

		optimal = time;
		printf("The base time is %d\n", optimal);
	}
	if (l == r) {
		time = 0;
		for (x = 0; x<r + 1; x++) {
			for (j = 0; j<r + 1; j++) {
				if (j - x == 1) {
					if (a[x] == 'a') {
						if (a[j] == 'b')
							time = time + 90;
						else if (a[j] == 'c')
							time = time + 90;
						else if (a[j] == 'd')
							time = time + 90;
						else if (a[j] == 'e')
							time = time + 90;
						else if (a[j] == 'f')
							time = time + 90;
						else if (a[j] == 'g')
							time = time + 35;
						else if (a[j] == 'h')
							time = time + 90;
						else if (a[j] == 'i')
							time = time + 90;
						else if (a[j] == 'j')
							time = time + 90;
						else if (a[j] == 'k')
							time = time + 90;
						else if (a[j] == 'l')
							time = time + 55;
						else if (a[j] == 'm')
							time = time + 90;
						else if (a[j] == 'n')
							time = time + 90;
						else if (a[j] == 'o')
							time = time + 55;
						else if (a[j] == 'p')
							time = time + 55;
						else if (a[j] == 'q')
							time = time + 90;
						else if (a[j] == 'r')
							time = time + 90;
						else if (a[j] == 's')
							time = time + 90;
						else if (a[j] == 't')
							time = time + 90;
						else if (a[j] == 'u')
							time = time + 90;
						else if (a[j] == 'v')
							time = time + 90;
						else if (a[j] == 'w')
							time = time + 45;
						else if (a[j] == 'x')
							time = time + 40;
						else if (a[j] == 'y')
							time = time + 70;
						else if (a[j] == 'z')
							time = time + 90;
						else if (a[j] == 'A')
							time = time + 90;
						else if (a[j] == 'B')
							time = time + 90;
						else if (a[j] == 'C')
							time = time + 90;
						else if (a[j] == 'D')
							time = time + 40;
						else if (a[j] == 'E')
							time = time + 90;
						else if (a[j] == 'F')
							time = time + 90;
						else if (a[j] == 'G')
							time = time + 40;
						else if (a[j] == 'H')
							time = time + 90;
						else if (a[j] == 'I')
							time = time + 40;
						else if (a[j] == 'J')
							time = time + 90;
						else if (a[j] == 'K')
							time = time + 90;
						else if (a[j] == 'L')
							time = time + 90;
						else if (a[j] == 'M')
							time = time + 90;
						else if (a[j] == 'N')
							time = time + 90;
					} if (a[x] == 'b') {
						if (a[j] == 'a')
							time = time + 90;
						else if (a[j] == 'c')
							time = time + 90;

						else if (a[j] == 'd')
							time = time + 60;

						else if (a[j] == 'e')
							time = time + 30;

						else if (a[j] == 'f')
							time = time + 30;

						else if (a[j] == 'g')
							time = time + 45;

						else if (a[j] == 'h')
							time = time + 40;

						else if (a[j] == 'i')
							time = time + 40;

						else if (a[j] == 'j')
							time = time + 40;

						else if (a[j] == 'k')
							time = time + 40;

						else if (a[j] == 'l')
							time = time + 55;

						else if (a[j] == 'm')
							time = time + 55;

						else if (a[j] == 'n')
							time = time + 55;

						else if (a[j] == 'o')
							time = time + 55;

						else if (a[j] == 'p')
							time = time + 55;

						else if (a[j] == 'q')
							time = time + 40;

						else if (a[j] == 'r')
							time = time + 40;

						else if (a[j] == 's')
							time = time + 40;

						else if (a[j] == 't')
							time = time + 40;

						else if (a[j] == 'u')
							time = time + 45;

						else if (a[j] == 'v')
							time = time + 40;

						else if (a[j] == 'w')
							time = time + 45;

						else if (a[j] == 'x')
							time = time + 40;

						else if (a[j] == 'y')
							time = time + 70;

						else if (a[j] == 'z')
							time = time + 45;

						else if (a[j] == 'A')
							time = time + 35;

						else if (a[j] == 'B')
							time = time + 40;

						else if (a[j] == 'C')
							time = time + 45;

						else if (a[j] == 'D')
							time = time + 40;

						else if (a[j] == 'E')
							time = time + 65;

						else if (a[j] == 'F')
							time = time + 40;

						else if (a[j] == 'G')
							time = time + 40;

						else if (a[j] == 'H')
							time = time + 45;

						else if (a[j] == 'I')
							time = time + 55;

						else if (a[j] == 'J')
							time = time + 55;

						else if (a[j] == 'K')
							time = time + 55;

						else if (a[j] == 'L')
							time = time + 55;

						else if (a[j] == 'M')
							time = time + 55;

						else if (a[j] == 'N')
							time = time + 55;
					} if (a[x] == 'c') {
						if (a[j] == 'b')
							time = time + 90;

						else if (a[j] == 'a')
							time = time + 55;

						else if (a[j] == 'd')
							time = time + 30;

						else if (a[j] == 'e')
							time = time + 90;

						else if (a[j] == 'f')
							time = time + 90;

						else if (a[j] == 'g')
							time = time + 70;

						else if (a[j] == 'h')
							time = time + 90;

						else if (a[j] == 'i')
							time = time + 90;

						else if (a[j] == 'j')
							time = time + 90;

						else if (a[j] == 'k')
							time = time + 60;

						else if (a[j] == 'l')
							time = time + 85;

						else if (a[j] == 'm')
							time = time + 85;

						else if (a[j] == 'n')
							time = time + 90;

						else if (a[j] == 'o')
							time = time + 85;

						else if (a[j] == 'p')
							time = time + 85;

						else if (a[j] == 'q')
							time = time + 90;

						else if (a[j] == 'r')
							time = time + 90;

						else if (a[j] == 's')
							time = time + 90;

						else if (a[j] == 't')
							time = time + 90;

						else if (a[j] == 'u')
							time = time + 90;

						else if (a[j] == 'v')
							time = time + 70;

						else if (a[j] == 'w')
							time = time + 70;

						else if (a[j] == 'x')
							time = time + 70;

						else if (a[j] == 'y')
							time = time + 70;

						else if (a[j] == 'z')
							time = time + 90;

						else if (a[j] == 'A')
							time = time + 80;

						else if (a[j] == 'B')
							time = time + 90;

						else if (a[j] == 'C')
							time = time + 90;

						else if (a[j] == 'D')
							time = time + 70;

						else if (a[j] == 'E')
							time = time + 90;

						else if (a[j] == 'F')
							time = time + 90;

						else if (a[j] == 'G')
							time = time + 65;

						else if (a[j] == 'H')
							time = time + 90;

						else if (a[j] == 'I')
							time = time + 70;

						else if (a[j] == 'J')
							time = time + 90;

						else if (a[j] == 'K')
							time = time + 90;

						else if (a[j] == 'L')
							time = time + 90;

						else if (a[j] == 'M')
							time = time + 90;

						else if (a[j] == 'N')
							time = time + 90;
					} if (a[x] == 'd') {
						if (a[j] == 'a')
							time = time + 55;

						else if (a[j] == 'b')
							time = time + 90;

						else if (a[j] == 'c')
							time = time + 40;

						else if (a[j] == 'e')
							time = time + 90;

						else if (a[j] == 'f')
							time = time + 90;

						else if (a[j] == 'g')
							time = time + 70;

						else if (a[j] == 'h')
							time = time + 90;

						else if (a[j] == 'i')
							time = time + 90;

						else if (a[j] == 'j')
							time = time + 90;

						else if (a[j] == 'k')
							time = time + 60;

						else if (a[j] == 'l')
							time = time + 85;

						else if (a[j] == 'm')
							time = time + 85;

						else if (a[j] == 'n')
							time = time + 90;

						else if (a[j] == 'o')
							time = time + 85;

						else if (a[j] == 'p')
							time = time + 85;

						else if (a[j] == 'q')
							time = time + 90;

						else if (a[j] == 'r')
							time = time + 90;

						else if (a[j] == 's')
							time = time + 90;

						else if (a[j] == 't')
							time = time + 90;

						else if (a[j] == 'u')
							time = time + 90;

						else if (a[j] == 'v')
							time = time + 70;

						else if (a[j] == 'w')
							time = time + 70;

						else if (a[j] == 'x')
							time = time + 70;

						else if (a[j] == 'y')
							time = time + 70;

						else if (a[j] == 'z')
							time = time + 90;

						else if (a[j] == 'A')
							time = time + 80;

						else if (a[j] == 'B')
							time = time + 90;

						else if (a[j] == 'C')
							time = time + 90;

						else if (a[j] == 'D')
							time = time + 70;

						else if (a[j] == 'E')
							time = time + 90;

						else if (a[j] == 'F')
							time = time + 90;

						else if (a[j] == 'G')
							time = time + 65;

						else if (a[j] == 'H')
							time = time + 90;

						else if (a[j] == 'I')
							time = time + 70;

						else if (a[j] == 'J')
							time = time + 90;

						else if (a[j] == 'K')
							time = time + 90;

						else if (a[j] == 'L')
							time = time + 90;

						else if (a[j] == 'M')
							time = time + 90;

						else if (a[j] == 'N')
							time = time + 90;
					} if (a[x] == 'e') {
						if (a[j] == 'a')
							time = time + 20;

						else if (a[j] == 'b')
							time = time + 20;

						else if (a[j] == 'c')
							time = time + 30;

						else if (a[j] == 'd')
							time = time + 60;

						else if (a[j] == 'f')
							time = time + 10;

						else if (a[j] == 'g')
							time = time + 40;

						else if (a[j] == 'h')
							time = time + 35;

						else if (a[j] == 'i')
							time = time + 35;

						else if (a[j] == 'j')
							time = time + 20;

						else if (a[j] == 'k')
							time = time + 35;

						else if (a[j] == 'l')
							time = time + 50;

						else if (a[j] == 'm')
							time = time + 50;

						else if (a[j] == 'n')
							time = time + 50;

						else if (a[j] == 'o')
							time = time + 50;

						else if (a[j] == 'p')
							time = time + 50;

						else if (a[j] == 'q')
							time = time + 35;

						else if (a[j] == 'r')
							time = time + 35;

						else if (a[j] == 's')
							time = time + 10;

						else if (a[j] == 't')
							time = time + 35;

						else if (a[j] == 'u')
							time = time + 40;

						else if (a[j] == 'v')
							time = time + 30;

						else if (a[j] == 'w')
							time = time + 40;

						else if (a[j] == 'x')
							time = time + 35;

						else if (a[j] == 'y')
							time = time + 70;

						else if (a[j] == 'z')
							time = time + 35;

						else if (a[j] == 'A')
							time = time + 30;

						else if (a[j] == 'B')
							time = time + 35;

						else if (a[j] == 'C')
							time = time + 40;

						else if (a[j] == 'D')
							time = time + 35;

						else if (a[j] == 'E')
							time = time + 60;

						else if (a[j] == 'F')
							time = time + 35;

						else if (a[j] == 'G')
							time = time + 35;

						else if (a[j] == 'H')
							time = time + 40;

						else if (a[j] == 'I')
							time = time + 45;

						else if (a[j] == 'J')
							time = time + 90;

						else if (a[j] == 'K')
							time = time + 90;

						else if (a[j] == 'L')
							time = time + 90;

						else if (a[j] == 'M')
							time = time + 90;

						else if (a[j] == 'N')
							time = time + 90;
					} if (a[x] == 'f') {
						if (a[j] == 'a')
							time = time + 20;

						else if (a[j] == 'b')
							time = time + 20;

						else if (a[j] == 'c')
							time = time + 25;

						else if (a[j] == 'd')
							time = time + 40;

						else if (a[j] == 'e')
							time = time + 10;

						else if (a[j] == 'g')
							time = time + 40;

						else if (a[j] == 'h')
							time = time + 35;

						else if (a[j] == 'i')
							time = time + 35;

						else if (a[j] == 'j')
							time = time + 20;

						else if (a[j] == 'k')
							time = time + 30;

						else if (a[j] == 'l')
							time = time + 50;

						else if (a[j] == 'm')
							time = time + 35;

						else if (a[j] == 'n')
							time = time + 35;

						else if (a[j] == 'o')
							time = time + 50;

						else if (a[j] == 'p')
							time = time + 50;

						else if (a[j] == 'q')
							time = time + 35;

						else if (a[j] == 'r')
							time = time + 35;

						else if (a[j] == 's')
							time = time + 25;

						else if (a[j] == 't')
							time = time + 35;

						else if (a[j] == 'u')
							time = time + 25;

						else if (a[j] == 'v')
							time = time + 35;

						else if (a[j] == 'w')
							time = time + 40;

						else if (a[j] == 'x')
							time = time + 35;

						else if (a[j] == 'y')
							time = time + 70;

						else if (a[j] == 'z')
							time = time + 40;

						else if (a[j] == 'A')
							time = time + 25;

						else if (a[j] == 'B')
							time = time + 35;

						else if (a[j] == 'C')
							time = time + 25;

						else if (a[j] == 'D')
							time = time + 30;

						else if (a[j] == 'E')
							time = time + 35;

						else if (a[j] == 'F')
							time = time + 35;

						else if (a[j] == 'G')
							time = time + 35;

						else if (a[j] == 'H')
							time = time + 40;

						else if (a[j] == 'I')
							time = time + 45;

						else if (a[j] == 'J')
							time = time + 35;

						else if (a[j] == 'K')
							time = time + 35;

						else if (a[j] == 'L')
							time = time + 35;

						else if (a[j] == 'M')
							time = time + 35;

						else if (a[j] == 'N')
							time = time + 35;
					} if (a[x] == 'g') {
						if (a[j] == 'a')
							time = time + 65;

						else if (a[j] == 'b')
							time = time + 90;

						else if (a[j] == 'c')
							time = time + 90;

						else if (a[j] == 'd')
							time = time + 90;

						else if (a[j] == 'e')
							time = time + 90;

						else if (a[j] == 'f')
							time = time + 90;

						else if (a[j] == 'h')
							time = time + 90;

						else if (a[j] == 'i')
							time = time + 90;

						else if (a[j] == 'j')
							time = time + 90;

						else if (a[j] == 'k')
							time = time + 90;

						else if (a[j] == 'l')
							time = time + 60;

						else if (a[j] == 'm')
							time = time + 90;

						else if (a[j] == 'n')
							time = time + 90;

						else if (a[j] == 'o')
							time = time + 60;

						else if (a[j] == 'p')
							time = time + 60;

						else if (a[j] == 'q')
							time = time + 90;

						else if (a[j] == 'r')
							time = time + 90;

						else if (a[j] == 's')
							time = time + 90;

						else if (a[j] == 't')
							time = time + 90;

						else if (a[j] == 'u')
							time = time + 90;

						else if (a[j] == 'v')
							time = time + 90;

						else if (a[j] == 'w')
							time = time + 40;

						else if (a[j] == 'x')
							time = time + 40;

						else if (a[j] == 'y')
							time = time + 30;

						else if (a[j] == 'z')
							time = time + 90;

						else if (a[j] == 'A')
							time = time + 90;

						else if (a[j] == 'B')
							time = time + 90;

						else if (a[j] == 'C')
							time = time + 90;

						else if (a[j] == 'D')
							time = time + 40;

						else if (a[j] == 'E')
							time = time + 90;

						else if (a[j] == 'F')
							time = time + 90;

						else if (a[j] == 'G')
							time = time + 65;

						else if (a[j] == 'H')
							time = time + 90;

						else if (a[j] == 'I')
							time = time + 70;

						else if (a[j] == 'J')
							time = time + 90;

						else if (a[j] == 'K')
							time = time + 90;

						else if (a[j] == 'L')
							time = time + 90;

						else if (a[j] == 'M')
							time = time + 90;

						else if (a[j] == 'N')
							time = time + 90;
					} if (a[x] == 'h') {
						if (a[j] == 'a')
							time = time + 40;

						else if (a[j] == 'b')
							time = time + 40;

						else if (a[j] == 'c')
							time = time + 70;

						else if (a[j] == 'd')
							time = time + 70;

						else if (a[j] == 'e')
							time = time + 40;

						else if (a[j] == 'f')
							time = time + 40;

						else if (a[j] == 'g')
							time = time + 45;

						else if (a[j] == 'i')
							time = time + 35;

						else if (a[j] == 'j')
							time = time + 35;

						else if (a[j] == 'k')
							time = time + 35;

						else if (a[j] == 'l')
							time = time + 45;

						else if (a[j] == 'm')
							time = time + 45;

						else if (a[j] == 'n')
							time = time + 40;

						else if (a[j] == 'o')
							time = time + 45;

						else if (a[j] == 'p')
							time = time + 45;

						else if (a[j] == 'q')
							time = time + 40;

						else if (a[j] == 'r')
							time = time + 40;

						else if (a[j] == 's')
							time = time + 40;

						else if (a[j] == 't')
							time = time + 35;

						else if (a[j] == 'u')
							time = time + 25;

						else if (a[j] == 'v')
							time = time + 40;

						else if (a[j] == 'w')
							time = time + 45;

						else if (a[j] == 'x')
							time = time + 45;

						else if (a[j] == 'y')
							time = time + 70;

						else if (a[j] == 'z')
							time = time + 35;

						else if (a[j] == 'A')
							time = time + 55;

						else if (a[j] == 'B')
							time = time + 40;

						else if (a[j] == 'C')
							time = time + 45;

						else if (a[j] == 'D')
							time = time + 45;

						else if (a[j] == 'E')
							time = time + 70;

						else if (a[j] == 'F')
							time = time + 40;

						else if (a[j] == 'G')
							time = time + 40;

						else if (a[j] == 'H')
							time = time + 45;

						else if (a[j] == 'I')
							time = time + 55;

						else if (a[j] == 'J')
							time = time + 90;

						else if (a[j] == 'K')
							time = time + 90;

						else if (a[j] == 'L')
							time = time + 90;

						else if (a[j] == 'M')
							time = time + 90;

						else if (a[j] == 'N')
							time = time + 90;
					}if (a[x] == 'i') {
						if (a[j] == 'a')
							time = time + 35;

						else if (a[j] == 'b')
							time = time + 35;

						else if (a[j] == 'c')
							time = time + 60;

						else if (a[j] == 'd')
							time = time + 40;

						else if (a[j] == 'e')
							time = time + 35;

						else if (a[j] == 'f')
							time = time + 35;

						else if (a[j] == 'g')
							time = time + 30;

						else if (a[j] == 'h')
							time = time + 30;

						else if (a[j] == 'j')
							time = time + 10;

						else if (a[j] == 'k')
							time = time + 20;

						else if (a[j] == 'l')
							time = time + 30;

						else if (a[j] == 'm')
							time = time + 30;

						else if (a[j] == 'n')
							time = time + 30;

						else if (a[j] == 'o')
							time = time + 30;

						else if (a[j] == 'p')
							time = time + 30;

						else if (a[j] == 'q')
							time = time + 35;

						else if (a[j] == 'r')
							time = time + 35;

						else if (a[j] == 's')
							time = time + 35;

						else if (a[j] == 't')
							time = time + 20;

						else if (a[j] == 'u')
							time = time + 35;

						else if (a[j] == 'v')
							time = time + 30;

						else if (a[j] == 'w')
							time = time + 30;

						else if (a[j] == 'x')
							time = time + 15;

						else if (a[j] == 'y')
							time = time + 60;

						else if (a[j] == 'z')
							time = time + 40;

						else if (a[j] == 'A')
							time = time + 50;

						else if (a[j] == 'B')
							time = time + 35;

						else if (a[j] == 'C')
							time = time + 30;

						else if (a[j] == 'D')
							time = time + 15;

						else if (a[j] == 'E')
							time = time + 65;

						else if (a[j] == 'F')
							time = time + 35;

						else if (a[j] == 'G')
							time = time + 35;

						else if (a[j] == 'H')
							time = time + 40;

						else if (a[j] == 'I')
							time = time + 45;

						else if (a[j] == 'J')
							time = time + 90;

						else if (a[j] == 'K')
							time = time + 90;

						else if (a[j] == 'L')
							time = time + 90;

						else if (a[j] == 'M')
							time = time + 90;

						else if (a[j] == 'N')
							time = time + 90;
					} if (a[x] == 'j') {
						if (a[j] == 'a')
							time = time + 40;

						else if (a[j] == 'b')
							time = time + 40;

						else if (a[j] == 'c')
							time = time + 70;

						else if (a[j] == 'd')
							time = time + 70;

						else if (a[j] == 'e')
							time = time + 40;

						else if (a[j] == 'f')
							time = time + 40;

						else if (a[j] == 'g')
							time = time + 40;

						else if (a[j] == 'h')
							time = time + 30;

						else if (a[j] == 'i')
							time = time + 30;

						else if (a[j] == 'k')
							time = time + 30;

						else if (a[j] == 'l')
							time = time + 35;

						else if (a[j] == 'm')
							time = time + 35;

						else if (a[j] == 'n')
							time = time + 35;

						else if (a[j] == 'o')
							time = time + 35;

						else if (a[j] == 'p')
							time = time + 35;

						else if (a[j] == 'q')
							time = time + 30;

						else if (a[j] == 'r')
							time = time + 40;

						else if (a[j] == 's')
							time = time + 40;

						else if (a[j] == 't')
							time = time + 30;

						else if (a[j] == 'u')
							time = time + 25;

						else if (a[j] == 'v')
							time = time + 25;

						else if (a[j] == 'w')
							time = time + 40;

						else if (a[j] == 'x')
							time = time + 35;

						else if (a[j] == 'y')
							time = time + 70;

						else if (a[j] == 'z')
							time = time + 45;

						else if (a[j] == 'A')
							time = time + 55;

						else if (a[j] == 'B')
							time = time + 40;

						else if (a[j] == 'C')
							time = time + 25;

						else if (a[j] == 'D')
							time = time + 35;

						else if (a[j] == 'E')
							time = time + 70;

						else if (a[j] == 'F')
							time = time + 40;

						else if (a[j] == 'G')
							time = time + 40;

						else if (a[j] == 'H')
							time = time + 45;

						else if (a[j] == 'I')
							time = time + 55;

						else if (a[j] == 'J')
							time = time + 90;

						else if (a[j] == 'K')
							time = time + 90;

						else if (a[j] == 'L')
							time = time + 90;

						else if (a[j] == 'M')
							time = time + 90;

						else if (a[j] == 'N')
							time = time + 90;
					} if (a[x] == 'k') {
						if (a[j] == 'a')
							time = time + 40;

						else if (a[j] == 'b')
							time = time + 90;

						else if (a[j] == 'c')
							time = time + 90;

						else if (a[j] == 'd')
							time = time + 90;

						else if (a[j] == 'e')
							time = time + 90;

						else if (a[j] == 'f')
							time = time + 90;

						else if (a[j] == 'g')
							time = time + 35;

						else if (a[j] == 'h')
							time = time + 90;

						else if (a[j] == 'i')
							time = time + 90;

						else if (a[j] == 'j')
							time = time + 90;

						else if (a[j] == 'l')
							time = time + 35;

						else if (a[j] == 'm')
							time = time + 35;

						else if (a[j] == 'n')
							time = time + 90;

						else if (a[j] == 'o')
							time = time + 35;

						else if (a[j] == 'p')
							time = time + 35;

						else if (a[j] == 'q')
							time = time + 90;

						else if (a[j] == 'r')
							time = time + 90;

						else if (a[j] == 's')
							time = time + 90;

						else if (a[j] == 't')
							time = time + 90;

						else if (a[j] == 'u')
							time = time + 90;

						else if (a[j] == 'v')
							time = time + 35;

						else if (a[j] == 'w')
							time = time + 30;

						else if (a[j] == 'x')
							time = time + 35;

						else if (a[j] == 'y')
							time = time + 70;

						else if (a[j] == 'z')
							time = time + 90;

						else if (a[j] == 'A')
							time = time + 55;

						else if (a[j] == 'B')
							time = time + 90;

						else if (a[j] == 'C')
							time = time + 90;

						else if (a[j] == 'D')
							time = time + 45;

						else if (a[j] == 'E')
							time = time + 60;

						else if (a[j] == 'F')
							time = time + 90;

						else if (a[j] == 'G')
							time = time + 40;

						else if (a[j] == 'H')
							time = time + 90;

						else if (a[j] == 'I')
							time = time + 55;

						else if (a[j] == 'J')
							time = time + 90;

						else if (a[j] == 'K')
							time = time + 90;

						else if (a[j] == 'L')
							time = time + 90;

						else if (a[j] == 'M')
							time = time + 90;

						else if (a[j] == 'N')
							time = time + 90;
					} if (a[x] == 'l') {
						if (a[j] == 'a')
							time = time + 40;

						else if (a[j] == 'b')
							time = time + 90;

						else if (a[j] == 'c')
							time = time + 90;

						else if (a[j] == 'd')
							time = time + 90;

						else if (a[j] == 'e')
							time = time + 90;

						else if (a[j] == 'f')
							time = time + 90;

						else if (a[j] == 'g')
							time = time + 35;

						else if (a[j] == 'h')
							time = time + 90;

						else if (a[j] == 'i')
							time = time + 90;

						else if (a[j] == 'j')
							time = time + 90;

						else if (a[j] == 'k')
							time = time + 90;

						else if (a[j] == 'm')
							time = time + 90;

						else if (a[j] == 'n')
							time = time + 90;

						else if (a[j] == 'o')
							time = time + 20;

						else if (a[j] == 'p')
							time = time + 35;

						else if (a[j] == 'q')
							time = time + 90;

						else if (a[j] == 'r')
							time = time + 90;

						else if (a[j] == 's')
							time = time + 90;

						else if (a[j] == 't')
							time = time + 90;

						else if (a[j] == 'u')
							time = time + 90;

						else if (a[j] == 'v')
							time = time + 90;

						else if (a[j] == 'w')
							time = time + 55;

						else if (a[j] == 'x')
							time = time + 75;

						else if (a[j] == 'y')
							time = time + 80;

						else if (a[j] == 'z')
							time = time + 90;

						else if (a[j] == 'A')
							time = time + 90;

						else if (a[j] == 'B')
							time = time + 90;

						else if (a[j] == 'C')
							time = time + 90;

						else if (a[j] == 'D')
							time = time + 75;

						else if (a[j] == 'E')
							time = time + 90;

						else if (a[j] == 'F')
							time = time + 90;

						else if (a[j] == 'G')
							time = time + 40;

						else if (a[j] == 'H')
							time = time + 90;

						else if (a[j] == 'I')
							time = time + 90;

						else if (a[j] == 'J')
							time = time + 90;

						else if (a[j] == 'K')
							time = time + 90;

						else if (a[j] == 'L')
							time = time + 90;

						else if (a[j] == 'M')
							time = time + 90;

						else if (a[j] == 'N')
							time = time + 90;
					} if (a[x] == 'm') {
						if (a[j] == 'a')
							time = time + 40;

						else if (a[j] == 'b')
							time = time + 90;

						else if (a[j] == 'c')
							time = time + 90;

						else if (a[j] == 'd')
							time = time + 90;

						else if (a[j] == 'e')
							time = time + 90;

						else if (a[j] == 'f')
							time = time + 90;

						else if (a[j] == 'g')
							time = time + 55;

						else if (a[j] == 'h')
							time = time + 90;

						else if (a[j] == 'i')
							time = time + 90;

						else if (a[j] == 'j')
							time = time + 90;

						else if (a[j] == 'k')
							time = time + 35;

						else if (a[j] == 'l')
							time = time + 15;

						else if (a[j] == 'n')
							time = time + 90;

						else if (a[j] == 'o')
							time = time + 20;

						else if (a[j] == 'p')
							time = time + 20;

						else if (a[j] == 'q')
							time = time + 90;

						else if (a[j] == 'r')
							time = time + 90;

						else if (a[j] == 's')
							time = time + 90;

						else if (a[j] == 't')
							time = time + 90;

						else if (a[j] == 'u')
							time = time + 90;

						else if (a[j] == 'v')
							time = time + 75;

						else if (a[j] == 'w')
							time = time + 55;

						else if (a[j] == 'x')
							time = time + 75;

						else if (a[j] == 'y')
							time = time + 80;

						else if (a[j] == 'z')
							time = time + 90;

						else if (a[j] == 'A')
							time = time + 45;

						else if (a[j] == 'B')
							time = time + 90;

						else if (a[j] == 'C')
							time = time + 90;

						else if (a[j] == 'D')
							time = time + 75;

						else if (a[j] == 'E')
							time = time + 85;

						else if (a[j] == 'F')
							time = time + 90;

						else if (a[j] == 'G')
							time = time + 40;

						else if (a[j] == 'H')
							time = time + 90;

						else if (a[j] == 'I')
							time = time + 90;

						else if (a[j] == 'J')
							time = time + 90;

						else if (a[j] == 'K')
							time = time + 90;

						else if (a[j] == 'L')
							time = time + 90;

						else if (a[j] == 'M')
							time = time + 90;

						else if (a[j] == 'N')
							time = time + 90;
					} if (a[x] == 'n') {
						if (a[j] == 'a')
							time = time + 40;

						else if (a[j] == 'b')
							time = time + 90;

						else if (a[j] == 'c')
							time = time + 90;

						else if (a[j] == 'd')
							time = time + 90;

						else if (a[j] == 'e')
							time = time + 90;

						else if (a[j] == 'f')
							time = time + 90;

						else if (a[j] == 'g')
							time = time + 55;

						else if (a[j] == 'h')
							time = time + 90;

						else if (a[j] == 'i')
							time = time + 90;

						else if (a[j] == 'j')
							time = time + 90;

						else if (a[j] == 'k')
							time = time + 90;

						else if (a[j] == 'l')
							time = time + 25;

						else if (a[j] == 'm')
							time = time + 90;

						else if (a[j] == 'o')
							time = time + 25;

						else if (a[j] == 'p')
							time = time + 25;

						else if (a[j] == 'q')
							time = time + 90;

						else if (a[j] == 'r')
							time = time + 90;

						else if (a[j] == 's')
							time = time + 90;

						else if (a[j] == 't')
							time = time + 90;

						else if (a[j] == 'u')
							time = time + 90;

						else if (a[j] == 'v')
							time = time + 90;

						else if (a[j] == 'w')
							time = time + 55;

						else if (a[j] == 'x')
							time = time + 75;

						else if (a[j] == 'y')
							time = time + 80;

						else if (a[j] == 'z')
							time = time + 90;

						else if (a[j] == 'A')
							time = time + 90;

						else if (a[j] == 'B')
							time = time + 90;

						else if (a[j] == 'C')
							time = time + 90;

						else if (a[j] == 'D')
							time = time + 75;

						else if (a[j] == 'E')
							time = time + 90;

						else if (a[j] == 'F')
							time = time + 90;

						else if (a[j] == 'G')
							time = time + 40;

						else if (a[j] == 'H')
							time = time + 90;

						else if (a[j] == 'I')
							time = time + 90;

						else if (a[j] == 'J')
							time = time + 90;

						else if (a[j] == 'K')
							time = time + 90;

						else if (a[j] == 'L')
							time = time + 90;

						else if (a[j] == 'M')
							time = time + 90;

						else if (a[j] == 'N')
							time = time + 90;
					}if (a[x] == 'o') {
						if (a[j] == 'a')
							time = time + 40;

						else if (a[j] == 'b')
							time = time + 90;

						else if (a[j] == 'c')
							time = time + 90;

						else if (a[j] == 'd')
							time = time + 90;

						else if (a[j] == 'e')
							time = time + 90;

						else if (a[j] == 'f')
							time = time + 90;

						else if (a[j] == 'g')
							time = time + 55;

						else if (a[j] == 'h')
							time = time + 90;

						else if (a[j] == 'i')
							time = time + 90;

						else if (a[j] == 'j')
							time = time + 90;

						else if (a[j] == 'k')
							time = time + 90;

						else if (a[j] == 'l')
							time = time + 25;

						else if (a[j] == 'm')
							time = time + 90;

						else if (a[j] == 'n')
							time = time + 90;

						else if (a[j] == 'p')
							time = time + 25;

						else if (a[j] == 'q')
							time = time + 90;

						else if (a[j] == 'r')
							time = time + 90;

						else if (a[j] == 's')
							time = time + 90;

						else if (a[j] == 't')
							time = time + 90;

						else if (a[j] == 'u')
							time = time + 90;

						else if (a[j] == 'v')
							time = time + 90;

						else if (a[j] == 'w')
							time = time + 55;

						else if (a[j] == 'x')
							time = time + 75;

						else if (a[j] == 'y')
							time = time + 80;

						else if (a[j] == 'z')
							time = time + 90;

						else if (a[j] == 'A')
							time = time + 90;

						else if (a[j] == 'B')
							time = time + 90;

						else if (a[j] == 'C')
							time = time + 90;

						else if (a[j] == 'D')
							time = time + 75;

						else if (a[j] == 'E')
							time = time + 90;

						else if (a[j] == 'F')
							time = time + 90;

						else if (a[j] == 'G')
							time = time + 40;

						else if (a[j] == 'H')
							time = time + 90;

						else if (a[j] == 'I')
							time = time + 70;

						else if (a[j] == 'J')
							time = time + 90;

						else if (a[j] == 'K')
							time = time + 90;

						else if (a[j] == 'L')
							time = time + 90;

						else if (a[j] == 'M')
							time = time + 90;

						else if (a[j] == 'N')
							time = time + 90;
					} if (a[x] == 'p') {
						if (a[j] == 'a')
							time = time + 40;

						else if (a[j] == 'b')
							time = time + 90;

						else if (a[j] == 'c')
							time = time + 90;

						else if (a[j] == 'd')
							time = time + 90;

						else if (a[j] == 'e')
							time = time + 90;

						else if (a[j] == 'f')
							time = time + 90;

						else if (a[j] == 'g')
							time = time + 55;

						else if (a[j] == 'h')
							time = time + 90;

						else if (a[j] == 'i')
							time = time + 90;

						else if (a[j] == 'j')
							time = time + 90;

						else if (a[j] == 'k')
							time = time + 90;

						else if (a[j] == 'l')
							time = time + 25;

						else if (a[j] == 'm')
							time = time + 90;

						else if (a[j] == 'n')
							time = time + 90;

						else if (a[j] == 'o')
							time = time + 20;

						else if (a[j] == 'q')
							time = time + 90;

						else if (a[j] == 'r')
							time = time + 90;

						else if (a[j] == 's')
							time = time + 90;

						else if (a[j] == 't')
							time = time + 90;

						else if (a[j] == 'u')
							time = time + 90;

						else if (a[j] == 'v')
							time = time + 90;

						else if (a[j] == 'w')
							time = time + 45;

						else if (a[j] == 'x')
							time = time + 75;

						else if (a[j] == 'y')
							time = time + 80;

						else if (a[j] == 'z')
							time = time + 90;

						else if (a[j] == 'A')
							time = time + 90;

						else if (a[j] == 'B')
							time = time + 90;

						else if (a[j] == 'C')
							time = time + 90;

						else if (a[j] == 'D')
							time = time + 75;

						else if (a[j] == 'E')
							time = time + 90;

						else if (a[j] == 'F')
							time = time + 90;

						else if (a[j] == 'G')
							time = time + 40;

						else if (a[j] == 'H')
							time = time + 90;

						else if (a[j] == 'I')
							time = time + 90;

						else if (a[j] == 'J')
							time = time + 90;

						else if (a[j] == 'K')
							time = time + 90;

						else if (a[j] == 'L')
							time = time + 90;

						else if (a[j] == 'M')
							time = time + 90;

						else if (a[j] == 'N')
							time = time + 90;
					} if (a[x] == 'q') {
						if (a[j] == 'a')
							time = time + 40;

						else if (a[j] == 'b')
							time = time + 90;

						else if (a[j] == 'c')
							time = time + 90;

						else if (a[j] == 'd')
							time = time + 90;

						else if (a[j] == 'e')
							time = time + 90;

						else if (a[j] == 'f')
							time = time + 90;

						else if (a[j] == 'g')
							time = time + 45;

						else if (a[j] == 'h')
							time = time + 90;

						else if (a[j] == 'i')
							time = time + 90;

						else if (a[j] == 'j')
							time = time + 90;

						else if (a[j] == 'k')
							time = time + 40;

						else if (a[j] == 'l')
							time = time + 55;

						else if (a[j] == 'm')
							time = time + 40;

						else if (a[j] == 'n')
							time = time + 35;

						else if (a[j] == 'o')
							time = time + 35;

						else if (a[j] == 'p')
							time = time + 55;

						else if (a[j] == 'r')
							time = time + 15;

						else if (a[j] == 's')
							time = time + 25;

						else if (a[j] == 't')
							time = time + 90;

						else if (a[j] == 'u')
							time = time + 90;

						else if (a[j] == 'v')
							time = time + 30;

						else if (a[j] == 'w')
							time = time + 45;

						else if (a[j] == 'x')
							time = time + 45;

						else if (a[j] == 'y')
							time = time + 70;

						else if (a[j] == 'z')
							time = time + 90;

						else if (a[j] == 'A')
							time = time + 40;

						else if (a[j] == 'B')
							time = time + 25;

						else if (a[j] == 'C')
							time = time + 90;

						else if (a[j] == 'D')
							time = time + 45;

						else if (a[j] == 'E')
							time = time + 70;

						else if (a[j] == 'F')
							time = time + 90;

						else if (a[j] == 'G')
							time = time + 40;

						else if (a[j] == 'H')
							time = time + 90;

						else if (a[j] == 'I')
							time = time + 55;

						else if (a[j] == 'J')
							time = time + 90;

						else if (a[j] == 'K')
							time = time + 55;

						else if (a[j] == 'L')
							time = time + 55;

						else if (a[j] == 'M')
							time = time + 55;

						else if (a[j] == 'N')
							time = time + 55;
					} if (a[x] == 'r') {
						if (a[j] == 'a')
							time = time + 40;

						else if (a[j] == 'b')
							time = time + 90;

						else if (a[j] == 'c')
							time = time + 90;

						else if (a[j] == 'd')
							time = time + 90;

						else if (a[j] == 'e')
							time = time + 90;

						else if (a[j] == 'f')
							time = time + 90;

						else if (a[j] == 'g')
							time = time + 45;

						else if (a[j] == 'h')
							time = time + 90;

						else if (a[j] == 'i')
							time = time + 90;

						else if (a[j] == 'j')
							time = time + 90;

						else if (a[j] == 'k')
							time = time + 40;

						else if (a[j] == 'l')
							time = time + 55;

						else if (a[j] == 'm')
							time = time + 55;

						else if (a[j] == 'n')
							time = time + 55;

						else if (a[j] == 'o')
							time = time + 55;

						else if (a[j] == 'p')
							time = time + 55;

						else if (a[j] == 'q')
							time = time + 30;

						else if (a[j] == 's')
							time = time + 25;

						else if (a[j] == 't')
							time = time + 90;

						else if (a[j] == 'u')
							time = time + 90;

						else if (a[j] == 'v')
							time = time + 50;

						else if (a[j] == 'w')
							time = time + 45;

						else if (a[j] == 'x')
							time = time + 45;

						else if (a[j] == 'y')
							time = time + 70;

						else if (a[j] == 'z')
							time = time + 90;

						else if (a[j] == 'A')
							time = time + 55;

						else if (a[j] == 'B')
							time = time + 35;

						else if (a[j] == 'C')
							time = time + 90;

						else if (a[j] == 'D')
							time = time + 45;

						else if (a[j] == 'E')
							time = time + 70;

						else if (a[j] == 'F')
							time = time + 90;

						else if (a[j] == 'G')
							time = time + 40;

						else if (a[j] == 'H')
							time = time + 90;

						else if (a[j] == 'I')
							time = time + 55;

						else if (a[j] == 'J')
							time = time + 35;

						else if (a[j] == 'K')
							time = time + 90;

						else if (a[j] == 'L')
							time = time + 90;

						else if (a[j] == 'M')
							time = time + 55;

						else if (a[j] == 'N')
							time = time + 55;
					} if (a[x] == 's') {
						if (a[j] == 'a')
							time = time + 40;

						else if (a[j] == 'b')
							time = time + 90;

						else if (a[j] == 'c')
							time = time + 90;

						else if (a[j] == 'd')
							time = time + 90;

						else if (a[j] == 'e')
							time = time + 90;

						else if (a[j] == 'f')
							time = time + 90;

						else if (a[j] == 'g')
							time = time + 45;

						else if (a[j] == 'h')
							time = time + 90;

						else if (a[j] == 'i')
							time = time + 90;

						else if (a[j] == 'j')
							time = time + 90;

						else if (a[j] == 'k')
							time = time + 40;

						else if (a[j] == 'l')
							time = time + 55;

						else if (a[j] == 'm')
							time = time + 40;

						else if (a[j] == 'n')
							time = time + 40;

						else if (a[j] == 'o')
							time = time + 40;

						else if (a[j] == 'p')
							time = time + 55;

						else if (a[j] == 'q')
							time = time + 40;

						else if (a[j] == 'r')
							time = time + 35;

						else if (a[j] == 't')
							time = time + 90;

						else if (a[j] == 'u')
							time = time + 90;

						else if (a[j] == 'v')
							time = time + 35;

						else if (a[j] == 'w')
							time = time + 45;

						else if (a[j] == 'x')
							time = time + 45;

						else if (a[j] == 'y')
							time = time + 70;

						else if (a[j] == 'z')
							time = time + 90;

						else if (a[j] == 'A')
							time = time + 55;

						else if (a[j] == 'B')
							time = time + 30;

						else if (a[j] == 'C')
							time = time + 90;

						else if (a[j] == 'D')
							time = time + 45;

						else if (a[j] == 'E')
							time = time + 70;

						else if (a[j] == 'F')
							time = time + 90;

						else if (a[j] == 'G')
							time = time + 40;

						else if (a[j] == 'H')
							time = time + 90;

						else if (a[j] == 'I')
							time = time + 55;

						else if (a[j] == 'J')
							time = time + 55;

						else if (a[j] == 'K')
							time = time + 90;

						else if (a[j] == 'L')
							time = time + 55;

						else if (a[j] == 'M')
							time = time + 55;

						else if (a[j] == 'N')
							time = time + 55;
					} if (a[x] == 't') {
						if (a[j] == 'a')
							time = time + 40;

						else if (a[j] == 'b')
							time = time + 40;

						else if (a[j] == 'c')
							time = time + 70;

						else if (a[j] == 'd')
							time = time + 70;

						else if (a[j] == 'e')
							time = time + 40;

						else if (a[j] == 'f')
							time = time + 40;

						else if (a[j] == 'g')
							time = time + 40;

						else if (a[j] == 'h')
							time = time + 90;

						else if (a[j] == 'i')
							time = time + 30;

						else if (a[j] == 'j')
							time = time + 30;

						else if (a[j] == 'k')
							time = time + 30;

						else if (a[j] == 'l')
							time = time + 35;

						else if (a[j] == 'm')
							time = time + 35;

						else if (a[j] == 'n')
							time = time + 35;

						else if (a[j] == 'o')
							time = time + 35;

						else if (a[j] == 'p')
							time = time + 35;

						else if (a[j] == 'q')
							time = time + 40;

						else if (a[j] == 'r')
							time = time + 40;

						else if (a[j] == 's')
							time = time + 40;

						else if (a[j] == 'u')
							time = time + 40;

						else if (a[j] == 'v')
							time = time + 35;

						else if (a[j] == 'w')
							time = time + 40;

						else if (a[j] == 'x')
							time = time + 35;

						else if (a[j] == 'y')
							time = time + 70;

						else if (a[j] == 'z')
							time = time + 45;

						else if (a[j] == 'A')
							time = time + 55;

						else if (a[j] == 'B')
							time = time + 40;

						else if (a[j] == 'C')
							time = time + 40;

						else if (a[j] == 'D')
							time = time + 35;

						else if (a[j] == 'E')
							time = time + 70;

						else if (a[j] == 'F')
							time = time + 40;

						else if (a[j] == 'G')
							time = time + 40;

						else if (a[j] == 'H')
							time = time + 45;

						else if (a[j] == 'I')
							time = time + 55;

						else if (a[j] == 'J')
							time = time + 55;

						else if (a[j] == 'K')
							time = time + 55;

						else if (a[j] == 'L')
							time = time + 55;

						else if (a[j] == 'M')
							time = time + 55;

						else if (a[j] == 'N')
							time = time + 55;
					} if (a[x] == 'u') {
						if (a[j] == 'a')
							time = time + 65;

						else if (a[j] == 'b')
							time = time + 65;

						else if (a[j] == 'c')
							time = time + 80;

						else if (a[j] == 'd')
							time = time + 55;

						else if (a[j] == 'e')
							time = time + 65;

						else if (a[j] == 'f')
							time = time + 55;

						else if (a[j] == 'g')
							time = time + 70;

						else if (a[j] == 'h')
							time = time + 55;

						else if (a[j] == 'i')
							time = time + 55;

						else if (a[j] == 'j')
							time = time + 55;

						else if (a[j] == 'k')
							time = time + 45;

						else if (a[j] == 'l')
							time = time + 60;

						else if (a[j] == 'm')
							time = time + 50;

						else if (a[j] == 'n')
							time = time + 60;

						else if (a[j] == 'o')
							time = time + 60;

						else if (a[j] == 'p')
							time = time + 60;

						else if (a[j] == 'q')
							time = time + 60;

						else if (a[j] == 'r')
							time = time + 65;

						else if (a[j] == 's')
							time = time + 65;

						else if (a[j] == 't')
							time = time + 55;

						else if (a[j] == 'v')
							time = time + 70;

						else if (a[j] == 'w')
							time = time + 70;

						else if (a[j] == 'x')
							time = time + 70;

						else if (a[j] == 'y')
							time = time + 80;

						else if (a[j] == 'z')
							time = time + 70;

						else if (a[j] == 'A')
							time = time + 70;

						else if (a[j] == 'B')
							time = time + 55;

						else if (a[j] == 'C')
							time = time + 45;

						else if (a[j] == 'D')
							time = time + 70;

						else if (a[j] == 'E')
							time = time + 80;

						else if (a[j] == 'F')
							time = time + 65;

						else if (a[j] == 'G')
							time = time + 65;

						else if (a[j] == 'H')
							time = time + 70;

						else if (a[j] == 'I')
							time = time + 70;

						else if (a[j] == 'J')
							time = time + 55;

						else if (a[j] == 'K')
							time = time + 55;

						else if (a[j] == 'L')
							time = time + 55;

						else if (a[j] == 'M')
							time = time + 55;

						else if (a[j] == 'N')
							time = time + 55;
					}if (a[x] == 'v') {
						if (a[j] == 'a')
							time = time + 35;

						else if (a[j] == 'b')
							time = time + 90;

						else if (a[j] == 'c')
							time = time + 90;

						else if (a[j] == 'd')
							time = time + 90;

						else if (a[j] == 'e')
							time = time + 90;

						else if (a[j] == 'f')
							time = time + 90;

						else if (a[j] == 'g')
							time = time + 50;

						else if (a[j] == 'h')
							time = time + 90;

						else if (a[j] == 'i')
							time = time + 90;

						else if (a[j] == 'j')
							time = time + 90;

						else if (a[j] == 'k')
							time = time + 45;

						else if (a[j] == 'l')
							time = time + 70;

						else if (a[j] == 'm')
							time = time + 55;

						else if (a[j] == 'n')
							time = time + 90;

						else if (a[j] == 'o')
							time = time + 60;

						else if (a[j] == 'p')
							time = time + 60;

						else if (a[j] == 'q')
							time = time + 90;

						else if (a[j] == 'r')
							time = time + 90;

						else if (a[j] == 's')
							time = time + 90;

						else if (a[j] == 't')
							time = time + 90;

						else if (a[j] == 'u')
							time = time + 90;

						else if (a[j] == 'w')
							time = time + 50;

						else if (a[j] == 'x')
							time = time + 45;

						else if (a[j] == 'y')
							time = time + 60;

						else if (a[j] == 'z')
							time = time + 90;

						else if (a[j] == 'A')
							time = time + 50;

						else if (a[j] == 'B')
							time = time + 90;

						else if (a[j] == 'C')
							time = time + 90;

						else if (a[j] == 'D')
							time = time + 60;

						else if (a[j] == 'E')
							time = time + 100;

						else if (a[j] == 'F')
							time = time + 90;

						else if (a[j] == 'G')
							time = time + 55;

						else if (a[j] == 'H')
							time = time + 90;

						else if (a[j] == 'I')
							time = time + 70;

						else if (a[j] == 'J')
							time = time + 90;

						else if (a[j] == 'K')
							time = time + 90;

						else if (a[j] == 'L')
							time = time + 55;

						else if (a[j] == 'M')
							time = time + 90;

						else if (a[j] == 'N')
							time = time + 55;
					} if (a[x] == 'w') {
						if (a[j] == 'a')
							time = time + 90;

						else if (a[j] == 'b')
							time = time + 90;

						else if (a[j] == 'c')
							time = time + 90;

						else if (a[j] == 'd')
							time = time + 90;

						else if (a[j] == 'e')
							time = time + 90;

						else if (a[j] == 'f')
							time = time + 90;

						else if (a[j] == 'g')
							time = time + 90;

						else if (a[j] == 'h')
							time = time + 90;

						else if (a[j] == 'i')
							time = time + 90;

						else if (a[j] == 'j')
							time = time + 90;

						else if (a[j] == 'k')
							time = time + 90;

						else if (a[j] == 'l')
							time = time + 90;

						else if (a[j] == 'm')
							time = time + 90;

						else if (a[j] == 'n')
							time = time + 90;

						else if (a[j] == 'o')
							time = time + 90;

						else if (a[j] == 'p')
							time = time + 90;

						else if (a[j] == 'q')
							time = time + 90;

						else if (a[j] == 'r')
							time = time + 90;

						else if (a[j] == 's')
							time = time + 90;

						else if (a[j] == 't')
							time = time + 90;

						else if (a[j] == 'u')
							time = time + 90;

						else if (a[j] == 'v')
							time = time + 90;

						else if (a[j] == 'x')
							time = time + 90;

						else if (a[j] == 'y')
							time = time + 90;

						else if (a[j] == 'z')
							time = time + 90;

						else if (a[j] == 'A')
							time = time + 90;

						else if (a[j] == 'B')
							time = time + 90;

						else if (a[j] == 'C')
							time = time + 90;

						else if (a[j] == 'D')
							time = time + 90;

						else if (a[j] == 'E')
							time = time + 90;

						else if (a[j] == 'F')
							time = time + 90;

						else if (a[j] == 'G')
							time = time + 90;

						else if (a[j] == 'H')
							time = time + 90;

						else if (a[j] == 'I')
							time = time + 90;

						else if (a[j] == 'J')
							time = time + 90;

						else if (a[j] == 'K')
							time = time + 90;

						else if (a[j] == 'L')
							time = time + 90;

						else if (a[j] == 'M')
							time = time + 90;

						else if (a[j] == 'N')
							time = time + 90;
					} if (a[x] == 'x') {
						if (a[j] == 'a')
							time = time + 55;

						else if (a[j] == 'b')
							time = time + 90;

						else if (a[j] == 'c')
							time = time + 90;

						else if (a[j] == 'd')
							time = time + 90;

						else if (a[j] == 'e')
							time = time + 90;

						else if (a[j] == 'f')
							time = time + 90;

						else if (a[j] == 'g')
							time = time + 50;

						else if (a[j] == 'h')
							time = time + 90;

						else if (a[j] == 'i')
							time = time + 90;

						else if (a[j] == 'j')
							time = time + 90;

						else if (a[j] == 'k')
							time = time + 90;

						else if (a[j] == 'l')
							time = time + 70;

						else if (a[j] == 'm')
							time = time + 90;

						else if (a[j] == 'n')
							time = time + 90;

						else if (a[j] == 'o')
							time = time + 70;

						else if (a[j] == 'p')
							time = time + 70;

						else if (a[j] == 'q')
							time = time + 90;

						else if (a[j] == 'r')
							time = time + 90;

						else if (a[j] == 's')
							time = time + 90;

						else if (a[j] == 't')
							time = time + 90;

						else if (a[j] == 'u')
							time = time + 90;

						else if (a[j] == 'v')
							time = time + 90;

						else if (a[j] == 'w')
							time = time + 50;

						else if (a[j] == 'y')
							time = time + 60;

						else if (a[j] == 'z')
							time = time + 90;

						else if (a[j] == 'A')
							time = time + 90;

						else if (a[j] == 'B')
							time = time + 90;

						else if (a[j] == 'C')
							time = time + 90;

						else if (a[j] == 'D')
							time = time + 30;

						else if (a[j] == 'E')
							time = time + 90;

						else if (a[j] == 'F')
							time = time + 90;

						else if (a[j] == 'G')
							time = time + 55;

						else if (a[j] == 'H')
							time = time + 90;

						else if (a[j] == 'I')
							time = time + 70;

						else if (a[j] == 'J')
							time = time + 90;

						else if (a[j] == 'K')
							time = time + 90;

						else if (a[j] == 'L')
							time = time + 55;

						else if (a[j] == 'M')
							time = time + 90;

						else if (a[j] == 'N')
							time = time + 90;
					} if (a[x] == 'y') {
						if (a[j] == 'a')
							time = time + 45;

						else if (a[j] == 'b')
							time = time + 90;

						else if (a[j] == 'c')
							time = time + 90;

						else if (a[j] == 'd')
							time = time + 90;

						else if (a[j] == 'e')
							time = time + 90;

						else if (a[j] == 'f')
							time = time + 90;

						else if (a[j] == 'g')
							time = time + 50;

						else if (a[j] == 'h')
							time = time + 90;

						else if (a[j] == 'i')
							time = time + 90;

						else if (a[j] == 'j')
							time = time + 90;

						else if (a[j] == 'k')
							time = time + 90;

						else if (a[j] == 'l')
							time = time + 80;

						else if (a[j] == 'm')
							time = time + 90;

						else if (a[j] == 'n')
							time = time + 90;

						else if (a[j] == 'o')
							time = time + 80;

						else if (a[j] == 'p')
							time = time + 80;

						else if (a[j] == 'q')
							time = time + 90;

						else if (a[j] == 'r')
							time = time + 90;

						else if (a[j] == 's')
							time = time + 90;

						else if (a[j] == 't')
							time = time + 90;

						else if (a[j] == 'u')
							time = time + 90;

						else if (a[j] == 'v')
							time = time + 90;

						else if (a[j] == 'w')
							time = time + 50;

						else if (a[j] == 'x')
							time = time + 60;

						else if (a[j] == 'z')
							time = time + 90;

						else if (a[j] == 'A')
							time = time + 90;

						else if (a[j] == 'B')
							time = time + 90;

						else if (a[j] == 'C')
							time = time + 90;

						else if (a[j] == 'D')
							time = time + 70;

						else if (a[j] == 'E')
							time = time + 90;

						else if (a[j] == 'F')
							time = time + 90;

						else if (a[j] == 'G')
							time = time + 65;

						else if (a[j] == 'H')
							time = time + 90;

						else if (a[j] == 'I')
							time = time + 70;

						else if (a[j] == 'J')
							time = time + 90;

						else if (a[j] == 'K')
							time = time + 90;

						else if (a[j] == 'L')
							time = time + 55;

						else if (a[j] == 'M')
							time = time + 90;

						else if (a[j] == 'N')
							time = time + 90;
					} if (a[x] == 'z') {
						if (a[j] == 'a')
							time = time + 65;

						else if (a[j] == 'b')
							time = time + 65;

						else if (a[j] == 'c')
							time = time + 80;

						else if (a[j] == 'd')
							time = time + 80;

						else if (a[j] == 'e')
							time = time + 65;

						else if (a[j] == 'f')
							time = time + 65;

						else if (a[j] == 'g')
							time = time + 70;

						else if (a[j] == 'h')
							time = time + 50;

						else if (a[j] == 'i')
							time = time + 65;

						else if (a[j] == 'j')
							time = time + 65;

						else if (a[j] == 'k')
							time = time + 65;

						else if (a[j] == 'l')
							time = time + 70;

						else if (a[j] == 'm')
							time = time + 70;

						else if (a[j] == 'n')
							time = time + 60;

						else if (a[j] == 'o')
							time = time + 70;

						else if (a[j] == 'p')
							time = time + 70;

						else if (a[j] == 'q')
							time = time + 50;

						else if (a[j] == 'r')
							time = time + 55;

						else if (a[j] == 's')
							time = time + 65;

						else if (a[j] == 't')
							time = time + 65;

						else if (a[j] == 'u')
							time = time + 70;

						else if (a[j] == 'v')
							time = time + 70;

						else if (a[j] == 'w')
							time = time + 70;

						else if (a[j] == 'x')
							time = time + 70;

						else if (a[j] == 'y')
							time = time + 80;

						else if (a[j] == 'A')
							time = time + 70;

						else if (a[j] == 'B')
							time = time + 65;

						else if (a[j] == 'C')
							time = time + 70;

						else if (a[j] == 'D')
							time = time + 70;

						else if (a[j] == 'E')
							time = time + 80;

						else if (a[j] == 'F')
							time = time + 65;

						else if (a[j] == 'G')
							time = time + 65;

						else if (a[j] == 'H')
							time = time + 70;

						else if (a[j] == 'I')
							time = time + 70;

						else if (a[j] == 'J')
							time = time + 55;

						else if (a[j] == 'K')
							time = time + 55;

						else if (a[j] == 'L')
							time = time + 55;

						else if (a[j] == 'M')
							time = time + 55;

						else if (a[j] == 'N')
							time = time + 55;
					} if (a[x] == 'A') {
						if (a[j] == 'a')
							time = time + 40;

						else if (a[j] == 'b')
							time = time + 90;

						else if (a[j] == 'c')
							time = time + 90;

						else if (a[j] == 'd')
							time = time + 90;

						else if (a[j] == 'e')
							time = time + 90;

						else if (a[j] == 'f')
							time = time + 90;

						else if (a[j] == 'g')
							time = time + 45;

						else if (a[j] == 'h')
							time = time + 90;

						else if (a[j] == 'i')
							time = time + 90;

						else if (a[j] == 'j')
							time = time + 90;

						else if (a[j] == 'k')
							time = time + 30;

						else if (a[j] == 'l')
							time = time + 75;

						else if (a[j] == 'm')
							time = time + 90;

						else if (a[j] == 'n')
							time = time + 90;

						else if (a[j] == 'o')
							time = time + 75;

						else if (a[j] == 'p')
							time = time + 75;

						else if (a[j] == 'q')
							time = time + 90;

						else if (a[j] == 'r')
							time = time + 90;

						else if (a[j] == 's')
							time = time + 90;

						else if (a[j] == 't')
							time = time + 90;

						else if (a[j] == 'u')
							time = time + 90;

						else if (a[j] == 'v')
							time = time + 90;

						else if (a[j] == 'w')
							time = time + 60;

						else if (a[j] == 'x')
							time = time + 90;

						else if (a[j] == 'y')
							time = time + 100;

						else if (a[j] == 'z')
							time = time + 90;

						else if (a[j] == 'B')
							time = time + 90;

						else if (a[j] == 'C')
							time = time + 90;

						else if (a[j] == 'D')
							time = time + 90;

						else if (a[j] == 'E')
							time = time + 85;

						else if (a[j] == 'F')
							time = time + 90;

						else if (a[j] == 'G')
							time = time + 40;

						else if (a[j] == 'H')
							time = time + 90;

						else if (a[j] == 'I')
							time = time + 90;

						else if (a[j] == 'J')
							time = time + 90;

						else if (a[j] == 'K')
							time = time + 90;

						else if (a[j] == 'L')
							time = time + 90;

						else if (a[j] == 'M')
							time = time + 90;

						else if (a[j] == 'N')
							time = time + 55;
					} if (a[x] == 'B') {
						if (a[j] == 'a')
							time = time + 40;

						else if (a[j] == 'b')
							time = time + 90;

						else if (a[j] == 'c')
							time = time + 90;

						else if (a[j] == 'd')
							time = time + 90;

						else if (a[j] == 'e')
							time = time + 90;

						else if (a[j] == 'f')
							time = time + 90;

						else if (a[j] == 'g')
							time = time + 45;

						else if (a[j] == 'h')
							time = time + 90;

						else if (a[j] == 'i')
							time = time + 90;

						else if (a[j] == 'j')
							time = time + 90;

						else if (a[j] == 'k')
							time = time + 40;

						else if (a[j] == 'l')
							time = time + 55;

						else if (a[j] == 'm')
							time = time + 55;

						else if (a[j] == 'n')
							time = time + 55;

						else if (a[j] == 'o')
							time = time + 55;

						else if (a[j] == 'p')
							time = time + 55;

						else if (a[j] == 'q')
							time = time + 35;

						else if (a[j] == 'r')
							time = time + 40;

						else if (a[j] == 's')
							time = time + 15;

						else if (a[j] == 't')
							time = time + 90;

						else if (a[j] == 'u')
							time = time + 90;

						else if (a[j] == 'v')
							time = time + 30;

						else if (a[j] == 'w')
							time = time + 45;

						else if (a[j] == 'x')
							time = time + 45;

						else if (a[j] == 'y')
							time = time + 70;

						else if (a[j] == 'z')
							time = time + 90;

						else if (a[j] == 'A')
							time = time + 55;

						else if (a[j] == 'C')
							time = time + 90;

						else if (a[j] == 'D')
							time = time + 45;

						else if (a[j] == 'E')
							time = time + 70;

						else if (a[j] == 'F')
							time = time + 90;

						else if (a[j] == 'G')
							time = time + 40;

						else if (a[j] == 'H')
							time = time + 90;

						else if (a[j] == 'I')
							time = time + 55;

						else if (a[j] == 'J')
							time = time + 55;

						else if (a[j] == 'K')
							time = time + 90;

						else if (a[j] == 'L')
							time = time + 55;

						else if (a[j] == 'M')
							time = time + 55;

						else if (a[j] == 'N')
							time = time + 55;
					} if (a[x] == 'C') {
						if (a[j] == 'a')
							time = time + 65;

						else if (a[j] == 'b')
							time = time + 50;

						else if (a[j] == 'c')
							time = time + 80;

						else if (a[j] == 'd')
							time = time + 80;

						else if (a[j] == 'e')
							time = time + 65;

						else if (a[j] == 'f')
							time = time + 65;

						else if (a[j] == 'g')
							time = time + 30;

						else if (a[j] == 'h')
							time = time + 35;

						else if (a[j] == 'i')
							time = time + 55;

						else if (a[j] == 'j')
							time = time + 55;

						else if (a[j] == 'k')
							time = time + 40;

						else if (a[j] == 'l')
							time = time + 60;

						else if (a[j] == 'm')
							time = time + 40;

						else if (a[j] == 'n')
							time = time + 60;

						else if (a[j] == 'o')
							time = time + 60;

						else if (a[j] == 'p')
							time = time + 60;

						else if (a[j] == 'q')
							time = time + 50;

						else if (a[j] == 'r')
							time = time + 65;

						else if (a[j] == 's')
							time = time + 45;

						else if (a[j] == 't')
							time = time + 55;

						else if (a[j] == 'u')
							time = time + 30;

						else if (a[j] == 'v')
							time = time + 45;

						else if (a[j] == 'w')
							time = time + 70;

						else if (a[j] == 'x')
							time = time + 45;

						else if (a[j] == 'y')
							time = time + 80;

						else if (a[j] == 'z')
							time = time + 70;

						else if (a[j] == 'A')
							time = time + 70;

						else if (a[j] == 'B')
							time = time + 50;

						else if (a[j] == 'D')
							time = time + 70;

						else if (a[j] == 'E')
							time = time + 80;

						else if (a[j] == 'F')
							time = time + 65;

						else if (a[j] == 'G')
							time = time + 65;

						else if (a[j] == 'H')
							time = time + 70;

						else if (a[j] == 'I')
							time = time + 65;

						else if (a[j] == 'J')
							time = time + 55;

						else if (a[j] == 'K')
							time = time + 90;

						else if (a[j] == 'L')
							time = time + 55;

						else if (a[j] == 'M')
							time = time + 55;

						else if (a[j] == 'N')
							time = time + 55;
					} if (a[x] == 'D') {
						if (a[j] == 'a')
							time = time + 55;

						else if (a[j] == 'b')
							time = time + 90;

						else if (a[j] == 'c')
							time = time + 90;

						else if (a[j] == 'd')
							time = time + 90;

						else if (a[j] == 'e')
							time = time + 90;

						else if (a[j] == 'f')
							time = time + 90;

						else if (a[j] == 'g')
							time = time + 50;

						else if (a[j] == 'h')
							time = time + 90;

						else if (a[j] == 'i')
							time = time + 90;

						else if (a[j] == 'j')
							time = time + 90;

						else if (a[j] == 'k')
							time = time + 90;

						else if (a[j] == 'l')
							time = time + 70;

						else if (a[j] == 'm')
							time = time + 90;

						else if (a[j] == 'n')
							time = time + 90;

						else if (a[j] == 'o')
							time = time + 70;

						else if (a[j] == 'p')
							time = time + 70;

						else if (a[j] == 'q')
							time = time + 90;

						else if (a[j] == 'r')
							time = time + 90;

						else if (a[j] == 's')
							time = time + 90;

						else if (a[j] == 't')
							time = time + 90;

						else if (a[j] == 'u')
							time = time + 90;

						else if (a[j] == 'v')
							time = time + 90;

						else if (a[j] == 'w')
							time = time + 50;

						else if (a[j] == 'x')
							time = time + 20;

						else if (a[j] == 'y')
							time = time + 60;

						else if (a[j] == 'z')
							time = time + 90;

						else if (a[j] == 'A')
							time = time + 90;

						else if (a[j] == 'B')
							time = time + 90;

						else if (a[j] == 'C')
							time = time + 90;

						else if (a[j] == 'E')
							time = time + 90;

						else if (a[j] == 'F')
							time = time + 90;

						else if (a[j] == 'G')
							time = time + 55;

						else if (a[j] == 'H')
							time = time + 90;

						else if (a[j] == 'I')
							time = time + 70;

						else if (a[j] == 'J')
							time = time + 90;

						else if (a[j] == 'K')
							time = time + 90;

						else if (a[j] == 'L')
							time = time + 55;

						else if (a[j] == 'M')
							time = time + 90;

						else if (a[j] == 'N')
							time = time + 90;
					} if (a[x] == 'E') {
						if (a[j] == 'a')
							time = time + 55;

						else if (a[j] == 'b')
							time = time + 90;

						else if (a[j] == 'c')
							time = time + 90;

						else if (a[j] == 'd')
							time = time + 90;

						else if (a[j] == 'e')
							time = time + 90;

						else if (a[j] == 'f')
							time = time + 90;

						else if (a[j] == 'g')
							time = time + 80;

						else if (a[j] == 'h')
							time = time + 90;

						else if (a[j] == 'i')
							time = time + 90;

						else if (a[j] == 'j')
							time = time + 90;

						else if (a[j] == 'k')
							time = time + 40;

						else if (a[j] == 'l')
							time = time + 85;

						else if (a[j] == 'm')
							time = time + 90;

						else if (a[j] == 'n')
							time = time + 90;

						else if (a[j] == 'o')
							time = time + 85;

						else if (a[j] == 'p')
							time = time + 85;

						else if (a[j] == 'q')
							time = time + 90;

						else if (a[j] == 'r')
							time = time + 90;

						else if (a[j] == 's')
							time = time + 90;

						else if (a[j] == 't')
							time = time + 90;

						else if (a[j] == 'u')
							time = time + 90;

						else if (a[j] == 'v')
							time = time + 90;

						else if (a[j] == 'w')
							time = time + 55;

						else if (a[j] == 'x')
							time = time + 90;

						else if (a[j] == 'y')
							time = time + 100;

						else if (a[j] == 'z')
							time = time + 90;

						else if (a[j] == 'A')
							time = time + 85;

						else if (a[j] == 'B')
							time = time + 90;

						else if (a[j] == 'C')
							time = time + 90;

						else if (a[j] == 'D')
							time = time + 90;

						else if (a[j] == 'F')
							time = time + 90;

						else if (a[j] == 'G')
							time = time + 55;

						else if (a[j] == 'H')
							time = time + 90;

						else if (a[j] == 'I')
							time = time + 90;

						else if (a[j] == 'J')
							time = time + 90;

						else if (a[j] == 'K')
							time = time + 90;

						else if (a[j] == 'L')
							time = time + 55;

						else if (a[j] == 'M')
							time = time + 90;

						else if (a[j] == 'N')
							time = time + 55;
					} if (a[x] == 'F') {
						if (a[j] == 'a')
							time = time + 40;

						else if (a[j] == 'b')
							time = time + 40;

						else if (a[j] == 'c')
							time = time + 70;

						else if (a[j] == 'd')
							time = time + 70;

						else if (a[j] == 'e')
							time = time + 40;

						else if (a[j] == 'f')
							time = time + 40;

						else if (a[j] == 'g')
							time = time + 45;

						else if (a[j] == 'h')
							time = time + 40;

						else if (a[j] == 'i')
							time = time + 40;

						else if (a[j] == 'j')
							time = time + 40;

						else if (a[j] == 'k')
							time = time + 40;

						else if (a[j] == 'l')
							time = time + 55;

						else if (a[j] == 'm')
							time = time + 55;

						else if (a[j] == 'n')
							time = time + 55;

						else if (a[j] == 'o')
							time = time + 55;

						else if (a[j] == 'p')
							time = time + 55;

						else if (a[j] == 'q')
							time = time + 40;

						else if (a[j] == 'r')
							time = time + 40;

						else if (a[j] == 's')
							time = time + 40;

						else if (a[j] == 't')
							time = time + 40;

						else if (a[j] == 'u')
							time = time + 45;

						else if (a[j] == 'v')
							time = time + 45;

						else if (a[j] == 'w')
							time = time + 45;

						else if (a[j] == 'x')
							time = time + 45;

						else if (a[j] == 'y')
							time = time + 70;

						else if (a[j] == 'z')
							time = time + 45;

						else if (a[j] == 'A')
							time = time + 55;

						else if (a[j] == 'B')
							time = time + 40;

						else if (a[j] == 'C')
							time = time + 45;

						else if (a[j] == 'D')
							time = time + 45;

						else if (a[j] == 'E')
							time = time + 70;

						else if (a[j] == 'G')
							time = time + 35;

						else if (a[j] == 'H')
							time = time + 45;

						else if (a[j] == 'I')
							time = time + 55;

						else if (a[j] == 'J')
							time = time + 55;

						else if (a[j] == 'K')
							time = time + 90;

						else if (a[j] == 'L')
							time = time + 55;

						else if (a[j] == 'M')
							time = time + 55;

						else if (a[j] == 'N')
							time = time + 55;
					} if (a[x] == 'G') {
						if (a[j] == 'a')
							time = time + 40;

						else if (a[j] == 'b')
							time = time + 90;

						else if (a[j] == 'c')
							time = time + 90;

						else if (a[j] == 'd')
							time = time + 90;

						else if (a[j] == 'e')
							time = time + 90;

						else if (a[j] == 'f')
							time = time + 90;

						else if (a[j] == 'g')
							time = time + 45;

						else if (a[j] == 'h')
							time = time + 90;

						else if (a[j] == 'i')
							time = time + 90;

						else if (a[j] == 'j')
							time = time + 90;

						else if (a[j] == 'k')
							time = time + 90;

						else if (a[j] == 'l')
							time = time + 55;

						else if (a[j] == 'm')
							time = time + 90;

						else if (a[j] == 'n')
							time = time + 90;

						else if (a[j] == 'o')
							time = time + 55;

						else if (a[j] == 'p')
							time = time + 55;

						else if (a[j] == 'q')
							time = time + 90;

						else if (a[j] == 'r')
							time = time + 90;

						else if (a[j] == 's')
							time = time + 90;

						else if (a[j] == 't')
							time = time + 90;

						else if (a[j] == 'u')
							time = time + 90;

						else if (a[j] == 'v')
							time = time + 90;

						else if (a[j] == 'w')
							time = time + 45;

						else if (a[j] == 'x')
							time = time + 45;

						else if (a[j] == 'y')
							time = time + 70;

						else if (a[j] == 'z')
							time = time + 90;

						else if (a[j] == 'A')
							time = time + 90;

						else if (a[j] == 'B')
							time = time + 90;

						else if (a[j] == 'C')
							time = time + 90;

						else if (a[j] == 'D')
							time = time + 45;

						else if (a[j] == 'E')
							time = time + 90;

						else if (a[j] == 'F')
							time = time + 90;

						else if (a[j] == 'H')
							time = time + 90;

						else if (a[j] == 'I')
							time = time + 55;

						else if (a[j] == 'J')
							time = time + 90;

						else if (a[j] == 'K')
							time = time + 90;

						else if (a[j] == 'L')
							time = time + 55;

						else if (a[j] == 'M')
							time = time + 90;

						else if (a[j] == 'N')
							time = time + 90;
					} if (a[x] == 'H') {
						if (a[j] == 'a')
							time = time + 50;

						else if (a[j] == 'b')
							time = time + 90;

						else if (a[j] == 'c')
							time = time + 90;

						else if (a[j] == 'd')
							time = time + 90;

						else if (a[j] == 'e')
							time = time + 90;

						else if (a[j] == 'f')
							time = time + 90;

						else if (a[j] == 'g')
							time = time + 70;

						else if (a[j] == 'h')
							time = time + 90;

						else if (a[j] == 'i')
							time = time + 90;

						else if (a[j] == 'j')
							time = time + 90;

						else if (a[j] == 'k')
							time = time + 90;

						else if (a[j] == 'l')
							time = time + 70;

						else if (a[j] == 'm')
							time = time + 60;

						else if (a[j] == 'n')
							time = time + 70;

						else if (a[j] == 'o')
							time = time + 70;

						else if (a[j] == 'p')
							time = time + 70;

						else if (a[j] == 'q')
							time = time + 90;

						else if (a[j] == 'r')
							time = time + 90;

						else if (a[j] == 's')
							time = time + 90;

						else if (a[j] == 't')
							time = time + 90;

						else if (a[j] == 'u')
							time = time + 90;

						else if (a[j] == 'v')
							time = time + 90;

						else if (a[j] == 'w')
							time = time + 70;

						else if (a[j] == 'x')
							time = time + 70;

						else if (a[j] == 'y')
							time = time + 80;

						else if (a[j] == 'z')
							time = time + 90;

						else if (a[j] == 'A')
							time = time + 90;

						else if (a[j] == 'B')
							time = time + 90;

						else if (a[j] == 'C')
							time = time + 90;

						else if (a[j] == 'D')
							time = time + 70;

						else if (a[j] == 'E')
							time = time + 90;

						else if (a[j] == 'F')
							time = time + 55;

						else if (a[j] == 'G')
							time = time + 55;

						else if (a[j] == 'I')
							time = time + 60;

						else if (a[j] == 'J')
							time = time + 90;

						else if (a[j] == 'K')
							time = time + 90;

						else if (a[j] == 'L')
							time = time + 55;

						else if (a[j] == 'M')
							time = time + 55;

						else if (a[j] == 'N')
							time = time + 90;
					} if (a[x] == 'I') {
						if (a[j] == 'a')
							time = time + 55;

						else if (a[j] == 'b')
							time = time + 90;

						else if (a[j] == 'c')
							time = time + 90;

						else if (a[j] == 'd')
							time = time + 90;

						else if (a[j] == 'e')
							time = time + 90;

						else if (a[j] == 'f')
							time = time + 90;

						else if (a[j] == 'g')
							time = time + 60;

						else if (a[j] == 'h')
							time = time + 90;

						else if (a[j] == 'i')
							time = time + 90;

						else if (a[j] == 'j')
							time = time + 90;

						else if (a[j] == 'k')
							time = time + 90;

						else if (a[j] == 'l')
							time = time + 85;

						else if (a[j] == 'm')
							time = time + 90;

						else if (a[j] == 'n')
							time = time + 90;

						else if (a[j] == 'o')
							time = time + 85;

						else if (a[j] == 'p')
							time = time + 85;

						else if (a[j] == 'q')
							time = time + 90;

						else if (a[j] == 'r')
							time = time + 90;

						else if (a[j] == 's')
							time = time + 90;

						else if (a[j] == 't')
							time = time + 90;

						else if (a[j] == 'u')
							time = time + 90;

						else if (a[j] == 'v')
							time = time + 90;

						else if (a[j] == 'w')
							time = time + 60;

						else if (a[j] == 'x')
							time = time + 75;

						else if (a[j] == 'y')
							time = time + 75;

						else if (a[j] == 'z')
							time = time + 90;

						else if (a[j] == 'A')
							time = time + 90;

						else if (a[j] == 'B')
							time = time + 90;

						else if (a[j] == 'C')
							time = time + 90;

						else if (a[j] == 'D')
							time = time + 75;

						else if (a[j] == 'E')
							time = time + 90;

						else if (a[j] == 'F')
							time = time + 90;

						else if (a[j] == 'G')
							time = time + 55;

						else if (a[j] == 'H')
							time = time + 90;

						else if (a[j] == 'J')
							time = time + 90;

						else if (a[j] == 'K')
							time = time + 90;

						else if (a[j] == 'L')
							time = time + 55;

						else if (a[j] == 'M')
							time = time + 90;

						else if (a[j] == 'N')
							time = time + 90;
					} if (a[x] == 'J') {
						if (a[j] == 'a')
							time = time + 40;

						else if (a[j] == 'b')
							time = time + 90;

						else if (a[j] == 'c')
							time = time + 90;

						else if (a[j] == 'd')
							time = time + 90;

						else if (a[j] == 'e')
							time = time + 90;

						else if (a[j] == 'f')
							time = time + 90;

						else if (a[j] == 'g')
							time = time + 45;

						else if (a[j] == 'h')
							time = time + 90;

						else if (a[j] == 'i')
							time = time + 90;

						else if (a[j] == 'j')
							time = time + 90;

						else if (a[j] == 'k')
							time = time + 35;

						else if (a[j] == 'l')
							time = time + 55;

						else if (a[j] == 'm')
							time = time + 55;

						else if (a[j] == 'n')
							time = time + 55;

						else if (a[j] == 'o')
							time = time + 55;

						else if (a[j] == 'p')
							time = time + 55;

						else if (a[j] == 'q')
							time = time + 40;

						else if (a[j] == 'r')
							time = time + 40;

						else if (a[j] == 's')
							time = time + 15;

						else if (a[j] == 't')
							time = time + 90;

						else if (a[j] == 'u')
							time = time + 90;

						else if (a[j] == 'v')
							time = time + 30;

						else if (a[j] == 'w')
							time = time + 45;

						else if (a[j] == 'x')
							time = time + 45;

						else if (a[j] == 'y')
							time = time + 70;

						else if (a[j] == 'z')
							time = time + 90;

						else if (a[j] == 'A')
							time = time + 55;

						else if (a[j] == 'B')
							time = time + 50;

						else if (a[j] == 'C')
							time = time + 90;

						else if (a[j] == 'D')
							time = time + 45;

						else if (a[j] == 'E')
							time = time + 70;

						else if (a[j] == 'F')
							time = time + 90;

						else if (a[j] == 'G')
							time = time + 40;

						else if (a[j] == 'H')
							time = time + 90;

						else if (a[j] == 'I')
							time = time + 55;

						else if (a[j] == 'K')
							time = time + 90;

						else if (a[j] == 'L')
							time = time + 55;

						else if (a[j] == 'M')
							time = time + 55;

						else if (a[j] == 'N')
							time = time + 55;
					} if (a[x] == 'K') {
						if (a[j] == 'a')
							time = time + 40;

						else if (a[j] == 'b')
							time = time + 90;

						else if (a[j] == 'c')
							time = time + 90;

						else if (a[j] == 'd')
							time = time + 90;

						else if (a[j] == 'e')
							time = time + 90;

						else if (a[j] == 'f')
							time = time + 90;

						else if (a[j] == 'g')
							time = time + 45;

						else if (a[j] == 'h')
							time = time + 90;

						else if (a[j] == 'i')
							time = time + 90;

						else if (a[j] == 'j')
							time = time + 90;

						else if (a[j] == 'k')
							time = time + 40;

						else if (a[j] == 'l')
							time = time + 55;

						else if (a[j] == 'm')
							time = time + 55;

						else if (a[j] == 'n')
							time = time + 55;

						else if (a[j] == 'o')
							time = time + 55;

						else if (a[j] == 'p')
							time = time + 55;

						else if (a[j] == 'q')
							time = time + 35;

						else if (a[j] == 'r')
							time = time + 40;

						else if (a[j] == 's')
							time = time + 15;

						else if (a[j] == 't')
							time = time + 90;

						else if (a[j] == 'u')
							time = time + 90;

						else if (a[j] == 'v')
							time = time + 30;

						else if (a[j] == 'w')
							time = time + 45;

						else if (a[j] == 'x')
							time = time + 45;

						else if (a[j] == 'y')
							time = time + 70;

						else if (a[j] == 'z')
							time = time + 90;

						else if (a[j] == 'A')
							time = time + 55;

						else if (a[j] == 'B')
							time = time + 90;

						else if (a[j] == 'C')
							time = time + 90;

						else if (a[j] == 'D')
							time = time + 45;

						else if (a[j] == 'E')
							time = time + 70;

						else if (a[j] == 'F')
							time = time + 90;

						else if (a[j] == 'G')
							time = time + 40;

						else if (a[j] == 'H')
							time = time + 90;

						else if (a[j] == 'I')
							time = time + 55;

						else if (a[j] == 'J')
							time = time + 55;

						else if (a[j] == 'L')
							time = time + 55;

						else if (a[j] == 'M')
							time = time + 55;

						else if (a[j] == 'N')
							time = time + 55;
					} if (a[x] == 'L') {
						if (a[j] == 'a')
							time = time + 40;

						else if (a[j] == 'b')
							time = time + 90;

						else if (a[j] == 'c')
							time = time + 90;

						else if (a[j] == 'd')
							time = time + 90;

						else if (a[j] == 'e')
							time = time + 90;

						else if (a[j] == 'f')
							time = time + 90;

						else if (a[j] == 'g')
							time = time + 45;

						else if (a[j] == 'h')
							time = time + 90;

						else if (a[j] == 'i')
							time = time + 90;

						else if (a[j] == 'j')
							time = time + 90;

						else if (a[j] == 'L')
							time = time + 40;

						else if (a[j] == 'l')
							time = time + 55;

						else if (a[j] == 'm')
							time = time + 55;

						else if (a[j] == 'n')
							time = time + 55;

						else if (a[j] == 'o')
							time = time + 55;

						else if (a[j] == 'p')
							time = time + 55;

						else if (a[j] == 'q')
							time = time + 35;

						else if (a[j] == 'r')
							time = time + 40;

						else if (a[j] == 's')
							time = time + 15;

						else if (a[j] == 't')
							time = time + 90;

						else if (a[j] == 'u')
							time = time + 90;

						else if (a[j] == 'v')
							time = time + 30;

						else if (a[j] == 'w')
							time = time + 45;

						else if (a[j] == 'x')
							time = time + 45;

						else if (a[j] == 'y')
							time = time + 70;

						else if (a[j] == 'z')
							time = time + 90;

						else if (a[j] == 'A')
							time = time + 55;

						else if (a[j] == 'B')
							time = time + 90;

						else if (a[j] == 'C')
							time = time + 90;

						else if (a[j] == 'D')
							time = time + 45;

						else if (a[j] == 'E')
							time = time + 90;

						else if (a[j] == 'F')
							time = time + 90;

						else if (a[j] == 'G')
							time = time + 40;

						else if (a[j] == 'H')
							time = time + 90;

						else if (a[j] == 'I')
							time = time + 55;

						else if (a[j] == 'J')
							time = time + 55;

						else if (a[j] == 'K')
							time = time + 90;

						else if (a[j] == 'M')
							time = time + 55;

						else if (a[j] == 'N')
							time = time + 55;
					} if (a[x] == 'M') {
						if (a[j] == 'a')
							time = time + 40;

						else if (a[j] == 'b')
							time = time + 90;

						else if (a[j] == 'c')
							time = time + 90;

						else if (a[j] == 'd')
							time = time + 90;

						else if (a[j] == 'e')
							time = time + 90;

						else if (a[j] == 'f')
							time = time + 90;

						else if (a[j] == 'g')
							time = time + 45;

						else if (a[j] == 'h')
							time = time + 90;

						else if (a[j] == 'i')
							time = time + 90;

						else if (a[j] == 'j')
							time = time + 90;

						else if (a[j] == 'k')
							time = time + 90;

						else if (a[j] == 'l')
							time = time + 55;

						else if (a[j] == 'm')
							time = time + 90;

						else if (a[j] == 'n')
							time = time + 55;

						else if (a[j] == 'o')
							time = time + 55;

						else if (a[j] == 'p')
							time = time + 55;

						else if (a[j] == 'q')
							time = time + 90;

						else if (a[j] == 'r')
							time = time + 90;

						else if (a[j] == 's')
							time = time + 90;

						else if (a[j] == 't')
							time = time + 90;

						else if (a[j] == 'u')
							time = time + 90;

						else if (a[j] == 'v')
							time = time + 90;

						else if (a[j] == 'w')
							time = time + 45;

						else if (a[j] == 'x')
							time = time + 45;

						else if (a[j] == 'y')
							time = time + 70;

						else if (a[j] == 'z')
							time = time + 90;

						else if (a[j] == 'A')
							time = time + 90;

						else if (a[j] == 'B')
							time = time + 90;

						else if (a[j] == 'C')
							time = time + 90;

						else if (a[j] == 'D')
							time = time + 45;

						else if (a[j] == 'E')
							time = time + 90;

						else if (a[j] == 'F')
							time = time + 90;

						else if (a[j] == 'G')
							time = time + 40;

						else if (a[j] == 'H')
							time = time + 90;

						else if (a[j] == 'I')
							time = time + 55;

						else if (a[j] == 'J')
							time = time + 90;

						else if (a[j] == 'K')
							time = time + 90;

						else if (a[j] == 'L')
							time = time + 55;

						else if (a[j] == 'N')
							time = time + 90;
					} if (a[x] == 'N') {
						if (a[j] == 'a')
							time = time + 40;

						else if (a[j] == 'b')
							time = time + 90;

						else if (a[j] == 'c')
							time = time + 90;

						else if (a[j] == 'd')
							time = time + 90;

						else if (a[j] == 'e')
							time = time + 90;

						else if (a[j] == 'f')
							time = time + 90;

						else if (a[j] == 'g')
							time = time + 45;

						else if (a[j] == 'h')
							time = time + 90;

						else if (a[j] == 'i')
							time = time + 90;

						else if (a[j] == 'j')
							time = time + 90;

						else if (a[j] == 'k')
							time = time + 40;

						else if (a[j] == 'l')
							time = time + 55;

						else if (a[j] == 'm')
							time = time + 55;

						else if (a[j] == 'n')
							time = time + 90;

						else if (a[j] == 'o')
							time = time + 55;

						else if (a[j] == 'p')
							time = time + 55;

						else if (a[j] == 'q')
							time = time + 90;

						else if (a[j] == 'r')
							time = time + 90;

						else if (a[j] == 's')
							time = time + 90;

						else if (a[j] == 't')
							time = time + 90;

						else if (a[j] == 'u')
							time = time + 90;

						else if (a[j] == 'v')
							time = time + 30;

						else if (a[j] == 'w')
							time = time + 45;

						else if (a[j] == 'x')
							time = time + 45;

						else if (a[j] == 'y')
							time = time + 70;

						else if (a[j] == 'z')
							time = time + 90;

						else if (a[j] == 'A')
							time = time + 55;

						else if (a[j] == 'B')
							time = time + 90;

						else if (a[j] == 'C')
							time = time + 90;

						else if (a[j] == 'D')
							time = time + 45;

						else if (a[j] == 'E')
							time = time + 70;

						else if (a[j] == 'F')
							time = time + 90;

						else if (a[j] == 'G')
							time = time + 40;

						else if (a[j] == 'H')
							time = time + 90;

						else if (a[j] == 'I')
							time = time + 55;

						else if (a[j] == 'J')
							time = time + 90;

						else if (a[j] == 'K')
							time = time + 90;

						else if (a[j] == 'L')
							time = time + 55;

						else if (a[j] == 'M')
							time = time + 90;
					}
				}
			}
		}
		if (time < optimal) {
			optimal = time;
			printf("The optimal time is: %d\n", optimal);
			printf("The optimal arrangement is:\n\n");
			s = a;
			for (i = 0; i<r + 1; i++) {
				t = strchr(s, 'a');
				y = (int)(t - s);
				if (y == i)
					strcpy(optarr[i], "chickenbrowncan");
				t = strchr(s, 'b');
				y = (int)(t - s);
				if (y == i)
					strcpy(optarr[i], "chickenbrownus");
				t = strchr(s, 'c');
				y = (int)(t - s);
				if (y == i)
					strcpy(optarr[i], "vegharvestcan");
				t = strchr(s, 'd');
				y = (int)(t - s);
				if (y == i)
					strcpy(optarr[i], "vegharvestus");
				t = strchr(s, 'e');
				y = (int)(t - s);
				if (y == i)
					strcpy(optarr[i], "wholegrainbc");
				t = strchr(s, 'f');
				y = (int)(t - s);
				if (y == i)
					strcpy(optarr[i], "wholegrainbu");
				t = strchr(s, 'g');
				y = (int)(t - s);
				if (y == i)
					strcpy(optarr[i], "vegmedleycan");
				t = strchr(s, 'h');
				y = (int)(t - s);
				if (y == i)
					strcpy(optarr[i], "tomatoherbcan");
				t = strchr(s, 'i');
				y = (int)(t - s);
				if (y == i)
					strcpy(optarr[i], "longgraincan");
				t = strchr(s, 'j');
				y = (int)(t - s);
				if (y == i)
					strcpy(optarr[i], "longgrainus");
				t = strchr(s, 'k');
				y = (int)(t - s);
				if (y == i)
					strcpy(optarr[i], "orientalcan");
				t = strchr(s, 'l');
				y = (int)(t - s);
				if (y == i)
					strcpy(optarr[i], "longgrainwildc");
				t = strchr(s, 'm');
				y = (int)(t - s);
				if (y == i)
					strcpy(optarr[i], "longgrainwildu");
				t = strchr(s, 'n');
				y = (int)(t - s);
				if (y == i)
					strcpy(optarr[i], "garlicwildcan");
				t = strchr(s, 'o');
				y = (int)(t - s);
				if (y == i)
					strcpy(optarr[i], "chickenwildcan");
				t = strchr(s, 'p');
				y = (int)(t - s);
				if (y == i)
					strcpy(optarr[i], "mushroomwildcan");
				t = strchr(s, 'q');
				y = (int)(t - s);
				if (y == i)
					strcpy(optarr[i], "basmatican");
				t = strchr(s, 'r');
				y = (int)(t - s);
				if (y == i)
					strcpy(optarr[i], "basmatius");
				t = strchr(s, 's');
				y = (int)(t - s);
				if (y == i)
					strcpy(optarr[i], "jasmineus");
				t = strchr(s, 't');
				y = (int)(t - s);
				if (y == i)
					strcpy(optarr[i], "roastedchickenu");
				t = strchr(s, 'u');
				y = (int)(t - s);
				if (y == i)
					strcpy(optarr[i], "spanishus");
				t = strchr(s, 'v');
				y = (int)(t - s);
				if (y == i)
					strcpy(optarr[i], "pilafus");
				t = strchr(s, 'w');
				y = (int)(t - s);
				if (y == i)
					strcpy(optarr[i], "teriyakius");
				t = strchr(s, 'x');
				y = (int)(t - s);
				if (y == i)
					strcpy(optarr[i], "fourcheeseus");
				t = strchr(s, 'y');
				y = (int)(t - s);
				if (y == i)
					strcpy(optarr[i], "cajunus");
				t = strchr(s, 'z');
				y = (int)(t - s);
				if (y == i)
					strcpy(optarr[i], "indiancurrycan");
				t = strchr(s, 'A');
				y = (int)(t - s);
				if (y == i)
					strcpy(optarr[i], "brownwildus");
				t = strchr(s, 'B');
				y = (int)(t - s);
				if (y == i)
					strcpy(optarr[i], "jasminecan");
				t = strchr(s, 'C');
				y = (int)(t - s);
				if (y == i)
					strcpy(optarr[i], "gardenvegus");
				t = strchr(s, 'D');
				y = (int)(t - s);
				if (y == i)
					strcpy(optarr[i], "creamycheddar");
				t = strchr(s, 'E');
				y = (int)(t - s);
				if (y == i)
					strcpy(optarr[i], "santafeus");
				t = strchr(s, 'F');
				y = (int)(t - s);
				if (y == i)
					strcpy(optarr[i], "tomatoherbrcan");
				t = strchr(s, 'G');
				y = (int)(t - s);
				if (y == i)
					strcpy(optarr[i], "creamycarbcan");
				t = strchr(s, 'H');
				y = (int)(t - s);
				if (y == i)
					strcpy(optarr[i], "medvegcan");
				t = strchr(s, 'I');
				y = (int)(t - s);
				if (y == i)
					strcpy(optarr[i], "mushroomcan");
				t = strchr(s, 'J');
				y = (int)(t - s);
				if (y == i)
					strcpy(optarr[i], "brbjaponicaus");
				t = strchr(s, 'K');
				y = (int)(t - s);
				if (y == i)
					strcpy(optarr[i], "quinoabrowncan");
				t = strchr(s, 'L');
				y = (int)(t - s);
				if (y == i)
					strcpy(optarr[i], "socquinoabrownus");
				t = strchr(s, 'M');
				y = (int)(t - s);
				if (y == i)
					strcpy(optarr[i], "buttergarlicus");
				t = strchr(s, 'N');
				y = (int)(t - s);
				if (y == i)
					strcpy(optarr[i], "wholegraincan");
			}

			for (i = 0; i<r + 1; i++)
				printf("%s\n\n", optarr[i]);
		}

	}
	else {

		for (i = l; i <= r; i++) {
			swap((a + l), (a + i));
			permute(a, l + 1, r, 1, s, optarr);
			swap((a + l), (a + i));

		}
	}
}

