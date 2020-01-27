cocci_test_suite() {
	struct stm_thermal_sensor {
		struct device *dev;
		struct thermal_zone_device *th_dev;
		enum thermal_device_mode mode;
		struct clk *clk;
		int high_temp;
		int low_temp;
		int temp_critical;
		int temp_passive;
		unsigned int low_temp_enabled;
		int num_trips;
		int irq;
		unsigned int irq_enabled;
		void __iomem *base;
		int t0,fmt0,ramp_coeff;
	} cocci_id/* drivers/thermal/st/stm_thermal.c 89 */;
	struct platform_driver cocci_id/* drivers/thermal/st/stm_thermal.c 744 */;
	void __iomem *cocci_id/* drivers/thermal/st/stm_thermal.c 616 */;
	const struct thermal_trip *cocci_id/* drivers/thermal/st/stm_thermal.c 615 */;
	struct resource *cocci_id/* drivers/thermal/st/stm_thermal.c 614 */;
	const struct of_device_id cocci_id/* drivers/thermal/st/stm_thermal.c 605 */[];
	const struct thermal_zone_of_device_ops cocci_id/* drivers/thermal/st/stm_thermal.c 601 */;
	struct platform_device *cocci_id/* drivers/thermal/st/stm_thermal.c 486 */;
	struct device *cocci_id/* drivers/thermal/st/stm_thermal.c 485 */;
	int *cocci_id/* drivers/thermal/st/stm_thermal.c 405 */;
	u32 cocci_id/* drivers/thermal/st/stm_thermal.c 327 */;
	struct stm_thermal_sensor *cocci_id/* drivers/thermal/st/stm_thermal.c 325 */;
	int cocci_id/* drivers/thermal/st/stm_thermal.c 325 */;
	u32 *cocci_id/* drivers/thermal/st/stm_thermal.c 263 */;
	irqreturn_t cocci_id/* drivers/thermal/st/stm_thermal.c 106 */;
	void *cocci_id/* drivers/thermal/st/stm_thermal.c 106 */;
}
