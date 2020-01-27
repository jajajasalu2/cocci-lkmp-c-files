cocci_test_suite() {
	enum xsl_response{CONTINUE, ADDRESS_ERROR, RESTART,} cocci_id/* drivers/misc/ocxl/link.c 92 */;
	struct list_head cocci_id/* drivers/misc/ocxl/link.c 89 */;
	struct ocxl_link {
		struct list_head list;
		struct kref ref;
		int domain;
		int bus;
		int dev;
		atomic_t irq_available;
		struct spa *spa;
		void *platform_data;
	} cocci_id/* drivers/misc/ocxl/link.c 79 */;
	u64 *cocci_id/* drivers/misc/ocxl/link.c 685 */;
	int *cocci_id/* drivers/misc/ocxl/link.c 685 */;
	__u16 cocci_id/* drivers/misc/ocxl/link.c 575 */;
	struct ocxl_process_element cocci_id/* drivers/misc/ocxl/link.c 506 */;
	struct pe_data *cocci_id/* drivers/misc/ocxl/link.c 504 */;
	void (*cocci_id/* drivers/misc/ocxl/link.c 497 */)(void *data,
							   u64 addr,
							   u64 dsisr);
	struct mm_struct *cocci_id/* drivers/misc/ocxl/link.c 496 */;
	u32 cocci_id/* drivers/misc/ocxl/link.c 495 */;
	void *cocci_id/* drivers/misc/ocxl/link.c 495 */;
	bool cocci_id/* drivers/misc/ocxl/link.c 472 */;
	struct kref *cocci_id/* drivers/misc/ocxl/link.c 452 */;
	struct spa {
		struct ocxl_process_element *spa_mem;
		int spa_order;
		struct mutex spa_lock;
		struct radix_tree_root pe_tree;
		char *irq_name;
		int virq;
		void __iomem *reg_dsisr;
		void __iomem *reg_dar;
		void __iomem *reg_tfc;
		void __iomem *reg_pe_handle;
		struct xsl_fault {
			struct work_struct fault_work;
			u64 pe;
			u64 dsisr;
			u64 dar;
			struct pe_data pe_data;
		} xsl_fault;
	} cocci_id/* drivers/misc/ocxl/link.c 45 */;
	void **cocci_id/* drivers/misc/ocxl/link.c 424 */;
	struct ocxl_link cocci_id/* drivers/misc/ocxl/link.c 381 */;
	struct ocxl_link *cocci_id/* drivers/misc/ocxl/link.c 378 */;
	struct pci_dev *cocci_id/* drivers/misc/ocxl/link.c 376 */;
	struct ocxl_link **cocci_id/* drivers/misc/ocxl/link.c 376 */;
	int cocci_id/* drivers/misc/ocxl/link.c 376 */;
	unsigned long cocci_id/* drivers/misc/ocxl/link.c 370 */;
	struct pe_data {
		struct mm_struct *mm;
		void (*xsl_err_cb)(void *data, u64 addr, u64 dsisr);
		void *xsl_err_data;
		struct rcu_head rcu;
	} cocci_id/* drivers/misc/ocxl/link.c 36 */;
	struct ocxl_process_element *cocci_id/* drivers/misc/ocxl/link.c 348 */;
	struct spa cocci_id/* drivers/misc/ocxl/link.c 339 */;
	irqreturn_t cocci_id/* drivers/misc/ocxl/link.c 180 */;
	struct xsl_fault cocci_id/* drivers/misc/ocxl/link.c 133 */;
	struct xsl_fault *cocci_id/* drivers/misc/ocxl/link.c 133 */;
	vm_fault_t cocci_id/* drivers/misc/ocxl/link.c 130 */;
	struct work_struct *cocci_id/* drivers/misc/ocxl/link.c 128 */;
	u64 cocci_id/* drivers/misc/ocxl/link.c 111 */;
	enum xsl_response cocci_id/* drivers/misc/ocxl/link.c 109 */;
	struct spa *cocci_id/* drivers/misc/ocxl/link.c 109 */;
	void cocci_id/* drivers/misc/ocxl/link.c 109 */;
}
