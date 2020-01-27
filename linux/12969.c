cocci_test_suite() {
	struct reset_controller_dev cocci_id/* drivers/soc/dove/pmu.c 97 */;
	const struct reset_control_ops cocci_id/* drivers/soc/dove/pmu.c 91 */;
	struct reset_controller_dev *cocci_id/* drivers/soc/dove/pmu.c 63 */;
	struct pmu_data cocci_id/* drivers/soc/dove/pmu.c 46 */;
	struct of_phandle_args cocci_id/* drivers/soc/dove/pmu.c 409 */;
	int cocci_id/* drivers/soc/dove/pmu.c 377 */;
	struct pmu_data *cocci_id/* drivers/soc/dove/pmu.c 376 */;
	int __init cocci_id/* drivers/soc/dove/pmu.c 373 */;
	const struct dove_pmu_domain_initdata *cocci_id/* drivers/soc/dove/pmu.c 311 */;
	const struct dove_pmu_initdata *cocci_id/* drivers/soc/dove/pmu.c 309 */;
	struct pmu_data {
		spinlock_t lock;
		struct device_node *of_node;
		void __iomem *pmc_base;
		void __iomem *pmu_base;
		struct irq_chip_generic *irq_gc;
		struct irq_domain *irq_domain;
#ifdef CONFIG_RESET_CONTROLLER
		struct reset_controller_dev reset;
#endif
	} cocci_id/* drivers/soc/dove/pmu.c 29 */;
	struct irq_domain *cocci_id/* drivers/soc/dove/pmu.c 270 */;
	struct irq_chip_generic *cocci_id/* drivers/soc/dove/pmu.c 269 */;
	const char *cocci_id/* drivers/soc/dove/pmu.c 268 */;
	u32 cocci_id/* drivers/soc/dove/pmu.c 232 */;
	struct irq_desc *cocci_id/* drivers/soc/dove/pmu.c 226 */;
	unsigned int cocci_id/* drivers/soc/dove/pmu.c 214 */;
	struct device_node *cocci_id/* drivers/soc/dove/pmu.c 212 */;
	struct pmu_domain *cocci_id/* drivers/soc/dove/pmu.c 211 */;
	void cocci_id/* drivers/soc/dove/pmu.c 211 */;
	void __iomem *cocci_id/* drivers/soc/dove/pmu.c 149 */;
	unsigned long cocci_id/* drivers/soc/dove/pmu.c 147 */;
	struct generic_pm_domain *cocci_id/* drivers/soc/dove/pmu.c 143 */;
	struct pmu_domain cocci_id/* drivers/soc/dove/pmu.c 128 */;
	struct pmu_domain {
		struct pmu_data *pmu;
		u32 pwr_mask;
		u32 rst_mask;
		u32 iso_mask;
		struct generic_pm_domain base;
	} cocci_id/* drivers/soc/dove/pmu.c 120 */;
	void __init cocci_id/* drivers/soc/dove/pmu.c 103 */;
}
