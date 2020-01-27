cocci_test_suite() {
	int *cocci_id/* tools/perf/arch/arm/util/cs-etm.c 876 */;
	struct cs_etm_recording cocci_id/* tools/perf/arch/arm/util/cs-etm.c 775 */;
	struct auxtrace_mmap *cocci_id/* tools/perf/arch/arm/util/cs-etm.c 768 */;
	struct auxtrace_record *cocci_id/* tools/perf/arch/arm/util/cs-etm.c 767 */;
	u64 *cocci_id/* tools/perf/arch/arm/util/cs-etm.c 720 */;
	u64 cocci_id/* tools/perf/arch/arm/util/cs-etm.c 717 */;
	size_t cocci_id/* tools/perf/arch/arm/util/cs-etm.c 717 */;
	unsigned char *cocci_id/* tools/perf/arch/arm/util/cs-etm.c 716 */;
	bool cocci_id/* tools/perf/arch/arm/util/cs-etm.c 705 */;
	bool *cocci_id/* tools/perf/arch/arm/util/cs-etm.c 693 */;
	struct cs_etm_recording *cocci_id/* tools/perf/arch/arm/util/cs-etm.c 691 */;
	int cocci_id/* tools/perf/arch/arm/util/cs-etm.c 691 */;
	struct perf_cpu_map *cocci_id/* tools/perf/arch/arm/util/cs-etm.c 642 */;
	struct perf_session *cocci_id/* tools/perf/arch/arm/util/cs-etm.c 635 */;
	bool cocci_id/* tools/perf/arch/arm/util/cs-etm.c 59 */(struct auxtrace_record *itr,
								int cpu);
	u32 cocci_id/* tools/perf/arch/arm/util/cs-etm.c 573 */;
	struct perf_record_auxtrace_info *cocci_id/* tools/perf/arch/arm/util/cs-etm.c 571 */;
	u32 *cocci_id/* tools/perf/arch/arm/util/cs-etm.c 569 */;
	void cocci_id/* tools/perf/arch/arm/util/cs-etm.c 569 */;
	unsigned int cocci_id/* tools/perf/arch/arm/util/cs-etm.c 557 */;
	char cocci_id/* tools/perf/arch/arm/util/cs-etm.c 555 */[PATH_MAX];
	const char *cocci_id/* tools/perf/arch/arm/util/cs-etm.c 553 */;
	const char *cocci_id/* tools/perf/arch/arm/util/cs-etm.c 51 */[CS_ETMV4_PRIV_MAX];
	const char *cocci_id/* tools/perf/arch/arm/util/cs-etm.c 46 */[CS_ETM_PRIV_MAX];
	struct evsel *cocci_id/* tools/perf/arch/arm/util/cs-etm.c 442 */;
	struct evlist *cocci_id/* tools/perf/arch/arm/util/cs-etm.c 441 */;
	struct perf_pmu *cocci_id/* tools/perf/arch/arm/util/cs-etm.c 440 */;
	struct cs_etm_recording {
		struct auxtrace_record itr;
		struct perf_pmu *cs_etm_pmu;
		struct evlist *evlist;
		int wrapped_cnt;
		bool *wrapped;
		bool snapshot_mode;
		size_t snapshot_size;
	} cocci_id/* tools/perf/arch/arm/util/cs-etm.c 36 */;
	struct perf_evsel_config_term *cocci_id/* tools/perf/arch/arm/util/cs-etm.c 218 */;
	char cocci_id/* tools/perf/arch/arm/util/cs-etm.c 217 */[BUFSIZ];
	char *cocci_id/* tools/perf/arch/arm/util/cs-etm.c 199 */;
	unsigned long long cocci_id/* tools/perf/arch/arm/util/cs-etm.c 198 */;
	struct record_opts *cocci_id/* tools/perf/arch/arm/util/cs-etm.c 193 */;
}
