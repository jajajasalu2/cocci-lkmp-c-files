cocci_test_suite() {
	u32 *cocci_id/* arch/arm/mach-dove/pcie.c 96 */;
	u32 cocci_id/* arch/arm/mach-dove/pcie.c 95 */;
	struct pci_bus *cocci_id/* arch/arm/mach-dove/pcie.c 95 */;
	struct pcie_port cocci_id/* arch/arm/mach-dove/pcie.c 34 */[2];
	struct pcie_port {
		u8 index;
		u8 root_bus_nr;
		void __iomem *base;
		spinlock_t conf_lock;
		char mem_space_name[16];
		struct resource res;
	} cocci_id/* arch/arm/mach-dove/pcie.c 25 */;
	struct clk *cocci_id/* arch/arm/mach-dove/pcie.c 195 */;
	struct pcie_port *cocci_id/* arch/arm/mach-dove/pcie.c 194 */;
	void __iomem *cocci_id/* arch/arm/mach-dove/pcie.c 189 */;
	int cocci_id/* arch/arm/mach-dove/pcie.c 189 */;
	void __init cocci_id/* arch/arm/mach-dove/pcie.c 189 */;
	struct hw_pci cocci_id/* arch/arm/mach-dove/pcie.c 182 */;
	struct pci_sys_data *cocci_id/* arch/arm/mach-dove/pcie.c 176 */;
	u8 cocci_id/* arch/arm/mach-dove/pcie.c 174 */;
	const struct pci_dev *cocci_id/* arch/arm/mach-dove/pcie.c 174 */;
	int __init cocci_id/* arch/arm/mach-dove/pcie.c 174 */;
	struct pci_host_bridge *cocci_id/* arch/arm/mach-dove/pcie.c 156 */;
	int __init cocci_id/* arch/arm/mach-dove/pcie.c 155 */;
	struct pci_dev *cocci_id/* arch/arm/mach-dove/pcie.c 138 */;
	void cocci_id/* arch/arm/mach-dove/pcie.c 138 */;
	struct pci_ops cocci_id/* arch/arm/mach-dove/pcie.c 133 */;
	unsigned long cocci_id/* arch/arm/mach-dove/pcie.c 100 */;
}
