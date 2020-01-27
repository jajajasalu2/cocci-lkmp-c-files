cocci_test_suite() {
	struct platform_driver cocci_id/* drivers/soc/bcm/bcm2835-power.c 685 */;
	const struct {
		int parent,child;
	} cocci_id/* drivers/soc/bcm/bcm2835-power.c 607 */[];
	struct bcm2835_pm *cocci_id/* drivers/soc/bcm/bcm2835-power.c 604 */;
	struct platform_device *cocci_id/* drivers/soc/bcm/bcm2835-power.c 602 */;
	const char *constcocci_id/* drivers/soc/bcm/bcm2835-power.c 584 */[];
	const struct reset_control_ops cocci_id/* drivers/soc/bcm/bcm2835-power.c 579 */;
	struct bcm2835_power cocci_id/* drivers/soc/bcm/bcm2835-power.c 534 */;
	unsigned long cocci_id/* drivers/soc/bcm/bcm2835-power.c 532 */;
	struct reset_controller_dev *cocci_id/* drivers/soc/bcm/bcm2835-power.c 531 */;
	struct device *cocci_id/* drivers/soc/bcm/bcm2835-power.c 492 */;
	const char *cocci_id/* drivers/soc/bcm/bcm2835-power.c 490 */;
	struct bcm2835_power_domain cocci_id/* drivers/soc/bcm/bcm2835-power.c 428 */;
	struct generic_pm_domain *cocci_id/* drivers/soc/bcm/bcm2835-power.c 425 */;
	struct bcm2835_power_domain *cocci_id/* drivers/soc/bcm/bcm2835-power.c 328 */;
	bool cocci_id/* drivers/soc/bcm/bcm2835-power.c 214 */;
	u64 cocci_id/* drivers/soc/bcm/bcm2835-power.c 173 */;
	u32 cocci_id/* drivers/soc/bcm/bcm2835-power.c 171 */;
	struct bcm2835_power *cocci_id/* drivers/soc/bcm/bcm2835-power.c 171 */;
	int cocci_id/* drivers/soc/bcm/bcm2835-power.c 171 */;
	struct bcm2835_power {
		struct device *dev;
		void __iomem *base;
		void __iomem *asb;
		struct genpd_onecell_data pd_xlate;
		struct bcm2835_power_domain domains[BCM2835_POWER_DOMAIN_COUNT];
		struct reset_controller_dev reset;
	} cocci_id/* drivers/soc/bcm/bcm2835-power.c 139 */;
	struct bcm2835_power_domain {
		struct generic_pm_domain base;
		struct bcm2835_power *power;
		u32 domain;
		struct clk *clk;
	} cocci_id/* drivers/soc/bcm/bcm2835-power.c 132 */;
}
