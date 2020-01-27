cocci_test_suite() {
	unsigned long cocci_id/* drivers/reset/sti/reset-syscfg.c 88 */;
	struct reset_controller_dev *cocci_id/* drivers/reset/sti/reset-syscfg.c 87 */;
	int cocci_id/* drivers/reset/sti/reset-syscfg.c 87 */;
	u32 cocci_id/* drivers/reset/sti/reset-syscfg.c 53 */;
	const struct syscfg_reset_channel *cocci_id/* drivers/reset/sti/reset-syscfg.c 52 */;
	struct syscfg_reset_controller cocci_id/* drivers/reset/sti/reset-syscfg.c 46 */;
	struct syscfg_reset_controller {
		struct reset_controller_dev rst;
		bool active_low;
		struct syscfg_reset_channel *channels;
	} cocci_id/* drivers/reset/sti/reset-syscfg.c 39 */;
	struct syscfg_reset_channel {
		struct regmap_field *reset;
		struct regmap_field *ack;
	} cocci_id/* drivers/reset/sti/reset-syscfg.c 25 */;
	const struct of_device_id *cocci_id/* drivers/reset/sti/reset-syscfg.c 195 */;
	struct platform_device *cocci_id/* drivers/reset/sti/reset-syscfg.c 192 */;
	const char *cocci_id/* drivers/reset/sti/reset-syscfg.c 163 */;
	struct regmap_field *cocci_id/* drivers/reset/sti/reset-syscfg.c 162 */;
	struct regmap *cocci_id/* drivers/reset/sti/reset-syscfg.c 161 */;
	struct syscfg_reset_controller *cocci_id/* drivers/reset/sti/reset-syscfg.c 143 */;
	const struct syscfg_reset_controller_data *cocci_id/* drivers/reset/sti/reset-syscfg.c 141 */;
	struct device *cocci_id/* drivers/reset/sti/reset-syscfg.c 140 */;
	const struct reset_control_ops cocci_id/* drivers/reset/sti/reset-syscfg.c 133 */;
}
