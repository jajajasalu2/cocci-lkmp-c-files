cocci_test_suite() {
	void cocci_id/* drivers/macintosh/therm_adt746x.c 92 */(struct thermostat *th,
								int speed,
								int fan);
	void cocci_id/* drivers/macintosh/therm_adt746x.c 91 */(struct thermostat *th,
								int speed);
	struct thermostat {
		struct i2c_client *clt;
		u8 temps[3];
		u8 cached_temp[3];
		u8 initial_limits[3];
		u8 limits[3];
		int last_speed[2];
		int last_var[2];
		int pwm_inv[2];
		struct task_struct *thread;
		struct platform_device *pdev;
		enum{ADT7460, ADT7467,} type;
	} cocci_id/* drivers/macintosh/therm_adt746x.c 74 */;
	bool cocci_id/* drivers/macintosh/therm_adt746x.c 70 */;
	void __exit cocci_id/* drivers/macintosh/therm_adt746x.c 618 */;
	int __init cocci_id/* drivers/macintosh/therm_adt746x.c 609 */;
	struct i2c_driver cocci_id/* drivers/macintosh/therm_adt746x.c 600 */;
	const struct i2c_device_id cocci_id/* drivers/macintosh/therm_adt746x.c 593 */[];
	int cocci_id/* drivers/macintosh/therm_adt746x.c 54 */;
	const char *cocci_id/* drivers/macintosh/therm_adt746x.c 51 */[3];
	struct thermostat cocci_id/* drivers/macintosh/therm_adt746x.c 500 */;
	const __be32 *cocci_id/* drivers/macintosh/therm_adt746x.c 473 */;
	struct device_node *cocci_id/* drivers/macintosh/therm_adt746x.c 471 */;
	u8 cocci_id/* drivers/macintosh/therm_adt746x.c 47 */[2];
	const struct i2c_device_id *cocci_id/* drivers/macintosh/therm_adt746x.c 469 */;
	struct i2c_client *cocci_id/* drivers/macintosh/therm_adt746x.c 468 */;
	u8 cocci_id/* drivers/macintosh/therm_adt746x.c 43 */[3];
	const char *cocci_id/* drivers/macintosh/therm_adt746x.c 350 */;
	size_t cocci_id/* drivers/macintosh/therm_adt746x.c 350 */;
	struct device_attribute *cocci_id/* drivers/macintosh/therm_adt746x.c 321 */;
	struct device *cocci_id/* drivers/macintosh/therm_adt746x.c 321 */;
	ssize_t cocci_id/* drivers/macintosh/therm_adt746x.c 321 */;
	void *cocci_id/* drivers/macintosh/therm_adt746x.c 282 */;
	struct thermostat *cocci_id/* drivers/macintosh/therm_adt746x.c 208 */;
	void cocci_id/* drivers/macintosh/therm_adt746x.c 208 */;
	u16 cocci_id/* drivers/macintosh/therm_adt746x.c 131 */;
	u8 cocci_id/* drivers/macintosh/therm_adt746x.c 128 */;
	char *cocci_id/* drivers/macintosh/therm_adt746x.c 122 */;
}
