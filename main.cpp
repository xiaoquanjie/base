#include <iostream>
#include "base/svector.hpp"
#include "base/tls.hpp"
#include "base/circular_queue.hpp"

using namespace std;

struct stru_test {
	int i;
	stru_test(int _i) :i(_i) {
		cout << "con" << endl;
	}
	~stru_test() {
		cout << "~con" << endl;
	}
	operator int() {
		return i;
	}
};

int main() {

	stru_test st = 1;
	base::circular_queue<stru_test> queue(3);
	queue.push_back(st);
	queue.push_back(st);
	queue.push_back(st);
	queue.push_back(st);
	/*queue.pop_front();
	queue.pop_front();
	queue.pop_back();
	queue.pop_back();*/
	//queue.push_back(4);
	//cout << queue.push_back(4) << endl;
	cout << queue.full() << endl;
	cout << queue.empty() << endl;
	cout << queue.size() << endl;

	/*while (queue.size()) {
		cout << queue.front() << endl;
		queue.pop_front();
	}*/
	
	return 0;
}