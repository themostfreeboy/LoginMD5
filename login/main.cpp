#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "login.h"


int main(int argc, char *argv[])
{
	char UserName[200];
	char UserPassword[200];
    m:;
	printf("�������û���:\n");
	scanf_s("%s", UserName,200);
	printf("����������:\n");
	scanf_s("%s", UserPassword,200);
	if (UserCheck(UserName, UserPassword) == true)
	{
		printf("��½�ɹ�!\n");
	}
	else
	{
		printf("�û�����������󣬵�½ʧ�ܣ�������!\n");
		goto m;
	}
	system("pause");
	return 0;
}