cocci_test_suite() {
	struct mlxreg_fan_pwm {
		bool connected;
		u32 reg;
	} cocci_id/* drivers/hwmon/mlxreg-fan.c 83 */;
	struct mlxreg_fan_tacho {
		bool connected;
		u32 reg;
		u32 mask;
	} cocci_id/* drivers/hwmon/mlxreg-fan.c 71 */;
	struct platform_driver cocci_id/* drivers/hwmon/mlxreg-fan.c 511 */;
	struct device *cocci_id/* drivers/hwmon/mlxreg-fan.c 468 */;
	struct platform_device *cocci_id/* drivers/hwmon/mlxreg-fan.c 465 */;
	bool cocci_id/* drivers/hwmon/mlxreg-fan.c 392 */;
	struct mlxreg_core_data *cocci_id/* drivers/hwmon/mlxreg-fan.c 391 */;
	struct mlxreg_core_platform_data *cocci_id/* drivers/hwmon/mlxreg-fan.c 389 */;
	struct mlxreg_fan *cocci_id/* drivers/hwmon/mlxreg-fan.c 388 */;
	int cocci_id/* drivers/hwmon/mlxreg-fan.c 388 */;
	u32 cocci_id/* drivers/hwmon/mlxreg-fan.c 350 */;
	const struct thermal_cooling_device_ops cocci_id/* drivers/hwmon/mlxreg-fan.c 341 */;
	unsigned long cocci_id/* drivers/hwmon/mlxreg-fan.c 289 */;
	unsigned long *cocci_id/* drivers/hwmon/mlxreg-fan.c 270 */;
	struct thermal_cooling_device *cocci_id/* drivers/hwmon/mlxreg-fan.c 269 */;
	const struct hwmon_chip_info cocci_id/* drivers/hwmon/mlxreg-fan.c 257 */;
	const struct hwmon_ops cocci_id/* drivers/hwmon/mlxreg-fan.c 251 */;
	const struct hwmon_channel_info *cocci_id/* drivers/hwmon/mlxreg-fan.c 232 */[];
	enum hwmon_sensor_types cocci_id/* drivers/hwmon/mlxreg-fan.c 196 */;
	const void *cocci_id/* drivers/hwmon/mlxreg-fan.c 196 */;
	umode_t cocci_id/* drivers/hwmon/mlxreg-fan.c 195 */;
	long cocci_id/* drivers/hwmon/mlxreg-fan.c 171 */;
	struct mlxreg_fan_tacho *cocci_id/* drivers/hwmon/mlxreg-fan.c 117 */;
	long *cocci_id/* drivers/hwmon/mlxreg-fan.c 114 */;
	struct mlxreg_fan {
		struct device *dev;
		void *regmap;
		struct mlxreg_core_platform_data *pdata;
		struct mlxreg_fan_tacho tacho[MLXREG_FAN_MAX_TACHO];
		struct mlxreg_fan_pwm pwm;
		int samples;
		int divider;
		u8 cooling_levels[MLXREG_FAN_MAX_STATE + 1];
		struct thermal_cooling_device *cdev;
	} cocci_id/* drivers/hwmon/mlxreg-fan.c 100 */;
}
