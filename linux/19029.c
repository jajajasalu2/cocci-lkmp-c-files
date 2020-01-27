cocci_test_suite() {
	u32 cocci_id/* arch/arm/mach-mv78xx0/pcie.c 60 */;
	void cocci_id/* arch/arm/mach-mv78xx0/pcie.c 57 */;
	u32 cocci_id/* arch/arm/mach-mv78xx0/pcie.c 46 */[8];
	u32 *cocci_id/* arch/arm/mach-mv78xx0/pcie.c 40 */;
	struct resource cocci_id/* arch/arm/mach-mv78xx0/pcie.c 38 */;
	struct pcie_port cocci_id/* arch/arm/mach-mv78xx0/pcie.c 36 */[8];
	struct pcie_port {
		u8 maj;
		u8 min;
		u8 root_bus_nr;
		void __iomem *base;
		spinlock_t conf_lock;
		char mem_space_name[20];
		struct resource res;
	} cocci_id/* arch/arm/mach-mv78xx0/pcie.c 26 */;
	struct pcie_port *cocci_id/* arch/arm/mach-mv78xx0/pcie.c 237 */;
	void __iomem *cocci_id/* arch/arm/mach-mv78xx0/pcie.c 232 */;
	int cocci_id/* arch/arm/mach-mv78xx0/pcie.c 232 */;
	void __init cocci_id/* arch/arm/mach-mv78xx0/pcie.c 232 */;
	struct hw_pci cocci_id/* arch/arm/mach-mv78xx0/pcie.c 224 */;
	struct pci_sys_data *cocci_id/* arch/arm/mach-mv78xx0/pcie.c 218 */;
	u8 cocci_id/* arch/arm/mach-mv78xx0/pcie.c 215 */;
	const struct pci_dev *cocci_id/* arch/arm/mach-mv78xx0/pcie.c 215 */;
	int __init cocci_id/* arch/arm/mach-mv78xx0/pcie.c 215 */;
	struct pci_host_bridge *cocci_id/* arch/arm/mach-mv78xx0/pcie.c 197 */;
	struct pci_dev *cocci_id/* arch/arm/mach-mv78xx0/pcie.c 180 */;
	struct pci_ops cocci_id/* arch/arm/mach-mv78xx0/pcie.c 175 */;
	unsigned long cocci_id/* arch/arm/mach-mv78xx0/pcie.c 142 */;
	struct pci_bus *cocci_id/* arch/arm/mach-mv78xx0/pcie.c 137 */;
}
