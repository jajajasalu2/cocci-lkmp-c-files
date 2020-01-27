cocci_test_suite() {
	unsigned char cocci_id/* arch/mips/pci/pci-alchemy.c 99 */;
	struct resource cocci_id/* arch/mips/pci/pci-alchemy.c 65 */;
	struct pci_dev *cocci_id/* arch/mips/pci/pci-alchemy.c 534 */;
	const struct pci_dev *cocci_id/* arch/mips/pci/pci-alchemy.c 526 */;
	struct alchemy_pci_context *cocci_id/* arch/mips/pci/pci-alchemy.c 52 */;
	int __init cocci_id/* arch/mips/pci/pci-alchemy.c 513 */;
	void cocci_id/* arch/mips/pci/pci-alchemy.c 513 */;
	struct platform_driver cocci_id/* arch/mips/pci/pci-alchemy.c 506 */;
	struct clk *cocci_id/* arch/mips/pci/pci-alchemy.c 369 */;
	struct resource *cocci_id/* arch/mips/pci/pci-alchemy.c 368 */;
	unsigned long cocci_id/* arch/mips/pci/pci-alchemy.c 367 */;
	void __iomem *cocci_id/* arch/mips/pci/pci-alchemy.c 366 */;
	struct alchemy_pci_platdata *cocci_id/* arch/mips/pci/pci-alchemy.c 364 */;
	struct platform_device *cocci_id/* arch/mips/pci/pci-alchemy.c 362 */;
	struct syscore_ops cocci_id/* arch/mips/pci/pci-alchemy.c 357 */;
	struct alchemy_pci_context {
		struct pci_controller alchemy_pci_ctrl;
		void __iomem *regs;
		unsigned long last_elo0;
		unsigned long last_elo1;
		int wired_entry;
		struct vm_struct *pci_cfg_vm;
		unsigned long pm[12];
		int (*board_map_irq)(const struct pci_dev *d, u8 slot, u8 pin);
		int (*board_pci_idsel)(unsigned int devsel, int assert);
	} cocci_id/* arch/mips/pci/pci-alchemy.c 34 */;
	unsigned int cocci_id/* arch/mips/pci/pci-alchemy.c 301 */;
	int cocci_id/* arch/mips/pci/pci-alchemy.c 301 */;
	struct pci_ops cocci_id/* arch/mips/pci/pci-alchemy.c 296 */;
	u32 cocci_id/* arch/mips/pci/pci-alchemy.c 284 */;
	u16 cocci_id/* arch/mips/pci/pci-alchemy.c 272 */;
	u8 cocci_id/* arch/mips/pci/pci-alchemy.c 265 */;
	u32 *cocci_id/* arch/mips/pci/pci-alchemy.c 261 */;
	struct pci_bus *cocci_id/* arch/mips/pci/pci-alchemy.c 260 */;
	u16 *cocci_id/* arch/mips/pci/pci-alchemy.c 203 */;
	u8 *cocci_id/* arch/mips/pci/pci-alchemy.c 189 */;
}
