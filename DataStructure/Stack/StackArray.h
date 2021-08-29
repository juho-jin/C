#ifndef STACKARRAY_H
#define STACKARRAY_H
#pragma warning(disable:4290)
#include "RuntimeException.h"

template <typename E>
class StackArray
{
	enum { DEF_CAPACITY = 100 };
public:
	StackArray(int cap = DEF_CAPACITY);
	int size() const;
	bool empty() const;
	const E& top() const throw(StackEmpty);
	void push(const E& e) throw(StackFull);
	void pop() throw(StackEmpty);
private:
	E* S;
	int capacity;
	int t;
};

//����Ʈ �뷮�� ���� ������
template <typename E> StackArray<E>::StackArray(int cap)
	:S(new E[cap]), capacity(cap), t(-1) {}

//StackArray�� ���̸� �����ϴ� �Լ�
template <typename E> int StackArray<E>::size() const
{
	return (t + 1);
}

//StackArray�� ����� �ִ��� Ȯ���ϴ� �Լ�
template <typename E> bool StackArray<E>::empty() const
{
	return (t < 0);
}

//StackArray�� �ֻ�� ���� �����ϴ� �Լ�
template <typename E> const E& StackArray<E>::top() const throw(StackEmpty)
{
	if (empty()) throw StackEmpty("Stack is Empty!");
	return S[t];
}

//StackArray�� ���� �Է��ϴ� �Լ�
template <typename E> void StackArray<E>::push(const E& e) throw(StackFull)
{
	if (size() == capacity) throw StackFull("Stack is Full!");
	S[++t] = e;
}

//StackArray�� ���� ��ȯ�ϴ� �Լ�
template <typename E> void StackArray<E>::pop() throw(StackEmpty)
{
	if (empty()) throw StackEmpty("Stack is Empty!");
	t--;
}

#endif
