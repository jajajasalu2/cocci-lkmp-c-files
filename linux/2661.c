cocci_test_suite() {
	irqreturn_t cocci_id/* drivers/i2c/busses/i2c-cht-wc.c 56 */;
	void *cocci_id/* drivers/i2c/busses/i2c-cht-wc.c 56 */;
	struct platform_driver cocci_id/* drivers/i2c/busses/i2c-cht-wc.c 425 */;
	const struct platform_device_id cocci_id/* drivers/i2c/busses/i2c-cht-wc.c 419 */[];
	struct cht_wc_i2c_adap {
		struct i2c_adapter adapter;
		wait_queue_head_t wait;
		struct irq_chip irqchip;
		struct mutex adap_lock;
		struct mutex irqchip_lock;
		struct regmap *regmap;
		struct irq_domain *irq_domain;
		struct i2c_client *client;
		int client_irq;
		u8 irq_mask;
		u8 old_irq_mask;
		int read_data;
		bool io_error;
		bool done;
	} cocci_id/* drivers/i2c/busses/i2c-cht-wc.c 39 */;
	struct i2c_board_info cocci_id/* drivers/i2c/busses/i2c-cht-wc.c 307 */;
	struct cht_wc_i2c_adap *cocci_id/* drivers/i2c/busses/i2c-cht-wc.c 306 */;
	struct intel_soc_pmic *cocci_id/* drivers/i2c/busses/i2c-cht-wc.c 305 */;
	struct platform_device *cocci_id/* drivers/i2c/busses/i2c-cht-wc.c 303 */;
	int cocci_id/* drivers/i2c/busses/i2c-cht-wc.c 303 */;
	struct bq24190_platform_data cocci_id/* drivers/i2c/busses/i2c-cht-wc.c 299 */;
	const struct regulator_init_data cocci_id/* drivers/i2c/busses/i2c-cht-wc.c 289 */;
	struct regulator_consumer_supply cocci_id/* drivers/i2c/busses/i2c-cht-wc.c 283 */;
	const struct property_entry cocci_id/* drivers/i2c/busses/i2c-cht-wc.c 276 */[];
	const char *const cocci_id/* drivers/i2c/busses/i2c-cht-wc.c 273 */[];
	const struct irq_chip cocci_id/* drivers/i2c/busses/i2c-cht-wc.c 265 */;
	struct irq_data *cocci_id/* drivers/i2c/busses/i2c-cht-wc.c 258 */;
	const struct i2c_lock_operations cocci_id/* drivers/i2c/busses/i2c-cht-wc.c 220 */;
	unsigned int cocci_id/* drivers/i2c/busses/i2c-cht-wc.c 203 */;
	struct i2c_adapter *cocci_id/* drivers/i2c/busses/i2c-cht-wc.c 202 */;
	void cocci_id/* drivers/i2c/busses/i2c-cht-wc.c 202 */;
	const struct i2c_algorithm cocci_id/* drivers/i2c/busses/i2c-cht-wc.c 176 */;
	union i2c_smbus_data *cocci_id/* drivers/i2c/busses/i2c-cht-wc.c 124 */;
	u8 cocci_id/* drivers/i2c/busses/i2c-cht-wc.c 123 */;
	unsigned short cocci_id/* drivers/i2c/busses/i2c-cht-wc.c 122 */;
	char cocci_id/* drivers/i2c/busses/i2c-cht-wc.c 122 */;
	u16 cocci_id/* drivers/i2c/busses/i2c-cht-wc.c 121 */;
	u32 cocci_id/* drivers/i2c/busses/i2c-cht-wc.c 115 */;
}
