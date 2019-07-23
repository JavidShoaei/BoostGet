#pragma once

#include <exception>

namespace BG {
	class Exception : public std::exception {
	};

	class FormatException : public Exception {
	};
}