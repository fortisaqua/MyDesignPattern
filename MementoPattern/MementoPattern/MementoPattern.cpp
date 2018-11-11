// MementoPattern.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "originator.h"
#include "care_taker.h"

#ifndef SAFE_DELETE
#define SAFE_DELETE(p) { if(p){delete(p); (p)=NULL;} }
#endif

/*
����¼ģʽ�����Ա���һ��ʱ���һ������Ĳ��ֻ�ȫ��״̬�������ڱ�Ҫ��ʱ��ָ�
			������һ������Ĺ۲���ģʽ�����������ߡ�(orginator)��������󣬱���¼�����߶���care_taker��
			�ǡ��۲��ߡ������ڴ���ʱ��ע����һ���������ߡ������ӽ��ղ�������������ߴ�����
			������¼����������Ҫ�ָ�ĳһ״̬ʱ���ʹӱ���¼�����߶���(care_taker)��ȡһ��״̬����
			��ֵ���������ߡ�����(orginator)

			���磺github�еĴ���״̬��֧��ʱ��㣬Ҳ����������ģʽ����⣬��һ��ʱ���ı���¼(memento)
			      ���������֧�����ʱ����ϵġ����ա�---�б仯�Ĳ���
*/

int main()
{
	Life *life = new Life();
	PandoraBox *box = new PandoraBox(life);


	// ���ò�����һ����ʷʱ��
	life->SetDateTime("2000/10/01 00:00:00");
	box->Save();

	// ���ò�����һ����ʷʱ��
	life->SetDateTime("2010/10/01 00:00:00");
	box->Save();

	// ���ò�����һ����ʷʱ��
	life->SetDateTime("2013/10/01 00:00:00");
	box->Save();

	// ���ò�����һ����ʷʱ��
	life->SetDateTime("2016/10/01 00:00:00");
	box->Save();

	// ����һ����ʷʱ��
	life->SetDateTime("2018/10/01 00:00:00");
	
	box->Undo();
	cout << "Actual date time is " << life->GetDateTime() << endl;

	box->Undo();
	cout << "Actual date time is " << life->GetDateTime() << endl;

	SAFE_DELETE(life);
	SAFE_DELETE(box);

	getchar();

    return 0;
}

