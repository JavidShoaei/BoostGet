#pragma once
#include <iomanip>
#include <string>
#include "../def/syntax.h"
#include "../def/types.h"

namespace BG {
	class Convert abstract sealed {
	public:
		static BGWSTRING toWideString(BGSTRING str) {
			return BGWSTRING(str.begin(), str.end());
		}
	};
}