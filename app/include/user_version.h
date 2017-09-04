#ifndef __USER_VERSION_H__
#define __USER_VERSION_H__

#define NODE_VERSION_MAJOR		2U
#define NODE_VERSION_MINOR		1U
#define NODE_VERSION_REVISION	0U
#define NODE_VERSION_INTERNAL   0U

#define NODE_VERSION	"NodeMCU do meu amorzinho s2s2"
//#define NODE_VERSION	"NodeMCU 2.1.0"
#ifndef BUILD_DATE
#define BUILD_DATE	  "2017-09-04"
#endif

extern char SDK_VERSION[];

#endif	/* __USER_VERSION_H__ */
