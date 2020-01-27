cocci_test_suite() {
	const struct cpumask *cocci_id/* drivers/irqchip/irq-sifive-plic.c 86 */;
	u32 __iomem *cocci_id/* drivers/irqchip/irq-sifive-plic.c 75 */;
	struct plic_handler {
		bool present;
		void __iomem *hart_base;
		raw_spinlock_t enable_lock;
		void __iomem *enable_base;
	} cocci_id/* drivers/irqchip/irq-sifive-plic.c 60 */;
	struct of_phandle_args cocci_id/* drivers/irqchip/irq-sifive-plic.c 244 */;
	u32 cocci_id/* drivers/irqchip/irq-sifive-plic.c 215 */;
	int __init cocci_id/* drivers/irqchip/irq-sifive-plic.c 211 */;
	struct device_node *cocci_id/* drivers/irqchip/irq-sifive-plic.c 201 */;
	int cocci_id/* drivers/irqchip/irq-sifive-plic.c 201 */;
	irq_hw_number_t cocci_id/* drivers/irqchip/irq-sifive-plic.c 180 */;
	void __iomem *cocci_id/* drivers/irqchip/irq-sifive-plic.c 179 */;
	struct plic_handler *cocci_id/* drivers/irqchip/irq-sifive-plic.c 178 */;
	struct pt_regs *cocci_id/* drivers/irqchip/irq-sifive-plic.c 176 */;
	void cocci_id/* drivers/irqchip/irq-sifive-plic.c 176 */;
	struct irq_domain *cocci_id/* drivers/irqchip/irq-sifive-plic.c 168 */;
	const struct irq_domain_ops cocci_id/* drivers/irqchip/irq-sifive-plic.c 163 */;
	struct irq_chip cocci_id/* drivers/irqchip/irq-sifive-plic.c 144 */;
	struct irq_data *cocci_id/* drivers/irqchip/irq-sifive-plic.c 137 */;
	bool cocci_id/* drivers/irqchip/irq-sifive-plic.c 116 */;
	unsigned int cocci_id/* drivers/irqchip/irq-sifive-plic.c 102 */;
	__typeof__(struct plic_handler) cocci_id/* /home/jaskaran/lkmp/coccinelle/standard.h 437 */;
}
