cocci_test_suite() {
	u64 cocci_id/* drivers/perf/xgene_pmu.c 984 */;
	struct xgene_pmu_dev {
		struct hw_pmu_info *inf;
		struct xgene_pmu *parent;
		struct pmu pmu;
		u8 max_counters;
	DECLARE_BITMAP(cntr_assign_mask,PMU_MAX_COUNTERS)
		;
		u64 max_period;
		const struct attribute_group **attr_groups;
		struct perf_event *pmu_counter_event[PMU_MAX_COUNTERS];
	} cocci_id/* drivers/perf/xgene_pmu.c 92 */;
	struct pmu *cocci_id/* drivers/perf/xgene_pmu.c 882 */;
	struct hw_pmu_info {
		u32 type;
		u32 enable_mask;
		void __iomem *csr;
	} cocci_id/* drivers/perf/xgene_pmu.c 86 */;
	struct xgene_pmu_dev cocci_id/* drivers/perf/xgene_pmu.c 80 */;
	const struct attribute_group *cocci_id/* drivers/perf/xgene_pmu.c 667 */[];
	struct device_attribute *cocci_id/* drivers/perf/xgene_pmu.c 608 */;
	ssize_t cocci_id/* drivers/perf/xgene_pmu.c 607 */;
	const struct attribute_group cocci_id/* drivers/perf/xgene_pmu.c 584 */;
	struct attribute *cocci_id/* drivers/perf/xgene_pmu.c 434 */[];
	unsigned long cocci_id/* drivers/perf/xgene_pmu.c 284 */;
	struct dev_ext_attribute cocci_id/* drivers/perf/xgene_pmu.c 283 */;
	struct dev_ext_attribute *cocci_id/* drivers/perf/xgene_pmu.c 281 */;
	struct platform_driver cocci_id/* drivers/perf/xgene_pmu.c 1971 */;
	struct list_head *cocci_id/* drivers/perf/xgene_pmu.c 1948 */;
	const struct of_device_id *cocci_id/* drivers/perf/xgene_pmu.c 1838 */;
	const struct xgene_pmu_data *cocci_id/* drivers/perf/xgene_pmu.c 1837 */;
	struct xgene_pmu cocci_id/* drivers/perf/xgene_pmu.c 1804 */;
	struct hlist_node *cocci_id/* drivers/perf/xgene_pmu.c 1802 */;
	const struct acpi_device_id cocci_id/* drivers/perf/xgene_pmu.c 1779 */[];
	const struct of_device_id cocci_id/* drivers/perf/xgene_pmu.c 1772 */[];
	struct dev_ext_attribute cocci_id/* drivers/perf/xgene_pmu.c 177 */[];
	const struct xgene_pmu_ops cocci_id/* drivers/perf/xgene_pmu.c 1738 */;
	const struct xgene_pmu_data cocci_id/* drivers/perf/xgene_pmu.c 1730 */;
	struct device_node *cocci_id/* drivers/perf/xgene_pmu.c 1628 */;
	enum xgene_pmu_dev_type{PMU_TYPE_L3C=0, PMU_TYPE_IOB, PMU_TYPE_IOB_SLOW, PMU_TYPE_MCB, PMU_TYPE_MC,} cocci_id/* drivers/perf/xgene_pmu.c 156 */;
	const struct acpi_device_id *cocci_id/* drivers/perf/xgene_pmu.c 1554 */;
	void **cocci_id/* drivers/perf/xgene_pmu.c 1552 */;
	void *cocci_id/* drivers/perf/xgene_pmu.c 1552 */;
	acpi_status cocci_id/* drivers/perf/xgene_pmu.c 1551 */;
	acpi_handle cocci_id/* drivers/perf/xgene_pmu.c 1551 */;
	enum xgene_pmu_version{PCP_PMU_V1=1, PCP_PMU_V2, PCP_PMU_V3,} cocci_id/* drivers/perf/xgene_pmu.c 150 */;
	struct resource cocci_id/* drivers/perf/xgene_pmu.c 1477 */;
	struct hw_pmu_info *cocci_id/* drivers/perf/xgene_pmu.c 1475 */;
	const union acpi_object *cocci_id/* drivers/perf/xgene_pmu.c 1474 */;
	struct list_head cocci_id/* drivers/perf/xgene_pmu.c 1472 */;
	struct device *cocci_id/* drivers/perf/xgene_pmu.c 1471 */;
	struct acpi_device *cocci_id/* drivers/perf/xgene_pmu.c 1469 */;
	struct xgene_pmu_dev_ctx *cocci_id/* drivers/perf/xgene_pmu.c 1467 */;
	struct resource *cocci_id/* drivers/perf/xgene_pmu.c 1458 */;
	struct acpi_resource *cocci_id/* drivers/perf/xgene_pmu.c 1456 */;
	struct xgene_pmu_data {
		int id;
		u32 data;
	} cocci_id/* drivers/perf/xgene_pmu.c 145 */;
	struct xgene_pmu_dev_ctx {
		char *name;
		struct list_head next;
		struct xgene_pmu_dev *pmu_dev;
		struct hw_pmu_info inf;
	} cocci_id/* drivers/perf/xgene_pmu.c 138 */;
	struct regmap *cocci_id/* drivers/perf/xgene_pmu.c 1376 */;
	unsigned int cocci_id/* drivers/perf/xgene_pmu.c 1285 */;
	struct platform_device *cocci_id/* drivers/perf/xgene_pmu.c 1282 */;
	irqreturn_t cocci_id/* drivers/perf/xgene_pmu.c 1232 */;
	struct perf_event *cocci_id/* drivers/perf/xgene_pmu.c 1218 */;
	struct xgene_pmu {
		struct device *dev;
		struct hlist_node node;
		int version;
		void __iomem *pcppmu_csr;
		u32 mcb_active_mask;
		u32 mc_active_mask;
		u32 l3c_active_mask;
		cpumask_t cpu;
		int irq;
		raw_spinlock_t lock;
		const struct xgene_pmu_ops *ops;
		struct list_head l3cpmus;
		struct list_head iobpmus;
		struct list_head mcbpmus;
		struct list_head mcpmus;
	} cocci_id/* drivers/perf/xgene_pmu.c 120 */;
	u32 cocci_id/* drivers/perf/xgene_pmu.c 1196 */;
	void __iomem *cocci_id/* drivers/perf/xgene_pmu.c 1195 */;
	struct xgene_pmu *cocci_id/* drivers/perf/xgene_pmu.c 1194 */;
	struct xgene_pmu_dev *cocci_id/* drivers/perf/xgene_pmu.c 1192 */;
	int cocci_id/* drivers/perf/xgene_pmu.c 1192 */;
	void cocci_id/* drivers/perf/xgene_pmu.c 1192 */;
	struct pmu cocci_id/* drivers/perf/xgene_pmu.c 1109 */;
	char *cocci_id/* drivers/perf/xgene_pmu.c 1093 */;
	struct hw_perf_event *cocci_id/* drivers/perf/xgene_pmu.c 1061 */;
	struct xgene_pmu_ops {
		void (*mask_int)(struct xgene_pmu *pmu);
		void (*unmask_int)(struct xgene_pmu *pmu);
		u64 (*read_counter)(struct xgene_pmu_dev *pmu, int idx);
		void (*write_counter)(struct xgene_pmu_dev *pmu, int idx,
				      u64 val);
		void (*write_evttype)(struct xgene_pmu_dev *pmu_dev, int idx,
				      u32 val);
		void (*write_agentmsk)(struct xgene_pmu_dev *pmu_dev, u32 val);
		void (*write_agent1msk)(struct xgene_pmu_dev *pmu_dev,
					u32 val);
		void (*enable_counter)(struct xgene_pmu_dev *pmu_dev, int idx);
		void (*disable_counter)(struct xgene_pmu_dev *pmu_dev,
					int idx);
		void (*enable_counter_int)(struct xgene_pmu_dev *pmu_dev,
					   int idx);
		void (*disable_counter_int)(struct xgene_pmu_dev *pmu_dev,
					    int idx);
		void (*reset_counters)(struct xgene_pmu_dev *pmu_dev);
		void (*start_counters)(struct xgene_pmu_dev *pmu_dev);
		void (*stop_counters)(struct xgene_pmu_dev *pmu_dev);
	} cocci_id/* drivers/perf/xgene_pmu.c 103 */;
}
