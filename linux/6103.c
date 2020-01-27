cocci_test_suite() {
	struct cci_pmu {
		void __iomem *base;
		void __iomem *ctrl_base;
		struct pmu pmu;
		int cpu;
		int nr_irqs;
		int *irqs;
		unsigned long active_irqs;
		const struct cci_pmu_model *model;
		struct cci_pmu_hw_events hw_events;
		struct platform_device *plat_device;
		int num_cntrs;
		atomic_t active_events;
		struct mutex reserve_mutex;
	} cocci_id/* drivers/perf/arm-cci.c 99 */;
	struct cci_pmu_model cocci_id/* drivers/perf/arm-cci.c 97 */[];
	struct cci_pmu_hw_events *cocci_id/* drivers/perf/arm-cci.c 899 */;
	unsigned long *cocci_id/* drivers/perf/arm-cci.c 896 */;
	struct cci_pmu_model {
		char *name;
		u32 fixed_hw_cntrs;
		u32 num_hw_cntrs;
		u32 cntr_size;
		struct attribute **format_attrs;
		struct attribute **event_attrs;
		struct event_range event_ranges[CCI_IF_MAX];
		int (*validate_hw_event)(struct cci_pmu *, unsigned long);
		int (*get_event_idx)(struct cci_pmu *,
				     struct cci_pmu_hw_events *,
				     unsigned long);
		void (*write_counters)(struct cci_pmu *, unsigned long *);
	} cocci_id/* drivers/perf/arm-cci.c 84 */;
	irq_handler_t cocci_id/* drivers/perf/arm-cci.c 828 */;
	void __maybe_unused cocci_id/* drivers/perf/arm-cci.c 780 */;
	struct cci_pmu cocci_id/* drivers/perf/arm-cci.c 77 */;
	bool __maybe_unused cocci_id/* drivers/perf/arm-cci.c 740 */;
	struct cci_pmu_hw_events {
		struct perf_event **events;
		unsigned long *used_mask;
		raw_spinlock_t pmu_lock;
	} cocci_id/* drivers/perf/arm-cci.c 71 */;
	u32 cocci_id/* drivers/perf/arm-cci.c 687 */;
	struct cci_pmu *cocci_id/* drivers/perf/arm-cci.c 685 */;
	void cocci_id/* drivers/perf/arm-cci.c 685 */;
	struct event_range {
		u32 min;
		u32 max;
	} cocci_id/* drivers/perf/arm-cci.c 66 */;
	enum{CCI_IF_SLAVE, CCI_IF_MASTER,

#ifdef CONFIG_ARM_CCI5xx_PMU
 CCI_IF_GLOBAL,

#endif
 CCI_IF_MAX,} cocci_id/* drivers/perf/arm-cci.c 47 */;
	struct cci_pmu_model *cocci_id/* drivers/perf/arm-cci.c 391 */;
	u8 cocci_id/* drivers/perf/arm-cci.c 336 */;
	struct dev_ext_attribute cocci_id/* drivers/perf/arm-cci.c 308 */;
	struct dev_ext_attribute *cocci_id/* drivers/perf/arm-cci.c 307 */;
	struct device_attribute *cocci_id/* drivers/perf/arm-cci.c 305 */;
	char *cocci_id/* drivers/perf/arm-cci.c 305 */;
	struct device *cocci_id/* drivers/perf/arm-cci.c 304 */;
	ssize_t cocci_id/* drivers/perf/arm-cci.c 304 */;
	struct attribute *cocci_id/* drivers/perf/arm-cci.c 216 */[];
	ssize_t cocci_id/* drivers/perf/arm-cci.c 213 */(struct device *dev,
							 struct device_attribute *attr,
							 char *buf);
	struct platform_driver cocci_id/* drivers/perf/arm-cci.c 1717 */;
	enum cci400_perf_events{CCI400_PMU_CYCLES=0xff,} cocci_id/* drivers/perf/arm-cci.c 169 */;
	void __iomem **cocci_id/* drivers/perf/arm-cci.c 1609 */;
	const struct cci_pmu_model *cocci_id/* drivers/perf/arm-cci.c 1598 */;
	bool cocci_id/* drivers/perf/arm-cci.c 1584 */;
	int *cocci_id/* drivers/perf/arm-cci.c 1584 */;
	const struct of_device_id cocci_id/* drivers/perf/arm-cci.c 1555 */[];
	unsigned int cocci_id/* drivers/perf/arm-cci.c 1444 */;
	struct pmu cocci_id/* drivers/perf/arm-cci.c 1414 */;
	struct platform_device *cocci_id/* drivers/perf/arm-cci.c 1400 */;
	const struct attribute_group *cocci_id/* drivers/perf/arm-cci.c 1393 */[];
	struct dev_ext_attribute cocci_id/* drivers/perf/arm-cci.c 139 */[];
	struct attribute_group cocci_id/* drivers/perf/arm-cci.c 1379 */;
	struct device_attribute cocci_id/* drivers/perf/arm-cci.c 1371 */;
	ssize_t __maybe_unused cocci_id/* drivers/perf/arm-cci.c 135 */(struct device *dev,
									struct device_attribute *attr,
									char *buf);
	atomic_t *cocci_id/* drivers/perf/arm-cci.c 1320 */;
	void cocci_id/* drivers/perf/arm-cci.c 131 */(struct cci_pmu *cci_pmu,
						      unsigned long *mask);
	unsigned long cocci_id/* drivers/perf/arm-cci.c 1307 */;
	struct hw_perf_event *cocci_id/* drivers/perf/arm-cci.c 1283 */;
	struct perf_event *cocci_id/* drivers/perf/arm-cci.c 1281 */;
	int cocci_id/* drivers/perf/arm-cci.c 1281 */;
	struct cci_pmu_hw_events cocci_id/* drivers/perf/arm-cci.c 1258 */;
	unsigned long cocci_id/* drivers/perf/arm-cci.c 1257 */[BITS_TO_LONGS(HW_CNTRS_MAX)];
	enum cci_models{

#ifdef CONFIG_ARM_CCI400_PMU
CCI400_R0, CCI400_R1,

#endif


#ifdef CONFIG_ARM_CCI5xx_PMU
 CCI500_R0, CCI550_R0,

#endif
 CCI_MODEL_MAX,} cocci_id/* drivers/perf/arm-cci.c 119 */;
	struct pmu *cocci_id/* drivers/perf/arm-cci.c 1112 */;
	struct mutex *cocci_id/* drivers/perf/arm-cci.c 1088 */;
	irqreturn_t cocci_id/* drivers/perf/arm-cci.c 1027 */;
	void *cocci_id/* drivers/perf/arm-cci.c 1027 */;
	u64 cocci_id/* drivers/perf/arm-cci.c 1015 */;
}
