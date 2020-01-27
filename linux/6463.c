cocci_test_suite() {
	void __exit cocci_id/* drivers/regulator/qcom_smd-regulator.c 937 */;
	void cocci_id/* drivers/regulator/qcom_smd-regulator.c 937 */;
	int __init cocci_id/* drivers/regulator/qcom_smd-regulator.c 931 */;
	struct platform_driver cocci_id/* drivers/regulator/qcom_smd-regulator.c 923 */;
	struct qcom_smd_rpm *cocci_id/* drivers/regulator/qcom_smd-regulator.c 878 */;
	struct regulator_config cocci_id/* drivers/regulator/qcom_smd-regulator.c 875 */;
	const struct of_device_id *cocci_id/* drivers/regulator/qcom_smd-regulator.c 874 */;
	const struct rpm_regulator_data *cocci_id/* drivers/regulator/qcom_smd-regulator.c 873 */;
	struct platform_device *cocci_id/* drivers/regulator/qcom_smd-regulator.c 871 */;
	const struct of_device_id cocci_id/* drivers/regulator/qcom_smd-regulator.c 857 */[];
	const struct rpm_regulator_data cocci_id/* drivers/regulator/qcom_smd-regulator.c 568 */[];
	struct rpm_regulator_data {
		const char *name;
		u32 type;
		u32 id;
		const struct regulator_desc *desc;
		const char *supply;
	} cocci_id/* drivers/regulator/qcom_smd-regulator.c 560 */;
	struct rpm_regulator_req cocci_id/* drivers/regulator/qcom_smd-regulator.c 45 */[3];
	struct rpm_regulator_req {
		__le32 key;
		__le32 nbytes;
		__le32 value;
	} cocci_id/* drivers/regulator/qcom_smd-regulator.c 33 */;
	struct regulator_linear_range cocci_id/* drivers/regulator/qcom_smd-regulator.c 256 */[];
	const struct regulator_desc cocci_id/* drivers/regulator/qcom_smd-regulator.c 255 */;
	const struct regulator_ops cocci_id/* drivers/regulator/qcom_smd-regulator.c 192 */;
	u32 cocci_id/* drivers/regulator/qcom_smd-regulator.c 151 */;
	struct qcom_rpm_reg {
		struct device *dev;
		struct qcom_smd_rpm *rpm;
		u32 type;
		u32 id;
		struct regulator_desc desc;
		int is_enabled;
		int uV;
		u32 load;
		unsigned int enabled_updated:1;
		unsigned int uv_updated:1;
		unsigned int load_updated:1;
	} cocci_id/* drivers/regulator/qcom_smd-regulator.c 14 */;
	unsigned *cocci_id/* drivers/regulator/qcom_smd-regulator.c 132 */;
	struct qcom_rpm_reg *cocci_id/* drivers/regulator/qcom_smd-regulator.c 109 */;
	struct regulator_dev *cocci_id/* drivers/regulator/qcom_smd-regulator.c 107 */;
	int cocci_id/* drivers/regulator/qcom_smd-regulator.c 107 */;
}
