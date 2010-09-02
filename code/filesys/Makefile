# NOTE: this is a GNU Makefile.  You must use "gmake" rather than "make".
#
# Makefile for the file system assignment
#    Defines set up assuming multiprogramming and virtual memory done first.
#    If not, use the "bare bones"  defines below. 
#
# Copyright (c) 1992 The Regents of the University of California.
# All rights reserved.  See copyright.h for copyright notice and limitation 
# of liability and disclaimer of warranty provisions.

DEFINES =-DTHREADS -DUSER_PROGRAM -DVM -DFILESYS_NEEDED -DFILESYS
INCPATH = -I../filesys -I../bin -I../vm -I../userprog -I../threads -I../machine
HFILES = $(THREAD_H) $(USERPROG_H) $(VM_H) $(FILESYS_H)
CFILES = $(THREAD_C) $(USERPROG_C) $(VM_C) $(FILESYS_C)
C_OFILES = $(THREAD_O) $(USERPROG_O) $(VM_O) $(FILESYS_O)

# bare bones version
# DEFINES =-DTHREADS -DFILESYS_NEEDED -DFILESYS
# INCPATH = -I../filesys -I../threads -I../machine
# HFILES = $(THREAD_H) $(FILESYS_H)
# CFILES = $(THREAD_C) $(FILESYS_C)
# C_OFILES = $(THREAD_O) $(FILESYS_O)

include ../Makefile.common
include ../Makefile.dep
#-----------------------------------------------------------------
# DO NOT DELETE THIS LINE -- make depend uses it
# DEPENDENCIES MUST END AT END OF FILE
main.o: ../threads/main.cc ../threads/copyright.h ../threads/utility.h \
  ../threads/bool.h ../machine/sysdep.h ../threads/copyright.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/include/stdio.h \
  /usr/include/stdarg.h /usr/include/iso/stdarg_iso.h \
  /usr/include/sys/va_impl.h /usr/include/sys/va_list.h \
  /usr/include/sys/isa_defs.h /usr/include/iso/stdarg_c99.h \
  /usr/include/sys/feature_tests.h /usr/include/sys/ccompile.h \
  /usr/include/iso/stdio_iso.h /usr/include/stdio_tag.h \
  /usr/include/stdio_impl.h /usr/include/iso/stdio_c99.h \
  /usr/include/string.h /usr/include/iso/string_iso.h \
  /usr/include/stdlib.h /usr/include/iso/stdlib_iso.h \
  /usr/include/iso/stdlib_c99.h /usr/include/sys/wait.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/include/sys/types.h \
  /usr/include/sys/machtypes.h /usr/include/sys/int_types.h \
  /usr/include/sys/select.h /usr/include/sys/time_impl.h \
  /usr/include/sys/time.h /usr/include/time.h /usr/include/iso/time_iso.h \
  /usr/include/sys/resource.h /usr/include/sys/siginfo.h \
  /usr/include/sys/machsig.h /usr/include/sys/procset.h \
  /usr/include/sys/signal.h /usr/include/sys/iso/signal_iso.h \
  /usr/include/sys/unistd.h /usr/include/sys/ucontext.h \
  /usr/include/sys/regset.h /usr/include/v7/sys/privregs.h \
  /usr/include/v7/sys/psr.h /usr/include/sys/fsr.h ../threads/system.h \
  ../threads/thread.h ../machine/machine.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/iostream \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/c++config.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/os_defines.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/ostream \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/ios \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/iosfwd \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/c++locale.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/clocale \
  /usr/include/locale.h /usr/include/iso/locale_iso.h \
  /usr/include/libintl.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/cstring \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/cstddef \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/include/stddef.h \
  /usr/include/iso/stddef_iso.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/cstdio \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/c++io.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/gthr.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/gthr-default.h \
  /usr/include/pthread.h /usr/include/sched.h /usr/include/unistd.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/cctype \
  /usr/include/ctype.h /usr/include/iso/ctype_iso.h \
  /usr/include/iso/ctype_c99.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stringfwd.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/postypes.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/cwchar \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/ctime \
  /usr/include/wchar.h /usr/include/iso/wchar_iso.h \
  /usr/include/wchar_impl.h /usr/include/iso/wchar_c99.h \
  /usr/include/stdint.h /usr/include/sys/stdint.h \
  /usr/include/sys/int_limits.h /usr/include/sys/int_const.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/functexcept.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/exception_defines.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/exception \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/char_traits.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_algobase.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/climits \
  /usr/include/limits.h /usr/include/iso/limits_iso.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/cstdlib \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/new \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_pair.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/type_traits.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_iterator_base_types.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_iterator_base_funcs.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/concept_check.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_iterator.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/debug/debug.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/cassert \
  /usr/include/assert.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/localefwd.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/ios_base.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/atomicity.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/atomic_word.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/locale_classes.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/string \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/memory \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/allocator.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/c++allocator.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/ext/new_allocator.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_construct.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_uninitialized.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_raw_storage_iter.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/limits \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_function.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/basic_string.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/algorithm \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_algo.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_heap.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_tempbuf.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/basic_string.tcc \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/streambuf \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/streambuf.tcc \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/basic_ios.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/streambuf_iterator.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/locale_facets.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/cwctype \
  /usr/include/wctype.h /usr/include/iso/wctype_iso.h \
  /usr/include/iso/wctype_c99.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/ctype_base.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/ctype_inline.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/codecvt.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/codecvt_specializations.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/time_members.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/messages_members.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/basic_ios.tcc \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/ostream.tcc \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/locale \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/locale_facets.tcc \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/typeinfo \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/istream \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/istream.tcc \
  ../threads/utility.h ../machine/translate.h ../machine/disk.h \
  ../userprog/addrspace.h ../threads/copyright.h ../filesys/filesys.h \
  ../threads/copyright.h ../filesys/openfile.h ../threads/utility.h \
  ../userprog/table.h ../userprog/bitmap.h ../threads/utility.h \
  ../filesys/openfile.h ../threads/scheduler.h ../threads/list.h \
  ../machine/interrupt.h ../threads/list.h ../machine/stats.h \
  ../machine/timer.h ../filesys/filesys.h ../filesys/synchdisk.h \
  ../machine/disk.h ../threads/synch.h
list.o: ../threads/list.cc ../threads/copyright.h ../threads/list.h \
  ../threads/utility.h ../threads/bool.h ../machine/sysdep.h \
  ../threads/copyright.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/include/stdio.h \
  /usr/include/stdarg.h /usr/include/iso/stdarg_iso.h \
  /usr/include/sys/va_impl.h /usr/include/sys/va_list.h \
  /usr/include/sys/isa_defs.h /usr/include/iso/stdarg_c99.h \
  /usr/include/sys/feature_tests.h /usr/include/sys/ccompile.h \
  /usr/include/iso/stdio_iso.h /usr/include/stdio_tag.h \
  /usr/include/stdio_impl.h /usr/include/iso/stdio_c99.h \
  /usr/include/string.h /usr/include/iso/string_iso.h \
  /usr/include/stdlib.h /usr/include/iso/stdlib_iso.h \
  /usr/include/iso/stdlib_c99.h /usr/include/sys/wait.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/include/sys/types.h \
  /usr/include/sys/machtypes.h /usr/include/sys/int_types.h \
  /usr/include/sys/select.h /usr/include/sys/time_impl.h \
  /usr/include/sys/time.h /usr/include/time.h /usr/include/iso/time_iso.h \
  /usr/include/sys/resource.h /usr/include/sys/siginfo.h \
  /usr/include/sys/machsig.h /usr/include/sys/procset.h \
  /usr/include/sys/signal.h /usr/include/sys/iso/signal_iso.h \
  /usr/include/sys/unistd.h /usr/include/sys/ucontext.h \
  /usr/include/sys/regset.h /usr/include/v7/sys/privregs.h \
  /usr/include/v7/sys/psr.h /usr/include/sys/fsr.h
scheduler.o: ../threads/scheduler.cc ../threads/copyright.h \
  ../threads/scheduler.h ../threads/list.h ../threads/utility.h \
  ../threads/bool.h ../machine/sysdep.h ../threads/copyright.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/include/stdio.h \
  /usr/include/stdarg.h /usr/include/iso/stdarg_iso.h \
  /usr/include/sys/va_impl.h /usr/include/sys/va_list.h \
  /usr/include/sys/isa_defs.h /usr/include/iso/stdarg_c99.h \
  /usr/include/sys/feature_tests.h /usr/include/sys/ccompile.h \
  /usr/include/iso/stdio_iso.h /usr/include/stdio_tag.h \
  /usr/include/stdio_impl.h /usr/include/iso/stdio_c99.h \
  /usr/include/string.h /usr/include/iso/string_iso.h \
  /usr/include/stdlib.h /usr/include/iso/stdlib_iso.h \
  /usr/include/iso/stdlib_c99.h /usr/include/sys/wait.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/include/sys/types.h \
  /usr/include/sys/machtypes.h /usr/include/sys/int_types.h \
  /usr/include/sys/select.h /usr/include/sys/time_impl.h \
  /usr/include/sys/time.h /usr/include/time.h /usr/include/iso/time_iso.h \
  /usr/include/sys/resource.h /usr/include/sys/siginfo.h \
  /usr/include/sys/machsig.h /usr/include/sys/procset.h \
  /usr/include/sys/signal.h /usr/include/sys/iso/signal_iso.h \
  /usr/include/sys/unistd.h /usr/include/sys/ucontext.h \
  /usr/include/sys/regset.h /usr/include/v7/sys/privregs.h \
  /usr/include/v7/sys/psr.h /usr/include/sys/fsr.h ../threads/thread.h \
  ../machine/machine.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/iostream \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/c++config.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/os_defines.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/ostream \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/ios \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/iosfwd \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/c++locale.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/clocale \
  /usr/include/locale.h /usr/include/iso/locale_iso.h \
  /usr/include/libintl.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/cstring \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/cstddef \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/include/stddef.h \
  /usr/include/iso/stddef_iso.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/cstdio \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/c++io.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/gthr.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/gthr-default.h \
  /usr/include/pthread.h /usr/include/sched.h /usr/include/unistd.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/cctype \
  /usr/include/ctype.h /usr/include/iso/ctype_iso.h \
  /usr/include/iso/ctype_c99.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stringfwd.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/postypes.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/cwchar \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/ctime \
  /usr/include/wchar.h /usr/include/iso/wchar_iso.h \
  /usr/include/wchar_impl.h /usr/include/iso/wchar_c99.h \
  /usr/include/stdint.h /usr/include/sys/stdint.h \
  /usr/include/sys/int_limits.h /usr/include/sys/int_const.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/functexcept.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/exception_defines.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/exception \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/char_traits.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_algobase.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/climits \
  /usr/include/limits.h /usr/include/iso/limits_iso.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/cstdlib \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/new \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_pair.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/type_traits.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_iterator_base_types.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_iterator_base_funcs.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/concept_check.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_iterator.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/debug/debug.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/cassert \
  /usr/include/assert.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/localefwd.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/ios_base.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/atomicity.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/atomic_word.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/locale_classes.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/string \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/memory \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/allocator.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/c++allocator.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/ext/new_allocator.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_construct.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_uninitialized.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_raw_storage_iter.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/limits \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_function.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/basic_string.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/algorithm \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_algo.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_heap.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_tempbuf.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/basic_string.tcc \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/streambuf \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/streambuf.tcc \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/basic_ios.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/streambuf_iterator.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/locale_facets.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/cwctype \
  /usr/include/wctype.h /usr/include/iso/wctype_iso.h \
  /usr/include/iso/wctype_c99.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/ctype_base.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/ctype_inline.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/codecvt.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/codecvt_specializations.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/time_members.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/messages_members.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/basic_ios.tcc \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/ostream.tcc \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/locale \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/locale_facets.tcc \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/typeinfo \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/istream \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/istream.tcc \
  ../threads/utility.h ../machine/translate.h ../machine/disk.h \
  ../userprog/addrspace.h ../threads/copyright.h ../filesys/filesys.h \
  ../threads/copyright.h ../filesys/openfile.h ../threads/utility.h \
  ../userprog/table.h ../userprog/bitmap.h ../threads/utility.h \
  ../filesys/openfile.h ../threads/system.h ../machine/interrupt.h \
  ../threads/list.h ../machine/stats.h ../machine/timer.h \
  ../filesys/filesys.h ../filesys/synchdisk.h ../machine/disk.h \
  ../threads/synch.h
synch.o: ../threads/synch.cc ../threads/copyright.h ../threads/synch.h \
  ../threads/thread.h ../threads/utility.h ../threads/bool.h \
  ../machine/sysdep.h ../threads/copyright.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/include/stdio.h \
  /usr/include/stdarg.h /usr/include/iso/stdarg_iso.h \
  /usr/include/sys/va_impl.h /usr/include/sys/va_list.h \
  /usr/include/sys/isa_defs.h /usr/include/iso/stdarg_c99.h \
  /usr/include/sys/feature_tests.h /usr/include/sys/ccompile.h \
  /usr/include/iso/stdio_iso.h /usr/include/stdio_tag.h \
  /usr/include/stdio_impl.h /usr/include/iso/stdio_c99.h \
  /usr/include/string.h /usr/include/iso/string_iso.h \
  /usr/include/stdlib.h /usr/include/iso/stdlib_iso.h \
  /usr/include/iso/stdlib_c99.h /usr/include/sys/wait.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/include/sys/types.h \
  /usr/include/sys/machtypes.h /usr/include/sys/int_types.h \
  /usr/include/sys/select.h /usr/include/sys/time_impl.h \
  /usr/include/sys/time.h /usr/include/time.h /usr/include/iso/time_iso.h \
  /usr/include/sys/resource.h /usr/include/sys/siginfo.h \
  /usr/include/sys/machsig.h /usr/include/sys/procset.h \
  /usr/include/sys/signal.h /usr/include/sys/iso/signal_iso.h \
  /usr/include/sys/unistd.h /usr/include/sys/ucontext.h \
  /usr/include/sys/regset.h /usr/include/v7/sys/privregs.h \
  /usr/include/v7/sys/psr.h /usr/include/sys/fsr.h ../machine/machine.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/iostream \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/c++config.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/os_defines.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/ostream \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/ios \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/iosfwd \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/c++locale.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/clocale \
  /usr/include/locale.h /usr/include/iso/locale_iso.h \
  /usr/include/libintl.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/cstring \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/cstddef \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/include/stddef.h \
  /usr/include/iso/stddef_iso.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/cstdio \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/c++io.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/gthr.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/gthr-default.h \
  /usr/include/pthread.h /usr/include/sched.h /usr/include/unistd.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/cctype \
  /usr/include/ctype.h /usr/include/iso/ctype_iso.h \
  /usr/include/iso/ctype_c99.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stringfwd.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/postypes.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/cwchar \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/ctime \
  /usr/include/wchar.h /usr/include/iso/wchar_iso.h \
  /usr/include/wchar_impl.h /usr/include/iso/wchar_c99.h \
  /usr/include/stdint.h /usr/include/sys/stdint.h \
  /usr/include/sys/int_limits.h /usr/include/sys/int_const.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/functexcept.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/exception_defines.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/exception \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/char_traits.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_algobase.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/climits \
  /usr/include/limits.h /usr/include/iso/limits_iso.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/cstdlib \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/new \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_pair.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/type_traits.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_iterator_base_types.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_iterator_base_funcs.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/concept_check.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_iterator.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/debug/debug.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/cassert \
  /usr/include/assert.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/localefwd.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/ios_base.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/atomicity.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/atomic_word.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/locale_classes.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/string \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/memory \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/allocator.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/c++allocator.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/ext/new_allocator.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_construct.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_uninitialized.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_raw_storage_iter.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/limits \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_function.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/basic_string.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/algorithm \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_algo.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_heap.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_tempbuf.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/basic_string.tcc \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/streambuf \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/streambuf.tcc \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/basic_ios.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/streambuf_iterator.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/locale_facets.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/cwctype \
  /usr/include/wctype.h /usr/include/iso/wctype_iso.h \
  /usr/include/iso/wctype_c99.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/ctype_base.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/ctype_inline.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/codecvt.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/codecvt_specializations.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/time_members.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/messages_members.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/basic_ios.tcc \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/ostream.tcc \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/locale \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/locale_facets.tcc \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/typeinfo \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/istream \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/istream.tcc \
  ../threads/utility.h ../machine/translate.h ../machine/disk.h \
  ../userprog/addrspace.h ../threads/copyright.h ../filesys/filesys.h \
  ../threads/copyright.h ../filesys/openfile.h ../threads/utility.h \
  ../userprog/table.h ../userprog/bitmap.h ../threads/utility.h \
  ../filesys/openfile.h ../threads/list.h ../threads/system.h \
  ../threads/scheduler.h ../machine/interrupt.h ../threads/list.h \
  ../machine/stats.h ../machine/timer.h ../filesys/filesys.h \
  ../filesys/synchdisk.h ../machine/disk.h ../threads/synch.h
synchlist.o: ../threads/synchlist.cc ../threads/copyright.h \
  ../threads/synchlist.h ../threads/list.h ../threads/utility.h \
  ../threads/bool.h ../machine/sysdep.h ../threads/copyright.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/include/stdio.h \
  /usr/include/stdarg.h /usr/include/iso/stdarg_iso.h \
  /usr/include/sys/va_impl.h /usr/include/sys/va_list.h \
  /usr/include/sys/isa_defs.h /usr/include/iso/stdarg_c99.h \
  /usr/include/sys/feature_tests.h /usr/include/sys/ccompile.h \
  /usr/include/iso/stdio_iso.h /usr/include/stdio_tag.h \
  /usr/include/stdio_impl.h /usr/include/iso/stdio_c99.h \
  /usr/include/string.h /usr/include/iso/string_iso.h \
  /usr/include/stdlib.h /usr/include/iso/stdlib_iso.h \
  /usr/include/iso/stdlib_c99.h /usr/include/sys/wait.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/include/sys/types.h \
  /usr/include/sys/machtypes.h /usr/include/sys/int_types.h \
  /usr/include/sys/select.h /usr/include/sys/time_impl.h \
  /usr/include/sys/time.h /usr/include/time.h /usr/include/iso/time_iso.h \
  /usr/include/sys/resource.h /usr/include/sys/siginfo.h \
  /usr/include/sys/machsig.h /usr/include/sys/procset.h \
  /usr/include/sys/signal.h /usr/include/sys/iso/signal_iso.h \
  /usr/include/sys/unistd.h /usr/include/sys/ucontext.h \
  /usr/include/sys/regset.h /usr/include/v7/sys/privregs.h \
  /usr/include/v7/sys/psr.h /usr/include/sys/fsr.h ../threads/synch.h \
  ../threads/thread.h ../machine/machine.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/iostream \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/c++config.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/os_defines.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/ostream \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/ios \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/iosfwd \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/c++locale.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/clocale \
  /usr/include/locale.h /usr/include/iso/locale_iso.h \
  /usr/include/libintl.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/cstring \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/cstddef \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/include/stddef.h \
  /usr/include/iso/stddef_iso.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/cstdio \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/c++io.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/gthr.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/gthr-default.h \
  /usr/include/pthread.h /usr/include/sched.h /usr/include/unistd.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/cctype \
  /usr/include/ctype.h /usr/include/iso/ctype_iso.h \
  /usr/include/iso/ctype_c99.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stringfwd.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/postypes.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/cwchar \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/ctime \
  /usr/include/wchar.h /usr/include/iso/wchar_iso.h \
  /usr/include/wchar_impl.h /usr/include/iso/wchar_c99.h \
  /usr/include/stdint.h /usr/include/sys/stdint.h \
  /usr/include/sys/int_limits.h /usr/include/sys/int_const.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/functexcept.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/exception_defines.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/exception \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/char_traits.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_algobase.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/climits \
  /usr/include/limits.h /usr/include/iso/limits_iso.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/cstdlib \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/new \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_pair.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/type_traits.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_iterator_base_types.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_iterator_base_funcs.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/concept_check.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_iterator.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/debug/debug.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/cassert \
  /usr/include/assert.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/localefwd.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/ios_base.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/atomicity.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/atomic_word.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/locale_classes.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/string \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/memory \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/allocator.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/c++allocator.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/ext/new_allocator.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_construct.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_uninitialized.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_raw_storage_iter.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/limits \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_function.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/basic_string.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/algorithm \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_algo.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_heap.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_tempbuf.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/basic_string.tcc \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/streambuf \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/streambuf.tcc \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/basic_ios.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/streambuf_iterator.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/locale_facets.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/cwctype \
  /usr/include/wctype.h /usr/include/iso/wctype_iso.h \
  /usr/include/iso/wctype_c99.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/ctype_base.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/ctype_inline.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/codecvt.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/codecvt_specializations.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/time_members.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/messages_members.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/basic_ios.tcc \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/ostream.tcc \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/locale \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/locale_facets.tcc \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/typeinfo \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/istream \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/istream.tcc \
  ../threads/utility.h ../machine/translate.h ../machine/disk.h \
  ../userprog/addrspace.h ../threads/copyright.h ../filesys/filesys.h \
  ../threads/copyright.h ../filesys/openfile.h ../threads/utility.h \
  ../userprog/table.h ../userprog/bitmap.h ../threads/utility.h \
  ../filesys/openfile.h
system.o: ../threads/system.cc ../threads/copyright.h ../threads/system.h \
  ../threads/utility.h ../threads/bool.h ../machine/sysdep.h \
  ../threads/copyright.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/include/stdio.h \
  /usr/include/stdarg.h /usr/include/iso/stdarg_iso.h \
  /usr/include/sys/va_impl.h /usr/include/sys/va_list.h \
  /usr/include/sys/isa_defs.h /usr/include/iso/stdarg_c99.h \
  /usr/include/sys/feature_tests.h /usr/include/sys/ccompile.h \
  /usr/include/iso/stdio_iso.h /usr/include/stdio_tag.h \
  /usr/include/stdio_impl.h /usr/include/iso/stdio_c99.h \
  /usr/include/string.h /usr/include/iso/string_iso.h \
  /usr/include/stdlib.h /usr/include/iso/stdlib_iso.h \
  /usr/include/iso/stdlib_c99.h /usr/include/sys/wait.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/include/sys/types.h \
  /usr/include/sys/machtypes.h /usr/include/sys/int_types.h \
  /usr/include/sys/select.h /usr/include/sys/time_impl.h \
  /usr/include/sys/time.h /usr/include/time.h /usr/include/iso/time_iso.h \
  /usr/include/sys/resource.h /usr/include/sys/siginfo.h \
  /usr/include/sys/machsig.h /usr/include/sys/procset.h \
  /usr/include/sys/signal.h /usr/include/sys/iso/signal_iso.h \
  /usr/include/sys/unistd.h /usr/include/sys/ucontext.h \
  /usr/include/sys/regset.h /usr/include/v7/sys/privregs.h \
  /usr/include/v7/sys/psr.h /usr/include/sys/fsr.h ../threads/thread.h \
  ../machine/machine.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/iostream \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/c++config.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/os_defines.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/ostream \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/ios \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/iosfwd \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/c++locale.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/clocale \
  /usr/include/locale.h /usr/include/iso/locale_iso.h \
  /usr/include/libintl.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/cstring \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/cstddef \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/include/stddef.h \
  /usr/include/iso/stddef_iso.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/cstdio \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/c++io.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/gthr.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/gthr-default.h \
  /usr/include/pthread.h /usr/include/sched.h /usr/include/unistd.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/cctype \
  /usr/include/ctype.h /usr/include/iso/ctype_iso.h \
  /usr/include/iso/ctype_c99.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stringfwd.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/postypes.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/cwchar \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/ctime \
  /usr/include/wchar.h /usr/include/iso/wchar_iso.h \
  /usr/include/wchar_impl.h /usr/include/iso/wchar_c99.h \
  /usr/include/stdint.h /usr/include/sys/stdint.h \
  /usr/include/sys/int_limits.h /usr/include/sys/int_const.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/functexcept.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/exception_defines.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/exception \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/char_traits.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_algobase.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/climits \
  /usr/include/limits.h /usr/include/iso/limits_iso.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/cstdlib \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/new \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_pair.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/type_traits.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_iterator_base_types.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_iterator_base_funcs.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/concept_check.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_iterator.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/debug/debug.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/cassert \
  /usr/include/assert.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/localefwd.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/ios_base.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/atomicity.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/atomic_word.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/locale_classes.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/string \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/memory \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/allocator.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/c++allocator.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/ext/new_allocator.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_construct.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_uninitialized.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_raw_storage_iter.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/limits \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_function.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/basic_string.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/algorithm \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_algo.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_heap.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_tempbuf.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/basic_string.tcc \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/streambuf \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/streambuf.tcc \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/basic_ios.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/streambuf_iterator.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/locale_facets.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/cwctype \
  /usr/include/wctype.h /usr/include/iso/wctype_iso.h \
  /usr/include/iso/wctype_c99.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/ctype_base.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/ctype_inline.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/codecvt.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/codecvt_specializations.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/time_members.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/messages_members.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/basic_ios.tcc \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/ostream.tcc \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/locale \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/locale_facets.tcc \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/typeinfo \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/istream \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/istream.tcc \
  ../threads/utility.h ../machine/translate.h ../machine/disk.h \
  ../userprog/addrspace.h ../threads/copyright.h ../filesys/filesys.h \
  ../threads/copyright.h ../filesys/openfile.h ../threads/utility.h \
  ../userprog/table.h ../userprog/bitmap.h ../threads/utility.h \
  ../filesys/openfile.h ../threads/scheduler.h ../threads/list.h \
  ../machine/interrupt.h ../threads/list.h ../machine/stats.h \
  ../machine/timer.h ../filesys/filesys.h ../filesys/synchdisk.h \
  ../machine/disk.h ../threads/synch.h
thread.o: ../threads/thread.cc ../threads/copyright.h ../threads/thread.h \
  ../threads/utility.h ../threads/bool.h ../machine/sysdep.h \
  ../threads/copyright.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/include/stdio.h \
  /usr/include/stdarg.h /usr/include/iso/stdarg_iso.h \
  /usr/include/sys/va_impl.h /usr/include/sys/va_list.h \
  /usr/include/sys/isa_defs.h /usr/include/iso/stdarg_c99.h \
  /usr/include/sys/feature_tests.h /usr/include/sys/ccompile.h \
  /usr/include/iso/stdio_iso.h /usr/include/stdio_tag.h \
  /usr/include/stdio_impl.h /usr/include/iso/stdio_c99.h \
  /usr/include/string.h /usr/include/iso/string_iso.h \
  /usr/include/stdlib.h /usr/include/iso/stdlib_iso.h \
  /usr/include/iso/stdlib_c99.h /usr/include/sys/wait.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/include/sys/types.h \
  /usr/include/sys/machtypes.h /usr/include/sys/int_types.h \
  /usr/include/sys/select.h /usr/include/sys/time_impl.h \
  /usr/include/sys/time.h /usr/include/time.h /usr/include/iso/time_iso.h \
  /usr/include/sys/resource.h /usr/include/sys/siginfo.h \
  /usr/include/sys/machsig.h /usr/include/sys/procset.h \
  /usr/include/sys/signal.h /usr/include/sys/iso/signal_iso.h \
  /usr/include/sys/unistd.h /usr/include/sys/ucontext.h \
  /usr/include/sys/regset.h /usr/include/v7/sys/privregs.h \
  /usr/include/v7/sys/psr.h /usr/include/sys/fsr.h ../machine/machine.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/iostream \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/c++config.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/os_defines.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/ostream \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/ios \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/iosfwd \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/c++locale.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/clocale \
  /usr/include/locale.h /usr/include/iso/locale_iso.h \
  /usr/include/libintl.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/cstring \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/cstddef \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/include/stddef.h \
  /usr/include/iso/stddef_iso.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/cstdio \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/c++io.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/gthr.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/gthr-default.h \
  /usr/include/pthread.h /usr/include/sched.h /usr/include/unistd.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/cctype \
  /usr/include/ctype.h /usr/include/iso/ctype_iso.h \
  /usr/include/iso/ctype_c99.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stringfwd.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/postypes.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/cwchar \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/ctime \
  /usr/include/wchar.h /usr/include/iso/wchar_iso.h \
  /usr/include/wchar_impl.h /usr/include/iso/wchar_c99.h \
  /usr/include/stdint.h /usr/include/sys/stdint.h \
  /usr/include/sys/int_limits.h /usr/include/sys/int_const.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/functexcept.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/exception_defines.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/exception \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/char_traits.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_algobase.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/climits \
  /usr/include/limits.h /usr/include/iso/limits_iso.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/cstdlib \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/new \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_pair.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/type_traits.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_iterator_base_types.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_iterator_base_funcs.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/concept_check.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_iterator.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/debug/debug.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/cassert \
  /usr/include/assert.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/localefwd.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/ios_base.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/atomicity.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/atomic_word.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/locale_classes.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/string \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/memory \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/allocator.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/c++allocator.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/ext/new_allocator.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_construct.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_uninitialized.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_raw_storage_iter.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/limits \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_function.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/basic_string.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/algorithm \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_algo.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_heap.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_tempbuf.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/basic_string.tcc \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/streambuf \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/streambuf.tcc \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/basic_ios.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/streambuf_iterator.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/locale_facets.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/cwctype \
  /usr/include/wctype.h /usr/include/iso/wctype_iso.h \
  /usr/include/iso/wctype_c99.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/ctype_base.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/ctype_inline.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/codecvt.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/codecvt_specializations.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/time_members.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/messages_members.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/basic_ios.tcc \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/ostream.tcc \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/locale \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/locale_facets.tcc \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/typeinfo \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/istream \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/istream.tcc \
  ../threads/utility.h ../machine/translate.h ../machine/disk.h \
  ../userprog/addrspace.h ../threads/copyright.h ../filesys/filesys.h \
  ../threads/copyright.h ../filesys/openfile.h ../threads/utility.h \
  ../userprog/table.h ../userprog/bitmap.h ../threads/utility.h \
  ../filesys/openfile.h ../threads/switch.h ../threads/synch.h \
  ../threads/list.h ../threads/system.h ../threads/scheduler.h \
  ../machine/interrupt.h ../threads/list.h ../machine/stats.h \
  ../machine/timer.h ../filesys/filesys.h ../filesys/synchdisk.h \
  ../machine/disk.h ../threads/synch.h
utility.o: ../threads/utility.cc ../threads/copyright.h \
  ../threads/utility.h ../threads/bool.h ../machine/sysdep.h \
  ../threads/copyright.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/include/stdio.h \
  /usr/include/stdarg.h /usr/include/iso/stdarg_iso.h \
  /usr/include/sys/va_impl.h /usr/include/sys/va_list.h \
  /usr/include/sys/isa_defs.h /usr/include/iso/stdarg_c99.h \
  /usr/include/sys/feature_tests.h /usr/include/sys/ccompile.h \
  /usr/include/iso/stdio_iso.h /usr/include/stdio_tag.h \
  /usr/include/stdio_impl.h /usr/include/iso/stdio_c99.h \
  /usr/include/string.h /usr/include/iso/string_iso.h \
  /usr/include/stdlib.h /usr/include/iso/stdlib_iso.h \
  /usr/include/iso/stdlib_c99.h /usr/include/sys/wait.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/include/sys/types.h \
  /usr/include/sys/machtypes.h /usr/include/sys/int_types.h \
  /usr/include/sys/select.h /usr/include/sys/time_impl.h \
  /usr/include/sys/time.h /usr/include/time.h /usr/include/iso/time_iso.h \
  /usr/include/sys/resource.h /usr/include/sys/siginfo.h \
  /usr/include/sys/machsig.h /usr/include/sys/procset.h \
  /usr/include/sys/signal.h /usr/include/sys/iso/signal_iso.h \
  /usr/include/sys/unistd.h /usr/include/sys/ucontext.h \
  /usr/include/sys/regset.h /usr/include/v7/sys/privregs.h \
  /usr/include/v7/sys/psr.h /usr/include/sys/fsr.h
threadtest.o: ../threads/threadtest.cc ../threads/copyright.h \
  ../threads/system.h ../threads/utility.h ../threads/bool.h \
  ../machine/sysdep.h ../threads/copyright.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/include/stdio.h \
  /usr/include/stdarg.h /usr/include/iso/stdarg_iso.h \
  /usr/include/sys/va_impl.h /usr/include/sys/va_list.h \
  /usr/include/sys/isa_defs.h /usr/include/iso/stdarg_c99.h \
  /usr/include/sys/feature_tests.h /usr/include/sys/ccompile.h \
  /usr/include/iso/stdio_iso.h /usr/include/stdio_tag.h \
  /usr/include/stdio_impl.h /usr/include/iso/stdio_c99.h \
  /usr/include/string.h /usr/include/iso/string_iso.h \
  /usr/include/stdlib.h /usr/include/iso/stdlib_iso.h \
  /usr/include/iso/stdlib_c99.h /usr/include/sys/wait.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/include/sys/types.h \
  /usr/include/sys/machtypes.h /usr/include/sys/int_types.h \
  /usr/include/sys/select.h /usr/include/sys/time_impl.h \
  /usr/include/sys/time.h /usr/include/time.h /usr/include/iso/time_iso.h \
  /usr/include/sys/resource.h /usr/include/sys/siginfo.h \
  /usr/include/sys/machsig.h /usr/include/sys/procset.h \
  /usr/include/sys/signal.h /usr/include/sys/iso/signal_iso.h \
  /usr/include/sys/unistd.h /usr/include/sys/ucontext.h \
  /usr/include/sys/regset.h /usr/include/v7/sys/privregs.h \
  /usr/include/v7/sys/psr.h /usr/include/sys/fsr.h ../threads/thread.h \
  ../machine/machine.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/iostream \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/c++config.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/os_defines.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/ostream \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/ios \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/iosfwd \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/c++locale.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/clocale \
  /usr/include/locale.h /usr/include/iso/locale_iso.h \
  /usr/include/libintl.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/cstring \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/cstddef \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/include/stddef.h \
  /usr/include/iso/stddef_iso.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/cstdio \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/c++io.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/gthr.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/gthr-default.h \
  /usr/include/pthread.h /usr/include/sched.h /usr/include/unistd.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/cctype \
  /usr/include/ctype.h /usr/include/iso/ctype_iso.h \
  /usr/include/iso/ctype_c99.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stringfwd.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/postypes.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/cwchar \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/ctime \
  /usr/include/wchar.h /usr/include/iso/wchar_iso.h \
  /usr/include/wchar_impl.h /usr/include/iso/wchar_c99.h \
  /usr/include/stdint.h /usr/include/sys/stdint.h \
  /usr/include/sys/int_limits.h /usr/include/sys/int_const.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/functexcept.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/exception_defines.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/exception \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/char_traits.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_algobase.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/climits \
  /usr/include/limits.h /usr/include/iso/limits_iso.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/cstdlib \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/new \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_pair.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/type_traits.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_iterator_base_types.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_iterator_base_funcs.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/concept_check.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_iterator.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/debug/debug.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/cassert \
  /usr/include/assert.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/localefwd.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/ios_base.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/atomicity.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/atomic_word.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/locale_classes.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/string \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/memory \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/allocator.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/c++allocator.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/ext/new_allocator.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_construct.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_uninitialized.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_raw_storage_iter.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/limits \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_function.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/basic_string.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/algorithm \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_algo.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_heap.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_tempbuf.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/basic_string.tcc \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/streambuf \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/streambuf.tcc \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/basic_ios.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/streambuf_iterator.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/locale_facets.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/cwctype \
  /usr/include/wctype.h /usr/include/iso/wctype_iso.h \
  /usr/include/iso/wctype_c99.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/ctype_base.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/ctype_inline.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/codecvt.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/codecvt_specializations.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/time_members.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/messages_members.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/basic_ios.tcc \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/ostream.tcc \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/locale \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/locale_facets.tcc \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/typeinfo \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/istream \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/istream.tcc \
  ../threads/utility.h ../machine/translate.h ../machine/disk.h \
  ../userprog/addrspace.h ../threads/copyright.h ../filesys/filesys.h \
  ../threads/copyright.h ../filesys/openfile.h ../threads/utility.h \
  ../userprog/table.h ../userprog/bitmap.h ../threads/utility.h \
  ../filesys/openfile.h ../threads/scheduler.h ../threads/list.h \
  ../machine/interrupt.h ../threads/list.h ../machine/stats.h \
  ../machine/timer.h ../filesys/filesys.h ../filesys/synchdisk.h \
  ../machine/disk.h ../threads/synch.h
interrupt.o: ../machine/interrupt.cc \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/include/stdio.h \
  /usr/include/stdarg.h /usr/include/iso/stdarg_iso.h \
  /usr/include/sys/va_impl.h /usr/include/sys/va_list.h \
  /usr/include/sys/isa_defs.h /usr/include/iso/stdarg_c99.h \
  /usr/include/sys/feature_tests.h /usr/include/sys/ccompile.h \
  /usr/include/iso/stdio_iso.h /usr/include/stdio_tag.h \
  /usr/include/stdio_impl.h /usr/include/iso/stdio_c99.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/iostream \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/c++config.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/os_defines.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/ostream \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/ios \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/iosfwd \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/c++locale.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/clocale \
  /usr/include/locale.h /usr/include/iso/locale_iso.h \
  /usr/include/libintl.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/cstring \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/cstddef \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/include/stddef.h \
  /usr/include/iso/stddef_iso.h /usr/include/string.h \
  /usr/include/iso/string_iso.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/cstdio \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/c++io.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/gthr.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/gthr-default.h \
  /usr/include/pthread.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/include/sys/types.h \
  /usr/include/sys/machtypes.h /usr/include/sys/int_types.h \
  /usr/include/sys/select.h /usr/include/sys/time_impl.h \
  /usr/include/sys/time.h /usr/include/time.h /usr/include/iso/time_iso.h \
  /usr/include/sched.h /usr/include/unistd.h /usr/include/sys/unistd.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/cctype \
  /usr/include/ctype.h /usr/include/iso/ctype_iso.h \
  /usr/include/iso/ctype_c99.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stringfwd.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/postypes.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/cwchar \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/ctime \
  /usr/include/wchar.h /usr/include/iso/wchar_iso.h \
  /usr/include/wchar_impl.h /usr/include/iso/wchar_c99.h \
  /usr/include/stdint.h /usr/include/sys/stdint.h \
  /usr/include/sys/int_limits.h /usr/include/sys/int_const.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/functexcept.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/exception_defines.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/exception \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/char_traits.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_algobase.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/climits \
  /usr/include/limits.h /usr/include/iso/limits_iso.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/cstdlib \
  /usr/include/stdlib.h /usr/include/iso/stdlib_iso.h \
  /usr/include/iso/stdlib_c99.h /usr/include/sys/wait.h \
  /usr/include/sys/resource.h /usr/include/sys/siginfo.h \
  /usr/include/sys/machsig.h /usr/include/sys/procset.h \
  /usr/include/sys/signal.h /usr/include/sys/iso/signal_iso.h \
  /usr/include/sys/ucontext.h /usr/include/sys/regset.h \
  /usr/include/v7/sys/privregs.h /usr/include/v7/sys/psr.h \
  /usr/include/sys/fsr.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/new \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_pair.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/type_traits.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_iterator_base_types.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_iterator_base_funcs.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/concept_check.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_iterator.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/debug/debug.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/cassert \
  /usr/include/assert.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/localefwd.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/ios_base.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/atomicity.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/atomic_word.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/locale_classes.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/string \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/memory \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/allocator.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/c++allocator.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/ext/new_allocator.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_construct.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_uninitialized.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_raw_storage_iter.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/limits \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_function.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/basic_string.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/algorithm \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_algo.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_heap.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_tempbuf.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/basic_string.tcc \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/streambuf \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/streambuf.tcc \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/basic_ios.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/streambuf_iterator.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/locale_facets.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/cwctype \
  /usr/include/wctype.h /usr/include/iso/wctype_iso.h \
  /usr/include/iso/wctype_c99.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/ctype_base.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/ctype_inline.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/codecvt.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/codecvt_specializations.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/time_members.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/messages_members.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/basic_ios.tcc \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/ostream.tcc \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/locale \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/locale_facets.tcc \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/typeinfo \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/istream \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/istream.tcc \
  ../threads/copyright.h ../machine/interrupt.h ../threads/list.h \
  ../threads/copyright.h ../threads/utility.h ../threads/bool.h \
  ../machine/sysdep.h ../threads/system.h ../threads/thread.h \
  ../machine/machine.h ../threads/utility.h ../machine/translate.h \
  ../machine/disk.h ../userprog/addrspace.h ../threads/copyright.h \
  ../filesys/filesys.h ../threads/copyright.h ../filesys/openfile.h \
  ../threads/utility.h ../userprog/table.h ../userprog/bitmap.h \
  ../threads/utility.h ../filesys/openfile.h ../threads/scheduler.h \
  ../threads/list.h ../machine/interrupt.h ../machine/stats.h \
  ../machine/timer.h ../filesys/filesys.h ../filesys/synchdisk.h \
  ../machine/disk.h ../threads/synch.h
sysdep.o: ../machine/sysdep.cc ../threads/copyright.h \
  /usr/include/stdlib.h /usr/include/iso/stdlib_iso.h \
  /usr/include/sys/feature_tests.h /usr/include/sys/ccompile.h \
  /usr/include/sys/isa_defs.h /usr/include/iso/stdlib_c99.h \
  /usr/include/sys/wait.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/include/sys/types.h \
  /usr/include/sys/machtypes.h /usr/include/sys/int_types.h \
  /usr/include/sys/select.h /usr/include/sys/time_impl.h \
  /usr/include/sys/time.h /usr/include/time.h /usr/include/iso/time_iso.h \
  /usr/include/sys/resource.h /usr/include/sys/siginfo.h \
  /usr/include/sys/machsig.h /usr/include/sys/procset.h \
  /usr/include/sys/signal.h /usr/include/sys/iso/signal_iso.h \
  /usr/include/sys/unistd.h /usr/include/sys/ucontext.h \
  /usr/include/sys/regset.h /usr/include/v7/sys/privregs.h \
  /usr/include/v7/sys/psr.h /usr/include/sys/fsr.h /usr/include/unistd.h \
  /usr/include/fcntl.h /usr/include/sys/stat.h \
  /usr/include/sys/stat_impl.h /usr/include/sys/fcntl.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/include/stdio.h \
  /usr/include/stdarg.h /usr/include/iso/stdarg_iso.h \
  /usr/include/sys/va_impl.h /usr/include/sys/va_list.h \
  /usr/include/iso/stdarg_c99.h /usr/include/iso/stdio_iso.h \
  /usr/include/stdio_tag.h /usr/include/stdio_impl.h \
  /usr/include/iso/stdio_c99.h /usr/include/string.h \
  /usr/include/iso/string_iso.h /usr/include/signal.h \
  /usr/include/iso/signal_iso.h /usr/include/errno.h \
  /usr/include/sys/errno.h /usr/include/sys/un.h \
  /usr/include/sys/socket.h /usr/include/sys/uio.h \
  /usr/include/sys/socket_impl.h /usr/include/net/if_dl.h \
  /usr/include/sys/netconfig.h /usr/include/netinet/in.h \
  /usr/include/sys/stream.h /usr/include/sys/vnode.h \
  /usr/include/sys/t_lock.h /usr/include/sys/machlock.h \
  /usr/include/sys/param.h /usr/include/sys/mutex.h \
  /usr/include/sys/rwlock.h /usr/include/sys/semaphore.h \
  /usr/include/sys/condvar.h /usr/include/sys/rwstlock.h \
  /usr/include/sys/ksynch.h /usr/include/sys/cred.h \
  /usr/include/vm/seg_enum.h /usr/include/sys/kstat.h \
  /usr/include/sys/kmem.h /usr/include/sys/vmem.h /usr/include/sys/poll.h \
  /usr/include/sys/strmdep.h /usr/include/sys/model.h \
  /usr/include/sys/strft.h /usr/include/sys/byteorder.h \
  /usr/include/sys/mman.h ../machine/interrupt.h ../threads/list.h \
  ../threads/copyright.h ../threads/utility.h ../threads/bool.h \
  ../machine/sysdep.h ../threads/system.h ../threads/thread.h \
  ../machine/machine.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/iostream \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/c++config.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/os_defines.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/ostream \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/ios \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/iosfwd \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/c++locale.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/clocale \
  /usr/include/locale.h /usr/include/iso/locale_iso.h \
  /usr/include/libintl.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/cstring \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/cstddef \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/include/stddef.h \
  /usr/include/iso/stddef_iso.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/cstdio \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/c++io.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/gthr.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/gthr-default.h \
  /usr/include/pthread.h /usr/include/sched.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/cctype \
  /usr/include/ctype.h /usr/include/iso/ctype_iso.h \
  /usr/include/iso/ctype_c99.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stringfwd.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/postypes.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/cwchar \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/ctime \
  /usr/include/wchar.h /usr/include/iso/wchar_iso.h \
  /usr/include/wchar_impl.h /usr/include/iso/wchar_c99.h \
  /usr/include/stdint.h /usr/include/sys/stdint.h \
  /usr/include/sys/int_limits.h /usr/include/sys/int_const.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/functexcept.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/exception_defines.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/exception \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/char_traits.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_algobase.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/climits \
  /usr/include/limits.h /usr/include/iso/limits_iso.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/cstdlib \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/new \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_pair.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/type_traits.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_iterator_base_types.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_iterator_base_funcs.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/concept_check.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_iterator.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/debug/debug.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/cassert \
  /usr/include/assert.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/localefwd.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/ios_base.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/atomicity.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/atomic_word.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/locale_classes.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/string \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/memory \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/allocator.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/c++allocator.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/ext/new_allocator.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_construct.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_uninitialized.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_raw_storage_iter.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/limits \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_function.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/basic_string.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/algorithm \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_algo.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_heap.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_tempbuf.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/basic_string.tcc \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/streambuf \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/streambuf.tcc \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/basic_ios.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/streambuf_iterator.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/locale_facets.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/cwctype \
  /usr/include/wctype.h /usr/include/iso/wctype_iso.h \
  /usr/include/iso/wctype_c99.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/ctype_base.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/ctype_inline.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/codecvt.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/codecvt_specializations.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/time_members.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/messages_members.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/basic_ios.tcc \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/ostream.tcc \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/locale \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/locale_facets.tcc \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/typeinfo \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/istream \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/istream.tcc \
  ../threads/utility.h ../machine/translate.h ../machine/disk.h \
  ../userprog/addrspace.h ../threads/copyright.h ../filesys/filesys.h \
  ../threads/copyright.h ../filesys/openfile.h ../threads/utility.h \
  ../userprog/table.h ../userprog/bitmap.h ../threads/utility.h \
  ../filesys/openfile.h ../threads/scheduler.h ../threads/list.h \
  ../machine/interrupt.h ../machine/stats.h ../machine/timer.h \
  ../filesys/filesys.h ../filesys/synchdisk.h ../machine/disk.h \
  ../threads/synch.h
stats.o: ../machine/stats.cc \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/include/stdio.h \
  /usr/include/stdarg.h /usr/include/iso/stdarg_iso.h \
  /usr/include/sys/va_impl.h /usr/include/sys/va_list.h \
  /usr/include/sys/isa_defs.h /usr/include/iso/stdarg_c99.h \
  /usr/include/sys/feature_tests.h /usr/include/sys/ccompile.h \
  /usr/include/iso/stdio_iso.h /usr/include/stdio_tag.h \
  /usr/include/stdio_impl.h /usr/include/iso/stdio_c99.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/iostream \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/c++config.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/os_defines.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/ostream \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/ios \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/iosfwd \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/c++locale.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/clocale \
  /usr/include/locale.h /usr/include/iso/locale_iso.h \
  /usr/include/libintl.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/cstring \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/cstddef \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/include/stddef.h \
  /usr/include/iso/stddef_iso.h /usr/include/string.h \
  /usr/include/iso/string_iso.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/cstdio \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/c++io.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/gthr.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/gthr-default.h \
  /usr/include/pthread.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/include/sys/types.h \
  /usr/include/sys/machtypes.h /usr/include/sys/int_types.h \
  /usr/include/sys/select.h /usr/include/sys/time_impl.h \
  /usr/include/sys/time.h /usr/include/time.h /usr/include/iso/time_iso.h \
  /usr/include/sched.h /usr/include/unistd.h /usr/include/sys/unistd.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/cctype \
  /usr/include/ctype.h /usr/include/iso/ctype_iso.h \
  /usr/include/iso/ctype_c99.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stringfwd.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/postypes.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/cwchar \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/ctime \
  /usr/include/wchar.h /usr/include/iso/wchar_iso.h \
  /usr/include/wchar_impl.h /usr/include/iso/wchar_c99.h \
  /usr/include/stdint.h /usr/include/sys/stdint.h \
  /usr/include/sys/int_limits.h /usr/include/sys/int_const.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/functexcept.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/exception_defines.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/exception \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/char_traits.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_algobase.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/climits \
  /usr/include/limits.h /usr/include/iso/limits_iso.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/cstdlib \
  /usr/include/stdlib.h /usr/include/iso/stdlib_iso.h \
  /usr/include/iso/stdlib_c99.h /usr/include/sys/wait.h \
  /usr/include/sys/resource.h /usr/include/sys/siginfo.h \
  /usr/include/sys/machsig.h /usr/include/sys/procset.h \
  /usr/include/sys/signal.h /usr/include/sys/iso/signal_iso.h \
  /usr/include/sys/ucontext.h /usr/include/sys/regset.h \
  /usr/include/v7/sys/privregs.h /usr/include/v7/sys/psr.h \
  /usr/include/sys/fsr.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/new \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_pair.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/type_traits.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_iterator_base_types.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_iterator_base_funcs.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/concept_check.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_iterator.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/debug/debug.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/cassert \
  /usr/include/assert.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/localefwd.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/ios_base.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/atomicity.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/atomic_word.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/locale_classes.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/string \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/memory \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/allocator.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/c++allocator.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/ext/new_allocator.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_construct.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_uninitialized.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_raw_storage_iter.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/limits \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_function.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/basic_string.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/algorithm \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_algo.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_heap.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_tempbuf.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/basic_string.tcc \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/streambuf \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/streambuf.tcc \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/basic_ios.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/streambuf_iterator.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/locale_facets.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/cwctype \
  /usr/include/wctype.h /usr/include/iso/wctype_iso.h \
  /usr/include/iso/wctype_c99.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/ctype_base.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/ctype_inline.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/codecvt.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/codecvt_specializations.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/time_members.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/messages_members.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/basic_ios.tcc \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/ostream.tcc \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/locale \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/locale_facets.tcc \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/typeinfo \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/istream \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/istream.tcc \
  ../threads/copyright.h ../threads/utility.h ../threads/copyright.h \
  ../threads/bool.h ../machine/sysdep.h ../machine/stats.h
timer.o: ../machine/timer.cc ../threads/copyright.h ../machine/timer.h \
  ../threads/utility.h ../threads/copyright.h ../threads/bool.h \
  ../machine/sysdep.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/include/stdio.h \
  /usr/include/stdarg.h /usr/include/iso/stdarg_iso.h \
  /usr/include/sys/va_impl.h /usr/include/sys/va_list.h \
  /usr/include/sys/isa_defs.h /usr/include/iso/stdarg_c99.h \
  /usr/include/sys/feature_tests.h /usr/include/sys/ccompile.h \
  /usr/include/iso/stdio_iso.h /usr/include/stdio_tag.h \
  /usr/include/stdio_impl.h /usr/include/iso/stdio_c99.h \
  /usr/include/string.h /usr/include/iso/string_iso.h \
  /usr/include/stdlib.h /usr/include/iso/stdlib_iso.h \
  /usr/include/iso/stdlib_c99.h /usr/include/sys/wait.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/include/sys/types.h \
  /usr/include/sys/machtypes.h /usr/include/sys/int_types.h \
  /usr/include/sys/select.h /usr/include/sys/time_impl.h \
  /usr/include/sys/time.h /usr/include/time.h /usr/include/iso/time_iso.h \
  /usr/include/sys/resource.h /usr/include/sys/siginfo.h \
  /usr/include/sys/machsig.h /usr/include/sys/procset.h \
  /usr/include/sys/signal.h /usr/include/sys/iso/signal_iso.h \
  /usr/include/sys/unistd.h /usr/include/sys/ucontext.h \
  /usr/include/sys/regset.h /usr/include/v7/sys/privregs.h \
  /usr/include/v7/sys/psr.h /usr/include/sys/fsr.h ../threads/system.h \
  ../threads/utility.h ../threads/thread.h ../machine/machine.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/iostream \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/c++config.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/os_defines.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/ostream \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/ios \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/iosfwd \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/c++locale.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/clocale \
  /usr/include/locale.h /usr/include/iso/locale_iso.h \
  /usr/include/libintl.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/cstring \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/cstddef \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/include/stddef.h \
  /usr/include/iso/stddef_iso.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/cstdio \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/c++io.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/gthr.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/gthr-default.h \
  /usr/include/pthread.h /usr/include/sched.h /usr/include/unistd.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/cctype \
  /usr/include/ctype.h /usr/include/iso/ctype_iso.h \
  /usr/include/iso/ctype_c99.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stringfwd.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/postypes.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/cwchar \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/ctime \
  /usr/include/wchar.h /usr/include/iso/wchar_iso.h \
  /usr/include/wchar_impl.h /usr/include/iso/wchar_c99.h \
  /usr/include/stdint.h /usr/include/sys/stdint.h \
  /usr/include/sys/int_limits.h /usr/include/sys/int_const.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/functexcept.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/exception_defines.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/exception \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/char_traits.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_algobase.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/climits \
  /usr/include/limits.h /usr/include/iso/limits_iso.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/cstdlib \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/new \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_pair.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/type_traits.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_iterator_base_types.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_iterator_base_funcs.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/concept_check.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_iterator.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/debug/debug.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/cassert \
  /usr/include/assert.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/localefwd.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/ios_base.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/atomicity.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/atomic_word.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/locale_classes.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/string \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/memory \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/allocator.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/c++allocator.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/ext/new_allocator.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_construct.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_uninitialized.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_raw_storage_iter.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/limits \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_function.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/basic_string.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/algorithm \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_algo.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_heap.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_tempbuf.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/basic_string.tcc \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/streambuf \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/streambuf.tcc \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/basic_ios.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/streambuf_iterator.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/locale_facets.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/cwctype \
  /usr/include/wctype.h /usr/include/iso/wctype_iso.h \
  /usr/include/iso/wctype_c99.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/ctype_base.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/ctype_inline.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/codecvt.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/codecvt_specializations.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/time_members.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/messages_members.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/basic_ios.tcc \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/ostream.tcc \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/locale \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/locale_facets.tcc \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/typeinfo \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/istream \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/istream.tcc \
  ../machine/translate.h ../machine/disk.h ../userprog/addrspace.h \
  ../threads/copyright.h ../filesys/filesys.h ../threads/copyright.h \
  ../filesys/openfile.h ../threads/utility.h ../userprog/table.h \
  ../userprog/bitmap.h ../threads/utility.h ../filesys/openfile.h \
  ../threads/scheduler.h ../threads/list.h ../machine/interrupt.h \
  ../threads/list.h ../machine/stats.h ../machine/timer.h \
  ../filesys/filesys.h ../filesys/synchdisk.h ../machine/disk.h \
  ../threads/synch.h
addrspace.o: ../userprog/addrspace.cc ../threads/copyright.h \
  ../threads/system.h ../threads/copyright.h ../threads/utility.h \
  ../threads/bool.h ../machine/sysdep.h ../threads/copyright.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/include/stdio.h \
  /usr/include/stdarg.h /usr/include/iso/stdarg_iso.h \
  /usr/include/sys/va_impl.h /usr/include/sys/va_list.h \
  /usr/include/sys/isa_defs.h /usr/include/iso/stdarg_c99.h \
  /usr/include/sys/feature_tests.h /usr/include/sys/ccompile.h \
  /usr/include/iso/stdio_iso.h /usr/include/stdio_tag.h \
  /usr/include/stdio_impl.h /usr/include/iso/stdio_c99.h \
  /usr/include/string.h /usr/include/iso/string_iso.h \
  /usr/include/stdlib.h /usr/include/iso/stdlib_iso.h \
  /usr/include/iso/stdlib_c99.h /usr/include/sys/wait.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/include/sys/types.h \
  /usr/include/sys/machtypes.h /usr/include/sys/int_types.h \
  /usr/include/sys/select.h /usr/include/sys/time_impl.h \
  /usr/include/sys/time.h /usr/include/time.h /usr/include/iso/time_iso.h \
  /usr/include/sys/resource.h /usr/include/sys/siginfo.h \
  /usr/include/sys/machsig.h /usr/include/sys/procset.h \
  /usr/include/sys/signal.h /usr/include/sys/iso/signal_iso.h \
  /usr/include/sys/unistd.h /usr/include/sys/ucontext.h \
  /usr/include/sys/regset.h /usr/include/v7/sys/privregs.h \
  /usr/include/v7/sys/psr.h /usr/include/sys/fsr.h ../threads/thread.h \
  ../machine/machine.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/iostream \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/c++config.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/os_defines.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/ostream \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/ios \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/iosfwd \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/c++locale.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/clocale \
  /usr/include/locale.h /usr/include/iso/locale_iso.h \
  /usr/include/libintl.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/cstring \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/cstddef \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/include/stddef.h \
  /usr/include/iso/stddef_iso.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/cstdio \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/c++io.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/gthr.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/gthr-default.h \
  /usr/include/pthread.h /usr/include/sched.h /usr/include/unistd.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/cctype \
  /usr/include/ctype.h /usr/include/iso/ctype_iso.h \
  /usr/include/iso/ctype_c99.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stringfwd.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/postypes.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/cwchar \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/ctime \
  /usr/include/wchar.h /usr/include/iso/wchar_iso.h \
  /usr/include/wchar_impl.h /usr/include/iso/wchar_c99.h \
  /usr/include/stdint.h /usr/include/sys/stdint.h \
  /usr/include/sys/int_limits.h /usr/include/sys/int_const.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/functexcept.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/exception_defines.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/exception \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/char_traits.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_algobase.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/climits \
  /usr/include/limits.h /usr/include/iso/limits_iso.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/cstdlib \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/new \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_pair.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/type_traits.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_iterator_base_types.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_iterator_base_funcs.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/concept_check.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_iterator.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/debug/debug.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/cassert \
  /usr/include/assert.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/localefwd.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/ios_base.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/atomicity.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/atomic_word.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/locale_classes.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/string \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/memory \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/allocator.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/c++allocator.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/ext/new_allocator.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_construct.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_uninitialized.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_raw_storage_iter.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/limits \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_function.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/basic_string.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/algorithm \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_algo.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_heap.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_tempbuf.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/basic_string.tcc \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/streambuf \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/streambuf.tcc \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/basic_ios.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/streambuf_iterator.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/locale_facets.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/cwctype \
  /usr/include/wctype.h /usr/include/iso/wctype_iso.h \
  /usr/include/iso/wctype_c99.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/ctype_base.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/ctype_inline.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/codecvt.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/codecvt_specializations.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/time_members.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/messages_members.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/basic_ios.tcc \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/ostream.tcc \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/locale \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/locale_facets.tcc \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/typeinfo \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/istream \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/istream.tcc \
  ../threads/utility.h ../machine/translate.h ../machine/disk.h \
  ../userprog/addrspace.h ../filesys/filesys.h ../threads/copyright.h \
  ../filesys/openfile.h ../threads/utility.h ../userprog/table.h \
  ../userprog/bitmap.h ../threads/utility.h ../filesys/openfile.h \
  ../threads/scheduler.h ../threads/list.h ../machine/interrupt.h \
  ../threads/list.h ../machine/stats.h ../machine/timer.h \
  ../filesys/filesys.h ../filesys/synchdisk.h ../machine/disk.h \
  ../threads/synch.h ../userprog/addrspace.h ../bin/noff.h \
  ../threads/synch.h
bitmap.o: ../userprog/bitmap.cc ../threads/copyright.h \
  ../userprog/bitmap.h ../threads/utility.h ../threads/copyright.h \
  ../threads/bool.h ../machine/sysdep.h ../threads/copyright.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/include/stdio.h \
  /usr/include/stdarg.h /usr/include/iso/stdarg_iso.h \
  /usr/include/sys/va_impl.h /usr/include/sys/va_list.h \
  /usr/include/sys/isa_defs.h /usr/include/iso/stdarg_c99.h \
  /usr/include/sys/feature_tests.h /usr/include/sys/ccompile.h \
  /usr/include/iso/stdio_iso.h /usr/include/stdio_tag.h \
  /usr/include/stdio_impl.h /usr/include/iso/stdio_c99.h \
  /usr/include/string.h /usr/include/iso/string_iso.h \
  /usr/include/stdlib.h /usr/include/iso/stdlib_iso.h \
  /usr/include/iso/stdlib_c99.h /usr/include/sys/wait.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/include/sys/types.h \
  /usr/include/sys/machtypes.h /usr/include/sys/int_types.h \
  /usr/include/sys/select.h /usr/include/sys/time_impl.h \
  /usr/include/sys/time.h /usr/include/time.h /usr/include/iso/time_iso.h \
  /usr/include/sys/resource.h /usr/include/sys/siginfo.h \
  /usr/include/sys/machsig.h /usr/include/sys/procset.h \
  /usr/include/sys/signal.h /usr/include/sys/iso/signal_iso.h \
  /usr/include/sys/unistd.h /usr/include/sys/ucontext.h \
  /usr/include/sys/regset.h /usr/include/v7/sys/privregs.h \
  /usr/include/v7/sys/psr.h /usr/include/sys/fsr.h ../filesys/openfile.h \
  ../threads/copyright.h ../threads/utility.h
exception.o: ../userprog/exception.cc ../threads/copyright.h \
  ../threads/system.h ../threads/copyright.h ../threads/utility.h \
  ../threads/bool.h ../machine/sysdep.h ../threads/copyright.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/include/stdio.h \
  /usr/include/stdarg.h /usr/include/iso/stdarg_iso.h \
  /usr/include/sys/va_impl.h /usr/include/sys/va_list.h \
  /usr/include/sys/isa_defs.h /usr/include/iso/stdarg_c99.h \
  /usr/include/sys/feature_tests.h /usr/include/sys/ccompile.h \
  /usr/include/iso/stdio_iso.h /usr/include/stdio_tag.h \
  /usr/include/stdio_impl.h /usr/include/iso/stdio_c99.h \
  /usr/include/string.h /usr/include/iso/string_iso.h \
  /usr/include/stdlib.h /usr/include/iso/stdlib_iso.h \
  /usr/include/iso/stdlib_c99.h /usr/include/sys/wait.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/include/sys/types.h \
  /usr/include/sys/machtypes.h /usr/include/sys/int_types.h \
  /usr/include/sys/select.h /usr/include/sys/time_impl.h \
  /usr/include/sys/time.h /usr/include/time.h /usr/include/iso/time_iso.h \
  /usr/include/sys/resource.h /usr/include/sys/siginfo.h \
  /usr/include/sys/machsig.h /usr/include/sys/procset.h \
  /usr/include/sys/signal.h /usr/include/sys/iso/signal_iso.h \
  /usr/include/sys/unistd.h /usr/include/sys/ucontext.h \
  /usr/include/sys/regset.h /usr/include/v7/sys/privregs.h \
  /usr/include/v7/sys/psr.h /usr/include/sys/fsr.h ../threads/thread.h \
  ../machine/machine.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/iostream \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/c++config.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/os_defines.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/ostream \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/ios \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/iosfwd \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/c++locale.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/clocale \
  /usr/include/locale.h /usr/include/iso/locale_iso.h \
  /usr/include/libintl.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/cstring \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/cstddef \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/include/stddef.h \
  /usr/include/iso/stddef_iso.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/cstdio \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/c++io.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/gthr.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/gthr-default.h \
  /usr/include/pthread.h /usr/include/sched.h /usr/include/unistd.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/cctype \
  /usr/include/ctype.h /usr/include/iso/ctype_iso.h \
  /usr/include/iso/ctype_c99.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stringfwd.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/postypes.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/cwchar \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/ctime \
  /usr/include/wchar.h /usr/include/iso/wchar_iso.h \
  /usr/include/wchar_impl.h /usr/include/iso/wchar_c99.h \
  /usr/include/stdint.h /usr/include/sys/stdint.h \
  /usr/include/sys/int_limits.h /usr/include/sys/int_const.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/functexcept.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/exception_defines.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/exception \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/char_traits.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_algobase.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/climits \
  /usr/include/limits.h /usr/include/iso/limits_iso.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/cstdlib \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/new \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_pair.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/type_traits.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_iterator_base_types.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_iterator_base_funcs.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/concept_check.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_iterator.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/debug/debug.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/cassert \
  /usr/include/assert.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/localefwd.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/ios_base.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/atomicity.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/atomic_word.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/locale_classes.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/string \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/memory \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/allocator.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/c++allocator.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/ext/new_allocator.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_construct.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_uninitialized.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_raw_storage_iter.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/limits \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_function.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/basic_string.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/algorithm \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_algo.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_heap.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_tempbuf.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/basic_string.tcc \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/streambuf \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/streambuf.tcc \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/basic_ios.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/streambuf_iterator.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/locale_facets.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/cwctype \
  /usr/include/wctype.h /usr/include/iso/wctype_iso.h \
  /usr/include/iso/wctype_c99.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/ctype_base.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/ctype_inline.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/codecvt.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/codecvt_specializations.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/time_members.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/messages_members.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/basic_ios.tcc \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/ostream.tcc \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/locale \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/locale_facets.tcc \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/typeinfo \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/istream \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/istream.tcc \
  ../threads/utility.h ../machine/translate.h ../machine/disk.h \
  ../userprog/addrspace.h ../filesys/filesys.h ../threads/copyright.h \
  ../filesys/openfile.h ../threads/utility.h ../userprog/table.h \
  ../userprog/bitmap.h ../threads/utility.h ../filesys/openfile.h \
  ../threads/scheduler.h ../threads/list.h ../machine/interrupt.h \
  ../threads/list.h ../machine/stats.h ../machine/timer.h \
  ../filesys/filesys.h ../filesys/synchdisk.h ../machine/disk.h \
  ../threads/synch.h ../userprog/syscall.h
progtest.o: ../userprog/progtest.cc ../threads/copyright.h \
  ../threads/system.h ../threads/copyright.h ../threads/utility.h \
  ../threads/bool.h ../machine/sysdep.h ../threads/copyright.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/include/stdio.h \
  /usr/include/stdarg.h /usr/include/iso/stdarg_iso.h \
  /usr/include/sys/va_impl.h /usr/include/sys/va_list.h \
  /usr/include/sys/isa_defs.h /usr/include/iso/stdarg_c99.h \
  /usr/include/sys/feature_tests.h /usr/include/sys/ccompile.h \
  /usr/include/iso/stdio_iso.h /usr/include/stdio_tag.h \
  /usr/include/stdio_impl.h /usr/include/iso/stdio_c99.h \
  /usr/include/string.h /usr/include/iso/string_iso.h \
  /usr/include/stdlib.h /usr/include/iso/stdlib_iso.h \
  /usr/include/iso/stdlib_c99.h /usr/include/sys/wait.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/include/sys/types.h \
  /usr/include/sys/machtypes.h /usr/include/sys/int_types.h \
  /usr/include/sys/select.h /usr/include/sys/time_impl.h \
  /usr/include/sys/time.h /usr/include/time.h /usr/include/iso/time_iso.h \
  /usr/include/sys/resource.h /usr/include/sys/siginfo.h \
  /usr/include/sys/machsig.h /usr/include/sys/procset.h \
  /usr/include/sys/signal.h /usr/include/sys/iso/signal_iso.h \
  /usr/include/sys/unistd.h /usr/include/sys/ucontext.h \
  /usr/include/sys/regset.h /usr/include/v7/sys/privregs.h \
  /usr/include/v7/sys/psr.h /usr/include/sys/fsr.h ../threads/thread.h \
  ../machine/machine.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/iostream \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/c++config.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/os_defines.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/ostream \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/ios \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/iosfwd \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/c++locale.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/clocale \
  /usr/include/locale.h /usr/include/iso/locale_iso.h \
  /usr/include/libintl.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/cstring \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/cstddef \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/include/stddef.h \
  /usr/include/iso/stddef_iso.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/cstdio \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/c++io.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/gthr.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/gthr-default.h \
  /usr/include/pthread.h /usr/include/sched.h /usr/include/unistd.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/cctype \
  /usr/include/ctype.h /usr/include/iso/ctype_iso.h \
  /usr/include/iso/ctype_c99.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stringfwd.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/postypes.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/cwchar \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/ctime \
  /usr/include/wchar.h /usr/include/iso/wchar_iso.h \
  /usr/include/wchar_impl.h /usr/include/iso/wchar_c99.h \
  /usr/include/stdint.h /usr/include/sys/stdint.h \
  /usr/include/sys/int_limits.h /usr/include/sys/int_const.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/functexcept.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/exception_defines.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/exception \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/char_traits.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_algobase.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/climits \
  /usr/include/limits.h /usr/include/iso/limits_iso.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/cstdlib \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/new \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_pair.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/type_traits.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_iterator_base_types.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_iterator_base_funcs.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/concept_check.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_iterator.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/debug/debug.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/cassert \
  /usr/include/assert.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/localefwd.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/ios_base.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/atomicity.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/atomic_word.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/locale_classes.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/string \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/memory \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/allocator.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/c++allocator.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/ext/new_allocator.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_construct.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_uninitialized.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_raw_storage_iter.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/limits \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_function.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/basic_string.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/algorithm \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_algo.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_heap.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_tempbuf.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/basic_string.tcc \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/streambuf \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/streambuf.tcc \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/basic_ios.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/streambuf_iterator.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/locale_facets.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/cwctype \
  /usr/include/wctype.h /usr/include/iso/wctype_iso.h \
  /usr/include/iso/wctype_c99.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/ctype_base.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/ctype_inline.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/codecvt.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/codecvt_specializations.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/time_members.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/messages_members.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/basic_ios.tcc \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/ostream.tcc \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/locale \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/locale_facets.tcc \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/typeinfo \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/istream \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/istream.tcc \
  ../threads/utility.h ../machine/translate.h ../machine/disk.h \
  ../userprog/addrspace.h ../filesys/filesys.h ../threads/copyright.h \
  ../filesys/openfile.h ../threads/utility.h ../userprog/table.h \
  ../userprog/bitmap.h ../threads/utility.h ../filesys/openfile.h \
  ../threads/scheduler.h ../threads/list.h ../machine/interrupt.h \
  ../threads/list.h ../machine/stats.h ../machine/timer.h \
  ../filesys/filesys.h ../filesys/synchdisk.h ../machine/disk.h \
  ../threads/synch.h ../machine/console.h ../userprog/addrspace.h \
  ../threads/synch.h
console.o: ../machine/console.cc ../threads/copyright.h \
  ../machine/console.h ../threads/utility.h ../threads/copyright.h \
  ../threads/bool.h ../machine/sysdep.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/include/stdio.h \
  /usr/include/stdarg.h /usr/include/iso/stdarg_iso.h \
  /usr/include/sys/va_impl.h /usr/include/sys/va_list.h \
  /usr/include/sys/isa_defs.h /usr/include/iso/stdarg_c99.h \
  /usr/include/sys/feature_tests.h /usr/include/sys/ccompile.h \
  /usr/include/iso/stdio_iso.h /usr/include/stdio_tag.h \
  /usr/include/stdio_impl.h /usr/include/iso/stdio_c99.h \
  /usr/include/string.h /usr/include/iso/string_iso.h \
  /usr/include/stdlib.h /usr/include/iso/stdlib_iso.h \
  /usr/include/iso/stdlib_c99.h /usr/include/sys/wait.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/include/sys/types.h \
  /usr/include/sys/machtypes.h /usr/include/sys/int_types.h \
  /usr/include/sys/select.h /usr/include/sys/time_impl.h \
  /usr/include/sys/time.h /usr/include/time.h /usr/include/iso/time_iso.h \
  /usr/include/sys/resource.h /usr/include/sys/siginfo.h \
  /usr/include/sys/machsig.h /usr/include/sys/procset.h \
  /usr/include/sys/signal.h /usr/include/sys/iso/signal_iso.h \
  /usr/include/sys/unistd.h /usr/include/sys/ucontext.h \
  /usr/include/sys/regset.h /usr/include/v7/sys/privregs.h \
  /usr/include/v7/sys/psr.h /usr/include/sys/fsr.h ../threads/system.h \
  ../threads/utility.h ../threads/thread.h ../machine/machine.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/iostream \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/c++config.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/os_defines.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/ostream \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/ios \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/iosfwd \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/c++locale.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/clocale \
  /usr/include/locale.h /usr/include/iso/locale_iso.h \
  /usr/include/libintl.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/cstring \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/cstddef \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/include/stddef.h \
  /usr/include/iso/stddef_iso.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/cstdio \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/c++io.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/gthr.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/gthr-default.h \
  /usr/include/pthread.h /usr/include/sched.h /usr/include/unistd.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/cctype \
  /usr/include/ctype.h /usr/include/iso/ctype_iso.h \
  /usr/include/iso/ctype_c99.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stringfwd.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/postypes.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/cwchar \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/ctime \
  /usr/include/wchar.h /usr/include/iso/wchar_iso.h \
  /usr/include/wchar_impl.h /usr/include/iso/wchar_c99.h \
  /usr/include/stdint.h /usr/include/sys/stdint.h \
  /usr/include/sys/int_limits.h /usr/include/sys/int_const.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/functexcept.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/exception_defines.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/exception \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/char_traits.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_algobase.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/climits \
  /usr/include/limits.h /usr/include/iso/limits_iso.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/cstdlib \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/new \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_pair.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/type_traits.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_iterator_base_types.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_iterator_base_funcs.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/concept_check.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_iterator.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/debug/debug.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/cassert \
  /usr/include/assert.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/localefwd.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/ios_base.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/atomicity.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/atomic_word.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/locale_classes.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/string \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/memory \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/allocator.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/c++allocator.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/ext/new_allocator.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_construct.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_uninitialized.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_raw_storage_iter.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/limits \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_function.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/basic_string.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/algorithm \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_algo.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_heap.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_tempbuf.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/basic_string.tcc \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/streambuf \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/streambuf.tcc \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/basic_ios.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/streambuf_iterator.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/locale_facets.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/cwctype \
  /usr/include/wctype.h /usr/include/iso/wctype_iso.h \
  /usr/include/iso/wctype_c99.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/ctype_base.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/ctype_inline.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/codecvt.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/codecvt_specializations.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/time_members.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/messages_members.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/basic_ios.tcc \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/ostream.tcc \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/locale \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/locale_facets.tcc \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/typeinfo \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/istream \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/istream.tcc \
  ../machine/translate.h ../machine/disk.h ../userprog/addrspace.h \
  ../threads/copyright.h ../filesys/filesys.h ../threads/copyright.h \
  ../filesys/openfile.h ../threads/utility.h ../userprog/table.h \
  ../userprog/bitmap.h ../threads/utility.h ../filesys/openfile.h \
  ../threads/scheduler.h ../threads/list.h ../machine/interrupt.h \
  ../threads/list.h ../machine/stats.h ../machine/timer.h \
  ../filesys/filesys.h ../filesys/synchdisk.h ../machine/disk.h \
  ../threads/synch.h
machine.o: ../machine/machine.cc ../threads/copyright.h \
  ../machine/machine.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/include/stdio.h \
  /usr/include/stdarg.h /usr/include/iso/stdarg_iso.h \
  /usr/include/sys/va_impl.h /usr/include/sys/va_list.h \
  /usr/include/sys/isa_defs.h /usr/include/iso/stdarg_c99.h \
  /usr/include/sys/feature_tests.h /usr/include/sys/ccompile.h \
  /usr/include/iso/stdio_iso.h /usr/include/stdio_tag.h \
  /usr/include/stdio_impl.h /usr/include/iso/stdio_c99.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/iostream \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/c++config.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/os_defines.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/ostream \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/ios \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/iosfwd \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/c++locale.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/clocale \
  /usr/include/locale.h /usr/include/iso/locale_iso.h \
  /usr/include/libintl.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/cstring \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/cstddef \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/include/stddef.h \
  /usr/include/iso/stddef_iso.h /usr/include/string.h \
  /usr/include/iso/string_iso.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/cstdio \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/c++io.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/gthr.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/gthr-default.h \
  /usr/include/pthread.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/include/sys/types.h \
  /usr/include/sys/machtypes.h /usr/include/sys/int_types.h \
  /usr/include/sys/select.h /usr/include/sys/time_impl.h \
  /usr/include/sys/time.h /usr/include/time.h /usr/include/iso/time_iso.h \
  /usr/include/sched.h /usr/include/unistd.h /usr/include/sys/unistd.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/cctype \
  /usr/include/ctype.h /usr/include/iso/ctype_iso.h \
  /usr/include/iso/ctype_c99.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stringfwd.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/postypes.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/cwchar \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/ctime \
  /usr/include/wchar.h /usr/include/iso/wchar_iso.h \
  /usr/include/wchar_impl.h /usr/include/iso/wchar_c99.h \
  /usr/include/stdint.h /usr/include/sys/stdint.h \
  /usr/include/sys/int_limits.h /usr/include/sys/int_const.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/functexcept.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/exception_defines.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/exception \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/char_traits.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_algobase.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/climits \
  /usr/include/limits.h /usr/include/iso/limits_iso.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/cstdlib \
  /usr/include/stdlib.h /usr/include/iso/stdlib_iso.h \
  /usr/include/iso/stdlib_c99.h /usr/include/sys/wait.h \
  /usr/include/sys/resource.h /usr/include/sys/siginfo.h \
  /usr/include/sys/machsig.h /usr/include/sys/procset.h \
  /usr/include/sys/signal.h /usr/include/sys/iso/signal_iso.h \
  /usr/include/sys/ucontext.h /usr/include/sys/regset.h \
  /usr/include/v7/sys/privregs.h /usr/include/v7/sys/psr.h \
  /usr/include/sys/fsr.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/new \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_pair.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/type_traits.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_iterator_base_types.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_iterator_base_funcs.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/concept_check.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_iterator.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/debug/debug.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/cassert \
  /usr/include/assert.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/localefwd.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/ios_base.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/atomicity.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/atomic_word.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/locale_classes.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/string \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/memory \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/allocator.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/c++allocator.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/ext/new_allocator.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_construct.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_uninitialized.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_raw_storage_iter.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/limits \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_function.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/basic_string.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/algorithm \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_algo.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_heap.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_tempbuf.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/basic_string.tcc \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/streambuf \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/streambuf.tcc \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/basic_ios.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/streambuf_iterator.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/locale_facets.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/cwctype \
  /usr/include/wctype.h /usr/include/iso/wctype_iso.h \
  /usr/include/iso/wctype_c99.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/ctype_base.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/ctype_inline.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/codecvt.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/codecvt_specializations.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/time_members.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/messages_members.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/basic_ios.tcc \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/ostream.tcc \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/locale \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/locale_facets.tcc \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/typeinfo \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/istream \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/istream.tcc \
  ../threads/utility.h ../threads/copyright.h ../threads/bool.h \
  ../machine/sysdep.h ../machine/translate.h ../machine/disk.h \
  ../threads/system.h ../threads/utility.h ../threads/thread.h \
  ../machine/machine.h ../userprog/addrspace.h ../threads/copyright.h \
  ../filesys/filesys.h ../threads/copyright.h ../filesys/openfile.h \
  ../threads/utility.h ../userprog/table.h ../userprog/bitmap.h \
  ../threads/utility.h ../filesys/openfile.h ../threads/scheduler.h \
  ../threads/list.h ../machine/interrupt.h ../threads/list.h \
  ../machine/stats.h ../machine/timer.h ../filesys/filesys.h \
  ../filesys/synchdisk.h ../machine/disk.h ../threads/synch.h
mipssim.o: ../machine/mipssim.cc ../threads/copyright.h \
  ../machine/machine.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/include/stdio.h \
  /usr/include/stdarg.h /usr/include/iso/stdarg_iso.h \
  /usr/include/sys/va_impl.h /usr/include/sys/va_list.h \
  /usr/include/sys/isa_defs.h /usr/include/iso/stdarg_c99.h \
  /usr/include/sys/feature_tests.h /usr/include/sys/ccompile.h \
  /usr/include/iso/stdio_iso.h /usr/include/stdio_tag.h \
  /usr/include/stdio_impl.h /usr/include/iso/stdio_c99.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/iostream \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/c++config.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/os_defines.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/ostream \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/ios \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/iosfwd \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/c++locale.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/clocale \
  /usr/include/locale.h /usr/include/iso/locale_iso.h \
  /usr/include/libintl.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/cstring \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/cstddef \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/include/stddef.h \
  /usr/include/iso/stddef_iso.h /usr/include/string.h \
  /usr/include/iso/string_iso.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/cstdio \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/c++io.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/gthr.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/gthr-default.h \
  /usr/include/pthread.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/include/sys/types.h \
  /usr/include/sys/machtypes.h /usr/include/sys/int_types.h \
  /usr/include/sys/select.h /usr/include/sys/time_impl.h \
  /usr/include/sys/time.h /usr/include/time.h /usr/include/iso/time_iso.h \
  /usr/include/sched.h /usr/include/unistd.h /usr/include/sys/unistd.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/cctype \
  /usr/include/ctype.h /usr/include/iso/ctype_iso.h \
  /usr/include/iso/ctype_c99.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stringfwd.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/postypes.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/cwchar \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/ctime \
  /usr/include/wchar.h /usr/include/iso/wchar_iso.h \
  /usr/include/wchar_impl.h /usr/include/iso/wchar_c99.h \
  /usr/include/stdint.h /usr/include/sys/stdint.h \
  /usr/include/sys/int_limits.h /usr/include/sys/int_const.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/functexcept.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/exception_defines.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/exception \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/char_traits.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_algobase.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/climits \
  /usr/include/limits.h /usr/include/iso/limits_iso.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/cstdlib \
  /usr/include/stdlib.h /usr/include/iso/stdlib_iso.h \
  /usr/include/iso/stdlib_c99.h /usr/include/sys/wait.h \
  /usr/include/sys/resource.h /usr/include/sys/siginfo.h \
  /usr/include/sys/machsig.h /usr/include/sys/procset.h \
  /usr/include/sys/signal.h /usr/include/sys/iso/signal_iso.h \
  /usr/include/sys/ucontext.h /usr/include/sys/regset.h \
  /usr/include/v7/sys/privregs.h /usr/include/v7/sys/psr.h \
  /usr/include/sys/fsr.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/new \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_pair.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/type_traits.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_iterator_base_types.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_iterator_base_funcs.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/concept_check.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_iterator.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/debug/debug.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/cassert \
  /usr/include/assert.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/localefwd.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/ios_base.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/atomicity.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/atomic_word.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/locale_classes.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/string \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/memory \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/allocator.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/c++allocator.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/ext/new_allocator.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_construct.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_uninitialized.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_raw_storage_iter.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/limits \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_function.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/basic_string.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/algorithm \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_algo.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_heap.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_tempbuf.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/basic_string.tcc \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/streambuf \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/streambuf.tcc \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/basic_ios.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/streambuf_iterator.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/locale_facets.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/cwctype \
  /usr/include/wctype.h /usr/include/iso/wctype_iso.h \
  /usr/include/iso/wctype_c99.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/ctype_base.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/ctype_inline.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/codecvt.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/codecvt_specializations.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/time_members.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/messages_members.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/basic_ios.tcc \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/ostream.tcc \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/locale \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/locale_facets.tcc \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/typeinfo \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/istream \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/istream.tcc \
  ../threads/utility.h ../threads/copyright.h ../threads/bool.h \
  ../machine/sysdep.h ../machine/translate.h ../machine/disk.h \
  ../machine/mipssim.h ../threads/system.h ../threads/utility.h \
  ../threads/thread.h ../machine/machine.h ../userprog/addrspace.h \
  ../threads/copyright.h ../filesys/filesys.h ../threads/copyright.h \
  ../filesys/openfile.h ../threads/utility.h ../userprog/table.h \
  ../userprog/bitmap.h ../threads/utility.h ../filesys/openfile.h \
  ../threads/scheduler.h ../threads/list.h ../machine/interrupt.h \
  ../threads/list.h ../machine/stats.h ../machine/timer.h \
  ../filesys/filesys.h ../filesys/synchdisk.h ../machine/disk.h \
  ../threads/synch.h
translate.o: ../machine/translate.cc ../threads/copyright.h \
  ../machine/machine.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/include/stdio.h \
  /usr/include/stdarg.h /usr/include/iso/stdarg_iso.h \
  /usr/include/sys/va_impl.h /usr/include/sys/va_list.h \
  /usr/include/sys/isa_defs.h /usr/include/iso/stdarg_c99.h \
  /usr/include/sys/feature_tests.h /usr/include/sys/ccompile.h \
  /usr/include/iso/stdio_iso.h /usr/include/stdio_tag.h \
  /usr/include/stdio_impl.h /usr/include/iso/stdio_c99.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/iostream \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/c++config.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/os_defines.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/ostream \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/ios \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/iosfwd \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/c++locale.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/clocale \
  /usr/include/locale.h /usr/include/iso/locale_iso.h \
  /usr/include/libintl.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/cstring \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/cstddef \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/include/stddef.h \
  /usr/include/iso/stddef_iso.h /usr/include/string.h \
  /usr/include/iso/string_iso.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/cstdio \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/c++io.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/gthr.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/gthr-default.h \
  /usr/include/pthread.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/include/sys/types.h \
  /usr/include/sys/machtypes.h /usr/include/sys/int_types.h \
  /usr/include/sys/select.h /usr/include/sys/time_impl.h \
  /usr/include/sys/time.h /usr/include/time.h /usr/include/iso/time_iso.h \
  /usr/include/sched.h /usr/include/unistd.h /usr/include/sys/unistd.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/cctype \
  /usr/include/ctype.h /usr/include/iso/ctype_iso.h \
  /usr/include/iso/ctype_c99.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stringfwd.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/postypes.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/cwchar \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/ctime \
  /usr/include/wchar.h /usr/include/iso/wchar_iso.h \
  /usr/include/wchar_impl.h /usr/include/iso/wchar_c99.h \
  /usr/include/stdint.h /usr/include/sys/stdint.h \
  /usr/include/sys/int_limits.h /usr/include/sys/int_const.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/functexcept.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/exception_defines.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/exception \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/char_traits.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_algobase.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/climits \
  /usr/include/limits.h /usr/include/iso/limits_iso.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/cstdlib \
  /usr/include/stdlib.h /usr/include/iso/stdlib_iso.h \
  /usr/include/iso/stdlib_c99.h /usr/include/sys/wait.h \
  /usr/include/sys/resource.h /usr/include/sys/siginfo.h \
  /usr/include/sys/machsig.h /usr/include/sys/procset.h \
  /usr/include/sys/signal.h /usr/include/sys/iso/signal_iso.h \
  /usr/include/sys/ucontext.h /usr/include/sys/regset.h \
  /usr/include/v7/sys/privregs.h /usr/include/v7/sys/psr.h \
  /usr/include/sys/fsr.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/new \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_pair.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/type_traits.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_iterator_base_types.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_iterator_base_funcs.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/concept_check.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_iterator.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/debug/debug.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/cassert \
  /usr/include/assert.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/localefwd.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/ios_base.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/atomicity.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/atomic_word.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/locale_classes.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/string \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/memory \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/allocator.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/c++allocator.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/ext/new_allocator.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_construct.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_uninitialized.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_raw_storage_iter.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/limits \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_function.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/basic_string.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/algorithm \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_algo.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_heap.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_tempbuf.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/basic_string.tcc \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/streambuf \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/streambuf.tcc \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/basic_ios.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/streambuf_iterator.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/locale_facets.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/cwctype \
  /usr/include/wctype.h /usr/include/iso/wctype_iso.h \
  /usr/include/iso/wctype_c99.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/ctype_base.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/ctype_inline.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/codecvt.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/codecvt_specializations.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/time_members.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/messages_members.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/basic_ios.tcc \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/ostream.tcc \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/locale \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/locale_facets.tcc \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/typeinfo \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/istream \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/istream.tcc \
  ../threads/utility.h ../threads/copyright.h ../threads/bool.h \
  ../machine/sysdep.h ../machine/translate.h ../machine/disk.h \
  ../userprog/addrspace.h ../threads/copyright.h ../filesys/filesys.h \
  ../threads/copyright.h ../filesys/openfile.h ../threads/utility.h \
  ../userprog/table.h ../userprog/bitmap.h ../threads/utility.h \
  ../filesys/openfile.h ../threads/system.h ../threads/utility.h \
  ../threads/thread.h ../machine/machine.h ../userprog/addrspace.h \
  ../threads/scheduler.h ../threads/list.h ../machine/interrupt.h \
  ../threads/list.h ../machine/stats.h ../machine/timer.h \
  ../filesys/filesys.h ../filesys/synchdisk.h ../machine/disk.h \
  ../threads/synch.h
directory.o: ../filesys/directory.cc ../threads/copyright.h \
  ../threads/utility.h ../threads/copyright.h ../threads/bool.h \
  ../machine/sysdep.h ../threads/copyright.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/include/stdio.h \
  /usr/include/stdarg.h /usr/include/iso/stdarg_iso.h \
  /usr/include/sys/va_impl.h /usr/include/sys/va_list.h \
  /usr/include/sys/isa_defs.h /usr/include/iso/stdarg_c99.h \
  /usr/include/sys/feature_tests.h /usr/include/sys/ccompile.h \
  /usr/include/iso/stdio_iso.h /usr/include/stdio_tag.h \
  /usr/include/stdio_impl.h /usr/include/iso/stdio_c99.h \
  /usr/include/string.h /usr/include/iso/string_iso.h \
  /usr/include/stdlib.h /usr/include/iso/stdlib_iso.h \
  /usr/include/iso/stdlib_c99.h /usr/include/sys/wait.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/include/sys/types.h \
  /usr/include/sys/machtypes.h /usr/include/sys/int_types.h \
  /usr/include/sys/select.h /usr/include/sys/time_impl.h \
  /usr/include/sys/time.h /usr/include/time.h /usr/include/iso/time_iso.h \
  /usr/include/sys/resource.h /usr/include/sys/siginfo.h \
  /usr/include/sys/machsig.h /usr/include/sys/procset.h \
  /usr/include/sys/signal.h /usr/include/sys/iso/signal_iso.h \
  /usr/include/sys/unistd.h /usr/include/sys/ucontext.h \
  /usr/include/sys/regset.h /usr/include/v7/sys/privregs.h \
  /usr/include/v7/sys/psr.h /usr/include/sys/fsr.h ../filesys/filehdr.h \
  ../machine/disk.h ../threads/utility.h ../userprog/bitmap.h \
  ../threads/copyright.h ../threads/utility.h ../filesys/openfile.h \
  ../filesys/directory.h ../filesys/openfile.h
filehdr.o: ../filesys/filehdr.cc ../threads/copyright.h \
  ../threads/system.h ../threads/copyright.h ../threads/utility.h \
  ../threads/bool.h ../machine/sysdep.h ../threads/copyright.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/include/stdio.h \
  /usr/include/stdarg.h /usr/include/iso/stdarg_iso.h \
  /usr/include/sys/va_impl.h /usr/include/sys/va_list.h \
  /usr/include/sys/isa_defs.h /usr/include/iso/stdarg_c99.h \
  /usr/include/sys/feature_tests.h /usr/include/sys/ccompile.h \
  /usr/include/iso/stdio_iso.h /usr/include/stdio_tag.h \
  /usr/include/stdio_impl.h /usr/include/iso/stdio_c99.h \
  /usr/include/string.h /usr/include/iso/string_iso.h \
  /usr/include/stdlib.h /usr/include/iso/stdlib_iso.h \
  /usr/include/iso/stdlib_c99.h /usr/include/sys/wait.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/include/sys/types.h \
  /usr/include/sys/machtypes.h /usr/include/sys/int_types.h \
  /usr/include/sys/select.h /usr/include/sys/time_impl.h \
  /usr/include/sys/time.h /usr/include/time.h /usr/include/iso/time_iso.h \
  /usr/include/sys/resource.h /usr/include/sys/siginfo.h \
  /usr/include/sys/machsig.h /usr/include/sys/procset.h \
  /usr/include/sys/signal.h /usr/include/sys/iso/signal_iso.h \
  /usr/include/sys/unistd.h /usr/include/sys/ucontext.h \
  /usr/include/sys/regset.h /usr/include/v7/sys/privregs.h \
  /usr/include/v7/sys/psr.h /usr/include/sys/fsr.h ../threads/thread.h \
  ../machine/machine.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/iostream \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/c++config.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/os_defines.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/ostream \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/ios \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/iosfwd \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/c++locale.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/clocale \
  /usr/include/locale.h /usr/include/iso/locale_iso.h \
  /usr/include/libintl.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/cstring \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/cstddef \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/include/stddef.h \
  /usr/include/iso/stddef_iso.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/cstdio \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/c++io.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/gthr.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/gthr-default.h \
  /usr/include/pthread.h /usr/include/sched.h /usr/include/unistd.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/cctype \
  /usr/include/ctype.h /usr/include/iso/ctype_iso.h \
  /usr/include/iso/ctype_c99.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stringfwd.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/postypes.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/cwchar \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/ctime \
  /usr/include/wchar.h /usr/include/iso/wchar_iso.h \
  /usr/include/wchar_impl.h /usr/include/iso/wchar_c99.h \
  /usr/include/stdint.h /usr/include/sys/stdint.h \
  /usr/include/sys/int_limits.h /usr/include/sys/int_const.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/functexcept.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/exception_defines.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/exception \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/char_traits.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_algobase.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/climits \
  /usr/include/limits.h /usr/include/iso/limits_iso.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/cstdlib \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/new \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_pair.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/type_traits.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_iterator_base_types.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_iterator_base_funcs.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/concept_check.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_iterator.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/debug/debug.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/cassert \
  /usr/include/assert.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/localefwd.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/ios_base.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/atomicity.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/atomic_word.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/locale_classes.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/string \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/memory \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/allocator.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/c++allocator.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/ext/new_allocator.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_construct.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_uninitialized.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_raw_storage_iter.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/limits \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_function.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/basic_string.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/algorithm \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_algo.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_heap.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_tempbuf.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/basic_string.tcc \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/streambuf \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/streambuf.tcc \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/basic_ios.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/streambuf_iterator.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/locale_facets.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/cwctype \
  /usr/include/wctype.h /usr/include/iso/wctype_iso.h \
  /usr/include/iso/wctype_c99.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/ctype_base.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/ctype_inline.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/codecvt.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/codecvt_specializations.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/time_members.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/messages_members.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/basic_ios.tcc \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/ostream.tcc \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/locale \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/locale_facets.tcc \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/typeinfo \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/istream \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/istream.tcc \
  ../threads/utility.h ../machine/translate.h ../machine/disk.h \
  ../userprog/addrspace.h ../threads/copyright.h ../filesys/filesys.h \
  ../filesys/openfile.h ../threads/utility.h ../userprog/table.h \
  ../userprog/bitmap.h ../threads/utility.h ../filesys/openfile.h \
  ../threads/scheduler.h ../threads/list.h ../machine/interrupt.h \
  ../threads/list.h ../machine/stats.h ../machine/timer.h \
  ../filesys/filesys.h ../filesys/synchdisk.h ../machine/disk.h \
  ../threads/synch.h ../filesys/filehdr.h ../userprog/bitmap.h
filesys.o: ../filesys/filesys.cc ../threads/copyright.h ../machine/disk.h \
  ../threads/copyright.h ../threads/utility.h ../threads/copyright.h \
  ../threads/bool.h ../machine/sysdep.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/include/stdio.h \
  /usr/include/stdarg.h /usr/include/iso/stdarg_iso.h \
  /usr/include/sys/va_impl.h /usr/include/sys/va_list.h \
  /usr/include/sys/isa_defs.h /usr/include/iso/stdarg_c99.h \
  /usr/include/sys/feature_tests.h /usr/include/sys/ccompile.h \
  /usr/include/iso/stdio_iso.h /usr/include/stdio_tag.h \
  /usr/include/stdio_impl.h /usr/include/iso/stdio_c99.h \
  /usr/include/string.h /usr/include/iso/string_iso.h \
  /usr/include/stdlib.h /usr/include/iso/stdlib_iso.h \
  /usr/include/iso/stdlib_c99.h /usr/include/sys/wait.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/include/sys/types.h \
  /usr/include/sys/machtypes.h /usr/include/sys/int_types.h \
  /usr/include/sys/select.h /usr/include/sys/time_impl.h \
  /usr/include/sys/time.h /usr/include/time.h /usr/include/iso/time_iso.h \
  /usr/include/sys/resource.h /usr/include/sys/siginfo.h \
  /usr/include/sys/machsig.h /usr/include/sys/procset.h \
  /usr/include/sys/signal.h /usr/include/sys/iso/signal_iso.h \
  /usr/include/sys/unistd.h /usr/include/sys/ucontext.h \
  /usr/include/sys/regset.h /usr/include/v7/sys/privregs.h \
  /usr/include/v7/sys/psr.h /usr/include/sys/fsr.h ../userprog/bitmap.h \
  ../threads/copyright.h ../threads/utility.h ../filesys/openfile.h \
  ../threads/utility.h ../filesys/directory.h ../filesys/openfile.h \
  ../filesys/filehdr.h ../filesys/filesys.h
fstest.o: ../filesys/fstest.cc ../threads/copyright.h \
  ../threads/utility.h ../threads/copyright.h ../threads/bool.h \
  ../machine/sysdep.h ../threads/copyright.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/include/stdio.h \
  /usr/include/stdarg.h /usr/include/iso/stdarg_iso.h \
  /usr/include/sys/va_impl.h /usr/include/sys/va_list.h \
  /usr/include/sys/isa_defs.h /usr/include/iso/stdarg_c99.h \
  /usr/include/sys/feature_tests.h /usr/include/sys/ccompile.h \
  /usr/include/iso/stdio_iso.h /usr/include/stdio_tag.h \
  /usr/include/stdio_impl.h /usr/include/iso/stdio_c99.h \
  /usr/include/string.h /usr/include/iso/string_iso.h \
  /usr/include/stdlib.h /usr/include/iso/stdlib_iso.h \
  /usr/include/iso/stdlib_c99.h /usr/include/sys/wait.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/include/sys/types.h \
  /usr/include/sys/machtypes.h /usr/include/sys/int_types.h \
  /usr/include/sys/select.h /usr/include/sys/time_impl.h \
  /usr/include/sys/time.h /usr/include/time.h /usr/include/iso/time_iso.h \
  /usr/include/sys/resource.h /usr/include/sys/siginfo.h \
  /usr/include/sys/machsig.h /usr/include/sys/procset.h \
  /usr/include/sys/signal.h /usr/include/sys/iso/signal_iso.h \
  /usr/include/sys/unistd.h /usr/include/sys/ucontext.h \
  /usr/include/sys/regset.h /usr/include/v7/sys/privregs.h \
  /usr/include/v7/sys/psr.h /usr/include/sys/fsr.h ../filesys/filesys.h \
  ../filesys/openfile.h ../threads/system.h ../threads/utility.h \
  ../threads/thread.h ../machine/machine.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/iostream \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/c++config.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/os_defines.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/ostream \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/ios \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/iosfwd \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/c++locale.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/clocale \
  /usr/include/locale.h /usr/include/iso/locale_iso.h \
  /usr/include/libintl.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/cstring \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/cstddef \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/include/stddef.h \
  /usr/include/iso/stddef_iso.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/cstdio \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/c++io.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/gthr.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/gthr-default.h \
  /usr/include/pthread.h /usr/include/sched.h /usr/include/unistd.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/cctype \
  /usr/include/ctype.h /usr/include/iso/ctype_iso.h \
  /usr/include/iso/ctype_c99.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stringfwd.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/postypes.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/cwchar \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/ctime \
  /usr/include/wchar.h /usr/include/iso/wchar_iso.h \
  /usr/include/wchar_impl.h /usr/include/iso/wchar_c99.h \
  /usr/include/stdint.h /usr/include/sys/stdint.h \
  /usr/include/sys/int_limits.h /usr/include/sys/int_const.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/functexcept.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/exception_defines.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/exception \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/char_traits.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_algobase.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/climits \
  /usr/include/limits.h /usr/include/iso/limits_iso.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/cstdlib \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/new \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_pair.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/type_traits.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_iterator_base_types.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_iterator_base_funcs.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/concept_check.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_iterator.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/debug/debug.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/cassert \
  /usr/include/assert.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/localefwd.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/ios_base.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/atomicity.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/atomic_word.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/locale_classes.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/string \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/memory \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/allocator.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/c++allocator.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/ext/new_allocator.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_construct.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_uninitialized.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_raw_storage_iter.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/limits \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_function.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/basic_string.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/algorithm \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_algo.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_heap.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_tempbuf.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/basic_string.tcc \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/streambuf \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/streambuf.tcc \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/basic_ios.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/streambuf_iterator.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/locale_facets.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/cwctype \
  /usr/include/wctype.h /usr/include/iso/wctype_iso.h \
  /usr/include/iso/wctype_c99.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/ctype_base.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/ctype_inline.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/codecvt.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/codecvt_specializations.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/time_members.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/messages_members.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/basic_ios.tcc \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/ostream.tcc \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/locale \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/locale_facets.tcc \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/typeinfo \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/istream \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/istream.tcc \
  ../threads/utility.h ../machine/translate.h ../machine/disk.h \
  ../userprog/addrspace.h ../threads/copyright.h ../filesys/filesys.h \
  ../userprog/table.h ../userprog/bitmap.h ../threads/utility.h \
  ../filesys/openfile.h ../threads/scheduler.h ../threads/list.h \
  ../machine/interrupt.h ../threads/list.h ../machine/stats.h \
  ../machine/timer.h ../filesys/filesys.h ../filesys/synchdisk.h \
  ../machine/disk.h ../threads/synch.h ../threads/thread.h \
  ../machine/stats.h
openfile.o: ../filesys/openfile.cc ../threads/copyright.h \
  ../filesys/filehdr.h ../machine/disk.h ../threads/copyright.h \
  ../threads/utility.h ../threads/copyright.h ../threads/bool.h \
  ../machine/sysdep.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/include/stdio.h \
  /usr/include/stdarg.h /usr/include/iso/stdarg_iso.h \
  /usr/include/sys/va_impl.h /usr/include/sys/va_list.h \
  /usr/include/sys/isa_defs.h /usr/include/iso/stdarg_c99.h \
  /usr/include/sys/feature_tests.h /usr/include/sys/ccompile.h \
  /usr/include/iso/stdio_iso.h /usr/include/stdio_tag.h \
  /usr/include/stdio_impl.h /usr/include/iso/stdio_c99.h \
  /usr/include/string.h /usr/include/iso/string_iso.h \
  /usr/include/stdlib.h /usr/include/iso/stdlib_iso.h \
  /usr/include/iso/stdlib_c99.h /usr/include/sys/wait.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/include/sys/types.h \
  /usr/include/sys/machtypes.h /usr/include/sys/int_types.h \
  /usr/include/sys/select.h /usr/include/sys/time_impl.h \
  /usr/include/sys/time.h /usr/include/time.h /usr/include/iso/time_iso.h \
  /usr/include/sys/resource.h /usr/include/sys/siginfo.h \
  /usr/include/sys/machsig.h /usr/include/sys/procset.h \
  /usr/include/sys/signal.h /usr/include/sys/iso/signal_iso.h \
  /usr/include/sys/unistd.h /usr/include/sys/ucontext.h \
  /usr/include/sys/regset.h /usr/include/v7/sys/privregs.h \
  /usr/include/v7/sys/psr.h /usr/include/sys/fsr.h ../userprog/bitmap.h \
  ../threads/copyright.h ../threads/utility.h ../filesys/openfile.h \
  ../threads/utility.h ../filesys/openfile.h ../threads/system.h \
  ../threads/utility.h ../threads/thread.h ../machine/machine.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/iostream \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/c++config.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/os_defines.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/ostream \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/ios \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/iosfwd \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/c++locale.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/clocale \
  /usr/include/locale.h /usr/include/iso/locale_iso.h \
  /usr/include/libintl.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/cstring \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/cstddef \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/include/stddef.h \
  /usr/include/iso/stddef_iso.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/cstdio \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/c++io.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/gthr.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/gthr-default.h \
  /usr/include/pthread.h /usr/include/sched.h /usr/include/unistd.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/cctype \
  /usr/include/ctype.h /usr/include/iso/ctype_iso.h \
  /usr/include/iso/ctype_c99.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stringfwd.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/postypes.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/cwchar \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/ctime \
  /usr/include/wchar.h /usr/include/iso/wchar_iso.h \
  /usr/include/wchar_impl.h /usr/include/iso/wchar_c99.h \
  /usr/include/stdint.h /usr/include/sys/stdint.h \
  /usr/include/sys/int_limits.h /usr/include/sys/int_const.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/functexcept.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/exception_defines.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/exception \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/char_traits.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_algobase.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/climits \
  /usr/include/limits.h /usr/include/iso/limits_iso.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/cstdlib \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/new \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_pair.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/type_traits.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_iterator_base_types.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_iterator_base_funcs.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/concept_check.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_iterator.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/debug/debug.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/cassert \
  /usr/include/assert.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/localefwd.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/ios_base.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/atomicity.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/atomic_word.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/locale_classes.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/string \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/memory \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/allocator.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/c++allocator.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/ext/new_allocator.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_construct.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_uninitialized.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_raw_storage_iter.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/limits \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_function.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/basic_string.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/algorithm \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_algo.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_heap.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_tempbuf.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/basic_string.tcc \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/streambuf \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/streambuf.tcc \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/basic_ios.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/streambuf_iterator.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/locale_facets.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/cwctype \
  /usr/include/wctype.h /usr/include/iso/wctype_iso.h \
  /usr/include/iso/wctype_c99.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/ctype_base.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/ctype_inline.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/codecvt.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/codecvt_specializations.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/time_members.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/messages_members.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/basic_ios.tcc \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/ostream.tcc \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/locale \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/locale_facets.tcc \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/typeinfo \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/istream \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/istream.tcc \
  ../machine/translate.h ../machine/disk.h ../userprog/addrspace.h \
  ../filesys/filesys.h ../userprog/table.h ../userprog/bitmap.h \
  ../threads/scheduler.h ../threads/list.h ../machine/interrupt.h \
  ../threads/list.h ../machine/stats.h ../machine/timer.h \
  ../filesys/filesys.h ../filesys/synchdisk.h ../threads/synch.h
synchdisk.o: ../filesys/synchdisk.cc ../threads/copyright.h \
  ../filesys/synchdisk.h ../machine/disk.h ../threads/copyright.h \
  ../threads/utility.h ../threads/copyright.h ../threads/bool.h \
  ../machine/sysdep.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/include/stdio.h \
  /usr/include/stdarg.h /usr/include/iso/stdarg_iso.h \
  /usr/include/sys/va_impl.h /usr/include/sys/va_list.h \
  /usr/include/sys/isa_defs.h /usr/include/iso/stdarg_c99.h \
  /usr/include/sys/feature_tests.h /usr/include/sys/ccompile.h \
  /usr/include/iso/stdio_iso.h /usr/include/stdio_tag.h \
  /usr/include/stdio_impl.h /usr/include/iso/stdio_c99.h \
  /usr/include/string.h /usr/include/iso/string_iso.h \
  /usr/include/stdlib.h /usr/include/iso/stdlib_iso.h \
  /usr/include/iso/stdlib_c99.h /usr/include/sys/wait.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/include/sys/types.h \
  /usr/include/sys/machtypes.h /usr/include/sys/int_types.h \
  /usr/include/sys/select.h /usr/include/sys/time_impl.h \
  /usr/include/sys/time.h /usr/include/time.h /usr/include/iso/time_iso.h \
  /usr/include/sys/resource.h /usr/include/sys/siginfo.h \
  /usr/include/sys/machsig.h /usr/include/sys/procset.h \
  /usr/include/sys/signal.h /usr/include/sys/iso/signal_iso.h \
  /usr/include/sys/unistd.h /usr/include/sys/ucontext.h \
  /usr/include/sys/regset.h /usr/include/v7/sys/privregs.h \
  /usr/include/v7/sys/psr.h /usr/include/sys/fsr.h ../threads/synch.h \
  ../threads/thread.h ../threads/utility.h ../machine/machine.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/iostream \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/c++config.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/os_defines.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/ostream \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/ios \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/iosfwd \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/c++locale.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/clocale \
  /usr/include/locale.h /usr/include/iso/locale_iso.h \
  /usr/include/libintl.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/cstring \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/cstddef \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/include/stddef.h \
  /usr/include/iso/stddef_iso.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/cstdio \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/c++io.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/gthr.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/gthr-default.h \
  /usr/include/pthread.h /usr/include/sched.h /usr/include/unistd.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/cctype \
  /usr/include/ctype.h /usr/include/iso/ctype_iso.h \
  /usr/include/iso/ctype_c99.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stringfwd.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/postypes.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/cwchar \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/ctime \
  /usr/include/wchar.h /usr/include/iso/wchar_iso.h \
  /usr/include/wchar_impl.h /usr/include/iso/wchar_c99.h \
  /usr/include/stdint.h /usr/include/sys/stdint.h \
  /usr/include/sys/int_limits.h /usr/include/sys/int_const.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/functexcept.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/exception_defines.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/exception \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/char_traits.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_algobase.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/climits \
  /usr/include/limits.h /usr/include/iso/limits_iso.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/cstdlib \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/new \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_pair.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/type_traits.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_iterator_base_types.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_iterator_base_funcs.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/concept_check.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_iterator.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/debug/debug.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/cassert \
  /usr/include/assert.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/localefwd.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/ios_base.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/atomicity.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/atomic_word.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/locale_classes.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/string \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/memory \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/allocator.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/c++allocator.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/ext/new_allocator.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_construct.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_uninitialized.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_raw_storage_iter.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/limits \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_function.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/basic_string.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/algorithm \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_algo.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_heap.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_tempbuf.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/basic_string.tcc \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/streambuf \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/streambuf.tcc \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/basic_ios.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/streambuf_iterator.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/locale_facets.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/cwctype \
  /usr/include/wctype.h /usr/include/iso/wctype_iso.h \
  /usr/include/iso/wctype_c99.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/ctype_base.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/ctype_inline.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/codecvt.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/codecvt_specializations.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/time_members.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/messages_members.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/basic_ios.tcc \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/ostream.tcc \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/locale \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/locale_facets.tcc \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/typeinfo \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/istream \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/istream.tcc \
  ../machine/translate.h ../machine/disk.h ../userprog/addrspace.h \
  ../threads/copyright.h ../filesys/filesys.h ../filesys/openfile.h \
  ../threads/utility.h ../userprog/table.h ../userprog/bitmap.h \
  ../threads/utility.h ../filesys/openfile.h ../threads/list.h
disk.o: ../machine/disk.cc ../threads/copyright.h ../machine/disk.h \
  ../threads/utility.h ../threads/copyright.h ../threads/bool.h \
  ../machine/sysdep.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/include/stdio.h \
  /usr/include/stdarg.h /usr/include/iso/stdarg_iso.h \
  /usr/include/sys/va_impl.h /usr/include/sys/va_list.h \
  /usr/include/sys/isa_defs.h /usr/include/iso/stdarg_c99.h \
  /usr/include/sys/feature_tests.h /usr/include/sys/ccompile.h \
  /usr/include/iso/stdio_iso.h /usr/include/stdio_tag.h \
  /usr/include/stdio_impl.h /usr/include/iso/stdio_c99.h \
  /usr/include/string.h /usr/include/iso/string_iso.h \
  /usr/include/stdlib.h /usr/include/iso/stdlib_iso.h \
  /usr/include/iso/stdlib_c99.h /usr/include/sys/wait.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/include/sys/types.h \
  /usr/include/sys/machtypes.h /usr/include/sys/int_types.h \
  /usr/include/sys/select.h /usr/include/sys/time_impl.h \
  /usr/include/sys/time.h /usr/include/time.h /usr/include/iso/time_iso.h \
  /usr/include/sys/resource.h /usr/include/sys/siginfo.h \
  /usr/include/sys/machsig.h /usr/include/sys/procset.h \
  /usr/include/sys/signal.h /usr/include/sys/iso/signal_iso.h \
  /usr/include/sys/unistd.h /usr/include/sys/ucontext.h \
  /usr/include/sys/regset.h /usr/include/v7/sys/privregs.h \
  /usr/include/v7/sys/psr.h /usr/include/sys/fsr.h ../threads/system.h \
  ../threads/utility.h ../threads/thread.h ../machine/machine.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/iostream \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/c++config.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/os_defines.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/ostream \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/ios \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/iosfwd \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/c++locale.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/clocale \
  /usr/include/locale.h /usr/include/iso/locale_iso.h \
  /usr/include/libintl.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/cstring \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/cstddef \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/include/stddef.h \
  /usr/include/iso/stddef_iso.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/cstdio \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/c++io.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/gthr.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/gthr-default.h \
  /usr/include/pthread.h /usr/include/sched.h /usr/include/unistd.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/cctype \
  /usr/include/ctype.h /usr/include/iso/ctype_iso.h \
  /usr/include/iso/ctype_c99.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stringfwd.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/postypes.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/cwchar \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/ctime \
  /usr/include/wchar.h /usr/include/iso/wchar_iso.h \
  /usr/include/wchar_impl.h /usr/include/iso/wchar_c99.h \
  /usr/include/stdint.h /usr/include/sys/stdint.h \
  /usr/include/sys/int_limits.h /usr/include/sys/int_const.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/functexcept.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/exception_defines.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/exception \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/char_traits.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_algobase.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/climits \
  /usr/include/limits.h /usr/include/iso/limits_iso.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/cstdlib \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/new \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_pair.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/type_traits.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_iterator_base_types.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_iterator_base_funcs.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/concept_check.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_iterator.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/debug/debug.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/cassert \
  /usr/include/assert.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/localefwd.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/ios_base.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/atomicity.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/atomic_word.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/locale_classes.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/string \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/memory \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/allocator.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/c++allocator.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/ext/new_allocator.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_construct.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_uninitialized.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_raw_storage_iter.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/limits \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_function.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/basic_string.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/algorithm \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_algo.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_heap.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/stl_tempbuf.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/basic_string.tcc \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/streambuf \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/streambuf.tcc \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/basic_ios.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/streambuf_iterator.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/locale_facets.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/cwctype \
  /usr/include/wctype.h /usr/include/iso/wctype_iso.h \
  /usr/include/iso/wctype_c99.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/ctype_base.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/ctype_inline.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/codecvt.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/codecvt_specializations.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/time_members.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/sparc-sun-solaris2.10/bits/messages_members.h \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/basic_ios.tcc \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/ostream.tcc \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/locale \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/locale_facets.tcc \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/typeinfo \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/istream \
  /usr/sfw/lib/gcc/sparc-sun-solaris2.10/3.4.3/../../../../include/c++/3.4.3/bits/istream.tcc \
  ../machine/translate.h ../userprog/addrspace.h ../threads/copyright.h \
  ../filesys/filesys.h ../threads/copyright.h ../filesys/openfile.h \
  ../threads/utility.h ../userprog/table.h ../userprog/bitmap.h \
  ../threads/utility.h ../filesys/openfile.h ../threads/scheduler.h \
  ../threads/list.h ../machine/interrupt.h ../threads/list.h \
  ../machine/stats.h ../machine/timer.h ../filesys/filesys.h \
  ../filesys/synchdisk.h ../machine/disk.h ../threads/synch.h
# DEPENDENCIES MUST END AT END OF FILE
# IF YOU PUT STUFF HERE IT WILL GO AWAY
# see make depend above
