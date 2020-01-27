cocci_test_suite() {
	struct pmu cocci_id/* drivers/perf/qcom_l2_pmu.c 952 */;
	struct platform_device *cocci_id/* drivers/perf/qcom_l2_pmu.c 939 */;
	struct acpi_device *cocci_id/* drivers/perf/qcom_l2_pmu.c 890 */;
	struct l2cache_pmu cocci_id/* drivers/perf/qcom_l2_pmu.c 854 */;
	cpumask_t cocci_id/* drivers/perf/qcom_l2_pmu.c 851 */;
	struct hlist_node *cocci_id/* drivers/perf/qcom_l2_pmu.c 847 */;
	const struct acpi_device_id cocci_id/* drivers/perf/qcom_l2_pmu.c 761 */[];
	const struct attribute_group *cocci_id/* drivers/perf/qcom_l2_pmu.c 750 */[];
	struct perf_pmu_events_attr cocci_id/* drivers/perf/qcom_l2_pmu.c 725 */[];
	struct perf_pmu_events_attr cocci_id/* drivers/perf/qcom_l2_pmu.c 720 */;
	struct perf_pmu_events_attr *cocci_id/* drivers/perf/qcom_l2_pmu.c 718 */;
	struct attribute_group cocci_id/* drivers/perf/qcom_l2_pmu.c 694 */;
	struct attribute *cocci_id/* drivers/perf/qcom_l2_pmu.c 689 */[];
	struct device_attribute cocci_id/* drivers/perf/qcom_l2_pmu.c 686 */;
	char *cocci_id/* drivers/perf/qcom_l2_pmu.c 679 */;
	struct device_attribute *cocci_id/* drivers/perf/qcom_l2_pmu.c 678 */;
	struct device *cocci_id/* drivers/perf/qcom_l2_pmu.c 677 */;
	ssize_t cocci_id/* drivers/perf/qcom_l2_pmu.c 677 */;
	struct pmu *cocci_id/* drivers/perf/qcom_l2_pmu.c 475 */;
	irqreturn_t cocci_id/* drivers/perf/qcom_l2_pmu.c 427 */;
	void *cocci_id/* drivers/perf/qcom_l2_pmu.c 427 */;
	struct hw_perf_event *cocci_id/* drivers/perf/qcom_l2_pmu.c 419 */;
	struct perf_event *cocci_id/* drivers/perf/qcom_l2_pmu.c 417 */;
	unsigned int cocci_id/* drivers/perf/qcom_l2_pmu.c 387 */;
	bool cocci_id/* drivers/perf/qcom_l2_pmu.c 334 */;
	unsigned long cocci_id/* drivers/perf/qcom_l2_pmu.c 291 */;
	struct cluster_pmu *cocci_id/* drivers/perf/qcom_l2_pmu.c 285 */;
	u32 cocci_id/* drivers/perf/qcom_l2_pmu.c 255 */;
	void cocci_id/* drivers/perf/qcom_l2_pmu.c 255 */;
	u64 cocci_id/* drivers/perf/qcom_l2_pmu.c 238 */;
	struct l2cache_pmu *cocci_id/* drivers/perf/qcom_l2_pmu.c 206 */;
	int cocci_id/* drivers/perf/qcom_l2_pmu.c 206 */;
	struct cluster_pmu {
		struct list_head next;
		struct perf_event *events[MAX_L2_CTRS];
		struct l2cache_pmu *l2cache_pmu;
	DECLARE_BITMAP(used_counters,MAX_L2_CTRS)
		;
	DECLARE_BITMAP(used_groups,L2_EVT_GROUP_MAX+1)
		;
		int irq;
		int cluster_id;
		int on_cpu;
		cpumask_t cluster_cpus;
		spinlock_t pmu_lock;
	} cocci_id/* drivers/perf/qcom_l2_pmu.c 177 */;
	struct l2cache_pmu {
		struct hlist_node node;
		u32 num_pmus;
		struct pmu pmu;
		int num_counters;
		cpumask_t cpumask;
		struct platform_device *pdev;
		struct cluster_pmu *__percpu*pmu_cluster;
		struct list_head clusters;
	} cocci_id/* drivers/perf/qcom_l2_pmu.c 151 */;
	struct cluster_pmu cocci_id/* drivers/perf/qcom_l2_pmu.c 145 */;
	int __init cocci_id/* drivers/perf/qcom_l2_pmu.c 1036 */;
	struct platform_driver cocci_id/* drivers/perf/qcom_l2_pmu.c 1027 */;
}
