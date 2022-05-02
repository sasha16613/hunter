
/******************************************************
 * File auto generated by Hunter by merging file:     *
 * include/a.hpp
 * which differed its contents in a multi-arch build. *
 * The supported architectures are:                   *
 * armv7;armv7s;arm64;i386;x86_64
 *****************************************************/

#ifdef __ARM_ARCH_7A__
Hello armv7
#elif __ARM_ARCH_7S__
Hello armv7s
#elif __aarch64__
Hello arm64
#elif __i386__
Hello i386
#elif __x86_64__
Hello x86_64
#else
# error Architecture not supported. It is not one of armv7;armv7s;arm64;i386;x86_64
#endif
