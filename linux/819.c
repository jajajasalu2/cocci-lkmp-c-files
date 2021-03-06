cocci_test_suite() {
	struct aspm_latency *cocci_id/* drivers/pci/pcie/aspm.c 645 */;
	struct aspm_register_info cocci_id/* drivers/pci/pcie/aspm.c 550 */;
	u32 cocci_id/* drivers/pci/pcie/aspm.c 501 */;
	struct aspm_register_info *cocci_id/* drivers/pci/pcie/aspm.c 498 */;
	void cocci_id/* drivers/pci/pcie/aspm.c 497 */;
	struct pcie_link_state {
		struct pci_dev *pdev;
		struct pci_dev *downstream;
		struct pcie_link_state *root;
		struct pcie_link_state *parent;
		struct list_head sibling;
		u32 aspm_support:7;
		u32 aspm_enabled:7;
		u32 aspm_capable:7;
		u32 aspm_default:7;
		u32 aspm_disable:7;
		u32 clkpm_capable:1;
		u32 clkpm_enabled:1;
		u32 clkpm_default:1;
		u32 clkpm_disable:1;
		struct aspm_latency latency_up;
		struct aspm_latency latency_dw;
		struct aspm_latency acceptable[8];
		struct {
			u32 up_cap_ptr;
			u32 dw_cap_ptr;
			u32 ctl1;
			u32 ctl2;
		} l1ss;
	} cocci_id/* drivers/pci/pcie/aspm.c 49 */;
	struct pci_bus *cocci_id/* drivers/pci/pcie/aspm.c 486 */;
	struct aspm_latency {
		u32 l0s;
		u32 l1;
	} cocci_id/* drivers/pci/pcie/aspm.c 44 */;
	struct aspm_register_info {
		u32 support:2;
		u32 enabled:2;
		u32 latency_encoding_l0s;
		u32 latency_encoding_l1;
		u32 l1ss_cap_ptr;
		u32 l1ss_cap;
		u32 l1ss_ctl1;
		u32 l1ss_ctl2;
	} cocci_id/* drivers/pci/pcie/aspm.c 383 */;
	u32 *cocci_id/* drivers/pci/pcie/aspm.c 357 */;
	struct pci_dev cocci_id/* drivers/pci/pcie/aspm.c 248 */;
	u16 cocci_id/* drivers/pci/pcie/aspm.c 241 */;
	unsigned long cocci_id/* drivers/pci/pcie/aspm.c 206 */;
	int __init cocci_id/* drivers/pci/pcie/aspm.c 1360 */;
	const struct attribute_group cocci_id/* drivers/pci/pcie/aspm.c 1354 */;
	const u8 cocci_id/* drivers/pci/pcie/aspm.c 1336 */[];
	struct attribute *cocci_id/* drivers/pci/pcie/aspm.c 1331 */;
	umode_t cocci_id/* drivers/pci/pcie/aspm.c 1330 */;
	struct kobject *cocci_id/* drivers/pci/pcie/aspm.c 1330 */;
	struct attribute *cocci_id/* drivers/pci/pcie/aspm.c 1319 */[];
	const char *cocci_id/* drivers/pci/pcie/aspm.c 1233 */;
	size_t cocci_id/* drivers/pci/pcie/aspm.c 1233 */;
	u8 cocci_id/* drivers/pci/pcie/aspm.c 1223 */;
	char *cocci_id/* drivers/pci/pcie/aspm.c 1223 */;
	struct device_attribute *cocci_id/* drivers/pci/pcie/aspm.c 1222 */;
	struct device *cocci_id/* drivers/pci/pcie/aspm.c 1221 */;
	ssize_t cocci_id/* drivers/pci/pcie/aspm.c 1221 */;
	const struct kernel_param *cocci_id/* drivers/pci/pcie/aspm.c 1187 */;
	struct pcie_link_state *cocci_id/* drivers/pci/pcie/aspm.c 1095 */;
	bool cocci_id/* drivers/pci/pcie/aspm.c 1093 */;
	struct pci_dev *cocci_id/* drivers/pci/pcie/aspm.c 1093 */;
	int cocci_id/* drivers/pci/pcie/aspm.c 1093 */;
	const char *cocci_id/* drivers/pci/pcie/aspm.c 107 */[];
}
