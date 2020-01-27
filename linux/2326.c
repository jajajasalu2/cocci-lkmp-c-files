cocci_test_suite() {
	u16 cocci_id/* drivers/thermal/qcom/qcom-spmi-temp-alarm.c 85 */;
	u8 *cocci_id/* drivers/thermal/qcom/qcom-spmi-temp-alarm.c 85 */;
	const unsigned int cocci_id/* drivers/thermal/qcom/qcom-spmi-temp-alarm.c 83 */[8];
	struct qpnp_tm_chip {
		struct regmap *map;
		struct device *dev;
		struct thermal_zone_device *tz_dev;
		unsigned int subtype;
		long temp;
		unsigned int thresh;
		unsigned int stage;
		unsigned int prev_stage;
		unsigned int base;
		struct mutex lock;
		bool initialized;
		struct iio_channel *adc;
	} cocci_id/* drivers/thermal/qcom/qcom-spmi-temp-alarm.c 65 */;
	struct platform_driver cocci_id/* drivers/thermal/qcom/qcom-spmi-temp-alarm.c 446 */;
	const struct of_device_id cocci_id/* drivers/thermal/qcom/qcom-spmi-temp-alarm.c 440 */[];
	u32 cocci_id/* drivers/thermal/qcom/qcom-spmi-temp-alarm.c 354 */;
	struct device_node *cocci_id/* drivers/thermal/qcom/qcom-spmi-temp-alarm.c 352 */;
	struct platform_device *cocci_id/* drivers/thermal/qcom/qcom-spmi-temp-alarm.c 349 */;
	unsigned int cocci_id/* drivers/thermal/qcom/qcom-spmi-temp-alarm.c 306 */;
	const struct thermal_trip *cocci_id/* drivers/thermal/qcom/qcom-spmi-temp-alarm.c 279 */;
	struct qpnp_tm_chip *cocci_id/* drivers/thermal/qcom/qcom-spmi-temp-alarm.c 276 */;
	int cocci_id/* drivers/thermal/qcom/qcom-spmi-temp-alarm.c 276 */;
	irqreturn_t cocci_id/* drivers/thermal/qcom/qcom-spmi-temp-alarm.c 267 */;
	const struct thermal_zone_of_device_ops cocci_id/* drivers/thermal/qcom/qcom-spmi-temp-alarm.c 262 */;
	bool cocci_id/* drivers/thermal/qcom/qcom-spmi-temp-alarm.c 203 */;
	int *cocci_id/* drivers/thermal/qcom/qcom-spmi-temp-alarm.c 167 */;
	void *cocci_id/* drivers/thermal/qcom/qcom-spmi-temp-alarm.c 167 */;
	u8 cocci_id/* drivers/thermal/qcom/qcom-spmi-temp-alarm.c 112 */;
}
