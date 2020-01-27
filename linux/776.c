cocci_test_suite() {
	char cocci_id/* drivers/pci/controller/pcie-mediatek.c 908 */[10];
	struct platform_device *cocci_id/* drivers/pci/controller/pcie-mediatek.c 907 */;
	struct resource *cocci_id/* drivers/pci/controller/pcie-mediatek.c 905 */;
	struct device *cocci_id/* drivers/pci/controller/pcie-mediatek.c 822 */;
	struct mtk_pcie *cocci_id/* drivers/pci/controller/pcie-mediatek.c 821 */;
	struct pci_ops cocci_id/* drivers/pci/controller/pcie-mediatek.c 753 */;
	void __iomem *cocci_id/* drivers/pci/controller/pcie-mediatek.c 742 */;
	const struct mtk_pcie_soc *cocci_id/* drivers/pci/controller/pcie-mediatek.c 666 */;
	struct resource_entry *cocci_id/* drivers/pci/controller/pcie-mediatek.c 665 */;
	unsigned long cocci_id/* drivers/pci/controller/pcie-mediatek.c 604 */;
	struct irq_chip *cocci_id/* drivers/pci/controller/pcie-mediatek.c 603 */;
	struct irq_desc *cocci_id/* drivers/pci/controller/pcie-mediatek.c 600 */;
	struct device_node *cocci_id/* drivers/pci/controller/pcie-mediatek.c 570 */;
	const struct irq_domain_ops cocci_id/* drivers/pci/controller/pcie-mediatek.c 565 */;
	irq_hw_number_t cocci_id/* drivers/pci/controller/pcie-mediatek.c 557 */;
	struct irq_domain *cocci_id/* drivers/pci/controller/pcie-mediatek.c 556 */;
	struct fwnode_handle *cocci_id/* drivers/pci/controller/pcie-mediatek.c 499 */;
	struct msi_domain_info cocci_id/* drivers/pci/controller/pcie-mediatek.c 491 */;
	void *cocci_id/* drivers/pci/controller/pcie-mediatek.c 435 */;
	struct irq_chip cocci_id/* drivers/pci/controller/pcie-mediatek.c 427 */;
	u32 cocci_id/* drivers/pci/controller/pcie-mediatek.c 422 */;
	bool cocci_id/* drivers/pci/controller/pcie-mediatek.c 414 */;
	const struct cpumask *cocci_id/* drivers/pci/controller/pcie-mediatek.c 414 */;
	int cocci_id/* drivers/pci/controller/pcie-mediatek.c 410 */;
	phys_addr_t cocci_id/* drivers/pci/controller/pcie-mediatek.c 400 */;
	struct mtk_pcie_port *cocci_id/* drivers/pci/controller/pcie-mediatek.c 399 */;
	struct msi_msg *cocci_id/* drivers/pci/controller/pcie-mediatek.c 397 */;
	struct irq_data *cocci_id/* drivers/pci/controller/pcie-mediatek.c 397 */;
	void cocci_id/* drivers/pci/controller/pcie-mediatek.c 397 */;
	u32 *cocci_id/* drivers/pci/controller/pcie-mediatek.c 360 */;
	struct pci_bus *cocci_id/* drivers/pci/controller/pcie-mediatek.c 359 */;
	unsigned int cocci_id/* drivers/pci/controller/pcie-mediatek.c 359 */;
	struct pci_dev *cocci_id/* drivers/pci/controller/pcie-mediatek.c 340 */;
	struct mtk_pcie {
		struct device *dev;
		void __iomem *base;
		struct clk *free_ck;
		struct list_head ports;
		const struct mtk_pcie_soc *soc;
		unsigned int busnr;
	} cocci_id/* drivers/pci/controller/pcie-mediatek.c 214 */;
	struct mtk_pcie_port {
		void __iomem *base;
		struct list_head list;
		struct mtk_pcie *pcie;
		struct reset_control *reset;
		struct clk *sys_ck;
		struct clk *ahb_ck;
		struct clk *axi_ck;
		struct clk *aux_ck;
		struct clk *obff_ck;
		struct clk *pipe_ck;
		struct phy *phy;
		u32 slot;
		int irq;
		struct irq_domain *irq_domain;
		struct irq_domain *inner_domain;
		struct irq_domain *msi_domain;
		struct mutex lock;
	DECLARE_BITMAP(msi_irq_in_use,MTK_MSI_IRQS_NUM)
		;
	} cocci_id/* drivers/pci/controller/pcie-mediatek.c 183 */;
	struct mtk_pcie_soc {
		bool need_fix_class_id;
		bool need_fix_device_id;
		unsigned int device_id;
		struct pci_ops *ops;
		int (*startup)(struct mtk_pcie_port *port);
		int (*setup_irq)(struct mtk_pcie_port *port,
				 struct device_node *node);
	} cocci_id/* drivers/pci/controller/pcie-mediatek.c 151 */;
	struct mtk_pcie_port cocci_id/* drivers/pci/controller/pcie-mediatek.c 140 */;
	struct platform_driver cocci_id/* drivers/pci/controller/pcie-mediatek.c 1226 */;
	const struct of_device_id cocci_id/* drivers/pci/controller/pcie-mediatek.c 1217 */[];
	const struct mtk_pcie_soc cocci_id/* drivers/pci/controller/pcie-mediatek.c 1195 */;
	const struct dev_pm_ops cocci_id/* drivers/pci/controller/pcie-mediatek.c 1185 */;
	int __maybe_unused cocci_id/* drivers/pci/controller/pcie-mediatek.c 1165 */;
	struct list_head *cocci_id/* drivers/pci/controller/pcie-mediatek.c 1120 */;
	struct pci_host_bridge *cocci_id/* drivers/pci/controller/pcie-mediatek.c 1119 */;
}
