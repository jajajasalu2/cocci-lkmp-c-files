cocci_test_suite() {
	u8 cocci_id/* drivers/pci/pcie/aer.c 839 */;
	int cocci_id/* drivers/pci/pcie/aer.c 782 */;
	const char *cocci_id/* drivers/pci/pcie/aer.c 781 */;
	unsigned long cocci_id/* drivers/pci/pcie/aer.c 780 */;
	struct aer_err_info *cocci_id/* drivers/pci/pcie/aer.c 778 */;
	struct pci_dev *cocci_id/* drivers/pci/pcie/aer.c 777 */;
	void cocci_id/* drivers/pci/pcie/aer.c 777 */;
	struct aer_header_log_regs *cocci_id/* drivers/pci/pcie/aer.c 771 */;
	struct aer_stats *cocci_id/* drivers/pci/pcie/aer.c 724 */;
	u64 *cocci_id/* drivers/pci/pcie/aer.c 723 */;
	const struct attribute_group cocci_id/* drivers/pci/pcie/aer.c 713 */;
	struct attribute *cocci_id/* drivers/pci/pcie/aer.c 696 */;
	umode_t cocci_id/* drivers/pci/pcie/aer.c 695 */;
	struct kobject *cocci_id/* drivers/pci/pcie/aer.c 695 */;
	struct attribute *cocci_id/* drivers/pci/pcie/aer.c 685 */[];
	const char *cocci_id/* drivers/pci/pcie/aer.c 626 */[];
	const char *cocci_id/* drivers/pci/pcie/aer.c 596 */[AER_MAX_TYPEOF_UNCOR_ERRS];
	const char *cocci_id/* drivers/pci/pcie/aer.c 577 */[AER_MAX_TYPEOF_COR_ERRS];
	struct aer_stats {
		u64 dev_cor_errs[AER_MAX_TYPEOF_COR_ERRS];
		u64 dev_fatal_errs[AER_MAX_TYPEOF_UNCOR_ERRS];
		u64 dev_nonfatal_errs[AER_MAX_TYPEOF_UNCOR_ERRS];
		u64 dev_total_cor_errs;
		u64 dev_total_fatal_errs;
		u64 dev_total_nonfatal_errs;
		u64 rootport_total_cor_errs;
		u64 rootport_total_fatal_errs;
		u64 rootport_total_nonfatal_errs;
	} cocci_id/* drivers/pci/pcie/aer.c 53 */;
	struct aer_stats cocci_id/* drivers/pci/pcie/aer.c 507 */;
	u32 *cocci_id/* drivers/pci/pcie/aer.c 479 */;
	struct pci_cap_saved_state *cocci_id/* drivers/pci/pcie/aer.c 478 */;
	struct aer_rpc {
		struct pci_dev *rpd;
		DECLARE_KFIFO(aer_fifo,struct aer_err_source,
			      AER_ERROR_SOURCES_MAX);
	} cocci_id/* drivers/pci/pcie/aer.c 47 */;
	struct aer_err_source {
		unsigned int status;
		unsigned int id;
	} cocci_id/* drivers/pci/pcie/aer.c 42 */;
	struct aer_hest_parse_info cocci_id/* drivers/pci/pcie/aer.c 329 */;
	bool cocci_id/* drivers/pci/pcie/aer.c 326 */;
	struct acpi_hest_aer_common *cocci_id/* drivers/pci/pcie/aer.c 262 */;
	struct aer_hest_parse_info *cocci_id/* drivers/pci/pcie/aer.c 261 */;
	struct acpi_hest_header *cocci_id/* drivers/pci/pcie/aer.c 259 */;
	void *cocci_id/* drivers/pci/pcie/aer.c 259 */;
	struct aer_hest_parse_info {
		struct pci_dev *pci_dev;
		int firmware_first;
	} cocci_id/* drivers/pci/pcie/aer.c 245 */;
	char *cocci_id/* drivers/pci/pcie/aer.c 207 */;
	int __init cocci_id/* drivers/pci/pcie/aer.c 1511 */;
	struct pcie_port_service_driver cocci_id/* drivers/pci/pcie/aer.c 1496 */;
	pci_ers_result_t cocci_id/* drivers/pci/pcie/aer.c 1468 */;
	struct aer_rpc cocci_id/* drivers/pci/pcie/aer.c 1443 */;
	struct device *cocci_id/* drivers/pci/pcie/aer.c 1440 */;
	u32 cocci_id/* drivers/pci/pcie/aer.c 1397 */;
	struct aer_rpc *cocci_id/* drivers/pci/pcie/aer.c 1394 */;
	u16 cocci_id/* drivers/pci/pcie/aer.c 1356 */;
	bool *cocci_id/* drivers/pci/pcie/aer.c 1313 */;
	struct aer_err_source cocci_id/* drivers/pci/pcie/aer.c 1295 */;
	struct pcie_device *cocci_id/* drivers/pci/pcie/aer.c 1292 */;
	irqreturn_t cocci_id/* drivers/pci/pcie/aer.c 1290 */;
	const char *constcocci_id/* drivers/pci/pcie/aer.c 124 */[];
	struct aer_err_info cocci_id/* drivers/pci/pcie/aer.c 1220 */;
	struct aer_err_source *cocci_id/* drivers/pci/pcie/aer.c 1217 */;
	struct aer_recover_entry cocci_id/* drivers/pci/pcie/aer.c 1116 */;
	struct aer_capability_regs *cocci_id/* drivers/pci/pcie/aer.c 1114 */;
	unsigned int cocci_id/* drivers/pci/pcie/aer.c 1113 */;
	struct work_struct *cocci_id/* drivers/pci/pcie/aer.c 1080 */;
	struct aer_recover_entry {
		u8 bus;
		u8 devfn;
		u16 domain;
		int severity;
		struct aer_capability_regs *regs;
	} cocci_id/* drivers/pci/pcie/aer.c 1069 */;
}
