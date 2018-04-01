#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "login.h"


int main(int argc, char *argv[])
{
	char UserName[200];
	char UserPassword[200];
    m:;
	printf("请输入用户名:\n");
	scanf_s("%s", UserName,200);
	printf("请输入密码:\n");
	scanf_s("%s", UserPassword,200);
	if (UserCheck(UserName, UserPassword) == true)
	{
		printf("登陆成功!\n");
	}
	else
	{
		printf("用户名或密码错误，登陆失败，请重试!\n");
		goto m;
	}
	system("pause");
	return 0;
}