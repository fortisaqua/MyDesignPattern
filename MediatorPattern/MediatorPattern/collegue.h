#pragma once

#include "mediator.h"
#include <string>

using namespace std;

// ͨ����ӿڣ�����ͬ���ࣩ��ͨ���н�ӿڣ������н��ࣩ��һ�Զ�Ļ������ù�ϵ
// ����ڽӿڶ����ͷ�ļ��У���Ҫ����ʾ��һ���Է��ġ�ͬ�����ࡱ������������ͬ����
// ���о���Ҫ��ʾ����һ���յġ��н��ࡱIMediator���������Է�ֹ���������н�ӿڵ�ʱ����δ����Ĵ��� ��������
/*
	�����漰һ�����໥���á������⣬����ͷ�ļ��໥���õ�ʱ����С�δ���塱�Ĵ��󣬱Ͼ����뻹Ҫ��˳��
	��������������� ��class IMediator;�� ��ʾ�����������õ�ͷ�ļ�����������Ҫ�õ����ࣨ�����Ҳ�ǣ�
	����������ֻ��ʹ�ö�����ָ��������ã����ܷ��ʾ�������
	
	���Ҫ�ڻ��������з��ʾ������ݵĻ�����Է�ͷ�ļ��������ô�ͷ�ļ�!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
	������������Ҫ���� IMediator �еĹ��������Ⱦ������ݣ��� mediator.h �������ô��ļ� collegue.h������Ϊ��
	���ʵ��������ݣ����ļ� collegue.h �ͱ���Ҫ���� mediator.h��

	���������ǣ�collegue.h�е���������õ���ʽ���� mediator.h �е��࣬mediator.h �е������ָ�����ʽ
	���� colelgur.h �е��࣬ ������������ʽ�ػ�������ͷ�ļ�������˫����Ҫ��ʽ������һ��Ҫ���õ���
	����������ġ�class IMediator;�� �� mediator.h �е� ��class IColleague;����
*/

class IMediator;


// ����ͬ����
class IColleague {
public:
	IColleague(const string &name): m_strName(name) {}
	string getName() const { return m_strName; }

	//ͨ���н��߷����Լ�����Ϣ
	virtual void sendMessage(const IMediator& mediator, const string& message) const = 0;

	//�������Է����ߵ���Ϣ
	virtual void receiveMessage(const IColleague* sender, const string& message) const = 0;
private:
	string m_strName;
};