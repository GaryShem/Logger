#include <windows.h>

namespace logger {

	__declspec(dllexport) enum LogLevel { LOGLEVEL_ERROR = 0, LOGLEVEL_SYSTEM = 1, LOGLEVEL_WARNING = 1, LOGLEVEL_INFO = 1, LOGLEVEL_DEBUG = 2 };

	__declspec(dllexport) LogLevel level;
	__declspec(dllexport) HANDLE file;
	__declspec(dllexport) void LogInit(const char* logPath, const char* prefix, int logLevel);
	__declspec(dllexport) void LogWrite(const char* logMessage, int logSeverity);

}