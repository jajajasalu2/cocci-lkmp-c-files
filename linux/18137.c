cocci_test_suite() {
	const unsigned cocci_id/* arch/arm/kernel/perf_event_v6.c 86 */[PERF_COUNT_HW_CACHE_MAX][PERF_COUNT_HW_CACHE_OP_MAX][PERF_COUNT_HW_CACHE_RESULT_MAX];
	const unsigned cocci_id/* arch/arm/kernel/perf_event_v6.c 76 */[PERF_COUNT_HW_MAX];
	enum armv6_counters{ARMV6_CYCLE_COUNTER=0, ARMV6_COUNTER0, ARMV6_COUNTER1,} cocci_id/* arch/arm/kernel/perf_event_v6.c 65 */;
	struct platform_driver cocci_id/* arch/arm/kernel/perf_event_v6.c 581 */;
	struct platform_device *cocci_id/* arch/arm/kernel/perf_event_v6.c 575 */;
	const struct pmu_probe_info cocci_id/* arch/arm/kernel/perf_event_v6.c 567 */[];
	const struct of_device_id cocci_id/* arch/arm/kernel/perf_event_v6.c 560 */[];
	struct arm_pmu *cocci_id/* arch/arm/kernel/perf_event_v6.c 507 */;
	int cocci_id/* arch/arm/kernel/perf_event_v6.c 507 */;
	struct perf_event *cocci_id/* arch/arm/kernel/perf_event_v6.c 486 */;
	struct pmu_hw_events *cocci_id/* arch/arm/kernel/perf_event_v6.c 460 */;
	struct hw_perf_event *cocci_id/* arch/arm/kernel/perf_event_v6.c 459 */;
	enum armv6_perf_types{ARMV6_PERFCTR_ICACHE_MISS=0x0, ARMV6_PERFCTR_IBUF_STALL=0x1, ARMV6_PERFCTR_DDEP_STALL=0x2, ARMV6_PERFCTR_ITLB_MISS=0x3, ARMV6_PERFCTR_DTLB_MISS=0x4, ARMV6_PERFCTR_BR_EXEC=0x5, ARMV6_PERFCTR_BR_MISPREDICT=0x6, ARMV6_PERFCTR_INSTR_EXEC=0x7, ARMV6_PERFCTR_DCACHE_HIT=0x9, ARMV6_PERFCTR_DCACHE_ACCESS=0xA, ARMV6_PERFCTR_DCACHE_MISS=0xB, ARMV6_PERFCTR_DCACHE_WBACK=0xC, ARMV6_PERFCTR_SW_PC_CHANGE=0xD, ARMV6_PERFCTR_MAIN_TLB_MISS=0xF, ARMV6_PERFCTR_EXPL_D_ACCESS=0x10, ARMV6_PERFCTR_LSU_FULL_STALL=0x11, ARMV6_PERFCTR_WBUF_DRAINED=0x12, ARMV6_PERFCTR_CPU_CYCLES=0xFF, ARMV6_PERFCTR_NOP=0x20,} cocci_id/* arch/arm/kernel/perf_event_v6.c 43 */;
	struct pt_regs *cocci_id/* arch/arm/kernel/perf_event_v6.c 311 */;
	struct perf_sample_data cocci_id/* arch/arm/kernel/perf_event_v6.c 309 */;
	irqreturn_t cocci_id/* arch/arm/kernel/perf_event_v6.c 305 */;
	u64 cocci_id/* arch/arm/kernel/perf_event_v6.c 236 */;
	enum armv6_counters cocci_id/* arch/arm/kernel/perf_event_v6.c 220 */;
	unsigned long cocci_id/* arch/arm/kernel/perf_event_v6.c 219 */;
	u32 cocci_id/* arch/arm/kernel/perf_event_v6.c 182 */;
	void cocci_id/* arch/arm/kernel/perf_event_v6.c 180 */;
	enum armv6mpcore_perf_types{ARMV6MPCORE_PERFCTR_ICACHE_MISS=0x0, ARMV6MPCORE_PERFCTR_IBUF_STALL=0x1, ARMV6MPCORE_PERFCTR_DDEP_STALL=0x2, ARMV6MPCORE_PERFCTR_ITLB_MISS=0x3, ARMV6MPCORE_PERFCTR_DTLB_MISS=0x4, ARMV6MPCORE_PERFCTR_BR_EXEC=0x5, ARMV6MPCORE_PERFCTR_BR_NOTPREDICT=0x6, ARMV6MPCORE_PERFCTR_BR_MISPREDICT=0x7, ARMV6MPCORE_PERFCTR_INSTR_EXEC=0x8, ARMV6MPCORE_PERFCTR_DCACHE_RDACCESS=0xA, ARMV6MPCORE_PERFCTR_DCACHE_RDMISS=0xB, ARMV6MPCORE_PERFCTR_DCACHE_WRACCESS=0xC, ARMV6MPCORE_PERFCTR_DCACHE_WRMISS=0xD, ARMV6MPCORE_PERFCTR_DCACHE_EVICTION=0xE, ARMV6MPCORE_PERFCTR_SW_PC_CHANGE=0xF, ARMV6MPCORE_PERFCTR_MAIN_TLB_MISS=0x10, ARMV6MPCORE_PERFCTR_EXPL_MEM_ACCESS=0x11, ARMV6MPCORE_PERFCTR_LSU_FULL_STALL=0x12, ARMV6MPCORE_PERFCTR_WBUF_DRAINED=0x13, ARMV6MPCORE_PERFCTR_CPU_CYCLES=0xFF,} cocci_id/* arch/arm/kernel/perf_event_v6.c 116 */;
}
