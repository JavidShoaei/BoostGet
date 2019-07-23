#pragma once

#ifndef H_RANGE
#define H_RANGE

#include "object.h"

namespace BG {
	template<class T>
	class Range : public Object {
	private:
		T from = 0, length = 0;

	public:
		Range() {
			setClassName(__func__);
		}

		Range(T from, T length = -1) {
			setClassName(__func__);
			this->from = from;
			this->length = length;
		}

		long getFrom() {
			return from;
		}

		void setFrom(T val) {
			from = val;
		}

		long getLength() {
			return length;
		}

		void setLength(T val) {
			length = val;
		}

		long getTo() {
			return from + length - 1;
		}

		void setTo(T val) {
			length = val - from + 1;
		}

		static Range<T> makeByLength(T from, T len = 0) {
			return Range(from, len);
		}

		static Range<T> makeByRange(T from, T to) {
			Range range(from, (T)0);
			range.setTo(to);
			return range;
		}
	};
}

#endif