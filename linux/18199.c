cocci_test_suite() {
	u32 cocci_id/* arch/arm/mach-cns3xxx/pcie.c 90 */;
	u32 *cocci_id/* arch/arm/mach-cns3xxx/pcie.c 87 */;
	struct cns3xxx_pcie *cocci_id/* arch/arm/mach-cns3xxx/pcie.c 54 */;
	unsigned int cocci_id/* arch/arm/mach-cns3xxx/pcie.c 52 */;
	int cocci_id/* arch/arm/mach-cns3xxx/pcie.c 52 */;
	struct pci_bus *cocci_id/* arch/arm/mach-cns3xxx/pcie.c 51 */;
	void __iomem *cocci_id/* arch/arm/mach-cns3xxx/pcie.c 51 */;
	struct hw_pci cocci_id/* arch/arm/mach-cns3xxx/pcie.c 266 */;
	void *cocci_id/* arch/arm/mach-cns3xxx/pcie.c 265 */;
	void cocci_id/* arch/arm/mach-cns3xxx/pcie.c 262 */;
	struct pt_regs *cocci_id/* arch/arm/mach-cns3xxx/pcie.c 255 */;
	unsigned long cocci_id/* arch/arm/mach-cns3xxx/pcie.c 254 */;
	u16 cocci_id/* arch/arm/mach-cns3xxx/pcie.c 231 */;
	struct cns3xxx_pcie {
		void __iomem *host_regs;
		void __iomem *cfg0_regs;
		void __iomem *cfg1_regs;
		unsigned int irqs[2];
		struct resource res_io;
		struct resource res_mem;
		int port;
		bool linked;
	} cocci_id/* arch/arm/mach-cns3xxx/pcie.c 23 */;
	void __init cocci_id/* arch/arm/mach-cns3xxx/pcie.c 181 */;
	struct cns3xxx_pcie cocci_id/* arch/arm/mach-cns3xxx/pcie.c 140 */[];
	u8 cocci_id/* arch/arm/mach-cns3xxx/pcie.c 128 */;
	const struct pci_dev *cocci_id/* arch/arm/mach-cns3xxx/pcie.c 128 */;
	struct pci_ops cocci_id/* arch/arm/mach-cns3xxx/pcie.c 122 */;
	struct resource *cocci_id/* arch/arm/mach-cns3xxx/pcie.c 110 */;
	struct pci_sys_data *cocci_id/* arch/arm/mach-cns3xxx/pcie.c 107 */;
}
