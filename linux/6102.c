cocci_test_suite() {
	struct dsu_hw_events {
	DECLARE_BITMAP(used_mask,DSU_PMU_MAX_HW_CNTRS)
		;
		struct perf_event *events[DSU_PMU_MAX_HW_CNTRS];
	} cocci_id/* drivers/perf/arm_dsu_pmu.c 92 */;
	void __exit cocci_id/* drivers/perf/arm_dsu_pmu.c 821 */;
	int __init cocci_id/* drivers/perf/arm_dsu_pmu.c 807 */;
	struct dsu_pmu cocci_id/* drivers/perf/arm_dsu_pmu.c 769 */;
	struct hlist_node *cocci_id/* drivers/perf/arm_dsu_pmu.c 767 */;
	unsigned int cocci_id/* drivers/perf/arm_dsu_pmu.c 767 */;
	struct dev_ext_attribute cocci_id/* drivers/perf/arm_dsu_pmu.c 76 */[];
	struct platform_driver cocci_id/* drivers/perf/arm_dsu_pmu.c 758 */;
	const struct of_device_id cocci_id/* drivers/perf/arm_dsu_pmu.c 753 */[];
	struct pmu cocci_id/* drivers/perf/arm_dsu_pmu.c 716 */;
	atomic_t cocci_id/* drivers/perf/arm_dsu_pmu.c 680 */;
	u32 cocci_id/* drivers/perf/arm_dsu_pmu.c 640 */[2];
	cpumask_t *cocci_id/* drivers/perf/arm_dsu_pmu.c 608 */;
	struct device_node *cocci_id/* drivers/perf/arm_dsu_pmu.c 608 */;
	struct platform_device *cocci_id/* drivers/perf/arm_dsu_pmu.c 588 */;
	struct dsu_hw_events cocci_id/* drivers/perf/arm_dsu_pmu.c 528 */;
	void cocci_id/* drivers/perf/arm_dsu_pmu.c 466 */;
	struct hw_perf_event *cocci_id/* drivers/perf/arm_dsu_pmu.c 444 */;
	struct dsu_hw_events *cocci_id/* drivers/perf/arm_dsu_pmu.c 443 */;
	struct dsu_pmu *cocci_id/* drivers/perf/arm_dsu_pmu.c 442 */;
	struct perf_event *cocci_id/* drivers/perf/arm_dsu_pmu.c 440 */;
	int cocci_id/* drivers/perf/arm_dsu_pmu.c 440 */;
	irqreturn_t cocci_id/* drivers/perf/arm_dsu_pmu.c 390 */;
	void *cocci_id/* drivers/perf/arm_dsu_pmu.c 390 */;
	u64 cocci_id/* drivers/perf/arm_dsu_pmu.c 352 */;
	unsigned long *cocci_id/* drivers/perf/arm_dsu_pmu.c 305 */;
	u32 cocci_id/* drivers/perf/arm_dsu_pmu.c 242 */;
	bool cocci_id/* drivers/perf/arm_dsu_pmu.c 242 */;
	struct cpumask cocci_id/* drivers/perf/arm_dsu_pmu.c 235 */;
	const struct attribute_group *cocci_id/* drivers/perf/arm_dsu_pmu.c 226 */[];
	const struct attribute_group cocci_id/* drivers/perf/arm_dsu_pmu.c 222 */;
	struct attribute *cocci_id/* drivers/perf/arm_dsu_pmu.c 216 */[];
	struct kobject *cocci_id/* drivers/perf/arm_dsu_pmu.c 198 */;
	struct attribute *cocci_id/* drivers/perf/arm_dsu_pmu.c 198 */;
	umode_t cocci_id/* drivers/perf/arm_dsu_pmu.c 197 */;
	const cpumask_t *cocci_id/* drivers/perf/arm_dsu_pmu.c 160 */;
	struct dev_ext_attribute cocci_id/* drivers/perf/arm_dsu_pmu.c 158 */;
	struct dev_ext_attribute *cocci_id/* drivers/perf/arm_dsu_pmu.c 157 */;
	struct pmu *cocci_id/* drivers/perf/arm_dsu_pmu.c 155 */;
	char *cocci_id/* drivers/perf/arm_dsu_pmu.c 153 */;
	struct device_attribute *cocci_id/* drivers/perf/arm_dsu_pmu.c 152 */;
	struct device *cocci_id/* drivers/perf/arm_dsu_pmu.c 151 */;
	ssize_t cocci_id/* drivers/perf/arm_dsu_pmu.c 151 */;
	unsigned long cocci_id/* drivers/perf/arm_dsu_pmu.c 125 */;
	struct dsu_pmu {
		struct pmu pmu;
		struct device *dev;
		raw_spinlock_t pmu_lock;
		struct dsu_hw_events hw_events;
		cpumask_t associated_cpus;
		cpumask_t active_cpu;
		struct hlist_node cpuhp_node;
		s8 num_counters;
		int irq;
	DECLARE_BITMAP(cpmceid_bitmap,DSU_PMU_MAX_COMMON_EVENTS)
		;
	} cocci_id/* drivers/perf/arm_dsu_pmu.c 112 */;
}
