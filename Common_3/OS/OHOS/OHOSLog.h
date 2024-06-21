#ifndef OHOSLOG_H
#define OHOSLOG_H
#define LogLevel  OHOS_LogLevel  
#define LOG_DEBUG OHOS_LOG_DEBUG 
#define LOG_INFO  OHOS_LOG_INFO  
#define LOG_WARN  OHOS_LOG_WARN  
#define LOG_ERROR OHOS_LOG_ERROR 
#define LOG_FATAL OHOS_LOG_FATAL 

#include <hilog/log.h>

#undef LogLevel  
#undef LOG_DEBUG 
#undef LOG_INFO  
#undef LOG_WARN  
#undef LOG_ERROR 
#undef LOG_FATAL 

#endif // OHOSLOG_H
