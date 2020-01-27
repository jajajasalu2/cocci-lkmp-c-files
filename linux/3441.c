cocci_test_suite() {
	struct wf_sensor *cocci_id/* drivers/macintosh/windfarm_ad7417_sensor.c 99 */;
	s32 cocci_id/* drivers/macintosh/windfarm_ad7417_sensor.c 80 */;
	s32 *cocci_id/* drivers/macintosh/windfarm_ad7417_sensor.c 80 */;
	int cocci_id/* drivers/macintosh/windfarm_ad7417_sensor.c 80 */;
	struct wf_ad7417_priv *cocci_id/* drivers/macintosh/windfarm_ad7417_sensor.c 79 */;
	void cocci_id/* drivers/macintosh/windfarm_ad7417_sensor.c 79 */;
	s16 cocci_id/* drivers/macintosh/windfarm_ad7417_sensor.c 40 */;
	struct i2c_driver cocci_id/* drivers/macintosh/windfarm_ad7417_sensor.c 315 */;
	const struct i2c_device_id cocci_id/* drivers/macintosh/windfarm_ad7417_sensor.c 309 */[];
	struct wf_ad7417_priv cocci_id/* drivers/macintosh/windfarm_ad7417_sensor.c 264 */;
	struct wf_ad7417_priv {
		struct kref ref;
		struct i2c_client *i2c;
		u8 config;
		u8 cpu;
		const struct mpu_data *mpu;
		struct wf_sensor sensors[5];
		struct mutex lock;
	} cocci_id/* drivers/macintosh/windfarm_ad7417_sensor.c 26 */;
	const struct mpu_data *cocci_id/* drivers/macintosh/windfarm_ad7417_sensor.c 236 */;
	const struct i2c_device_id *cocci_id/* drivers/macintosh/windfarm_ad7417_sensor.c 233 */;
	struct i2c_client *cocci_id/* drivers/macintosh/windfarm_ad7417_sensor.c 232 */;
	u8 cocci_id/* drivers/macintosh/windfarm_ad7417_sensor.c 194 */;
	const struct wf_sensor_ops *cocci_id/* drivers/macintosh/windfarm_ad7417_sensor.c 181 */;
	const char *cocci_id/* drivers/macintosh/windfarm_ad7417_sensor.c 180 */;
	const struct wf_sensor_ops cocci_id/* drivers/macintosh/windfarm_ad7417_sensor.c 173 */;
	struct kref *cocci_id/* drivers/macintosh/windfarm_ad7417_sensor.c 152 */;
	__le16 *cocci_id/* drivers/macintosh/windfarm_ad7417_sensor.c 132 */;
	u16 cocci_id/* drivers/macintosh/windfarm_ad7417_sensor.c 105 */;
	u8 cocci_id/* drivers/macintosh/windfarm_ad7417_sensor.c 104 */[2];
}
