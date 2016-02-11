# osx_ptrace
library that breaks ptrace that can be used with DYLD_INSERT_LIBRARIES - for those who dont know how to use r2 or gdb or are fundamentally retarded


this can also be used as a template for other overrides in osx w/ DYLD_INSERT_LIBRARIES which is essentially LD_PRELOAD for OS X. you can test this binary by creating a simple hello world which also calls PT_DENY_ATTACH and prints it's pid. (attempt to) attach lldb/gdb/your favorite debugger to the process via the pid after running `DYLD_INSERT_LIBRARIES=$(absolute path to lib) ./test`


congratulations! you now can break ptrace on everything. if you know someone retarded enough to 'protect' their product with ptrace, feel free to show this to them.
