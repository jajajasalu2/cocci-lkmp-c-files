cocci_test_suite() {
	struct amd_iommu_event_desc cocci_id/* arch/x86/events/amd/iommu.c 92 */;
	struct amd_iommu_event_desc *cocci_id/* arch/x86/events/amd/iommu.c 91 */;
	struct kobj_attribute *cocci_id/* arch/x86/events/amd/iommu.c 89 */;
	struct kobject *cocci_id/* arch/x86/events/amd/iommu.c 88 */;
	struct amd_iommu_event_desc {
		struct kobj_attribute attr;
		const char *event;
	} cocci_id/* arch/x86/events/amd/iommu.c 83 */;
	unsigned int cocci_id/* arch/x86/events/amd/iommu.c 451 */;
	const struct pmu cocci_id/* arch/x86/events/amd/iommu.c 400 */;
	const struct attribute_group *cocci_id/* arch/x86/events/amd/iommu.c 393 */[];
	struct attribute **cocci_id/* arch/x86/events/amd/iommu.c 377 */;
	int cocci_id/* arch/x86/events/amd/iommu.c 374 */;
	void cocci_id/* arch/x86/events/amd/iommu.c 374 */;
	struct hw_perf_event *cocci_id/* arch/x86/events/amd/iommu.c 361 */;
	struct perf_amd_iommu {
		struct list_head list;
		struct pmu pmu;
		struct amd_iommu *iommu;
		char name[IOMMU_NAME_SIZE];
		u8 max_banks;
		u8 max_counters;
		u64 cntr_assign_mask;
		raw_spinlock_t lock;
	} cocci_id/* arch/x86/events/amd/iommu.c 36 */;
	u64 cocci_id/* arch/x86/events/amd/iommu.c 272 */;
	struct amd_iommu *cocci_id/* arch/x86/events/amd/iommu.c 233 */;
	unsigned long cocci_id/* arch/x86/events/amd/iommu.c 188 */;
	u8 cocci_id/* arch/x86/events/amd/iommu.c 186 */;
	struct perf_amd_iommu *cocci_id/* arch/x86/events/amd/iommu.c 185 */;
	u32 cocci_id/* arch/x86/events/amd/iommu.c 159 */;
	struct perf_amd_iommu cocci_id/* arch/x86/events/amd/iommu.c 156 */;
	struct perf_event *cocci_id/* arch/x86/events/amd/iommu.c 154 */;
	struct attribute_group cocci_id/* arch/x86/events/amd/iommu.c 148 */;
	struct attribute *cocci_id/* arch/x86/events/amd/iommu.c 143 */[];
	char *cocci_id/* arch/x86/events/amd/iommu.c 137 */;
	struct device_attribute *cocci_id/* arch/x86/events/amd/iommu.c 136 */;
	struct device *cocci_id/* arch/x86/events/amd/iommu.c 135 */;
	ssize_t cocci_id/* arch/x86/events/amd/iommu.c 135 */;
	cpumask_t cocci_id/* arch/x86/events/amd/iommu.c 133 */;
	struct amd_iommu_event_desc cocci_id/* arch/x86/events/amd/iommu.c 102 */[];
}
