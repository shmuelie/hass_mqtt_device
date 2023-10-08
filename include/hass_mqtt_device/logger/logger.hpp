/**
 * @author      Morgan Tørvolt
 * @contributors somebody, hopefully@someday.com
 * @copyright   See LICENSE file
 */

#pragma once

#include <spdlog/sinks/stdout_color_sinks.h>
#include <spdlog/spdlog.h>

// Initialize the default logger with an output to console
#define INIT_LOGGER()                                                          \
  spdlog::set_pattern("[%Y-%m-%d %H:%M:%S.%e] [%^%l%$] %v");                   \
  spdlog::stdout_color_mt("console")

// Enable debug logging
#define INIT_LOGGER_DEBUG()                                                    \
  spdlog::set_pattern("[%Y-%m-%d %H:%M:%S.%e] [%^%l%$] %v");                   \
  spdlog::stdout_color_mt("console");                                          \
  spdlog::set_level(spdlog::level::debug)

// Logging macros
#define LOG_INFO(...) spdlog::info(__VA_ARGS__)
#define LOG_WARN(...) spdlog::warn(__VA_ARGS__)
#define LOG_ERROR(...) spdlog::error(__VA_ARGS__)
#define LOG_DEBUG(...) spdlog::debug(__VA_ARGS__)
