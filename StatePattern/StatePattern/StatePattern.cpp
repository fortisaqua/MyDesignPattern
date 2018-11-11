// StatePattern.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "context.h"
#include <iostream>
#include <windows.h>

/*
״̬ģʽ���������״̬��Ӧ�õ���̬�ļܹ�֮�У���Ȼ�ڵ�������Ȼ�Ӳ���if else ���� switch
		  ���жϣ��������Խ��ж����̼���࣬���ж����̵�Ŀ�Ĳ����Ǿ�����ã����Ƕ���
		  ״̬ת���߼��������Ķ�̬����������������context.h��

		  ״̬���������໥���ã�����״̬�����о���Ĵ����������������������ϣ�
		                        ��ͬһ�������Ŀ����ڲ�ͬ�ľ���״̬�Ĵ�����ɾ��֮���໥���ݣ�
								ֻҪ��ת��ʱ��������󶨵�����������һ���µ�״̬�����󶨴������ģ�
								Ȼ�󽫵�ǰ��״̬����ɾ����
		                        �����Ķ���Ҳ��Ҫ��һ��״̬��������ʽ��˵�������״̬
*/

using namespace std;

int main()
{
	TrafficLights tl;

	TLState state = Red;
	int i = 0;
	int seconds;

	while (true) {
		// �������һ�� �� -> �� -> �� ��ѭ������ʼ��һ����ѭ��
		if (i % 3 == 0)
			cout << "**********" << "Session " << ((i+1)/3)+1 << "**********" << endl;
	
		if (state == Red) {
			seconds = 6;
			state = Green;
		}
		else if (state == Green) {
			seconds = 4;
			state = Yellow;
		}
		else if (state == Yellow) {
			seconds = 2;
			state = Red;
		}

		//����second��ָ����ʱ��
		Sleep(seconds * 1000);

		/*
		�����״̬ת����ʵ�ͳ�ʼ�����״̬ö��ֵ�ǶϿ���,��Ҫ�ֶ�ȥ�����ʼֵ��
		����ʼ��TrafficLight���ʱ������״̬�ǡ���ơ�����һ��ʼ�ĳ�ʼ״̬ö��ֵҲӦ���� ��Red�� 
		��ȻҲ������RedΪ�������������忴����
		*/
		
		tl.Request();
		i++;
	}

    return 0;
}

