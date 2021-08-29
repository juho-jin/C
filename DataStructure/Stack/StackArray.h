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

//디폴트 용량을 갖는 생성자
template <typename E> StackArray<E>::StackArray(int cap)
	:S(new E[cap]), capacity(cap), t(-1) {}

//StackArray의 길이를 측정하는 함수
template <typename E> int StackArray<E>::size() const
{
	return (t + 1);
}

//StackArray가 비어져 있는지 확인하는 함수
template <typename E> bool StackArray<E>::empty() const
{
	return (t < 0);
}

//StackArray의 최상단 값을 리턴하는 함수
template <typename E> const E& StackArray<E>::top() const throw(StackEmpty)
{
	if (empty()) throw StackEmpty("Stack is Empty!");
	return S[t];
}

//StackArray에 값을 입력하는 함수
template <typename E> void StackArray<E>::push(const E& e) throw(StackFull)
{
	if (size() == capacity) throw StackFull("Stack is Full!");
	S[++t] = e;
}

//StackArray에 값을 반환하는 함수
template <typename E> void StackArray<E>::pop() throw(StackEmpty)
{
	if (empty()) throw StackEmpty("Stack is Empty!");
	t--;
}

#endif
