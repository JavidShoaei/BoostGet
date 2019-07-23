#pragma once
#include <iomanip>
#include <string>
#include <memory>
#include <sstream>
#include "../def/syntax.h"
#include "../def/types.h"
#include "convert.h"
#include "exception.h"

namespace BG {
	class Format abstract sealed {
	public:
		static BGWSTRING toString(long val, int radix) {
			const int MAX_LEN = 32;
			BGPTR(BGWCHAR) buf(new BGWCHAR[MAX_LEN]);
			if (_ltow_s(val, &*buf, MAX_LEN, radix) < 1)
				throw FormatException();
			return (BGWSTRING)(&*buf);
		}

		static INLINE BGWSTRING toString(long val) {
			return toString(val, 10);
		}

		static BGWSTRING toHex(long val) {
			std::stringstream stream;
			stream << std::hex << val;
			return BG::Convert::toWideString(stream.str());
		}
	};
}