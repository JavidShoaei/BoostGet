#pragma once
#include <string>
#include <typeinfo>

#include "../def/types.h"
#include "exception.h"
#include "format.h"
#define OBJECT_CONSTRUCTOR

namespace BG {
	class Object {
	private:
		BGWSTRING class_name;

	protected:
		void setClassName(const char* name) {
			class_name = BG::Convert::toWideString(((BGSTRING)name).c_str());
		}

	public:
		BGWSTRING getClassName() {
			if (!class_name.length())
				setClassName(typeid(this).name());
			return class_name;
		}

		virtual BGWSTRING toString() {
			const int BUFFER_LEN = 256;
			BGWCHAR* result = new BGWCHAR[BUFFER_LEN];
			if (swprintf_s(result,
				BUFFER_LEN,
				L"{%s@%s}",
				getClassName().c_str(),
				BG::Format::toHex((uint64_t)this).c_str()) < 1)
				throw FormatException();
			return (BGWSTRING)result;
		}
	};
}