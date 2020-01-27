cocci_test_suite() {
	struct hisi_thermal_data {
		const struct hisi_thermal_ops *ops;
		struct hisi_thermal_sensor *sensor;
		struct platform_device *pdev;
		struct clk *clk;
		void __iomem *regs;
		int nr_sensors;
	} cocci_id/* drivers/thermal/hisi_thermal.c 84 */;
	struct hisi_thermal_ops {
		int (*get_temp)(struct hisi_thermal_sensor *sensor);
		int (*enable_sensor)(struct hisi_thermal_sensor *sensor);
		int (*disable_sensor)(struct hisi_thermal_sensor *sensor);
		int (*irq_handler)(struct hisi_thermal_sensor *sensor);
		int (*probe)(struct hisi_thermal_data *data);
	} cocci_id/* drivers/thermal/hisi_thermal.c 76 */;
	struct hisi_thermal_sensor {
		struct hisi_thermal_data *data;
		struct thermal_zone_device *tzd;
		const char *irq_name;
		uint32_t id;
		uint32_t thres_temp;
	} cocci_id/* drivers/thermal/hisi_thermal.c 68 */;
	struct hisi_thermal_data cocci_id/* drivers/thermal/hisi_thermal.c 66 */;
	struct platform_driver cocci_id/* drivers/thermal/hisi_thermal.c 659 */;
	struct resource *cocci_id/* drivers/thermal/hisi_thermal.c 560 */;
	struct thermal_zone_device *cocci_id/* drivers/thermal/hisi_thermal.c 550 */;
	bool cocci_id/* drivers/thermal/hisi_thermal.c 548 */;
	const struct of_device_id cocci_id/* drivers/thermal/hisi_thermal.c 534 */[];
	const struct hisi_thermal_ops cocci_id/* drivers/thermal/hisi_thermal.c 526 */;
	const struct thermal_trip *cocci_id/* drivers/thermal/hisi_thermal.c 493 */;
	irqreturn_t cocci_id/* drivers/thermal/hisi_thermal.c 462 */;
	void *cocci_id/* drivers/thermal/hisi_thermal.c 462 */;
	const struct thermal_zone_of_device_ops cocci_id/* drivers/thermal/hisi_thermal.c 458 */;
	int *cocci_id/* drivers/thermal/hisi_thermal.c 445 */;
	struct device *cocci_id/* drivers/thermal/hisi_thermal.c 425 */;
	struct platform_device *cocci_id/* drivers/thermal/hisi_thermal.c 424 */;
	unsigned int cocci_id/* drivers/thermal/hisi_thermal.c 376 */;
	struct hisi_thermal_data *cocci_id/* drivers/thermal/hisi_thermal.c 329 */;
	struct hisi_thermal_sensor *cocci_id/* drivers/thermal/hisi_thermal.c 327 */;
	int cocci_id/* drivers/thermal/hisi_thermal.c 229 */;
	void __iomem *cocci_id/* drivers/thermal/hisi_thermal.c 228 */;
	void cocci_id/* drivers/thermal/hisi_thermal.c 228 */;
}
