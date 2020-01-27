cocci_test_suite() {
	unsigned int *cocci_id/* drivers/regulator/vctrl-regulator.c 89 */;
	struct platform_driver cocci_id/* drivers/regulator/vctrl-regulator.c 524 */;
	const struct of_device_id cocci_id/* drivers/regulator/vctrl-regulator.c 518 */[];
	struct vctrl_voltage_range *cocci_id/* drivers/regulator/vctrl-regulator.c 48 */;
	struct vctrl_data *cocci_id/* drivers/regulator/vctrl-regulator.c 46 */;
	int cocci_id/* drivers/regulator/vctrl-regulator.c 46 */;
	struct vctrl_data cocci_id/* drivers/regulator/vctrl-regulator.c 445 */;
	struct regulator_config cocci_id/* drivers/regulator/vctrl-regulator.c 440 */;
	const struct regulator_init_data *cocci_id/* drivers/regulator/vctrl-regulator.c 438 */;
	const struct regulator_ops cocci_id/* drivers/regulator/vctrl-regulator.c 416 */;
	struct regulator_dev *cocci_id/* drivers/regulator/vctrl-regulator.c 398 */;
	struct vctrl_data {
		struct regulator_dev *rdev;
		struct regulator_desc desc;
		struct regulator *ctrl_reg;
		bool enabled;
		unsigned int min_slew_down_rate;
		unsigned int ovp_threshold;
		struct vctrl_voltage_ranges vrange;
		struct vctrl_voltage_table *vtable;
		unsigned int sel;
	} cocci_id/* drivers/regulator/vctrl-regulator.c 34 */;
	struct vctrl_voltage_table cocci_id/* drivers/regulator/vctrl-regulator.c 339 */;
	struct regulator *cocci_id/* drivers/regulator/vctrl-regulator.c 314 */;
	struct regulator_desc *cocci_id/* drivers/regulator/vctrl-regulator.c 313 */;
	struct platform_device *cocci_id/* drivers/regulator/vctrl-regulator.c 310 */;
	const struct vctrl_voltage_table *cocci_id/* drivers/regulator/vctrl-regulator.c 304 */;
	const void *cocci_id/* drivers/regulator/vctrl-regulator.c 302 */;
	struct vctrl_voltage_table {
		int ctrl;
		int out;
		int ovp_min_sel;
	} cocci_id/* drivers/regulator/vctrl-regulator.c 28 */;
	struct vctrl_voltage_ranges {
		struct vctrl_voltage_range ctrl;
		struct vctrl_voltage_range out;
	} cocci_id/* drivers/regulator/vctrl-regulator.c 23 */;
	u32 cocci_id/* drivers/regulator/vctrl-regulator.c 227 */[2];
	u32 cocci_id/* drivers/regulator/vctrl-regulator.c 226 */;
	struct device_node *cocci_id/* drivers/regulator/vctrl-regulator.c 225 */;
	unsigned int cocci_id/* drivers/regulator/vctrl-regulator.c 211 */;
	struct vctrl_voltage_range {
		int min_uV;
		int max_uV;
	} cocci_id/* drivers/regulator/vctrl-regulator.c 18 */;
}
