cocci_test_suite() {
	const u32 *cocci_id/* arch/powerpc/platforms/4xx/pci.c 96 */;
	struct ppc4xx_pciex_hwops *cocci_id/* arch/powerpc/platforms/4xx/pci.c 662 */;
	struct ppc4xx_pciex_hwops {
		bool want_sdr;
		int (*core_init)(struct device_node *np);
		int (*port_init_hw)(struct ppc4xx_pciex_port *port);
		int (*setup_utl)(struct ppc4xx_pciex_port *port);
		void (*check_link)(struct ppc4xx_pciex_port *port);
	} cocci_id/* arch/powerpc/platforms/4xx/pci.c 653 */;
	struct ppc4xx_pciex_port {
		struct pci_controller *hose;
		struct device_node *node;
		unsigned int index;
		int endpoint;
		int link;
		int has_ibpre;
		unsigned int sdr_base;
		dcr_host_t dcrs;
		struct resource cfg_space;
		struct resource utl_regs;
		void __iomem *utl_base;
	} cocci_id/* arch/powerpc/platforms/4xx/pci.c 635 */;
	struct pci_controller *cocci_id/* arch/powerpc/platforms/4xx/pci.c 58 */;
	struct pci_dev *cocci_id/* arch/powerpc/platforms/4xx/pci.c 56 */;
	void cocci_id/* arch/powerpc/platforms/4xx/pci.c 56 */;
	int cocci_id/* arch/powerpc/platforms/4xx/pci.c 37 */;
	const struct resource *cocci_id/* arch/powerpc/platforms/4xx/pci.c 297 */;
	resource_size_t cocci_id/* arch/powerpc/platforms/4xx/pci.c 260 */;
	struct resource *cocci_id/* arch/powerpc/platforms/4xx/pci.c 259 */;
	unsigned long long cocci_id/* arch/powerpc/platforms/4xx/pci.c 195 */;
	const int *cocci_id/* arch/powerpc/platforms/4xx/pci.c 1918 */;
	struct resource cocci_id/* arch/powerpc/platforms/4xx/pci.c 1916 */;
	u64 cocci_id/* arch/powerpc/platforms/4xx/pci.c 1846 */;
	struct pci_ops cocci_id/* arch/powerpc/platforms/4xx/pci.c 1704 */;
	u16 *cocci_id/* arch/powerpc/platforms/4xx/pci.c 1635 */;
	u8 *cocci_id/* arch/powerpc/platforms/4xx/pci.c 1632 */;
	u32 *cocci_id/* arch/powerpc/platforms/4xx/pci.c 1604 */;
	unsigned int cocci_id/* arch/powerpc/platforms/4xx/pci.c 1588 */;
	struct pci_bus *cocci_id/* arch/powerpc/platforms/4xx/pci.c 1587 */;
	struct ppc4xx_pciex_port cocci_id/* arch/powerpc/platforms/4xx/pci.c 1451 */;
	void __iomem *cocci_id/* arch/powerpc/platforms/4xx/pci.c 1236 */;
	void __init cocci_id/* arch/powerpc/platforms/4xx/pci.c 1234 */;
	struct ppc4xx_pciex_hwops cocci_id/* arch/powerpc/platforms/4xx/pci.c 1112 */;
	u32 cocci_id/* arch/powerpc/platforms/4xx/pci.c 1060 */;
	struct ppc4xx_pciex_port *cocci_id/* arch/powerpc/platforms/4xx/pci.c 1058 */;
	struct device_node *cocci_id/* arch/powerpc/platforms/4xx/pci.c 1052 */;
	int __init cocci_id/* arch/powerpc/platforms/4xx/pci.c 1052 */;
}
