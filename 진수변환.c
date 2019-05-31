#include <stdio.h>
#include <string.h>
char str[17];
int iNum, iNs;
int ctoi(char ch)
{
	if ('0' <= ch && ch <= '9')
		return ch - '0';
	else if ('a' <= ch && ch <= 'z')
		return 10 + ch - 'a';
	else if ('A' <= ch && ch <= 'Z')
		return 10 + ch - 'A';
	return ch;
}

void Conv()
{
	int res;
	res = iNum % iNs;
	iNum /= iNs;
	if (iNum > 0)
		Conv();
	if (res < 10)
		printf("%d", res);
	else
		printf("%c", -10 + res + 'A');
}

int toDec()
{
	iNum = 0;
	int i;
	for (i = 0; str[i]; i++) {
		iNum = (iNum * iNs) + ctoi(str[i]);
	}
	return iNum;
}
int chk()
{
	int i;
	for (i = 0; str[i]; i++) {
		if (ctoi(str[i]) < 0 || iNs <= ctoi(str[i]))
			return 0;
	}
	return 1;
}

int main(int argc, char* argv)
{
	puts("[-]Input (0 ~ 65535) number system(2 ~ 16)");
	scanf("%s%d", str, &iNs);
	toDec();
	if (!chk() || iNum < 0 || 65535 < iNum) {
		printf("Error");
		return 0;
	}
	puts("[-]Convert : (2 ~ 16)");
	scanf("%d", &iNs);
	Conv();
	return 0;
}
