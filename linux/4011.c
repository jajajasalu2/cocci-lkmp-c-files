cocci_test_suite() {
	void __exit cocci_id/* drivers/irqchip/irq-stm32-exti.c 908 */;
	int __init cocci_id/* drivers/irqchip/irq-stm32-exti.c 903 */;
	struct platform_driver cocci_id/* drivers/irqchip/irq-stm32-exti.c 894 */;
	const struct of_device_id cocci_id/* drivers/irqchip/irq-stm32-exti.c 888 */[];
	const struct stm32_exti_drv_data cocci_id/* drivers/irqchip/irq-stm32-exti.c 87 */;
	const struct stm32_exti_bank *cocci_id/* drivers/irqchip/irq-stm32-exti.c 83 */[];
	struct resource *cocci_id/* drivers/irqchip/irq-stm32-exti.c 814 */;
	struct device *cocci_id/* drivers/irqchip/irq-stm32-exti.c 809 */;
	struct platform_device *cocci_id/* drivers/irqchip/irq-stm32-exti.c 806 */;
	const struct stm32_exti_bank cocci_id/* drivers/irqchip/irq-stm32-exti.c 73 */;
	struct irq_chip_generic *cocci_id/* drivers/irqchip/irq-stm32-exti.c 720 */;
	struct device_node *cocci_id/* drivers/irqchip/irq-stm32-exti.c 689 */;
	struct stm32_exti_host_data *cocci_id/* drivers/irqchip/irq-stm32-exti.c 687 */;
	struct stm32_exti_chip_data cocci_id/* drivers/irqchip/irq-stm32-exti.c 663 */;
	const struct stm32_exti_drv_data *cocci_id/* drivers/irqchip/irq-stm32-exti.c 652 */;
	struct stm32_exti_host_data {
		void __iomem *base;
		struct stm32_exti_chip_data *chips_data;
		const struct stm32_exti_drv_data *drv_data;
		struct hwspinlock *hwlock;
	} cocci_id/* drivers/irqchip/irq-stm32-exti.c 64 */;
	struct irq_fwspec cocci_id/* drivers/irqchip/irq-stm32-exti.c 626 */;
	struct irq_chip cocci_id/* drivers/irqchip/irq-stm32-exti.c 607 */;
	struct syscore_ops cocci_id/* drivers/irqchip/irq-stm32-exti.c 589 */;
	void __maybe_unused cocci_id/* drivers/irqchip/irq-stm32-exti.c 576 */;
	int __maybe_unused cocci_id/* drivers/irqchip/irq-stm32-exti.c 561 */;
	bool cocci_id/* drivers/irqchip/irq-stm32-exti.c 553 */;
	const struct cpumask *cocci_id/* drivers/irqchip/irq-stm32-exti.c 553 */;
	struct stm32_exti_chip_data {
		struct stm32_exti_host_data *host_data;
		const struct stm32_exti_bank *reg_bank;
		struct raw_spinlock rlock;
		u32 wake_active;
		u32 mask_cache;
		u32 rtsr_cache;
		u32 ftsr_cache;
	} cocci_id/* drivers/irqchip/irq-stm32-exti.c 54 */;
	struct stm32_exti_drv_data {
		const struct stm32_exti_bank **exti_banks;
		const struct stm32_desc_irq *desc_irqs;
		u32 bank_nr;
		u32 irq_nr;
	} cocci_id/* drivers/irqchip/irq-stm32-exti.c 47 */;
	struct irq_data *cocci_id/* drivers/irqchip/irq-stm32-exti.c 447 */;
	struct stm32_desc_irq {
		u32 exti;
		u32 irq_parent;
	} cocci_id/* drivers/irqchip/irq-stm32-exti.c 42 */;
	const struct irq_domain_ops cocci_id/* drivers/irqchip/irq-stm32-exti.c 413 */;
	irq_hw_number_t cocci_id/* drivers/irqchip/irq-stm32-exti.c 396 */;
	struct irq_fwspec *cocci_id/* drivers/irqchip/irq-stm32-exti.c 395 */;
	void *cocci_id/* drivers/irqchip/irq-stm32-exti.c 393 */;
	struct irq_domain *cocci_id/* drivers/irqchip/irq-stm32-exti.c 392 */;
	unsigned int cocci_id/* drivers/irqchip/irq-stm32-exti.c 392 */;
	int cocci_id/* drivers/irqchip/irq-stm32-exti.c 392 */;
	void __iomem *cocci_id/* drivers/irqchip/irq-stm32-exti.c 365 */;
	const struct stm32_exti_bank *cocci_id/* drivers/irqchip/irq-stm32-exti.c 364 */;
	u32 cocci_id/* drivers/irqchip/irq-stm32-exti.c 362 */;
	struct stm32_exti_chip_data *cocci_id/* drivers/irqchip/irq-stm32-exti.c 361 */;
	void cocci_id/* drivers/irqchip/irq-stm32-exti.c 361 */;
	struct stm32_exti_bank {
		u32 imr_ofst;
		u32 emr_ofst;
		u32 rtsr_ofst;
		u32 ftsr_ofst;
		u32 swier_ofst;
		u32 rpr_ofst;
		u32 fpr_ofst;
	} cocci_id/* drivers/irqchip/irq-stm32-exti.c 30 */;
	u32 *cocci_id/* drivers/irqchip/irq-stm32-exti.c 256 */;
	struct irq_chip *cocci_id/* drivers/irqchip/irq-stm32-exti.c 233 */;
	struct irq_desc *cocci_id/* drivers/irqchip/irq-stm32-exti.c 230 */;
	unsigned long cocci_id/* drivers/irqchip/irq-stm32-exti.c 217 */;
	const struct stm32_desc_irq *cocci_id/* drivers/irqchip/irq-stm32-exti.c 202 */;
	const struct stm32_desc_irq cocci_id/* drivers/irqchip/irq-stm32-exti.c 169 */[];
}
