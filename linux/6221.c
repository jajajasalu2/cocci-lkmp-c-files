cocci_test_suite() {
	struct irq_chip cocci_id/* drivers/mfd/lp8788-irq.c 98 */;
	struct lp8788_irq_data *cocci_id/* drivers/mfd/lp8788-irq.c 78 */;
	struct irq_data *cocci_id/* drivers/mfd/lp8788-irq.c 76 */;
	void cocci_id/* drivers/mfd/lp8788-irq.c 76 */;
	int cocci_id/* drivers/mfd/lp8788-irq.c 57 */;
	u8 cocci_id/* drivers/mfd/lp8788-irq.c 42 */;
	enum lp8788_int_id cocci_id/* drivers/mfd/lp8788-irq.c 42 */;
	struct lp8788_irq_data {
		struct lp8788 *lp;
		struct mutex irq_lock;
		struct irq_domain *domain;
		int enabled[LP8788_INT_MAX];
	} cocci_id/* drivers/mfd/lp8788-irq.c 35 */;
	struct lp8788 *cocci_id/* drivers/mfd/lp8788-irq.c 187 */;
	const struct irq_domain_ops cocci_id/* drivers/mfd/lp8788-irq.c 145 */;
	struct irq_chip *cocci_id/* drivers/mfd/lp8788-irq.c 135 */;
	irq_hw_number_t cocci_id/* drivers/mfd/lp8788-irq.c 132 */;
	struct irq_domain *cocci_id/* drivers/mfd/lp8788-irq.c 131 */;
	unsigned int cocci_id/* drivers/mfd/lp8788-irq.c 131 */;
	bool cocci_id/* drivers/mfd/lp8788-irq.c 111 */;
	u8 cocci_id/* drivers/mfd/lp8788-irq.c 110 */[NUM_REGS];
	irqreturn_t cocci_id/* drivers/mfd/lp8788-irq.c 106 */;
	void *cocci_id/* drivers/mfd/lp8788-irq.c 106 */;
}
