cocci_test_suite() {
	unsigned int cocci_id/* drivers/reset/reset-ti-syscon.c 79 */;
	struct ti_syscon_reset_control *cocci_id/* drivers/reset/reset-ti-syscon.c 78 */;
	struct ti_syscon_reset_data *cocci_id/* drivers/reset/reset-ti-syscon.c 77 */;
	unsigned long cocci_id/* drivers/reset/reset-ti-syscon.c 75 */;
	struct reset_controller_dev *cocci_id/* drivers/reset/reset-ti-syscon.c 74 */;
	int cocci_id/* drivers/reset/reset-ti-syscon.c 74 */;
	struct ti_syscon_reset_data cocci_id/* drivers/reset/reset-ti-syscon.c 62 */;
	struct ti_syscon_reset_data {
		struct reset_controller_dev rcdev;
		struct regmap *regmap;
		struct ti_syscon_reset_control *controls;
		unsigned int nr_controls;
	} cocci_id/* drivers/reset/reset-ti-syscon.c 54 */;
	struct ti_syscon_reset_control {
		unsigned int assert_offset;
		unsigned int assert_bit;
		unsigned int deassert_offset;
		unsigned int deassert_bit;
		unsigned int status_offset;
		unsigned int status_bit;
		u32 flags;
	} cocci_id/* drivers/reset/reset-ti-syscon.c 37 */;
	struct platform_driver cocci_id/* drivers/reset/reset-ti-syscon.c 226 */;
	const struct of_device_id cocci_id/* drivers/reset/reset-ti-syscon.c 220 */[];
	const __be32 *cocci_id/* drivers/reset/reset-ti-syscon.c 173 */;
	struct regmap *cocci_id/* drivers/reset/reset-ti-syscon.c 172 */;
	struct device_node *cocci_id/* drivers/reset/reset-ti-syscon.c 170 */;
	struct device *cocci_id/* drivers/reset/reset-ti-syscon.c 169 */;
	struct platform_device *cocci_id/* drivers/reset/reset-ti-syscon.c 167 */;
	const struct reset_control_ops cocci_id/* drivers/reset/reset-ti-syscon.c 161 */;
}
