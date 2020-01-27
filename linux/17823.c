cocci_test_suite() {
	unsigned char cocci_id/* arch/ia64/kernel/ftrace.c 97 */[MCOUNT_INSN_SIZE];
	struct ftrace_call_insn *cocci_id/* arch/ia64/kernel/ftrace.c 83 */;
	void *cocci_id/* arch/ia64/kernel/ftrace.c 83 */;
	unsigned char *cocci_id/* arch/ia64/kernel/ftrace.c 81 */;
	unsigned long cocci_id/* arch/ia64/kernel/ftrace.c 81 */;
	struct ftrace_call_insn {
		u64 dummy1,dummy2;
		u64 dummy3:48;
		u64 imm39_l:16;
		u64 imm39_h:23;
		u64 dummy4:13;
		u64 imm20:20;
		u64 dummy5:3;
		u64 i:1;
		u64 dummy6:4;
	} cocci_id/* arch/ia64/kernel/ftrace.c 69 */;
	unsigned char __attribute__((aligned(8))) cocci_id/* arch/ia64/kernel/ftrace.c 59 */[MCOUNT_INSN_SIZE];
	struct ftrace_orig_insn {
		u64 dummy1,dummy2,dummy3;
		u64 dummy4:64 - 41 + 13;
		u64 imm20:20;
		u64 dummy5:3;
		u64 sign:1;
		u64 dummy6:4;
	} cocci_id/* arch/ia64/kernel/ftrace.c 31 */;
	int __init cocci_id/* arch/ia64/kernel/ftrace.c 199 */;
	void cocci_id/* arch/ia64/kernel/ftrace.c 199 */;
	struct fnptr *cocci_id/* arch/ia64/kernel/ftrace.c 186 */;
	ftrace_func_t cocci_id/* arch/ia64/kernel/ftrace.c 183 */;
	struct dyn_ftrace *cocci_id/* arch/ia64/kernel/ftrace.c 172 */;
	int cocci_id/* arch/ia64/kernel/ftrace.c 172 */;
	char *cocci_id/* arch/ia64/kernel/ftrace.c 163 */;
	struct module *cocci_id/* arch/ia64/kernel/ftrace.c 159 */;
	struct ftrace_orig_insn *cocci_id/* arch/ia64/kernel/ftrace.c 147 */;
	unsigned char __attribute__((aligned(8))) cocci_id/* arch/ia64/kernel/ftrace.c 129 */[MCOUNT_INSN_SIZE];
}
