```bash

# dpkg -L gdb
/.
/etc
/etc/gdb
/etc/gdb/gdbinit
/etc/gdb/gdbinit.d
/usr
/usr/bin
/usr/bin/gcore
/usr/bin/gdb
/usr/bin/gdb-add-index
/usr/bin/gdbtui
/usr/include
/usr/include/gdb
/usr/include/gdb/jit-reader.h
/usr/share
/usr/share/doc
/usr/share/doc/gdb
/usr/share/doc/gdb/NEWS.Debian.gz
/usr/share/doc/gdb/NEWS.gz
/usr/share/doc/gdb/README.Debian
/usr/share/doc/gdb/README.gz
/usr/share/doc/gdb/changelog.Debian.gz
/usr/share/doc/gdb/changelog.gz
/usr/share/doc/gdb/check.log.gz
/usr/share/doc/gdb/contrib
/usr/share/doc/gdb/contrib/ari
/usr/share/doc/gdb/contrib/ari/create-web-ari-in-src.sh
/usr/share/doc/gdb/contrib/ari/gdb_ari.sh.gz
/usr/share/doc/gdb/contrib/ari/gdb_find.sh
/usr/share/doc/gdb/contrib/ari/update-web-ari.sh.gz
/usr/share/doc/gdb/contrib/cc-with-tweaks.sh.gz
/usr/share/doc/gdb/contrib/expect-read1.c
/usr/share/doc/gdb/contrib/expect-read1.sh
/usr/share/doc/gdb/contrib/gdb-add-index.sh.gz
/usr/share/doc/gdb/contrib/test_pubnames_and_indexes.py.gz
/usr/share/doc/gdb/contrib/words.sh
/usr/share/doc/gdb/copyright
/usr/share/doc/gdb/refcard.dvi.gz
/usr/share/doc/gdb/refcard.ps.gz
/usr/share/doc/gdb/refcard.tex.gz
/usr/share/gdb
/usr/share/gdb/python
/usr/share/gdb/python/gdb
/usr/share/gdb/python/gdb/FrameDecorator.py
/usr/share/gdb/python/gdb/FrameIterator.py
/usr/share/gdb/python/gdb/__init__.py
/usr/share/gdb/python/gdb/command
/usr/share/gdb/python/gdb/command/__init__.py
/usr/share/gdb/python/gdb/command/explore.py
/usr/share/gdb/python/gdb/command/frame_filters.py
/usr/share/gdb/python/gdb/command/pretty_printers.py
/usr/share/gdb/python/gdb/command/prompt.py
/usr/share/gdb/python/gdb/command/type_printers.py
/usr/share/gdb/python/gdb/command/unwinders.py
/usr/share/gdb/python/gdb/command/xmethods.py
/usr/share/gdb/python/gdb/disassembler.py
/usr/share/gdb/python/gdb/frames.py
/usr/share/gdb/python/gdb/function
/usr/share/gdb/python/gdb/function/__init__.py
/usr/share/gdb/python/gdb/function/as_string.py
/usr/share/gdb/python/gdb/function/caller_is.py
/usr/share/gdb/python/gdb/function/strfns.py
/usr/share/gdb/python/gdb/printer
/usr/share/gdb/python/gdb/printer/__init__.py
/usr/share/gdb/python/gdb/printer/bound_registers.py
/usr/share/gdb/python/gdb/printing.py
/usr/share/gdb/python/gdb/prompt.py
/usr/share/gdb/python/gdb/styling.py
/usr/share/gdb/python/gdb/types.py
/usr/share/gdb/python/gdb/unwinder.py
/usr/share/gdb/python/gdb/xmethod.py
/usr/share/gdb/syscalls
/usr/share/gdb/syscalls/aarch64-linux.xml
/usr/share/gdb/syscalls/amd64-linux.xml
/usr/share/gdb/syscalls/arm-linux.xml
/usr/share/gdb/syscalls/freebsd.xml
/usr/share/gdb/syscalls/gdb-syscalls.dtd
/usr/share/gdb/syscalls/i386-linux.xml
/usr/share/gdb/syscalls/mips-n32-linux.xml
/usr/share/gdb/syscalls/mips-n64-linux.xml
/usr/share/gdb/syscalls/mips-o32-linux.xml
/usr/share/gdb/syscalls/netbsd.xml
/usr/share/gdb/syscalls/ppc-linux.xml
/usr/share/gdb/syscalls/ppc64-linux.xml
/usr/share/gdb/syscalls/s390-linux.xml
/usr/share/gdb/syscalls/s390x-linux.xml
/usr/share/gdb/syscalls/sparc-linux.xml
/usr/share/gdb/syscalls/sparc64-linux.xml
/usr/share/gdb/system-gdbinit
/usr/share/gdb/system-gdbinit/elinos.py
/usr/share/gdb/system-gdbinit/wrs-linux.py
/usr/share/man
/usr/share/man/man1
/usr/share/man/man1/gcore.1.gz


# gdb -v
GNU gdb (Debian 13.1-3) 13.1
Copyright (C) 2023 Free Software Foundation, Inc.
License GPLv3+: GNU GPL version 3 or later <http://gnu.org/licenses/gpl.html>
This is free software: you are free to change and redistribute it.
There is NO WARRANTY, to the extent permitted by law.
#

root@8d89a62b64fa:/code/24# gdb help
GNU gdb (Debian 13.1-3) 13.1
Copyright (C) 2023 Free Software Foundation, Inc.
License GPLv3+: GNU GPL version 3 or later <http://gnu.org/licenses/gpl.html>
This is free software: you are free to change and redistribute it.
There is NO WARRANTY, to the extent permitted by law.
Type "show copying" and "show warranty" for details.
This GDB was configured as "x86_64-linux-gnu".
Type "show configuration" for configuration details.
For bug reporting instructions, please see:
<https://www.gnu.org/software/gdb/bugs/>.
Find the GDB manual and other documentation resources online at:
    <http://www.gnu.org/software/gdb/documentation/>.

For help, type "help".
Type "apropos word" to search for commands related to "word"...
help: No such file or directory.
(gdb)
(gdb) help
List of classes of commands:

aliases -- User-defined aliases of other commands.
breakpoints -- Making program stop at certain points.
data -- Examining data.
files -- Specifying and examining files.
internals -- Maintenance commands.
obscure -- Obscure features.
running -- Running the program.
stack -- Examining the stack.
status -- Status inquiries.
support -- Support facilities.
text-user-interface -- TUI is the GDB text based interface.
tracepoints -- Tracing of program execution without stopping the program.
user-defined -- User-defined commands.

Type "help" followed by a class name for a list of commands in that class.
Type "help all" for the list of all commands.
Type "help" followed by command name for full documentation.
Type "apropos word" to search for commands related to "word".
Type "apropos -v word" for full documentation of commands related to "word".
Command name abbreviations are allowed if unambiguous.
(gdb)

```
