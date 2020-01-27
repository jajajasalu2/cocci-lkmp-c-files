cocci_test_suite() {
	struct sh7786_pcie_port cocci_id/* arch/sh/drivers/pci/pcie-sh7786.c 561 */;
	struct sh7786_pcie_hwops cocci_id/* arch/sh/drivers/pci/pcie-sh7786.c 540 */;
	async_cookie_t cocci_id/* arch/sh/drivers/pci/pcie-sh7786.c 499 */;
	void *cocci_id/* arch/sh/drivers/pci/pcie-sh7786.c 499 */;
	struct pci_dev *cocci_id/* arch/sh/drivers/pci/pcie-sh7786.c 488 */;
	void cocci_id/* arch/sh/drivers/pci/pcie-sh7786.c 488 */;
	u8 cocci_id/* arch/sh/drivers/pci/pcie-sh7786.c 483 */;
	const struct pci_dev *cocci_id/* arch/sh/drivers/pci/pcie-sh7786.c 483 */;
	int cocci_id/* arch/sh/drivers/pci/pcie-sh7786.c 483 */;
	u32 cocci_id/* arch/sh/drivers/pci/pcie-sh7786.c 444 */;
	resource_size_t cocci_id/* arch/sh/drivers/pci/pcie-sh7786.c 443 */;
	struct resource *cocci_id/* arch/sh/drivers/pci/pcie-sh7786.c 442 */;
	struct resource cocci_id/* arch/sh/drivers/pci/pcie-sh7786.c 40 */[];
	struct sh7786_pcie_hwops {
		int (*core_init)(void);
		async_func_t port_init_hw;
	} *cocci_id/* arch/sh/drivers/pci/pcie-sh7786.c 35 */;
	unsigned long cocci_id/* arch/sh/drivers/pci/pcie-sh7786.c 33 */;
	unsigned int cocci_id/* arch/sh/drivers/pci/pcie-sh7786.c 32 */;
	size_t cocci_id/* arch/sh/drivers/pci/pcie-sh7786.c 304 */;
	phys_addr_t cocci_id/* arch/sh/drivers/pci/pcie-sh7786.c 303 */;
	void __init cocci_id/* arch/sh/drivers/pci/pcie-sh7786.c 289 */;
	void __iomem *cocci_id/* arch/sh/drivers/pci/pcie-sh7786.c 238 */;
	struct sh7786_pcie_port {
		struct pci_channel *hose;
		struct clk *fclk,phy_clk;
		unsigned int index;
		int endpoint;
		int link;
	} cocci_id/* arch/sh/drivers/pci/pcie-sh7786.c 23 */;
	char cocci_id/* arch/sh/drivers/pci/pcie-sh7786.c 205 */[16];
	struct clk *cocci_id/* arch/sh/drivers/pci/pcie-sh7786.c 204 */;
	struct sh7786_pcie_port *cocci_id/* arch/sh/drivers/pci/pcie-sh7786.c 201 */;
	struct pci_channel *cocci_id/* arch/sh/drivers/pci/pcie-sh7786.c 166 */;
	int __init cocci_id/* arch/sh/drivers/pci/pcie-sh7786.c 166 */;
	struct clk cocci_id/* arch/sh/drivers/pci/pcie-sh7786.c 130 */;
	struct pci_channel cocci_id/* arch/sh/drivers/pci/pcie-sh7786.c 124 */[];
	struct pci_ops cocci_id/* arch/sh/drivers/pci/pcie-sh7786.c 112 */;
}
