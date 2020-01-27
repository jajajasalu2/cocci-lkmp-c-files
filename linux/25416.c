cocci_test_suite() {
	struct perf_tsc_conversion cocci_id/* tools/perf/arch/x86/util/intel-bts.c 71 */;
	struct perf_event_mmap_page *cocci_id/* tools/perf/arch/x86/util/intel-bts.c 70 */;
	struct perf_pmu *cocci_id/* tools/perf/arch/x86/util/intel-bts.c 69 */;
	struct perf_record_auxtrace_info *cocci_id/* tools/perf/arch/x86/util/intel-bts.c 64 */;
	struct perf_session *cocci_id/* tools/perf/arch/x86/util/intel-bts.c 63 */;
	struct evlist *cocci_id/* tools/perf/arch/x86/util/intel-bts.c 57 */;
	struct branch {
		u64 from;
		u64 to;
		u64 misc;
	} cocci_id/* tools/perf/arch/x86/util/intel-bts.c 49 */;
	struct branch cocci_id/* tools/perf/arch/x86/util/intel-bts.c 460 */;
	int *cocci_id/* tools/perf/arch/x86/util/intel-bts.c 430 */;
	struct evsel *cocci_id/* tools/perf/arch/x86/util/intel-bts.c 420 */;
	struct intel_bts_recording {
		struct auxtrace_record itr;
		struct perf_pmu *intel_bts_pmu;
		struct evlist *evlist;
		bool snapshot_mode;
		size_t snapshot_size;
		int snapshot_ref_cnt;
		struct intel_bts_snapshot_ref *snapshot_refs;
	} cocci_id/* tools/perf/arch/x86/util/intel-bts.c 39 */;
	size_t cocci_id/* tools/perf/arch/x86/util/intel-bts.c 374 */;
	bool cocci_id/* tools/perf/arch/x86/util/intel-bts.c 370 */;
	struct intel_bts_recording cocci_id/* tools/perf/arch/x86/util/intel-bts.c 369 */;
	u64 *cocci_id/* tools/perf/arch/x86/util/intel-bts.c 366 */;
	struct auxtrace_mmap *cocci_id/* tools/perf/arch/x86/util/intel-bts.c 365 */;
	unsigned char *cocci_id/* tools/perf/arch/x86/util/intel-bts.c 365 */;
	struct auxtrace_record *cocci_id/* tools/perf/arch/x86/util/intel-bts.c 364 */;
	struct intel_bts_snapshot_ref {
		void *ref_buf;
		size_t ref_offset;
		bool wrapped;
	} cocci_id/* tools/perf/arch/x86/util/intel-bts.c 33 */;
	void cocci_id/* tools/perf/arch/x86/util/intel-bts.c 303 */;
	struct intel_bts_snapshot_ref *cocci_id/* tools/perf/arch/x86/util/intel-bts.c 283 */;
	const size_t cocci_id/* tools/perf/arch/x86/util/intel-bts.c 281 */;
	struct intel_bts_snapshot_ref cocci_id/* tools/perf/arch/x86/util/intel-bts.c 281 */;
	struct intel_bts_recording *cocci_id/* tools/perf/arch/x86/util/intel-bts.c 278 */;
	int cocci_id/* tools/perf/arch/x86/util/intel-bts.c 278 */;
	u64 cocci_id/* tools/perf/arch/x86/util/intel-bts.c 273 */;
	char *cocci_id/* tools/perf/arch/x86/util/intel-bts.c 257 */;
	unsigned long long cocci_id/* tools/perf/arch/x86/util/intel-bts.c 256 */;
	const char *cocci_id/* tools/perf/arch/x86/util/intel-bts.c 252 */;
	struct record_opts *cocci_id/* tools/perf/arch/x86/util/intel-bts.c 251 */;
	const struct perf_cpu_map *cocci_id/* tools/perf/arch/x86/util/intel-bts.c 113 */;
}
