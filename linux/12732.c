cocci_test_suite() {
	unsigned long long *cocci_id/* drivers/iommu/intel-svm.c 560 */;
	vm_fault_t cocci_id/* drivers/iommu/intel-svm.c 549 */;
	irqreturn_t cocci_id/* drivers/iommu/intel-svm.c 531 */;
	void *cocci_id/* drivers/iommu/intel-svm.c 531 */;
	long cocci_id/* drivers/iommu/intel-svm.c 526 */;
	u64 cocci_id/* drivers/iommu/intel-svm.c 523 */;
	unsigned long cocci_id/* drivers/iommu/intel-svm.c 509 */;
	bool cocci_id/* drivers/iommu/intel-svm.c 507 */;
	struct vm_area_struct *cocci_id/* drivers/iommu/intel-svm.c 507 */;
	struct page_req_dsc *cocci_id/* drivers/iommu/intel-svm.c 507 */;
	struct page_req_dsc {
		union {
			struct {
				u64 type:8;
				u64 pasid_present:1;
				u64 priv_data_present:1;
				u64 rsvd:6;
				u64 rid:16;
				u64 pasid:20;
				u64 exe_req:1;
				u64 pm_req:1;
				u64 rsvd2:10;
			};
			u64 qw_0;
		};
		union {
			struct {
				u64 rd_req:1;
				u64 wr_req:1;
				u64 lpig:1;
				u64 prg_index:9;
				u64 addr:52;
			};
			u64 qw_1;
		};
		u64 priv_data[2];
	} cocci_id/* drivers/iommu/intel-svm.c 477 */;
	struct page *cocci_id/* drivers/iommu/intel-svm.c 43 */;
	irqreturn_t cocci_id/* drivers/iommu/intel-svm.c 24 */(int irq,
							       void *d);
	struct device_domain_info *cocci_id/* drivers/iommu/intel-svm.c 213 */;
	struct intel_iommu *cocci_id/* drivers/iommu/intel-svm.c 212 */;
	struct svm_dev_ops *cocci_id/* drivers/iommu/intel-svm.c 210 */;
	struct device *cocci_id/* drivers/iommu/intel-svm.c 210 */;
	int *cocci_id/* drivers/iommu/intel-svm.c 210 */;
	const struct mmu_notifier_ops cocci_id/* drivers/iommu/intel-svm.c 202 */;
	struct intel_svm cocci_id/* drivers/iommu/intel-svm.c 170 */;
	struct mm_struct *cocci_id/* drivers/iommu/intel-svm.c 167 */;
	struct mmu_notifier *cocci_id/* drivers/iommu/intel-svm.c 166 */;
	struct intel_svm_dev *cocci_id/* drivers/iommu/intel-svm.c 157 */;
	int cocci_id/* drivers/iommu/intel-svm.c 155 */;
	struct intel_svm *cocci_id/* drivers/iommu/intel-svm.c 154 */;
	void cocci_id/* drivers/iommu/intel-svm.c 154 */;
	struct qi_desc cocci_id/* drivers/iommu/intel-svm.c 105 */;
}
