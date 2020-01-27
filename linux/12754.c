cocci_test_suite() {
	const char *cocci_id/* drivers/iommu/iommu.c 97 */;
	iommu_dev_fault_handler_t cocci_id/* drivers/iommu/iommu.c 953 */;
	struct iommu_group_attribute cocci_id/* drivers/iommu/iommu.c 86 */;
	struct group_device *cocci_id/* drivers/iommu/iommu.c 833 */;
	int (*cocci_id/* drivers/iommu/iommu.c 831 */)(struct device *,
						       void *);
	void *cocci_id/* drivers/iommu/iommu.c 830 */;
	dma_addr_t cocci_id/* drivers/iommu/iommu.c 644 */;
	const char *const cocci_id/* drivers/iommu/iommu.c 61 */[];
	void (*cocci_id/* drivers/iommu/iommu.c 581 */)(void *iommu_data);
	struct iommu_group cocci_id/* drivers/iommu/iommu.c 546 */;
	struct iommu_group_attribute {
		struct attribute attr;
		ssize_t (*show)(struct iommu_group *group, char *buf);
		ssize_t (*store)(struct iommu_group *group, const char *buf,
				 size_t count);
	} cocci_id/* drivers/iommu/iommu.c 54 */;
	struct group_device {
		struct list_head list;
		struct device *dev;
		char *name;
	} cocci_id/* drivers/iommu/iommu.c 48 */;
	struct kobj_type cocci_id/* drivers/iommu/iommu.c 454 */;
	long long int cocci_id/* drivers/iommu/iommu.c 393 */;
	struct list_head cocci_id/* drivers/iommu/iommu.c 367 */;
	struct list_head *cocci_id/* drivers/iommu/iommu.c 360 */;
	struct iommu_group {
		struct kobject kobj;
		struct kobject *devices_kobj;
		struct list_head devices;
		struct mutex mutex;
		struct blocking_notifier_head notifier;
		void *iommu_data;
		void (*iommu_data_release)(void *iommu_data);
		char *name;
		int id;
		struct iommu_domain *default_domain;
		struct iommu_domain *domain;
	} cocci_id/* drivers/iommu/iommu.c 34 */;
	u32 cocci_id/* drivers/iommu/iommu.c 32 */;
	struct kset *cocci_id/* drivers/iommu/iommu.c 27 */;
	const struct sysfs_ops cocci_id/* drivers/iommu/iommu.c 261 */;
	const struct iommu_sva_ops *cocci_id/* drivers/iommu/iommu.c 2589 */;
	struct mm_struct *cocci_id/* drivers/iommu/iommu.c 2522 */;
	struct iommu_sva *cocci_id/* drivers/iommu/iommu.c 2521 */;
	enum iommu_dev_features cocci_id/* drivers/iommu/iommu.c 2440 */;
	struct iommu_fwspec cocci_id/* drivers/iommu/iommu.c 2393 */;
	struct iommu_group_attribute *cocci_id/* drivers/iommu/iommu.c 239 */;
	struct iommu_fwspec *cocci_id/* drivers/iommu/iommu.c 2386 */;
	u32 *cocci_id/* drivers/iommu/iommu.c 2384 */;
	struct attribute *cocci_id/* drivers/iommu/iommu.c 237 */;
	struct kobject *cocci_id/* drivers/iommu/iommu.c 236 */;
	ssize_t cocci_id/* drivers/iommu/iommu.c 236 */;
	struct fwnode_handle *cocci_id/* drivers/iommu/iommu.c 2352 */;
	char *cocci_id/* drivers/iommu/iommu.c 230 */;
	int __init cocci_id/* drivers/iommu/iommu.c 230 */;
	enum iommu_resv_type cocci_id/* drivers/iommu/iommu.c 2234 */;
	struct iommu_resv_region *cocci_id/* drivers/iommu/iommu.c 2232 */;
	bool *cocci_id/* drivers/iommu/iommu.c 2175 */;
	struct iommu_domain_geometry *cocci_id/* drivers/iommu/iommu.c 2174 */;
	enum iommu_attr cocci_id/* drivers/iommu/iommu.c 2172 */;
	u64 cocci_id/* drivers/iommu/iommu.c 2098 */;
	void cocci_id/* drivers/iommu/iommu.c 209 */(struct iommu_domain *domain,
						     struct iommu_group *group);
	int cocci_id/* drivers/iommu/iommu.c 207 */(struct iommu_domain *domain,
						    struct iommu_group *group);
	int cocci_id/* drivers/iommu/iommu.c 205 */(struct iommu_domain *domain,
						    struct device *dev);
	struct scatterlist *cocci_id/* drivers/iommu/iommu.c 2039 */;
	struct iommu_domain *cocci_id/* drivers/iommu/iommu.c 203 */(struct bus_type *bus,
								     unsigned type);
	struct iommu_iotlb_gather cocci_id/* drivers/iommu/iommu.c 2019 */;
	struct iommu_iotlb_gather *cocci_id/* drivers/iommu/iommu.c 1964 */;
	unsigned int cocci_id/* drivers/iommu/iommu.c 1892 */;
	const struct iommu_ops *cocci_id/* drivers/iommu/iommu.c 1890 */;
	phys_addr_t cocci_id/* drivers/iommu/iommu.c 1888 */;
	gfp_t cocci_id/* drivers/iommu/iommu.c 1888 */;
	size_t cocci_id/* drivers/iommu/iommu.c 1888 */;
	unsigned long cocci_id/* drivers/iommu/iommu.c 1887 */;
	struct iommu_group *cocci_id/* drivers/iommu/iommu.c 1778 */;
	void cocci_id/* drivers/iommu/iommu.c 1698 */;
	ioasid_t cocci_id/* drivers/iommu/iommu.c 1689 */;
	struct iommu_gpasid_bind_data *cocci_id/* drivers/iommu/iommu.c 1679 */;
	struct iommu_cache_invalidate_info *cocci_id/* drivers/iommu/iommu.c 1669 */;
	struct device *cocci_id/* drivers/iommu/iommu.c 1624 */;
	struct iommu_domain *cocci_id/* drivers/iommu/iommu.c 1623 */;
	int cocci_id/* drivers/iommu/iommu.c 1623 */;
	unsigned cocci_id/* drivers/iommu/iommu.c 1592 */;
	struct bus_type *cocci_id/* drivers/iommu/iommu.c 1591 */;
	iommu_fault_handler_t cocci_id/* drivers/iommu/iommu.c 1581 */;
	bool cocci_id/* drivers/iommu/iommu.c 1559 */;
	enum iommu_cap cocci_id/* drivers/iommu/iommu.c 1559 */;
	struct iommu_param *cocci_id/* drivers/iommu/iommu.c 152 */;
	struct notifier_block cocci_id/* drivers/iommu/iommu.c 1494 */;
	struct notifier_block *cocci_id/* drivers/iommu/iommu.c 1492 */;
	struct iommu_device *cocci_id/* drivers/iommu/iommu.c 137 */;
	u64 cocci_id/* drivers/iommu/iommu.c 1273 */[4];
	struct pci_bus *cocci_id/* drivers/iommu/iommu.c 1271 */;
	struct group_for_pci_data cocci_id/* drivers/iommu/iommu.c 1270 */;
	struct group_for_pci_data *cocci_id/* drivers/iommu/iommu.c 1246 */;
	u16 cocci_id/* drivers/iommu/iommu.c 1244 */;
	struct group_for_pci_data {
		struct pci_dev *pdev;
		struct iommu_group *group;
	} cocci_id/* drivers/iommu/iommu.c 1235 */;
	unsigned long *cocci_id/* drivers/iommu/iommu.c 1200 */;
	struct pci_dev *cocci_id/* drivers/iommu/iommu.c 1199 */;
	struct iommu_group *cocci_id/* drivers/iommu/iommu.c 1146 */(struct pci_dev *pdev,
								     unsigned long *devfns);
	struct iommu_fault_page_request *cocci_id/* drivers/iommu/iommu.c 1087 */;
	struct iommu_fault_event *cocci_id/* drivers/iommu/iommu.c 1086 */;
	struct iommu_page_response *cocci_id/* drivers/iommu/iommu.c 1082 */;
	struct iommu_fault_event cocci_id/* drivers/iommu/iommu.c 1057 */;
	struct iommu_fault_param *cocci_id/* drivers/iommu/iommu.c 1041 */;
}
