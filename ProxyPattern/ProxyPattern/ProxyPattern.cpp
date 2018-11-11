// ProxyPattern.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "proxy.h"

#ifndef SAFE_DELETE
#define SAFE_DELETE(p) { if(p){delete p; (p) = NULL;} }
#endif // !SAFE_DELETE

/*
����ģʽ����һ��ͳһ�Ľӿ��У�������һ���������������ܡ�ת������
          ��һ��ִ��ʵ�壨ת��ʱ�������ɣ�������ǰ���ɣ�ת�����ã�
		  ��ʵ�ֹ��ܵĴ����������ܵĽӿڵ��ú�ʵ�ַ��뿪��������
		  ������Ч����������ִ���ࣨ������Щ���ܲ�ϣ�������û����ã���
		  ���ÿͻ�ֱ�ӷ���������ִ�����ȫ������
*/

int main()
{
	Proxy* proxy = new Proxy();
	proxy->Recharge(20);
	proxy->Recharge(100);

	SAFE_DELETE(proxy);

	getchar();
		
    return 0;
}

