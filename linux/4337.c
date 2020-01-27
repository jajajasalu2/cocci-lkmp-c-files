cocci_test_suite() {
	u32 cocci_id/* drivers/platform/mellanox/mlxreg-io.c 99 */;
	struct mlxreg_core_data *cocci_id/* drivers/platform/mellanox/mlxreg-io.c 98 */;
	char *cocci_id/* drivers/platform/mellanox/mlxreg-io.c 94 */;
	struct device_attribute *cocci_id/* drivers/platform/mellanox/mlxreg-io.c 93 */;
	struct device *cocci_id/* drivers/platform/mellanox/mlxreg-io.c 93 */;
	ssize_t cocci_id/* drivers/platform/mellanox/mlxreg-io.c 92 */;
	bool cocci_id/* drivers/platform/mellanox/mlxreg-io.c 46 */;
	u32 *cocci_id/* drivers/platform/mellanox/mlxreg-io.c 46 */;
	void *cocci_id/* drivers/platform/mellanox/mlxreg-io.c 45 */;
	struct mlxreg_io_priv_data {
		struct platform_device *pdev;
		struct mlxreg_core_platform_data *pdata;
		struct device *hwmon;
		struct attribute *mlxreg_io_attr[MLXREG_IO_ATT_NUM + 1];
		struct sensor_device_attribute mlxreg_io_dev_attr[MLXREG_IO_ATT_NUM];
		struct attribute_group group;
		const struct attribute_group *groups[2];
	} cocci_id/* drivers/platform/mellanox/mlxreg-io.c 34 */;
	struct platform_driver cocci_id/* drivers/platform/mellanox/mlxreg-io.c 233 */;
	struct platform_device *cocci_id/* drivers/platform/mellanox/mlxreg-io.c 194 */;
	struct device_attribute cocci_id/* drivers/platform/mellanox/mlxreg-io.c 166 */;
	struct attribute *cocci_id/* drivers/platform/mellanox/mlxreg-io.c 157 */;
	struct mlxreg_io_priv_data *cocci_id/* drivers/platform/mellanox/mlxreg-io.c 151 */;
	int cocci_id/* drivers/platform/mellanox/mlxreg-io.c 151 */;
	const char *cocci_id/* drivers/platform/mellanox/mlxreg-io.c 114 */;
	size_t cocci_id/* drivers/platform/mellanox/mlxreg-io.c 114 */;
}
