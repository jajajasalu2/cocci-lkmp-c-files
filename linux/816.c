cocci_test_suite() {
	u32 cocci_id/* drivers/pci/pcie/aer_inject.c 89 */;
	struct aer_error *cocci_id/* drivers/pci/pcie/aer_inject.c 89 */;
	unsigned int cocci_id/* drivers/pci/pcie/aer_inject.c 89 */;
	void cocci_id/* drivers/pci/pcie/aer_inject.c 77 */;
	struct pci_bus_ops {
		struct list_head list;
		struct pci_bus *bus;
		struct pci_ops *ops;
	} cocci_id/* drivers/pci/pcie/aer_inject.c 64 */;
	void __exit cocci_id/* drivers/pci/pcie/aer_inject.c 522 */;
	int __init cocci_id/* drivers/pci/pcie/aer_inject.c 517 */;
	struct miscdevice cocci_id/* drivers/pci/pcie/aer_inject.c 511 */;
	const struct file_operations cocci_id/* drivers/pci/pcie/aer_inject.c 505 */;
	struct aer_error_inj cocci_id/* drivers/pci/pcie/aer_inject.c 488 */;
	loff_t *cocci_id/* drivers/pci/pcie/aer_inject.c 486 */;
	size_t cocci_id/* drivers/pci/pcie/aer_inject.c 486 */;
	const char __user *cocci_id/* drivers/pci/pcie/aer_inject.c 485 */;
	struct file *cocci_id/* drivers/pci/pcie/aer_inject.c 485 */;
	ssize_t cocci_id/* drivers/pci/pcie/aer_inject.c 485 */;
	struct aer_error {
		struct list_head list;
		u32 domain;
		unsigned int bus;
		unsigned int devfn;
		int pos_cap_err;
		u32 uncor_status;
		u32 cor_status;
		u32 header_log0;
		u32 header_log1;
		u32 header_log2;
		u32 header_log3;
		u32 root_status;
		u32 source_id;
	} cocci_id/* drivers/pci/pcie/aer_inject.c 47 */;
	struct aer_error cocci_id/* drivers/pci/pcie/aer_inject.c 360 */;
	struct aer_error_inj {
		u8 bus;
		u8 dev;
		u8 fn;
		u32 uncor_status;
		u32 cor_status;
		u32 header_log0;
		u32 header_log1;
		u32 header_log2;
		u32 header_log3;
		u32 domain;
	} cocci_id/* drivers/pci/pcie/aer_inject.c 34 */;
	struct device *cocci_id/* drivers/pci/pcie/aer_inject.c 325 */;
	struct pcie_device *cocci_id/* drivers/pci/pcie/aer_inject.c 324 */;
	struct aer_error_inj *cocci_id/* drivers/pci/pcie/aer_inject.c 319 */;
	bool cocci_id/* drivers/pci/pcie/aer_inject.c 31 */;
	struct pci_ops cocci_id/* drivers/pci/pcie/aer_inject.c 283 */;
	unsigned long cocci_id/* drivers/pci/pcie/aer_inject.c 222 */;
	u32 *cocci_id/* drivers/pci/pcie/aer_inject.c 182 */;
	int *cocci_id/* drivers/pci/pcie/aer_inject.c 139 */;
	struct pci_bus_ops cocci_id/* drivers/pci/pcie/aer_inject.c 131 */;
	struct pci_bus_ops *cocci_id/* drivers/pci/pcie/aer_inject.c 115 */;
	struct pci_ops *cocci_id/* drivers/pci/pcie/aer_inject.c 113 */;
	struct pci_bus *cocci_id/* drivers/pci/pcie/aer_inject.c 113 */;
	int cocci_id/* drivers/pci/pcie/aer_inject.c 106 */;
	struct pci_dev *cocci_id/* drivers/pci/pcie/aer_inject.c 104 */;
}
