cocci_test_suite() {
	int cocci_id/* drivers/mfd/twl6030-irq.c 46 */[24];
	int cocci_id/* drivers/mfd/twl6030-irq.c 441 */;
	void cocci_id/* drivers/mfd/twl6030-irq.c 441 */;
	const struct of_device_id *cocci_id/* drivers/mfd/twl6030-irq.c 371 */;
	u8 cocci_id/* drivers/mfd/twl6030-irq.c 370 */[3];
	struct device_node *cocci_id/* drivers/mfd/twl6030-irq.c 367 */;
	struct device *cocci_id/* drivers/mfd/twl6030-irq.c 365 */;
	const struct of_device_id cocci_id/* drivers/mfd/twl6030-irq.c 359 */[];
	const struct irq_domain_ops cocci_id/* drivers/mfd/twl6030-irq.c 353 */;
	irq_hw_number_t cocci_id/* drivers/mfd/twl6030-irq.c 334 */;
	struct irq_domain *cocci_id/* drivers/mfd/twl6030-irq.c 333 */;
	unsigned int cocci_id/* drivers/mfd/twl6030-irq.c 333 */;
	struct platform_device *cocci_id/* drivers/mfd/twl6030-irq.c 312 */;
	u8 cocci_id/* drivers/mfd/twl6030-irq.c 245 */;
	struct irq_data *cocci_id/* drivers/mfd/twl6030-irq.c 219 */;
	u32 cocci_id/* drivers/mfd/twl6030-irq.c 167 */;
	union {
		u8 bytes[4];
		__le32 int_sts;
	} cocci_id/* drivers/mfd/twl6030-irq.c 163 */;
	irqreturn_t cocci_id/* drivers/mfd/twl6030-irq.c 160 */;
	struct twl6030_irq cocci_id/* drivers/mfd/twl6030-irq.c 123 */;
	void *cocci_id/* drivers/mfd/twl6030-irq.c 120 */;
	unsigned long cocci_id/* drivers/mfd/twl6030-irq.c 120 */;
	struct notifier_block *cocci_id/* drivers/mfd/twl6030-irq.c 119 */;
	struct twl6030_irq *cocci_id/* drivers/mfd/twl6030-irq.c 117 */;
	struct twl6030_irq {
		unsigned int irq_base;
		int twl_irq;
		bool irq_wake_enabled;
		atomic_t wakeirqs;
		struct notifier_block pm_nb;
		struct irq_chip irq_chip;
		struct irq_domain *irq_domain;
		const int *irq_mapping_tbl;
	} cocci_id/* drivers/mfd/twl6030-irq.c 106 */;
}
