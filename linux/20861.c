cocci_test_suite() {
	long cocci_id/* arch/x86/entry/syscall_64.c 18 */(const struct pt_regs *);
	ni_syscall cocci_id/* arch/x86/entry/syscall_64.c 13 */;
	long cocci_id/* arch/x86/entry/syscall_64.c 11 */(void);
}
