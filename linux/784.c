cocci_test_suite() {
	struct altera_pcie_ops {
		int (*tlp_read_pkt)(struct altera_pcie *pcie, u32 *value);
		void (*tlp_write_pkt)(struct altera_pcie *pcie, u32 *headers,
				      u32 data, bool align);
		bool (*get_link_status)(struct altera_pcie *pcie);
		int (*rp_read_cfg)(struct altera_pcie *pcie, int where,
				   int size, u32 *value);
		int (*rp_write_cfg)(struct altera_pcie *pcie, u8 busno,
				    int where, int size, u32 value);
	} cocci_id/* drivers/pci/controller/pcie-altera.c 98 */;
	struct altera_pcie {
		struct platform_device *pdev;
		void __iomem *cra_base;
		void __iomem *hip_base;
		int irq;
		u8 root_bus_nr;
		struct irq_domain *irq_domain;
		struct resource bus_range;
		const struct altera_pcie_data *pcie_data;
	} cocci_id/* drivers/pci/controller/pcie-altera.c 87 */;
	struct platform_driver cocci_id/* drivers/pci/controller/pcie-altera.c 856 */;
	enum altera_pcie_version{ALTERA_PCIE_V1=0, ALTERA_PCIE_V2,} cocci_id/* drivers/pci/controller/pcie-altera.c 82 */;
	const struct of_device_id *cocci_id/* drivers/pci/controller/pcie-altera.c 780 */;
	struct pci_host_bridge *cocci_id/* drivers/pci/controller/pcie-altera.c 778 */;
	const struct of_device_id cocci_id/* drivers/pci/controller/pcie-altera.c 764 */[];
	const struct altera_pcie_data cocci_id/* drivers/pci/controller/pcie-altera.c 744 */;
	const struct altera_pcie_ops cocci_id/* drivers/pci/controller/pcie-altera.c 730 */;
	void cocci_id/* drivers/pci/controller/pcie-altera.c 725 */;
	struct resource *cocci_id/* drivers/pci/controller/pcie-altera.c 699 */;
	struct platform_device *cocci_id/* drivers/pci/controller/pcie-altera.c 698 */;
	struct device_node *cocci_id/* drivers/pci/controller/pcie-altera.c 675 */;
	struct device *cocci_id/* drivers/pci/controller/pcie-altera.c 674 */;
	unsigned long cocci_id/* drivers/pci/controller/pcie-altera.c 647 */;
	struct irq_chip *cocci_id/* drivers/pci/controller/pcie-altera.c 644 */;
	struct irq_desc *cocci_id/* drivers/pci/controller/pcie-altera.c 642 */;
	const struct irq_domain_ops cocci_id/* drivers/pci/controller/pcie-altera.c 637 */;
	irq_hw_number_t cocci_id/* drivers/pci/controller/pcie-altera.c 630 */;
	struct irq_domain *cocci_id/* drivers/pci/controller/pcie-altera.c 629 */;
	u16 cocci_id/* drivers/pci/controller/pcie-altera.c 602 */;
	u16 *cocci_id/* drivers/pci/controller/pcie-altera.c 543 */;
	struct pci_ops cocci_id/* drivers/pci/controller/pcie-altera.c 537 */;
	struct pci_bus *cocci_id/* drivers/pci/controller/pcie-altera.c 505 */;
	u32 cocci_id/* drivers/pci/controller/pcie-altera.c 435 */;
	u32 *cocci_id/* drivers/pci/controller/pcie-altera.c 432 */;
	unsigned int cocci_id/* drivers/pci/controller/pcie-altera.c 431 */;
	u8 cocci_id/* drivers/pci/controller/pcie-altera.c 430 */;
	struct altera_pcie *cocci_id/* drivers/pci/controller/pcie-altera.c 430 */;
	int cocci_id/* drivers/pci/controller/pcie-altera.c 430 */;
	u32 cocci_id/* drivers/pci/controller/pcie-altera.c 342 */[TLP_HDR_SIZE];
	struct tlp_rp_regpair_t cocci_id/* drivers/pci/controller/pcie-altera.c 288 */;
	u32 cocci_id/* drivers/pci/controller/pcie-altera.c 242 */[4];
	struct tlp_rp_regpair_t *cocci_id/* drivers/pci/controller/pcie-altera.c 170 */;
	bool cocci_id/* drivers/pci/controller/pcie-altera.c 159 */;
	void __iomem *cocci_id/* drivers/pci/controller/pcie-altera.c 143 */;
	const u32 cocci_id/* drivers/pci/controller/pcie-altera.c 131 */;
	struct tlp_rp_regpair_t {
		u32 ctrl;
		u32 reg0;
		u32 reg1;
	} cocci_id/* drivers/pci/controller/pcie-altera.c 119 */;
	struct altera_pcie_data {
		const struct altera_pcie_ops *ops;
		enum altera_pcie_version version;
		u32 cap_offset;
		u32 cfgrd0;
		u32 cfgrd1;
		u32 cfgwr0;
		u32 cfgwr1;
	} cocci_id/* drivers/pci/controller/pcie-altera.c 109 */;
}
