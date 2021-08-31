#ifndef QUEUEARRAY_H
#define QUEUEARRAY_H
#pragma warning(disable:4290)
#include "RuntimeException.h"

template<typename Q>
class QueueArray
{
	enum { DEF_CAPACITY = 100 };
public:
	QueueArray(int cap = DEF_CAPACITY);
	int size() const;
	bool empty() const;
	const Q& front() const throw(QueueEmpty);
	void enqueue(const Q& e) throw(QueueFull);
	void delqueue() throw(QueueEmpty);
private:
	Q* S;			//Queue의 위치 포인터 변수
	int capacity;	//Queue의 용량 변수
	int n;			//Queue의 길이 변수
	int f;			//
	int r;			//
};

template<typename Q> QueueArray<Q>::QueueArray(int cap)
	:S(new Q[cap]), capacity(cap), n(0), f(0), r(0) {}

template<typename Q> int QueueArray<Q>::size() const
{
	return n;
}

template<typename Q> bool QueueArray<Q>::empty() const
{
	return n == 0;
}

template<typename Q> const Q& QueueArray<Q>::front() const throw(QueueEmpty)
{
	if (empty()) throw QueueEmpty("Queue is Empty!");
	return S[f];
}

template<typename Q> void QueueArray<Q>::delqueue() throw(QueueEmpty)
{
	if (empty()) throw QueueEmpty("Queue is Empty!");
	f = (f + 1) % capacity;
	n--;
}

template<typename Q> void QueueArray<Q>::enqueue(const Q& e) throw(QueueFull)
{
	if (size() == capacity) throw QueueFull("Queue is Full!");
	S[r] = e;
	r = (r + 1) % capacity;
	n++;
}
#endif
