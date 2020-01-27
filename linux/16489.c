cocci_test_suite() {
	const struct dmi_system_id *cocci_id/* drivers/hid/i2c-hid/i2c-hid-dmi-quirks.c 408 */;
	struct i2c_hid_desc_override *cocci_id/* drivers/hid/i2c-hid/i2c-hid-dmi-quirks.c 407 */;
	unsigned int *cocci_id/* drivers/hid/i2c-hid/i2c-hid-dmi-quirks.c 405 */;
	uint8_t *cocci_id/* drivers/hid/i2c-hid/i2c-hid-dmi-quirks.c 404 */;
	char *cocci_id/* drivers/hid/i2c-hid/i2c-hid-dmi-quirks.c 404 */;
	uint8_t cocci_id/* drivers/hid/i2c-hid/i2c-hid-dmi-quirks.c 39 */[];
	struct i2c_hid_desc *cocci_id/* drivers/hid/i2c-hid/i2c-hid-dmi-quirks.c 388 */;
	const struct i2c_hid_desc_override cocci_id/* drivers/hid/i2c-hid/i2c-hid-dmi-quirks.c 38 */;
	void *cocci_id/* drivers/hid/i2c-hid/i2c-hid-dmi-quirks.c 299 */;
	const struct dmi_system_id cocci_id/* drivers/hid/i2c-hid/i2c-hid-dmi-quirks.c 292 */[];
	struct i2c_hid_desc_override {
		union {
			struct i2c_hid_desc *i2c_hid_desc;
			uint8_t *i2c_hid_desc_buffer;
		};
		uint8_t *hid_report_desc;
		unsigned int hid_report_desc_size;
		uint8_t *i2c_name;
	} cocci_id/* drivers/hid/i2c-hid/i2c-hid-dmi-quirks.c 17 */;
}
