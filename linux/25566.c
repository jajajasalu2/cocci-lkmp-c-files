cocci_test_suite() {
	struct perf_sample *cocci_id/* tools/perf/util/arm-spe.c 97 */;
	const char *cocci_id/* tools/perf/util/arm-spe.c 56 */;
	char cocci_id/* tools/perf/util/arm-spe.c 55 */[ARM_SPE_PKT_DESC_MAX];
	int cocci_id/* tools/perf/util/arm-spe.c 54 */;
	struct arm_spe_pkt cocci_id/* tools/perf/util/arm-spe.c 52 */;
	unsigned char *cocci_id/* tools/perf/util/arm-spe.c 50 */;
	size_t cocci_id/* tools/perf/util/arm-spe.c 50 */;
	struct arm_spe *cocci_id/* tools/perf/util/arm-spe.c 49 */;
	void cocci_id/* tools/perf/util/arm-spe.c 49 */;
	struct arm_spe_queue {
		struct arm_spe *spe;
		unsigned int queue_nr;
		struct auxtrace_buffer *buffer;
		bool on_heap;
		bool done;
		pid_t pid;
		pid_t tid;
		int cpu;
	} cocci_id/* tools/perf/util/arm-spe.c 38 */;
	struct arm_spe {
		struct auxtrace auxtrace;
		struct auxtrace_queues queues;
		struct auxtrace_heap heap;
		u32 auxtrace_type;
		struct perf_session *session;
		struct machine *machine;
		u32 pmu_type;
	} cocci_id/* tools/perf/util/arm-spe.c 28 */;
	struct perf_record_auxtrace_info cocci_id/* tools/perf/util/arm-spe.c 199 */;
	struct perf_record_auxtrace_info *cocci_id/* tools/perf/util/arm-spe.c 194 */;
	__u64 *cocci_id/* tools/perf/util/arm-spe.c 183 */;
	const char *const cocci_id/* tools/perf/util/arm-spe.c 179 */[];
	struct arm_spe cocci_id/* tools/perf/util/arm-spe.c 170 */;
	unsigned int cocci_id/* tools/perf/util/arm-spe.c 159 */;
	struct auxtrace_queues *cocci_id/* tools/perf/util/arm-spe.c 158 */;
	struct arm_spe_queue *cocci_id/* tools/perf/util/arm-spe.c 147 */;
	void *cocci_id/* tools/perf/util/arm-spe.c 145 */;
	struct perf_tool *cocci_id/* tools/perf/util/arm-spe.c 140 */;
	struct perf_session *cocci_id/* tools/perf/util/arm-spe.c 139 */;
	off_t cocci_id/* tools/perf/util/arm-spe.c 110 */;
	struct auxtrace_buffer *cocci_id/* tools/perf/util/arm-spe.c 109 */;
	union perf_event *cocci_id/* tools/perf/util/arm-spe.c 104 */;
}
