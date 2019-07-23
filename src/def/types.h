#pragma once

#define BGBYTE unsigned byte
#define BGCHAR char
#define BGWCHAR wchar_t
#define BGSTRING std::string
#define BGWSTRING std::wstring

#define BGPTR(A) std::shared_ptr<A>

#define RANGE_TYPE long
#define RANGE_CLASS BG::Range<RANGE_TYPE>