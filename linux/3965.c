cocci_test_suite() {
	struct s3c_irq_intc *cocci_id/* drivers/irqchip/irq-s3c24xx.c 75 */[3];
	void __init cocci_id/* drivers/irqchip/irq-s3c24xx.c 676 */;
	void cocci_id/* drivers/irqchip/irq-s3c24xx.c 676 */;
	struct s3c_irq_data cocci_id/* drivers/irqchip/irq-s3c24xx.c 627 */[32];
	struct s3c_irq_intc {
		void __iomem *reg_pending;
		void __iomem *reg_intpnd;
		void __iomem *reg_mask;
		struct irq_domain *domain;
		struct s3c_irq_intc *parent;
		struct s3c_irq_data *irqs;
	} cocci_id/* drivers/irqchip/irq-s3c24xx.c 60 */;
	struct s3c_irq_data __maybe_unused cocci_id/* drivers/irqchip/irq-s3c24xx.c 599 */[32];
	struct s3c_irq_intc cocci_id/* drivers/irqchip/irq-s3c24xx.c 527 */;
	void *cocci_id/* drivers/irqchip/irq-s3c24xx.c 522 */;
	struct s3c_irq_data *cocci_id/* drivers/irqchip/irq-s3c24xx.c 517 */;
	struct s3c_irq_intc *__initcocci_id/* drivers/irqchip/irq-s3c24xx.c 516 */;
	int cocci_id/* drivers/irqchip/irq-s3c24xx.c 495 */;
	unsigned long cocci_id/* drivers/irqchip/irq-s3c24xx.c 493 */;
	void __iomem *cocci_id/* drivers/irqchip/irq-s3c24xx.c 492 */;
	struct s3c_irq_intc *cocci_id/* drivers/irqchip/irq-s3c24xx.c 490 */;
	const struct irq_domain_ops cocci_id/* drivers/irqchip/irq-s3c24xx.c 485 */;
	irq_hw_number_t cocci_id/* drivers/irqchip/irq-s3c24xx.c 408 */;
	struct irq_domain *cocci_id/* drivers/irqchip/irq-s3c24xx.c 407 */;
	unsigned int cocci_id/* drivers/irqchip/irq-s3c24xx.c 407 */;
	struct s3c_irq_data {
		unsigned int type;
		unsigned long offset;
		unsigned long parent_irq;
		struct s3c_irq_intc *intc;
		unsigned long sub_bits;
		struct s3c_irq_intc *sub_intc;
	} cocci_id/* drivers/irqchip/irq-s3c24xx.c 40 */;
	unsigned cocci_id/* drivers/irqchip/irq-s3c24xx.c 388 */;
	u32 cocci_id/* drivers/irqchip/irq-s3c24xx.c 387 */;
	bool cocci_id/* drivers/irqchip/irq-s3c24xx.c 385 */;
	void __exception_irq_entry cocci_id/* drivers/irqchip/irq-s3c24xx.c 359 */;
	struct pt_regs *cocci_id/* drivers/irqchip/irq-s3c24xx.c 326 */;
	struct irq_chip *cocci_id/* drivers/irqchip/irq-s3c24xx.c 294 */;
	struct irq_desc *cocci_id/* drivers/irqchip/irq-s3c24xx.c 292 */;
	struct irq_chip cocci_id/* drivers/irqchip/irq-s3c24xx.c 257 */;
	struct device_node *cocci_id/* drivers/irqchip/irq-s3c24xx.c 1301 */;
	int __init cocci_id/* drivers/irqchip/irq-s3c24xx.c 1301 */;
	struct s3c24xx_irq_of_ctrl cocci_id/* drivers/irqchip/irq-s3c24xx.c 1290 */[];
	struct s3c_irq_data cocci_id/* drivers/irqchip/irq-s3c24xx.c 1255 */;
	struct irq_data *cocci_id/* drivers/irqchip/irq-s3c24xx.c 124 */;
	struct s3c24xx_irq_of_ctrl *cocci_id/* drivers/irqchip/irq-s3c24xx.c 1224 */;
	struct s3c24xx_irq_of_ctrl {
		char *name;
		unsigned long offset;
		struct s3c_irq_intc **handle;
		struct s3c_irq_intc **parent;
		struct irq_domain_ops *ops;
	} cocci_id/* drivers/irqchip/irq-s3c24xx.c 1214 */;
	irq_hw_number_t *cocci_id/* drivers/irqchip/irq-s3c24xx.c 1168 */;
	unsigned int *cocci_id/* drivers/irqchip/irq-s3c24xx.c 1168 */;
	const u32 *cocci_id/* drivers/irqchip/irq-s3c24xx.c 1167 */;
}
