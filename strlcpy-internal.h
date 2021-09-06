#ifndef _STRLCPY_INTERNAL_H_
#define _STRLCPY_INTERNAL_H_

// 条件编译：1. 只有C++中能用extern "C"，否则会报错； 2. 避免项目中因为多处include出现冗余定义造成错误。
// 参考https://www.cnblogs.com/skynet/archive/2010/07/10/1774964.html
#ifdef __cplusplus  
extern "C" { // 扩展，可使用C中函数
#endif

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif /* HAVE_CONFIG_H */

#ifndef HAVE_STRLCPY
#include <string.h>
size_t _event_strlcpy(char *dst, const char *src, size_t siz);
#define strlcpy _event_strlcpy  // 用自定义的_event_strlcpy替换C语言中自带的strlcpy
#endif

#ifdef __cplusplus
}
#endif

#endif

