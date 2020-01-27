cocci_test_suite() {
	unsigned int cocci_id/* drivers/thermal/da9062-thermal.c 66 */;
	unsigned long cocci_id/* drivers/thermal/da9062-thermal.c 65 */;
	struct da9062_thermal cocci_id/* drivers/thermal/da9062-thermal.c 63 */;
	struct work_struct *cocci_id/* drivers/thermal/da9062-thermal.c 60 */;
	void cocci_id/* drivers/thermal/da9062-thermal.c 60 */;
	struct da9062_thermal {
		struct da9062 *hw;
		struct delayed_work work;
		struct thermal_zone_device *zone;
		enum thermal_device_mode mode;
		struct mutex lock;
		int temperature;
		int irq;
		const struct da9062_thermal_config *config;
		struct device *dev;
	} cocci_id/* drivers/thermal/da9062-thermal.c 48 */;
	struct da9062_thermal_config {
		const char *name;
	} cocci_id/* drivers/thermal/da9062-thermal.c 44 */;
	struct platform_driver cocci_id/* drivers/thermal/da9062-thermal.c 292 */;
	const struct of_device_id *cocci_id/* drivers/thermal/da9062-thermal.c 205 */;
	struct da9062 *cocci_id/* drivers/thermal/da9062-thermal.c 202 */;
	struct platform_device *cocci_id/* drivers/thermal/da9062-thermal.c 200 */;
	const struct of_device_id cocci_id/* drivers/thermal/da9062-thermal.c 193 */[];
	const struct da9062_thermal_config cocci_id/* drivers/thermal/da9062-thermal.c 189 */;
	struct thermal_zone_device_ops cocci_id/* drivers/thermal/da9062-thermal.c 182 */;
	int *cocci_id/* drivers/thermal/da9062-thermal.c 171 */;
	enum thermal_trip_type *cocci_id/* drivers/thermal/da9062-thermal.c 134 */;
	struct da9062_thermal *cocci_id/* drivers/thermal/da9062-thermal.c 127 */;
	enum thermal_device_mode *cocci_id/* drivers/thermal/da9062-thermal.c 125 */;
	struct thermal_zone_device *cocci_id/* drivers/thermal/da9062-thermal.c 124 */;
	int cocci_id/* drivers/thermal/da9062-thermal.c 124 */;
	irqreturn_t cocci_id/* drivers/thermal/da9062-thermal.c 114 */;
	void *cocci_id/* drivers/thermal/da9062-thermal.c 114 */;
}
