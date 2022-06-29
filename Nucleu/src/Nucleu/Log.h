#pragma once

#include <memory>

#include "Core.h"
#include "spdlog/spdlog.h"

namespace Nucleu {

	class NUCLEU_API Log
	{
	public:
		static void Init();

		inline static std::shared_ptr<spdlog::logger>& GetCoreLogger() { return s_CoreLogger; }
		inline static std::shared_ptr<spdlog::logger>& GetClientLogger() { return s_ClientLogger; }
	private:
		static std::shared_ptr<spdlog::logger> s_CoreLogger;
		static std::shared_ptr<spdlog::logger> s_ClientLogger;
	};


}

// Core log macros
#define NC_CORE_TRACE(...)     ::Nucleu::Log::GetCoreLogger()->trace(__VA_ARGS__)
#define NC_CORE_INFO(...)      ::Nucleu::Log::GetCoreLogger()->info(__VA_ARGS__)
#define NC_CORE_WARN(...)      ::Nucleu::Log::GetCoreLogger()->warn(__VA_ARGS__)
#define NC_CORE_ERROR(...)     ::Nucleu::Log::GetCoreLogger()->error(__VA_ARGS__)
#define NC_CORE_CRITICAL(...)  ::Nucleu::Log::GetCoreLogger()->critical(__VA_ARGS__)

// Client log macros
#define NC_TRACE(...)          ::Nucleu::Log::GetClientLogger()->trace(__VA_ARGS__)
#define NC_INFO(...)           ::Nucleu::Log::GetClientLogger()->info(__VA_ARGS__)
#define NC_WARN(...)           ::Nucleu::Log::GetClientLogger()->warn(__VA_ARGS__)
#define NC_ERROR(...)          ::Nucleu::Log::GetClientLogger()->error(__VA_ARGS__)
#define NC_CRITICAL(...)       ::Nucleu::Log::GetClientLogger()->critical(__VA_ARGS__)