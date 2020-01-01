# cocci-lkmp-c-files

This repository contains C files generated using
https://github.com/jajajasalu2/cocci-type-test-suite/. These are to be used
in the Linux Kernel Mentorship Program project 'Linux dev-tools: Handling
complex types and attributes in Coccinelle'.

### Pretty Printing issues

Pretty printing issues have been recorded in the `pretty-printing-issues/`
directory. Each case has three files:

`*.err` is the output as it was obtained, with comments removed.

`*.res` is the expected output.

`*.c` is a sample from the source code which caused the error.

### Note

These files have been generated using spatch version
[1.0.8-00008-g9fe14e3f](
https://github.com/coccinelle/coccinelle/tree/a11e2adb03cd4f610b1092857f63522393c7cad0).
