#pragma once

#ifdef SYNQUEEN_EXPORTS
#define SYNQUEEN_API __declspec(dllexport)
#else
#define SYNQUEEN_API __declspec(dllimport)
#endif

namespace synqueen {

SYNQUEEN_API void initialize();

SYNQUEEN_API void run();

} // namespace synqueen
