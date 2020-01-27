cocci_test_suite() {
	struct exception_table_entry {
		unsigned long insn;
		unsigned long fixup;
	} cocci_id/* arch/x86/um/fault.c 9 */;
	const struct exception_table_entry *cocci_id/* arch/x86/um/fault.c 20 */;
	struct uml_pt_regs *cocci_id/* arch/x86/um/fault.c 18 */;
	unsigned long cocci_id/* arch/x86/um/fault.c 18 */;
	int cocci_id/* arch/x86/um/fault.c 18 */;
	const struct exception_table_entry *cocci_id/* arch/x86/um/fault.c 15 */(unsigned long add);
}
