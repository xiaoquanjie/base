#include <iostream>
#include "base/svector.hpp"
#include "base/tls.hpp"
#include "base/circular_queue.hpp"
#include "base/thread.hpp"

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

void thread_func(void*) {
	cout << base::thread::ctid() << endl;
	cout << base::thread::ctid_str() << endl;
}

void mpause() {
	int i;
	cin >> i;
}

int main() {
	
	base::thread thr1(thread_func, 0);
	mpause();
	cout << thr1.tid() << endl;
	cout << thr1.tid_str() << endl;
	mpause();
	base::thread thr2(thread_func, 0);
	mpause();
	cout << thr2.tid() << endl;
	cout << thr2.tid_str() << endl;
	mpause();
	return 0;
}