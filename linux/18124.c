cocci_test_suite() {
	struct pt_regs *cocci_id/* arch/arm/kernel/perf_callchain.c 99 */;
	void cocci_id/* arch/arm/kernel/perf_callchain.c 98 */;
	struct perf_callchain_entry_ctx *cocci_id/* arch/arm/kernel/perf_callchain.c 93 */;
	void *cocci_id/* arch/arm/kernel/perf_callchain.c 91 */;
	struct stackframe *cocci_id/* arch/arm/kernel/perf_callchain.c 90 */;
	int cocci_id/* arch/arm/kernel/perf_callchain.c 89 */;
	unsigned long cocci_id/* arch/arm/kernel/perf_callchain.c 80 */;
	struct frame_tail __user *cocci_id/* arch/arm/kernel/perf_callchain.c 65 */;
	struct frame_tail cocci_id/* arch/arm/kernel/perf_callchain.c 37 */;
	struct frame_tail {
		struct frame_tail __user *fp;
		unsigned long sp;
		unsigned long lr;
	}__attribute__((packed)) cocci_id/* arch/arm/kernel/perf_callchain.c 23 */;
	struct stackframe cocci_id/* arch/arm/kernel/perf_callchain.c 101 */;
}
