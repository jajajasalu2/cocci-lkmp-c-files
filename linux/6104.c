cocci_test_suite() {
	int cocci_id/* drivers/perf/arm_spe_pmu.c 98 */[SPE_PMU_CAP_FEAT_MAX];
	struct device *cocci_id/* drivers/perf/arm_spe_pmu.c 930 */;
	struct arm_spe_pmu *cocci_id/* drivers/perf/arm_spe_pmu.c 929 */;
	u64 cocci_id/* drivers/perf/arm_spe_pmu.c 928 */;
	int cocci_id/* drivers/perf/arm_spe_pmu.c 927 */;
	void *cocci_id/* drivers/perf/arm_spe_pmu.c 925 */;
	void cocci_id/* drivers/perf/arm_spe_pmu.c 925 */;
	enum arm_spe_pmu_capabilities{SPE_PMU_CAP_ARCH_INST=0, SPE_PMU_CAP_ERND, SPE_PMU_CAP_FEAT_MAX, SPE_PMU_CAP_CNT_SZ=SPE_PMU_CAP_FEAT_MAX, SPE_PMU_CAP_MIN_IVAL,} cocci_id/* drivers/perf/arm_spe_pmu.c 90 */;
	struct pmu cocci_id/* drivers/perf/arm_spe_pmu.c 885 */;
	atomic_t cocci_id/* drivers/perf/arm_spe_pmu.c 879 */;
	enum arm_spe_pmu_buf_fault_action{SPE_PMU_BUF_FAULT_ACT_SPURIOUS, SPE_PMU_BUF_FAULT_ACT_FATAL, SPE_PMU_BUF_FAULT_ACT_OK,} cocci_id/* drivers/perf/arm_spe_pmu.c 83 */;
	struct page **cocci_id/* drivers/perf/arm_spe_pmu.c 821 */;
	bool cocci_id/* drivers/perf/arm_spe_pmu.c 818 */;
	void **cocci_id/* drivers/perf/arm_spe_pmu.c 817 */;
	enum cpuhp_state cocci_id/* drivers/perf/arm_spe_pmu.c 81 */;
	struct hw_perf_event *cocci_id/* drivers/perf/arm_spe_pmu.c 791 */;
	irqreturn_t cocci_id/* drivers/perf/arm_spe_pmu.c 606 */;
	const char *cocci_id/* drivers/perf/arm_spe_pmu.c 539 */;
	enum arm_spe_pmu_buf_fault_action cocci_id/* drivers/perf/arm_spe_pmu.c 536 */;
	struct arm_spe_pmu {
		struct pmu pmu;
		struct platform_device *pdev;
		cpumask_t supported_cpus;
		struct hlist_node hotplug_node;
		int irq;
		u16 min_period;
		u16 counter_sz;
#define SPE_PMU_FEAT_FILT_EVT (1UL << 0)
#define SPE_PMU_FEAT_FILT_TYP (1UL << 1)
#define SPE_PMU_FEAT_FILT_LAT (1UL << 2)
#define SPE_PMU_FEAT_ARCH_INST (1UL << 3)
#define SPE_PMU_FEAT_LDS (1UL << 4)
#define SPE_PMU_FEAT_ERND (1UL << 5)
#define SPE_PMU_FEAT_DEV_PROBED (1UL << 63)
									u64 features;
		u16 max_record_sz;
		u16 align;
		struct perf_output_handle __percpu *handle;
	} cocci_id/* drivers/perf/arm_spe_pmu.c 50 */;
	struct arm_spe_pmu_buf {
		int nr_pages;
		bool snapshot;
		void *base;
	} cocci_id/* drivers/perf/arm_spe_pmu.c 44 */;
	unsigned long cocci_id/* drivers/perf/arm_spe_pmu.c 410 */;
	const u64 cocci_id/* drivers/perf/arm_spe_pmu.c 390 */;
	struct arm_spe_pmu_buf *cocci_id/* drivers/perf/arm_spe_pmu.c 389 */;
	struct perf_output_handle *cocci_id/* drivers/perf/arm_spe_pmu.c 386 */;
	struct perf_event *cocci_id/* drivers/perf/arm_spe_pmu.c 283 */;
	struct perf_event_attr *cocci_id/* drivers/perf/arm_spe_pmu.c 264 */;
	const struct attribute_group *cocci_id/* drivers/perf/arm_spe_pmu.c 254 */[];
	struct attribute *cocci_id/* drivers/perf/arm_spe_pmu.c 245 */[];
	struct attribute_group cocci_id/* drivers/perf/arm_spe_pmu.c 149 */;
	struct dev_ext_attribute cocci_id/* drivers/perf/arm_spe_pmu.c 134 */[];
	long cocci_id/* drivers/perf/arm_spe_pmu.c 127 */;
	struct dev_ext_attribute cocci_id/* drivers/perf/arm_spe_pmu.c 126 */;
	void __exit cocci_id/* drivers/perf/arm_spe_pmu.c 1254 */;
	struct dev_ext_attribute *cocci_id/* drivers/perf/arm_spe_pmu.c 125 */;
	int __init cocci_id/* drivers/perf/arm_spe_pmu.c 1236 */;
	struct platform_driver cocci_id/* drivers/perf/arm_spe_pmu.c 1226 */;
	char *cocci_id/* drivers/perf/arm_spe_pmu.c 122 */;
	struct device_attribute *cocci_id/* drivers/perf/arm_spe_pmu.c 121 */;
	ssize_t cocci_id/* drivers/perf/arm_spe_pmu.c 120 */;
	typeof(*spe_pmu->handle) cocci_id/* drivers/perf/arm_spe_pmu.c 1188 */;
	struct platform_device *cocci_id/* drivers/perf/arm_spe_pmu.c 1167 */;
	const struct platform_device_id cocci_id/* drivers/perf/arm_spe_pmu.c 1161 */[];
	const struct of_device_id cocci_id/* drivers/perf/arm_spe_pmu.c 1155 */[];
	cpumask_t *cocci_id/* drivers/perf/arm_spe_pmu.c 1098 */;
	struct arm_spe_pmu cocci_id/* drivers/perf/arm_spe_pmu.c 1075 */;
	struct hlist_node *cocci_id/* drivers/perf/arm_spe_pmu.c 1071 */;
	unsigned int cocci_id/* drivers/perf/arm_spe_pmu.c 1071 */;
	u32 cocci_id/* drivers/perf/arm_spe_pmu.c 103 */;
}
