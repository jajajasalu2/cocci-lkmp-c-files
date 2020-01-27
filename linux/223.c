cocci_test_suite() {
	const struct bpf_prog_ops cocci_id/* kernel/trace/bpf_trace.c 877 */;
	const struct bpf_verifier_ops cocci_id/* kernel/trace/bpf_trace.c 872 */;
	struct pt_regs cocci_id/* kernel/trace/bpf_trace.c 856 */;
	struct bpf_insn_access_aux *cocci_id/* kernel/trace/bpf_trace.c 854 */;
	enum bpf_access_type cocci_id/* kernel/trace/bpf_trace.c 852 */;
	enum bpf_func_id cocci_id/* kernel/trace/bpf_trace.c 831 */;
	const struct bpf_prog *cocci_id/* kernel/trace/bpf_trace.c 831 */;
	struct trace_event_call *cocci_id/* kernel/trace/bpf_trace.c 79 */;
	struct send_signal_irq_work cocci_id/* kernel/trace/bpf_trace.c 714 */;
	struct send_signal_irq_work *cocci_id/* kernel/trace/bpf_trace.c 712 */;
	struct irq_work *cocci_id/* kernel/trace/bpf_trace.c 710 */;
	struct send_signal_irq_work {
		struct irq_work irq_work;
		struct task_struct *task;
		u32 sig;
	} cocci_id/* kernel/trace/bpf_trace.c 702 */;
	const struct bpf_func_proto cocci_id/* kernel/trace/bpf_trace.c 694 */;
	long cocci_id/* kernel/trace/bpf_trace.c 670 */;
	bpf_get_current_task cocci_id/* kernel/trace/bpf_trace.c 668 */;
	struct perf_raw_record cocci_id/* kernel/trace/bpf_trace.c 638 */;
	struct perf_raw_frag cocci_id/* kernel/trace/bpf_trace.c 633 */;
	bpf_ctx_copy_t cocci_id/* kernel/trace/bpf_trace.c 630 */;
	u64 cocci_id/* kernel/trace/bpf_trace.c 63 */(u64 r1, u64 r2, u64 r3,
						      u64 r4, u64 r5);
	struct bpf_nested_pt_regs {
		struct pt_regs regs[3];
	} cocci_id/* kernel/trace/bpf_trace.c 623 */;
	struct bpf_trace_sample_data {
		struct perf_sample_data sds[3];
	} cocci_id/* kernel/trace/bpf_trace.c 569 */;
	struct perf_event *cocci_id/* kernel/trace/bpf_trace.c 543 */;
	struct bpf_event_entry *cocci_id/* kernel/trace/bpf_trace.c 542 */;
	unsigned int cocci_id/* kernel/trace/bpf_trace.c 540 */;
	struct bpf_array cocci_id/* kernel/trace/bpf_trace.c 539 */;
	struct bpf_array *cocci_id/* kernel/trace/bpf_trace.c 539 */;
	struct perf_sample_data *cocci_id/* kernel/trace/bpf_trace.c 537 */;
	struct pt_regs *cocci_id/* kernel/trace/bpf_trace.c 536 */;
	struct bpf_map *cocci_id/* kernel/trace/bpf_trace.c 536 */;
	u64 cocci_id/* kernel/trace/bpf_trace.c 535 */;
	const struct bpf_func_proto *cocci_id/* kernel/trace/bpf_trace.c 318 */;
	struct bpf_trace_module {
		struct module *module;
		struct list_head list;
	} cocci_id/* kernel/trace/bpf_trace.c 26 */;
	const bool cocci_id/* kernel/trace/bpf_trace.c 183 */;
	u32 cocci_id/* kernel/trace/bpf_trace.c 182 */;
	const void *cocci_id/* kernel/trace/bpf_trace.c 182 */;
	int __init cocci_id/* kernel/trace/bpf_trace.c 1638 */;
	struct notifier_block cocci_id/* kernel/trace/bpf_trace.c 1634 */;
	struct module *cocci_id/* kernel/trace/bpf_trace.c 1602 */;
	struct bpf_trace_module *cocci_id/* kernel/trace/bpf_trace.c 1601 */;
	struct notifier_block *cocci_id/* kernel/trace/bpf_trace.c 1598 */;
	unsigned long cocci_id/* kernel/trace/bpf_trace.c 1598 */;
	bool cocci_id/* kernel/trace/bpf_trace.c 1540 */;
	const char **cocci_id/* kernel/trace/bpf_trace.c 1537 */;
	const struct perf_event *cocci_id/* kernel/trace/bpf_trace.c 1536 */;
	u32 *cocci_id/* kernel/trace/bpf_trace.c 1536 */;
	void *cocci_id/* kernel/trace/bpf_trace.c 1523 */;
	struct tracepoint *cocci_id/* kernel/trace/bpf_trace.c 1511 */;
	struct bpf_raw_event_map *cocci_id/* kernel/trace/bpf_trace.c 1509 */;
	struct bpf_prog *cocci_id/* kernel/trace/bpf_trace.c 1509 */;
	int cocci_id/* kernel/trace/bpf_trace.c 1509 */;
	u64 *cocci_id/* kernel/trace/bpf_trace.c 1455 */;
	void cocci_id/* kernel/trace/bpf_trace.c 1455 */;
	const char *cocci_id/* kernel/trace/bpf_trace.c 1434 */;
	struct bpf_raw_event_map cocci_id/* kernel/trace/bpf_trace.c 1431 */[];
	struct perf_event_query_bpf cocci_id/* kernel/trace/bpf_trace.c 1393 */;
	struct perf_event_query_bpf __user *cocci_id/* kernel/trace/bpf_trace.c 1392 */;
	void __user *cocci_id/* kernel/trace/bpf_trace.c 1390 */;
	struct bpf_prog_array *cocci_id/* kernel/trace/bpf_trace.c 1322 */;
	struct perf_sample_data cocci_id/* kernel/trace/bpf_trace.c 1283 */;
	struct bpf_perf_event_data_kern cocci_id/* kernel/trace/bpf_trace.c 1279 */;
	struct bpf_perf_event_data cocci_id/* kernel/trace/bpf_trace.c 1278 */;
	struct bpf_insn *cocci_id/* kernel/trace/bpf_trace.c 1272 */;
	const struct bpf_insn *cocci_id/* kernel/trace/bpf_trace.c 1271 */;
	const int cocci_id/* kernel/trace/bpf_trace.c 1236 */;
	struct bpf_raw_tp_regs *cocci_id/* kernel/trace/bpf_trace.c 1042 */;
	struct bpf_raw_tp_regs {
		struct pt_regs regs[3];
	} cocci_id/* kernel/trace/bpf_trace.c 1035 */;
	__typeof__(struct send_signal_irq_work) cocci_id/* /home/jaskaran/lkmp/coccinelle/standard.h 437 */;
	__typeof__(struct bpf_trace_sample_data) cocci_id/* /home/jaskaran/lkmp/coccinelle/standard.h 437 */;
	__typeof__(struct bpf_raw_tp_regs) cocci_id/* /home/jaskaran/lkmp/coccinelle/standard.h 437 */;
	__typeof__(struct bpf_nested_pt_regs) cocci_id/* /home/jaskaran/lkmp/coccinelle/standard.h 437 */;
	__typeof__(int) cocci_id/* /home/jaskaran/lkmp/coccinelle/standard.h 437 */;
}
