cocci_test_suite() {
	struct platform_driver cocci_id/* drivers/pci/controller/pcie-rockchip-ep.c 644 */;
	struct device *cocci_id/* drivers/pci/controller/pcie-rockchip-ep.c 565 */;
	struct platform_device *cocci_id/* drivers/pci/controller/pcie-rockchip-ep.c 563 */;
	const struct of_device_id cocci_id/* drivers/pci/controller/pcie-rockchip-ep.c 558 */[];
	u32 cocci_id/* drivers/pci/controller/pcie-rockchip-ep.c 53 */;
	struct rockchip_pcie *cocci_id/* drivers/pci/controller/pcie-rockchip-ep.c 52 */;
	void cocci_id/* drivers/pci/controller/pcie-rockchip-ep.c 52 */;
	const struct pci_epc_ops cocci_id/* drivers/pci/controller/pcie-rockchip-ep.c 517 */;
	const struct pci_epc_features *cocci_id/* drivers/pci/controller/pcie-rockchip-ep.c 511 */;
	const struct pci_epc_features cocci_id/* drivers/pci/controller/pcie-rockchip-ep.c 505 */;
	struct pci_epf *cocci_id/* drivers/pci/controller/pcie-rockchip-ep.c 493 */;
	enum pci_epc_irq_type cocci_id/* drivers/pci/controller/pcie-rockchip-ep.c 474 */;
	struct rockchip_pcie_ep {
		struct rockchip_pcie rockchip;
		struct pci_epc *epc;
		u32 max_regions;
		unsigned long ob_region_map;
		phys_addr_t *ob_addr;
		phys_addr_t irq_phys_addr;
		void __iomem *irq_cpu_addr;
		u64 irq_pci_addr;
		u8 irq_pci_fn;
		u8 irq_pending;
	} cocci_id/* drivers/pci/controller/pcie-rockchip-ep.c 39 */;
	bool cocci_id/* drivers/pci/controller/pcie-rockchip-ep.c 348 */;
	u8 cocci_id/* drivers/pci/controller/pcie-rockchip-ep.c 347 */;
	struct rockchip_pcie_ep *cocci_id/* drivers/pci/controller/pcie-rockchip-ep.c 347 */;
	u16 cocci_id/* drivers/pci/controller/pcie-rockchip-ep.c 335 */;
	int cocci_id/* drivers/pci/controller/pcie-rockchip-ep.c 331 */;
	size_t cocci_id/* drivers/pci/controller/pcie-rockchip-ep.c 260 */;
	u64 cocci_id/* drivers/pci/controller/pcie-rockchip-ep.c 259 */;
	phys_addr_t cocci_id/* drivers/pci/controller/pcie-rockchip-ep.c 259 */;
	enum pci_barno cocci_id/* drivers/pci/controller/pcie-rockchip-ep.c 235 */;
	struct pci_epf_bar *cocci_id/* drivers/pci/controller/pcie-rockchip-ep.c 230 */;
	struct pci_epc *cocci_id/* drivers/pci/controller/pcie-rockchip-ep.c 229 */;
	dma_addr_t cocci_id/* drivers/pci/controller/pcie-rockchip-ep.c 166 */;
	struct pci_epf_header *cocci_id/* drivers/pci/controller/pcie-rockchip-ep.c 125 */;
}
