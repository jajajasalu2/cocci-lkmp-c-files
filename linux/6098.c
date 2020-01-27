cocci_test_suite() {
	u64 cocci_id/* drivers/perf/arm-ccn.c 877 */;
	struct arm_ccn_pmu_event *cocci_id/* drivers/perf/arm-ccn.c 793 */;
	unsigned long *cocci_id/* drivers/perf/arm-ccn.c 595 */;
	unsigned long cocci_id/* drivers/perf/arm-ccn.c 595 */;
	const struct attribute_group *cocci_id/* drivers/perf/arm-ccn.c 586 */[];
	ktime_t cocci_id/* drivers/perf/arm-ccn.c 580 */;
	struct device_attribute cocci_id/* drivers/perf/arm-ccn.c 558 */;
	const struct attribute_group cocci_id/* drivers/perf/arm-ccn.c 545 */;
	struct attribute *cocci_id/* drivers/perf/arm-ccn.c 529 */[];
	const char *cocci_id/* drivers/perf/arm-ccn.c 483 */;
	size_t cocci_id/* drivers/perf/arm-ccn.c 483 */;
	u64 *cocci_id/* drivers/perf/arm-ccn.c 477 */;
	struct device_attribute *cocci_id/* drivers/perf/arm-ccn.c 474 */;
	char *cocci_id/* drivers/perf/arm-ccn.c 474 */;
	struct device *cocci_id/* drivers/perf/arm-ccn.c 473 */;
	ssize_t cocci_id/* drivers/perf/arm-ccn.c 473 */;
	struct attribute *cocci_id/* drivers/perf/arm-ccn.c 445 */[ARRAY_SIZE(arm_ccn_pmu_events) + 1];
	struct arm_ccn_pmu_event cocci_id/* drivers/perf/arm-ccn.c 388 */[];
	struct attribute *cocci_id/* drivers/perf/arm-ccn.c 371 */;
	umode_t cocci_id/* drivers/perf/arm-ccn.c 370 */;
	struct kobject *cocci_id/* drivers/perf/arm-ccn.c 370 */;
	struct arm_ccn_pmu_event cocci_id/* drivers/perf/arm-ccn.c 328 */;
	struct arm_ccn_pmu_event {
		struct device_attribute attr;
		u32 type;
		u32 event;
		int num_ports;
		int num_vcs;
		const char *def;
		int mask;
	} cocci_id/* drivers/perf/arm-ccn.c 265 */;
	struct dev_ext_attribute cocci_id/* drivers/perf/arm-ccn.c 222 */;
	struct dev_ext_attribute *cocci_id/* drivers/perf/arm-ccn.c 221 */;
	struct arm_ccn {
		struct device *dev;
		void __iomem *base;
		unsigned int irq;
		unsigned sbas_present:1;
		unsigned sbsx_present:1;
		int num_nodes;
		struct arm_ccn_component *node;
		int num_xps;
		struct arm_ccn_component *xp;
		struct arm_ccn_dt dt;
		int mn_id;
	} cocci_id/* drivers/perf/arm-ccn.c 169 */;
	void __exit cocci_id/* drivers/perf/arm-ccn.c 1572 */;
	void cocci_id/* drivers/perf/arm-ccn.c 1572 */;
	int __init cocci_id/* drivers/perf/arm-ccn.c 1553 */;
	struct platform_driver cocci_id/* drivers/perf/arm-ccn.c 1544 */;
	const struct of_device_id cocci_id/* drivers/perf/arm-ccn.c 1536 */[];
	struct resource *cocci_id/* drivers/perf/arm-ccn.c 1470 */;
	struct platform_device *cocci_id/* drivers/perf/arm-ccn.c 1467 */;
	struct arm_ccn_dt {
		int id;
		void __iomem *base;
		spinlock_t config_lock;
	DECLARE_BITMAP(pmu_counters_mask,CCN_NUM_PMU_EVENT_COUNTERS+1)
		;
		struct {
			struct arm_ccn_component *source;
			struct perf_event *event;
		} pmu_counters[CCN_NUM_PMU_EVENT_COUNTERS + 1];
		struct {
			u64 l,h;
		} cmp_mask[CCN_NUM_PMU_EVENT_COUNTERS + CCN_NUM_PREDEFINED_MASKS];
		struct hrtimer hrtimer;
		unsigned int cpu;
		struct hlist_node node;
		struct pmu pmu;
	} cocci_id/* drivers/perf/arm-ccn.c 145 */;
	u32 cocci_id/* drivers/perf/arm-ccn.c 1439 */[6];
	void *cocci_id/* drivers/perf/arm-ccn.c 1435 */;
	const u32 *cocci_id/* drivers/perf/arm-ccn.c 1421 */;
	irqreturn_t cocci_id/* drivers/perf/arm-ccn.c 1420 */;
	struct arm_ccn *cocci_id/* drivers/perf/arm-ccn.c 1420 */;
	struct arm_ccn_component *cocci_id/* drivers/perf/arm-ccn.c 1388 */;
	void __iomem *cocci_id/* drivers/perf/arm-ccn.c 1350 */;
	u32 cocci_id/* drivers/perf/arm-ccn.c 1349 */;
	int (*cocci_id/* drivers/perf/arm-ccn.c 1343 */)(struct arm_ccn *ccn,
							 int region,
							 void __iomem *base,
							 u32 type, u32 id);
	int cocci_id/* drivers/perf/arm-ccn.c 1342 */;
	struct arm_ccn_component {
		void __iomem *base;
		u32 type;
	DECLARE_BITMAP(pmu_events_mask,CCN_NUM_PMU_EVENTS)
		;
		union {
			struct {
			DECLARE_BITMAP(dt_cmp_mask,CCN_NUM_XP_WATCHPOINTS)
				;
			} xp;
		};
	} cocci_id/* drivers/perf/arm-ccn.c 130 */;
	struct pmu cocci_id/* drivers/perf/arm-ccn.c 1271 */;
	struct arm_ccn cocci_id/* drivers/perf/arm-ccn.c 1208 */;
	struct arm_ccn_dt cocci_id/* drivers/perf/arm-ccn.c 1207 */;
	struct arm_ccn_dt *cocci_id/* drivers/perf/arm-ccn.c 1207 */;
	struct hlist_node *cocci_id/* drivers/perf/arm-ccn.c 1205 */;
	unsigned int cocci_id/* drivers/perf/arm-ccn.c 1205 */;
	enum hrtimer_restart cocci_id/* drivers/perf/arm-ccn.c 1190 */;
	struct hrtimer *cocci_id/* drivers/perf/arm-ccn.c 1190 */;
	struct pmu *cocci_id/* drivers/perf/arm-ccn.c 1153 */;
	struct hw_perf_event *cocci_id/* drivers/perf/arm-ccn.c 1101 */;
	struct perf_event *cocci_id/* drivers/perf/arm-ccn.c 1098 */;
}
