#include <iostream>
#include <string>
#include <stdexcept>
#include <queue>


using namespace std;
template <typename T>
class Queue {
private:
	queue<T> q;
public:
	void enqueue(const T& element) {
		q.push(element);
	}

	T dequeue() {
		if (isEmpty())
		{
			throw runtime_error("\nQueue is empty. Cant to dequeue this queue!");
		}
		T frontelement = q.front();
		q.pop();
		return frontelement;
	}
	T front() {
		if (isEmpty())
		{
			throw runtime_error("\nQueue is empty.No front element!");

		}
		return q.front();
	}
	bool isEmpty() const {
		return q.empty();
	}
};
void main() {
	Queue<int> intqueue;

	intqueue.enqueue(10);
	intqueue.enqueue(22);
	intqueue.enqueue(1550);

	cout << "\nFront of the queue is: " << intqueue.front() << endl;

	while (!intqueue.isEmpty())
	{
		cout << "\nDequeued:" <<  intqueue.dequeue();
	}
	if (intqueue.isEmpty())
	{
		cerr << "\nQueue is succesfully dequeued!";
	}
	else
	{
		cerr << "\n Some element doesnt dequeued from queue!";
	}
}
