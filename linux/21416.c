cocci_test_suite() {
	unsigned long cocci_id/* arch/arm64/kernel/perf_callchain.c 75 */;
	struct compat_frame_tail cocci_id/* arch/arm64/kernel/perf_callchain.c 74 */;
	struct compat_frame_tail __user *cocci_id/* arch/arm64/kernel/perf_callchain.c 70 */;
	struct compat_frame_tail {
		compat_uptr_t fp;
		u32 sp;
		u32 lr;
	}__attribute__((packed)) cocci_id/* arch/arm64/kernel/perf_callchain.c 64 */;
	struct frame_tail cocci_id/* arch/arm64/kernel/perf_callchain.c 26 */;
	struct stackframe cocci_id/* arch/arm64/kernel/perf_callchain.c 150 */;
	struct pt_regs *cocci_id/* arch/arm64/kernel/perf_callchain.c 148 */;
	void cocci_id/* arch/arm64/kernel/perf_callchain.c 147 */;
	struct perf_callchain_entry_ctx *cocci_id/* arch/arm64/kernel/perf_callchain.c 142 */;
	struct stackframe *cocci_id/* arch/arm64/kernel/perf_callchain.c 140 */;
	void *cocci_id/* arch/arm64/kernel/perf_callchain.c 140 */;
	int cocci_id/* arch/arm64/kernel/perf_callchain.c 140 */;
	struct frame_tail {
		struct frame_tail __user *fp;
		unsigned long lr;
	}__attribute__((packed)) cocci_id/* arch/arm64/kernel/perf_callchain.c 13 */;
	struct frame_tail __user *cocci_id/* arch/arm64/kernel/perf_callchain.c 114 */;
}
