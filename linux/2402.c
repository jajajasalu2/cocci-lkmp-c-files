cocci_test_suite() {
	struct ipu_irq_map cocci_id/* drivers/dma/ipu/ipu_irq.c 76 */[CONFIG_MX3_IPU_IRQS];
	struct ipu_irq_map {
		unsigned int irq;
		int source;
		struct ipu_irq_bank *bank;
		struct ipu *ipu;
	} cocci_id/* drivers/dma/ipu/ipu_irq.c 69 */;
	struct ipu_irq_bank cocci_id/* drivers/dma/ipu/ipu_irq.c 47 */[IPU_IRQ_NR_BANKS];
	struct ipu_irq_bank {
		unsigned int control;
		unsigned int status;
		struct ipu *ipu;
	} cocci_id/* drivers/dma/ipu/ipu_irq.c 41 */;
	int cocci_id/* drivers/dma/ipu/ipu_irq.c 317 */;
	unsigned int cocci_id/* drivers/dma/ipu/ipu_irq.c 316 */;
	struct platform_device *cocci_id/* drivers/dma/ipu/ipu_irq.c 314 */;
	struct ipu *cocci_id/* drivers/dma/ipu/ipu_irq.c 314 */;
	int __init cocci_id/* drivers/dma/ipu/ipu_irq.c 314 */;
	struct irq_chip cocci_id/* drivers/dma/ipu/ipu_irq.c 306 */;
	u32 cocci_id/* drivers/dma/ipu/ipu_irq.c 269 */;
	struct irq_desc *cocci_id/* drivers/dma/ipu/ipu_irq.c 266 */;
	bool cocci_id/* drivers/dma/ipu/ipu_irq.c 164 */;
	unsigned long cocci_id/* drivers/dma/ipu/ipu_irq.c 143 */;
	struct ipu_irq_bank *cocci_id/* drivers/dma/ipu/ipu_irq.c 142 */;
	struct ipu_irq_map *cocci_id/* drivers/dma/ipu/ipu_irq.c 141 */;
	struct irq_data *cocci_id/* drivers/dma/ipu/ipu_irq.c 139 */;
	void cocci_id/* drivers/dma/ipu/ipu_irq.c 139 */;
	uint32_t cocci_id/* drivers/dma/ipu/ipu_irq.c 120 */;
}
