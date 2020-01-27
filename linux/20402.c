cocci_test_suite() {
	struct ftrace_ops *cocci_id/* arch/x86/kernel/ftrace.c 967 */;
	void cocci_id/* arch/x86/kernel/ftrace.c 967 */;
	void cocci_id/* arch/x86/kernel/ftrace.c 920 */(unsigned long self_addr,
							unsigned long *parent,
							unsigned long frame_pointer);
	union ftrace_code_union cocci_id/* arch/x86/kernel/ftrace.c 904 */;
	unsigned int cocci_id/* arch/x86/kernel/ftrace.c 865 */;
	unsigned char *cocci_id/* arch/x86/kernel/ftrace.c 862 */;
	ftrace_func_t cocci_id/* arch/x86/kernel/ftrace.c 861 */;
	union ftrace_op_code_union cocci_id/* arch/x86/kernel/ftrace.c 759 */;
	const unsigned char cocci_id/* arch/x86/kernel/ftrace.c 758 */[];
	unsigned long *cocci_id/* arch/x86/kernel/ftrace.c 754 */;
	unsigned int *cocci_id/* arch/x86/kernel/ftrace.c 745 */;
	union ftrace_op_code_union {
		char code[OP_REF_SIZE];
		struct {
			char op[3];
			int offset;
		}__attribute__((packed));
	} cocci_id/* arch/x86/kernel/ftrace.c 734 */;
	void cocci_id/* arch/x86/kernel/ftrace.c 719 */(void);
	int __init cocci_id/* arch/x86/kernel/ftrace.c 688 */;
	long cocci_id/* arch/x86/kernel/ftrace.c 68 */;
	union ftrace_code_union {
		char code[MCOUNT_INSN_SIZE];
		struct {
			unsigned char op;
			int offset;
		}__attribute__((packed));
	} cocci_id/* arch/x86/kernel/ftrace.c 60 */;
	struct ftrace_rec_iter *cocci_id/* arch/x86/kernel/ftrace.c 581 */;
	bool cocci_id/* arch/x86/kernel/ftrace.c 376 */;
	struct dyn_ftrace *cocci_id/* arch/x86/kernel/ftrace.c 376 */;
	const unsigned char *cocci_id/* arch/x86/kernel/ftrace.c 358 */;
	void *cocci_id/* arch/x86/kernel/ftrace.c 344 */;
	unsigned char cocci_id/* arch/x86/kernel/ftrace.c 342 */;
	unsigned char cocci_id/* arch/x86/kernel/ftrace.c 341 */[MCOUNT_INSN_SIZE];
	const char *cocci_id/* arch/x86/kernel/ftrace.c 339 */;
	unsigned long cocci_id/* arch/x86/kernel/ftrace.c 339 */;
	int cocci_id/* arch/x86/kernel/ftrace.c 339 */;
	struct pt_regs *cocci_id/* arch/x86/kernel/ftrace.c 304 */;
	int cocci_id/* arch/x86/kernel/ftrace.c 224 */(unsigned long ip,
						       const unsigned char *old_code,
						       const unsigned char *new_code);
	atomic_t cocci_id/* arch/x86/kernel/ftrace.c 222 */;
	struct module *cocci_id/* arch/x86/kernel/ftrace.c 152 */;
}
