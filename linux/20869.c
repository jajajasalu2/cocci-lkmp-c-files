cocci_test_suite() {
	long cocci_id/* arch/x86/entry/syscall_32.c 15 */(unsigned long,
							  unsigned long,
							  unsigned long,
							  unsigned long,
							  unsigned long,
							  unsigned long);
	long cocci_id/* arch/x86/entry/syscall_32.c 12 */(const struct pt_regs *);
}
