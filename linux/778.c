cocci_test_suite() {
	struct rcar_pci_priv {
		struct device *dev;
		void __iomem *reg;
		struct resource mem_res;
		struct resource *cfg_res;
		unsigned busnr;
		int irq;
		unsigned long window_size;
		unsigned long window_addr;
		unsigned long window_pci;
	} cocci_id/* drivers/pci/controller/pci-rcar-gen2.c 96 */;
	struct platform_driver cocci_id/* drivers/pci/controller/pci-rcar-gen2.c 420 */;
	const struct of_device_id cocci_id/* drivers/pci/controller/pci-rcar-gen2.c 412 */[];
	struct resource cocci_id/* drivers/pci/controller/pci-rcar-gen2.c 378 */;
	struct rcar_pci_priv cocci_id/* drivers/pci/controller/pci-rcar-gen2.c 356 */;
	void *cocci_id/* drivers/pci/controller/pci-rcar-gen2.c 342 */[1];
	struct hw_pci cocci_id/* drivers/pci/controller/pci-rcar-gen2.c 341 */;
	struct resource *cocci_id/* drivers/pci/controller/pci-rcar-gen2.c 338 */;
	struct platform_device *cocci_id/* drivers/pci/controller/pci-rcar-gen2.c 335 */;
	unsigned long cocci_id/* drivers/pci/controller/pci-rcar-gen2.c 312 */;
	struct of_pci_range_parser cocci_id/* drivers/pci/controller/pci-rcar-gen2.c 299 */;
	struct of_pci_range cocci_id/* drivers/pci/controller/pci-rcar-gen2.c 298 */;
	struct device_node *cocci_id/* drivers/pci/controller/pci-rcar-gen2.c 295 */;
	struct pci_ops cocci_id/* drivers/pci/controller/pci-rcar-gen2.c 288 */;
	void cocci_id/* drivers/pci/controller/pci-rcar-gen2.c 170 */;
	u32 cocci_id/* drivers/pci/controller/pci-rcar-gen2.c 156 */;
	struct device *cocci_id/* drivers/pci/controller/pci-rcar-gen2.c 155 */;
	irqreturn_t cocci_id/* drivers/pci/controller/pci-rcar-gen2.c 152 */;
	void *cocci_id/* drivers/pci/controller/pci-rcar-gen2.c 152 */;
	u8 cocci_id/* drivers/pci/controller/pci-rcar-gen2.c 136 */;
	const struct pci_dev *cocci_id/* drivers/pci/controller/pci-rcar-gen2.c 136 */;
	struct rcar_pci_priv *cocci_id/* drivers/pci/controller/pci-rcar-gen2.c 113 */;
	struct pci_sys_data *cocci_id/* drivers/pci/controller/pci-rcar-gen2.c 112 */;
	int cocci_id/* drivers/pci/controller/pci-rcar-gen2.c 110 */;
	struct pci_bus *cocci_id/* drivers/pci/controller/pci-rcar-gen2.c 109 */;
	void __iomem *cocci_id/* drivers/pci/controller/pci-rcar-gen2.c 109 */;
	unsigned int cocci_id/* drivers/pci/controller/pci-rcar-gen2.c 109 */;
}
