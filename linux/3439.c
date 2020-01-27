cocci_test_suite() {
	const char *cocci_id/* drivers/macintosh/windfarm_lm75_sensor.c 95 */;
	const struct i2c_device_id *cocci_id/* drivers/macintosh/windfarm_lm75_sensor.c 91 */;
	struct i2c_client *cocci_id/* drivers/macintosh/windfarm_lm75_sensor.c 90 */;
	const struct wf_sensor_ops cocci_id/* drivers/macintosh/windfarm_lm75_sensor.c 84 */;
	void cocci_id/* drivers/macintosh/windfarm_lm75_sensor.c 77 */;
	u8 cocci_id/* drivers/macintosh/windfarm_lm75_sensor.c 53 */;
	s32 cocci_id/* drivers/macintosh/windfarm_lm75_sensor.c 46 */;
	struct wf_lm75_sensor *cocci_id/* drivers/macintosh/windfarm_lm75_sensor.c 45 */;
	s32 *cocci_id/* drivers/macintosh/windfarm_lm75_sensor.c 43 */;
	struct wf_sensor *cocci_id/* drivers/macintosh/windfarm_lm75_sensor.c 43 */;
	int cocci_id/* drivers/macintosh/windfarm_lm75_sensor.c 43 */;
	struct wf_lm75_sensor cocci_id/* drivers/macintosh/windfarm_lm75_sensor.c 41 */;
	struct wf_lm75_sensor {
		int ds1775:1;
		int inited:1;
		struct i2c_client *i2c;
		struct wf_sensor sens;
	} cocci_id/* drivers/macintosh/windfarm_lm75_sensor.c 35 */;
	struct i2c_driver cocci_id/* drivers/macintosh/windfarm_lm75_sensor.c 167 */;
	const struct i2c_device_id cocci_id/* drivers/macintosh/windfarm_lm75_sensor.c 160 */[];
}
