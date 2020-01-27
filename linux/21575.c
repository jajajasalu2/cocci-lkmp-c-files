cocci_test_suite() {
	struct pt_regs *cocci_id/* arch/riscv/kernel/perf_callchain.c 85 */;
	struct perf_callchain_entry_ctx *cocci_id/* arch/riscv/kernel/perf_callchain.c 84 */;
	void cocci_id/* arch/riscv/kernel/perf_callchain.c 84 */;
	void notrace cocci_id/* arch/riscv/kernel/perf_callchain.c 82 */(struct task_struct *task,
									 struct pt_regs *regs,
									 bool (*fn)(unsigned long, void *),
									 void *arg);
	struct stackframe {
		unsigned long fp;
		unsigned long ra;
	} cocci_id/* arch/riscv/kernel/perf_callchain.c 8 */;
	bool cocci_id/* arch/riscv/kernel/perf_callchain.c 77 */;
	void *cocci_id/* arch/riscv/kernel/perf_callchain.c 77 */;
	unsigned long cocci_id/* arch/riscv/kernel/perf_callchain.c 77 */;
	unsigned long *cocci_id/* arch/riscv/kernel/perf_callchain.c 22 */;
	struct stackframe cocci_id/* arch/riscv/kernel/perf_callchain.c 20 */;
}
