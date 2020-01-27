cocci_test_suite() {
	const struct of_device_id cocci_id/* drivers/thermal/broadcom/sr-thermal.c 96 */[];
	void __iomem *cocci_id/* drivers/thermal/broadcom/sr-thermal.c 63 */;
	unsigned int cocci_id/* drivers/thermal/broadcom/sr-thermal.c 55 */;
	u32 cocci_id/* drivers/thermal/broadcom/sr-thermal.c 54 */;
	struct resource *cocci_id/* drivers/thermal/broadcom/sr-thermal.c 53 */;
	struct device *cocci_id/* drivers/thermal/broadcom/sr-thermal.c 50 */;
	struct platform_device *cocci_id/* drivers/thermal/broadcom/sr-thermal.c 48 */;
	const struct thermal_zone_of_device_ops cocci_id/* drivers/thermal/broadcom/sr-thermal.c 44 */;
	struct sr_thermal *cocci_id/* drivers/thermal/broadcom/sr-thermal.c 37 */;
	struct sr_tmon *cocci_id/* drivers/thermal/broadcom/sr-thermal.c 36 */;
	int *cocci_id/* drivers/thermal/broadcom/sr-thermal.c 34 */;
	void *cocci_id/* drivers/thermal/broadcom/sr-thermal.c 34 */;
	int cocci_id/* drivers/thermal/broadcom/sr-thermal.c 34 */;
	struct sr_thermal {
		void __iomem *regs;
		unsigned int max_crit_temp;
		struct sr_tmon tmon[SR_TMON_MAX_LIST];
	} cocci_id/* drivers/thermal/broadcom/sr-thermal.c 28 */;
	struct sr_tmon {
		struct thermal_zone_device *tz;
		unsigned int crit_temp;
		unsigned int tmon_id;
		struct sr_thermal *priv;
	} cocci_id/* drivers/thermal/broadcom/sr-thermal.c 21 */;
	struct platform_driver cocci_id/* drivers/thermal/broadcom/sr-thermal.c 102 */;
}
