cocci_test_suite() {
	uint8_t cocci_id/* drivers/rtc/rtc-isl12022.c 85 */[2];
	struct i2c_msg cocci_id/* drivers/rtc/rtc-isl12022.c 53 */[];
	uint8_t *cocci_id/* drivers/rtc/rtc-isl12022.c 51 */;
	size_t cocci_id/* drivers/rtc/rtc-isl12022.c 51 */;
	uint8_t cocci_id/* drivers/rtc/rtc-isl12022.c 50 */;
	struct isl12022 {
		struct rtc_device *rtc;
		bool write_enabled;
	} cocci_id/* drivers/rtc/rtc-isl12022.c 43 */;
	struct i2c_driver cocci_id/* drivers/rtc/rtc-isl12022.c 41 */;
	const struct i2c_device_id cocci_id/* drivers/rtc/rtc-isl12022.c 265 */[];
	const struct of_device_id cocci_id/* drivers/rtc/rtc-isl12022.c 257 */[];
	struct isl12022 cocci_id/* drivers/rtc/rtc-isl12022.c 243 */;
	struct isl12022 *cocci_id/* drivers/rtc/rtc-isl12022.c 238 */;
	const struct i2c_device_id *cocci_id/* drivers/rtc/rtc-isl12022.c 236 */;
	struct i2c_client *cocci_id/* drivers/rtc/rtc-isl12022.c 235 */;
	int cocci_id/* drivers/rtc/rtc-isl12022.c 235 */;
	const struct rtc_class_ops cocci_id/* drivers/rtc/rtc-isl12022.c 230 */;
	uint8_t cocci_id/* drivers/rtc/rtc-isl12022.c 159 */[ISL12022_REG_DW + 1];
	uint8_t cocci_id/* drivers/rtc/rtc-isl12022.c 107 */[ISL12022_REG_INT + 1];
	struct rtc_time *cocci_id/* drivers/rtc/rtc-isl12022.c 104 */;
	struct device *cocci_id/* drivers/rtc/rtc-isl12022.c 104 */;
}
