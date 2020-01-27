cocci_test_suite() {
	struct pt_regs *cocci_id/* arch/powerpc/perf/core-fsl-emb.c 655 */;
	struct perf_sample_data cocci_id/* arch/powerpc/perf/core-fsl-emb.c 646 */;
	struct pmu cocci_id/* arch/powerpc/perf/core-fsl-emb.c 586 */;
	struct perf_event *cocci_id/* arch/powerpc/perf/core-fsl-emb.c 485 */[MAX_HWEVENTS];
	void cocci_id/* arch/powerpc/perf/core-fsl-emb.c 47 */(struct pt_regs *regs);
	u64 *cocci_id/* arch/powerpc/perf/core-fsl-emb.c 455 */;
	void cocci_id/* arch/powerpc/perf/core-fsl-emb.c 350 */;
	s64 cocci_id/* arch/powerpc/perf/core-fsl-emb.c 323 */;
	atomic_t cocci_id/* arch/powerpc/perf/core-fsl-emb.c 30 */;
	u64 cocci_id/* arch/powerpc/perf/core-fsl-emb.c 294 */;
	struct cpu_hw_events *cocci_id/* arch/powerpc/perf/core-fsl-emb.c 291 */;
	struct fsl_emb_pmu *cocci_id/* arch/powerpc/perf/core-fsl-emb.c 27 */;
	struct perf_event *cocci_id/* arch/powerpc/perf/core-fsl-emb.c 265 */[];
	struct perf_event *cocci_id/* arch/powerpc/perf/core-fsl-emb.c 264 */;
	int cocci_id/* arch/powerpc/perf/core-fsl-emb.c 264 */;
	unsigned long cocci_id/* arch/powerpc/perf/core-fsl-emb.c 206 */;
	struct pmu *cocci_id/* arch/powerpc/perf/core-fsl-emb.c 203 */;
	struct cpu_hw_events {
		int n_events;
		int disabled;
		u8 pmcs_enabled;
		struct perf_event *event[MAX_HWEVENTS];
	} cocci_id/* arch/powerpc/perf/core-fsl-emb.c 19 */;
	__typeof__(struct cpu_hw_events) cocci_id/* /home/jaskaran/lkmp/coccinelle/standard.h 437 */;
}
