cocci_test_suite() {
	enum retpoline_state_t cocci_id/* tools/perf/util/thread-stack.c 857 */;
	struct comm *cocci_id/* tools/perf/util/thread-stack.c 850 */;
	struct thread_stack {
		struct thread_stack_entry *stack;
		size_t cnt;
		size_t sz;
		u64 trace_nr;
		u64 branch_count;
		u64 insn_count;
		u64 cyc_count;
		u64 kernel_start;
		u64 last_time;
		struct call_return_processor *crp;
		struct comm *comm;
		unsigned int arr_sz;
		enum retpoline_state_t rstate;
	} cocci_id/* tools/perf/util/thread-stack.c 84 */;
	bool cocci_id/* tools/perf/util/thread-stack.c 786 */;
	const char *cocci_id/* tools/perf/util/thread-stack.c 786 */;
	struct symbol *cocci_id/* tools/perf/util/thread-stack.c 613 */;
	struct call_path *cocci_id/* tools/perf/util/thread-stack.c 612 */;
	struct call_path_root *cocci_id/* tools/perf/util/thread-stack.c 611 */;
	struct addr_location *cocci_id/* tools/perf/util/thread-stack.c 608 */;
	struct perf_sample *cocci_id/* tools/perf/util/thread-stack.c 607 */;
	struct thread_stack_entry {
		u64 ret_addr;
		u64 timestamp;
		u64 ref;
		u64 branch_count;
		u64 insn_count;
		u64 cyc_count;
		u64 db_id;
		struct call_path *cp;
		bool no_call;
		bool trace_end;
		bool non_call;
	} cocci_id/* tools/perf/util/thread-stack.c 53 */;
	struct call_return_processor cocci_id/* tools/perf/util/thread-stack.c 506 */;
	void *cocci_id/* tools/perf/util/thread-stack.c 502 */;
	int (*cocci_id/* tools/perf/util/thread-stack.c 501 */)(struct call_return *cr,
								u64 *parent_db_id,
								void *data);
	struct ip_callchain *cocci_id/* tools/perf/util/thread-stack.c 462 */;
	u64 cocci_id/* tools/perf/util/thread-stack.c 456 */;
	void cocci_id/* tools/perf/util/thread-stack.c 429 */;
	u16 cocci_id/* tools/perf/util/thread-stack.c 357 */;
	u32 cocci_id/* tools/perf/util/thread-stack.c 356 */;
	enum retpoline_state_t{RETPOLINE_NONE, X86_RETPOLINE_POSSIBLE, X86_RETPOLINE_DETECTED,} cocci_id/* tools/perf/util/thread-stack.c 33 */;
	struct call_return_processor *cocci_id/* tools/perf/util/thread-stack.c 317 */;
	struct thread_stack *cocci_id/* tools/perf/util/thread-stack.c 315 */;
	struct thread *cocci_id/* tools/perf/util/thread-stack.c 315 */;
	int cocci_id/* tools/perf/util/thread-stack.c 315 */;
	u64 *cocci_id/* tools/perf/util/thread-stack.c 286 */;
	struct call_return cocci_id/* tools/perf/util/thread-stack.c 281 */;
	struct thread_stack_entry *cocci_id/* tools/perf/util/thread-stack.c 280 */;
	size_t cocci_id/* tools/perf/util/thread-stack.c 276 */;
	unsigned int cocci_id/* tools/perf/util/thread-stack.c 192 */;
	struct machine *cocci_id/* tools/perf/util/thread-stack.c 138 */;
	struct thread_stack_entry cocci_id/* tools/perf/util/thread-stack.c 116 */;
}
