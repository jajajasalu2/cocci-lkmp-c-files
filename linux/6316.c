cocci_test_suite() {
	unsigned int *cocci_id/* drivers/mfd/qcom-pm8xxx.c 83 */;
	struct pm_irq_chip {
		struct regmap *regmap;
		spinlock_t pm_irq_lock;
		struct irq_domain *irqdomain;
		unsigned int num_blocks;
		unsigned int num_masters;
		const struct pm_irq_data *pm_irq_data;
		u8 config[0];
	} cocci_id/* drivers/mfd/qcom-pm8xxx.c 71 */;
	struct pm_irq_data {
		int num_irqs;
		struct irq_chip *irq_chip;
		void (*irq_handler)(struct irq_desc *desc);
	} cocci_id/* drivers/mfd/qcom-pm8xxx.c 65 */;
	void __exit cocci_id/* drivers/mfd/qcom-pm8xxx.c 624 */;
	int __init cocci_id/* drivers/mfd/qcom-pm8xxx.c 618 */;
	struct platform_driver cocci_id/* drivers/mfd/qcom-pm8xxx.c 609 */;
	struct device *cocci_id/* drivers/mfd/qcom-pm8xxx.c 591 */;
	u32 cocci_id/* drivers/mfd/qcom-pm8xxx.c 522 */;
	struct regmap *cocci_id/* drivers/mfd/qcom-pm8xxx.c 519 */;
	const struct pm_irq_data *cocci_id/* drivers/mfd/qcom-pm8xxx.c 518 */;
	struct platform_device *cocci_id/* drivers/mfd/qcom-pm8xxx.c 516 */;
	const struct of_device_id cocci_id/* drivers/mfd/qcom-pm8xxx.c 507 */[];
	const struct pm_irq_data cocci_id/* drivers/mfd/qcom-pm8xxx.c 501 */;
	const struct regmap_config cocci_id/* drivers/mfd/qcom-pm8xxx.c 486 */;
	struct irq_chip cocci_id/* drivers/mfd/qcom-pm8xxx.c 478 */;
	u8 cocci_id/* drivers/mfd/qcom-pm8xxx.c 458 */;
	bool *cocci_id/* drivers/mfd/qcom-pm8xxx.c 454 */;
	enum irqchip_irq_state cocci_id/* drivers/mfd/qcom-pm8xxx.c 453 */;
	struct irq_data *cocci_id/* drivers/mfd/qcom-pm8xxx.c 452 */;
	const struct irq_domain_ops cocci_id/* drivers/mfd/qcom-pm8xxx.c 399 */;
	irq_hw_number_t cocci_id/* drivers/mfd/qcom-pm8xxx.c 385 */;
	struct irq_fwspec *cocci_id/* drivers/mfd/qcom-pm8xxx.c 384 */;
	void *cocci_id/* drivers/mfd/qcom-pm8xxx.c 381 */;
	struct irq_domain *cocci_id/* drivers/mfd/qcom-pm8xxx.c 380 */;
	struct irq_chip *cocci_id/* drivers/mfd/qcom-pm8xxx.c 238 */;
	struct irq_desc *cocci_id/* drivers/mfd/qcom-pm8xxx.c 235 */;
	unsigned int cocci_id/* drivers/mfd/qcom-pm8xxx.c 203 */;
	int cocci_id/* drivers/mfd/qcom-pm8xxx.c 200 */;
	struct pm_irq_chip *cocci_id/* drivers/mfd/qcom-pm8xxx.c 199 */;
	void cocci_id/* drivers/mfd/qcom-pm8xxx.c 199 */;
}
