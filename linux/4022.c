cocci_test_suite() {
	struct msi_desc *cocci_id/* drivers/irqchip/irq-mvebu-icu.c 92 */;
	const struct mvebu_icu_subset_data *cocci_id/* drivers/irqchip/irq-mvebu-icu.c 75 */;
	struct msi_msg *cocci_id/* drivers/irqchip/irq-mvebu-icu.c 73 */;
	struct mvebu_icu_msi_data *cocci_id/* drivers/irqchip/irq-mvebu-icu.c 72 */;
	struct mvebu_icu *cocci_id/* drivers/irqchip/irq-mvebu-icu.c 71 */;
	void cocci_id/* drivers/irqchip/irq-mvebu-icu.c 71 */;
	struct mvebu_icu_irq_data {
		struct mvebu_icu *icu;
		unsigned int icu_group;
		unsigned int type;
	} cocci_id/* drivers/irqchip/irq-mvebu-icu.c 63 */;
	struct mvebu_icu_msi_data {
		struct mvebu_icu *icu;
		atomic_t initialized;
		const struct mvebu_icu_subset_data *subset_data;
	} cocci_id/* drivers/irqchip/irq-mvebu-icu.c 57 */;
	struct mvebu_icu {
		void __iomem *base;
		struct device *dev;
	} cocci_id/* drivers/irqchip/irq-mvebu-icu.c 52 */;
	struct mvebu_icu_subset_data {
		unsigned int icu_group;
		unsigned int offset_set_ah;
		unsigned int offset_set_al;
		unsigned int offset_clr_ah;
		unsigned int offset_clr_al;
	} cocci_id/* drivers/irqchip/irq-mvebu-icu.c 44 */;
	struct platform_driver cocci_id/* drivers/irqchip/irq-mvebu-icu.c 406 */;
	const struct of_device_id cocci_id/* drivers/irqchip/irq-mvebu-icu.c 401 */[];
	u32 cocci_id/* drivers/irqchip/irq-mvebu-icu.c 382 */;
	struct mvebu_icu cocci_id/* drivers/irqchip/irq-mvebu-icu.c 353 */;
	struct resource *cocci_id/* drivers/irqchip/irq-mvebu-icu.c 350 */;
	struct platform_device *cocci_id/* drivers/irqchip/irq-mvebu-icu.c 347 */;
	struct device *cocci_id/* drivers/irqchip/irq-mvebu-icu.c 302 */;
	struct device_node *cocci_id/* drivers/irqchip/irq-mvebu-icu.c 301 */;
	const struct mvebu_icu_subset_data cocci_id/* drivers/irqchip/irq-mvebu-icu.c 272 */;
	const struct irq_domain_ops cocci_id/* drivers/irqchip/irq-mvebu-icu.c 266 */;
	struct irq_data *cocci_id/* drivers/irqchip/irq-mvebu-icu.c 258 */;
	struct irq_chip *cocci_id/* drivers/irqchip/irq-mvebu-icu.c 205 */;
	struct mvebu_icu_irq_data *cocci_id/* drivers/irqchip/irq-mvebu-icu.c 204 */;
	struct irq_fwspec *cocci_id/* drivers/irqchip/irq-mvebu-icu.c 201 */;
	unsigned long cocci_id/* drivers/irqchip/irq-mvebu-icu.c 200 */;
	void *cocci_id/* drivers/irqchip/irq-mvebu-icu.c 197 */;
	struct irq_domain *cocci_id/* drivers/irqchip/irq-mvebu-icu.c 196 */;
	unsigned int cocci_id/* drivers/irqchip/irq-mvebu-icu.c 196 */;
	int cocci_id/* drivers/irqchip/irq-mvebu-icu.c 195 */;
	unsigned long *cocci_id/* drivers/irqchip/irq-mvebu-icu.c 152 */;
	unsigned int *cocci_id/* drivers/irqchip/irq-mvebu-icu.c 152 */;
	struct irq_chip cocci_id/* drivers/irqchip/irq-mvebu-icu.c 132 */;
}
