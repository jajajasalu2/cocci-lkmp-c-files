cocci_test_suite() {
	struct irq_fwspec cocci_id/* drivers/irqchip/irq-mvebu-gicp.c 84 */;
	void *cocci_id/* drivers/irqchip/irq-mvebu-gicp.c 81 */;
	struct irq_domain *cocci_id/* drivers/irqchip/irq-mvebu-gicp.c 80 */;
	unsigned int cocci_id/* drivers/irqchip/irq-mvebu-gicp.c 80 */;
	struct irq_chip cocci_id/* drivers/irqchip/irq-mvebu-gicp.c 70 */;
	phys_addr_t cocci_id/* drivers/irqchip/irq-mvebu-gicp.c 59 */;
	struct mvebu_gicp *cocci_id/* drivers/irqchip/irq-mvebu-gicp.c 58 */;
	struct msi_msg *cocci_id/* drivers/irqchip/irq-mvebu-gicp.c 56 */;
	struct irq_data *cocci_id/* drivers/irqchip/irq-mvebu-gicp.c 56 */;
	void cocci_id/* drivers/irqchip/irq-mvebu-gicp.c 56 */;
	struct mvebu_gicp_spi_range *cocci_id/* drivers/irqchip/irq-mvebu-gicp.c 45 */;
	int cocci_id/* drivers/irqchip/irq-mvebu-gicp.c 40 */;
	struct mvebu_gicp {
		struct mvebu_gicp_spi_range *spi_ranges;
		unsigned int spi_ranges_cnt;
		unsigned int spi_cnt;
		unsigned long *spi_bitmap;
		spinlock_t spi_lock;
		struct resource *res;
		struct device *dev;
	} cocci_id/* drivers/irqchip/irq-mvebu-gicp.c 30 */;
	struct platform_driver cocci_id/* drivers/irqchip/irq-mvebu-gicp.c 257 */;
	const struct of_device_id cocci_id/* drivers/irqchip/irq-mvebu-gicp.c 252 */[];
	struct mvebu_gicp_spi_range {
		unsigned int start;
		unsigned int count;
	} cocci_id/* drivers/irqchip/irq-mvebu-gicp.c 25 */;
	long cocci_id/* drivers/irqchip/irq-mvebu-gicp.c 214 */;
	struct mvebu_gicp_spi_range cocci_id/* drivers/irqchip/irq-mvebu-gicp.c 196 */;
	struct device_node *cocci_id/* drivers/irqchip/irq-mvebu-gicp.c 172 */;
	struct platform_device *cocci_id/* drivers/irqchip/irq-mvebu-gicp.c 168 */;
	struct msi_domain_info cocci_id/* drivers/irqchip/irq-mvebu-gicp.c 161 */;
	struct msi_domain_ops cocci_id/* drivers/irqchip/irq-mvebu-gicp.c 158 */;
	const struct irq_domain_ops cocci_id/* drivers/irqchip/irq-mvebu-gicp.c 147 */;
}
