cocci_test_suite() {
	const struct of_device_id cocci_id/* drivers/regulator/qcom-rpmh-regulator.c 970 */[];
	struct platform_device *cocci_id/* drivers/regulator/qcom-rpmh-regulator.c 933 */;
	const struct rpmh_vreg_init_data cocci_id/* drivers/regulator/qcom-rpmh-regulator.c 881 */[];
	struct rpmh_vreg_hw_data {
		enum rpmh_regulator_type regulator_type;
		const struct regulator_ops *ops;
		const struct regulator_linear_range voltage_range;
		int n_voltages;
		int hpm_min_load_uA;
		const int *pmic_mode_map;
		unsigned int (*of_map_mode)(unsigned int mode);
	} cocci_id/* drivers/regulator/qcom-rpmh-regulator.c 86 */;
	const struct rpmh_vreg_hw_data cocci_id/* drivers/regulator/qcom-rpmh-regulator.c 663 */;
	const int cocci_id/* drivers/regulator/qcom-rpmh-regulator.c 577 */[REGULATOR_MODE_STANDBY + 1];
	struct regulator_init_data *cocci_id/* drivers/regulator/qcom-rpmh-regulator.c 420 */;
	char cocci_id/* drivers/regulator/qcom-rpmh-regulator.c 418 */[20];
	struct regulator_config cocci_id/* drivers/regulator/qcom-rpmh-regulator.c 417 */;
	const struct rpmh_vreg_init_data *cocci_id/* drivers/regulator/qcom-rpmh-regulator.c 415 */;
	const char *cocci_id/* drivers/regulator/qcom-rpmh-regulator.c 414 */;
	struct device_node *cocci_id/* drivers/regulator/qcom-rpmh-regulator.c 414 */;
	struct device *cocci_id/* drivers/regulator/qcom-rpmh-regulator.c 413 */;
	const struct regulator_ops cocci_id/* drivers/regulator/qcom-rpmh-regulator.c 381 */;
	bool *cocci_id/* drivers/regulator/qcom-rpmh-regulator.c 349 */;
	enum rpmh_regulator_type{VRM, XOB,} cocci_id/* drivers/regulator/qcom-rpmh-regulator.c 30 */;
	struct tcs_cmd cocci_id/* drivers/regulator/qcom-rpmh-regulator.c 179 */;
	struct rpmh_vreg *cocci_id/* drivers/regulator/qcom-rpmh-regulator.c 178 */;
	bool cocci_id/* drivers/regulator/qcom-rpmh-regulator.c 176 */;
	unsigned int cocci_id/* drivers/regulator/qcom-rpmh-regulator.c 176 */;
	struct regulator_dev *cocci_id/* drivers/regulator/qcom-rpmh-regulator.c 175 */;
	int cocci_id/* drivers/regulator/qcom-rpmh-regulator.c 175 */;
	struct tcs_cmd *cocci_id/* drivers/regulator/qcom-rpmh-regulator.c 162 */;
	struct rpmh_vreg_init_data {
		const char *name;
		const char *resource_name;
		const char *supply_name;
		const struct rpmh_vreg_hw_data *hw_data;
	} cocci_id/* drivers/regulator/qcom-rpmh-regulator.c 145 */;
	struct rpmh_vreg {
		struct device *dev;
		u32 addr;
		struct regulator_desc rdesc;
		const struct rpmh_vreg_hw_data *hw_data;
		bool always_wait_for_ack;
		int enabled;
		bool bypassed;
		int voltage_selector;
		unsigned int mode;
	} cocci_id/* drivers/regulator/qcom-rpmh-regulator.c 120 */;
	struct platform_driver cocci_id/* drivers/regulator/qcom-rpmh-regulator.c 1007 */;
}
