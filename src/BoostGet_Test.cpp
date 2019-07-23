#include <iostream>
#include "def/types.h"
#include "base/range.h"

using namespace std;

int main() {
	RANGE_CLASS range = RANGE_CLASS::makeByRange(1, 10);

	std::wcout << range.toString().c_str() << L" = " << range.getFrom() << L" - " << range.getTo() << " | len = " << range.getLength();
	return 0;
}