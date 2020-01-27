cocci_test_suite() {
	size_t cocci_id/* arch/x86/events/intel/bts.c 88 */;
	struct page *cocci_id/* arch/x86/events/intel/bts.c 84 */;
	bool cocci_id/* arch/x86/events/intel/bts.c 81 */;
	void **cocci_id/* arch/x86/events/intel/bts.c 80 */;
	struct pmu cocci_id/* arch/x86/events/intel/bts.c 64 */;
	struct hw_perf_event *cocci_id/* arch/x86/events/intel/bts.c 517 */;
	struct cpu_hw_events *cocci_id/* arch/x86/events/intel/bts.c 516 */;
	struct bts_buffer {
		size_t real_size;
		unsigned int nr_pages;
		unsigned int nr_bufs;
		unsigned int cur_buf;
		bool snapshot;
		local_t data_size;
		local_t head;
		unsigned long end;
		void **data_pages;
		struct bts_phys buf[0];
	} cocci_id/* arch/x86/events/intel/bts.c 51 */;
	s64 cocci_id/* arch/x86/events/intel/bts.c 450 */;
	struct bts_phys {
		struct page *page;
		unsigned long size;
		unsigned long offset;
		unsigned long displacement;
	} cocci_id/* arch/x86/events/intel/bts.c 44 */;
	struct perf_output_handle *cocci_id/* arch/x86/events/intel/bts.c 369 */;
	enum{BTS_STATE_STOPPED=0, BTS_STATE_INACTIVE, BTS_STATE_ACTIVE,} cocci_id/* arch/x86/events/intel/bts.c 30 */;
	int cocci_id/* arch/x86/events/intel/bts.c 285 */;
	u64 cocci_id/* arch/x86/events/intel/bts.c 230 */;
	struct bts_ctx {
		struct perf_output_handle handle;
		struct debug_store ds_back;
		int state;
	} cocci_id/* arch/x86/events/intel/bts.c 23 */;
	struct bts_buffer *cocci_id/* arch/x86/events/intel/bts.c 229 */;
	struct bts_ctx *cocci_id/* arch/x86/events/intel/bts.c 228 */;
	struct perf_event *cocci_id/* arch/x86/events/intel/bts.c 226 */;
	void cocci_id/* arch/x86/events/intel/bts.c 226 */;
	int cocci_id/* arch/x86/events/intel/bts.c 214 */(struct bts_buffer *buf,
							  struct perf_output_handle *handle);
	struct bts_phys *cocci_id/* arch/x86/events/intel/bts.c 176 */;
	long cocci_id/* arch/x86/events/intel/bts.c 168 */;
	struct debug_store *cocci_id/* arch/x86/events/intel/bts.c 147 */;
	unsigned long cocci_id/* arch/x86/events/intel/bts.c 138 */;
	unsigned int cocci_id/* arch/x86/events/intel/bts.c 138 */;
	void *cocci_id/* arch/x86/events/intel/bts.c 133 */;
	struct bts_buffer cocci_id/* arch/x86/events/intel/bts.c 104 */;
	__typeof__(struct bts_ctx) cocci_id/* /home/jaskaran/lkmp/coccinelle/standard.h 437 */;
}
