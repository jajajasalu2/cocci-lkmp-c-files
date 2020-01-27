cocci_test_suite() {
	u8 cocci_id/* drivers/rtc/rtc-hym8563.c 95 */[7];
	struct hym8563 {
		struct i2c_client *client;
		struct rtc_device *rtc;
		bool valid;
#ifdef CONFIG_COMMON_CLK
		struct clk_hw clkout_hw;
#endif
	} cocci_id/* drivers/rtc/rtc-hym8563.c 78 */;
	struct i2c_driver cocci_id/* drivers/rtc/rtc-hym8563.c 590 */;
	const struct of_device_id cocci_id/* drivers/rtc/rtc-hym8563.c 584 */[];
	const struct i2c_device_id cocci_id/* drivers/rtc/rtc-hym8563.c 578 */[];
	const struct i2c_device_id *cocci_id/* drivers/rtc/rtc-hym8563.c 522 */;
	struct device *cocci_id/* drivers/rtc/rtc-hym8563.c 508 */;
	struct mutex *cocci_id/* drivers/rtc/rtc-hym8563.c 435 */;
	irqreturn_t cocci_id/* drivers/rtc/rtc-hym8563.c 431 */;
	void *cocci_id/* drivers/rtc/rtc-hym8563.c 431 */;
	struct clk_init_data cocci_id/* drivers/rtc/rtc-hym8563.c 397 */;
	struct device_node *cocci_id/* drivers/rtc/rtc-hym8563.c 395 */;
	struct clk *cocci_id/* drivers/rtc/rtc-hym8563.c 392 */;
	const struct clk_ops cocci_id/* drivers/rtc/rtc-hym8563.c 383 */;
	void cocci_id/* drivers/rtc/rtc-hym8563.c 366 */;
	struct i2c_client *cocci_id/* drivers/rtc/rtc-hym8563.c 347 */;
	struct hym8563 *cocci_id/* drivers/rtc/rtc-hym8563.c 346 */;
	bool cocci_id/* drivers/rtc/rtc-hym8563.c 344 */;
	struct clk_hw *cocci_id/* drivers/rtc/rtc-hym8563.c 344 */;
	int cocci_id/* drivers/rtc/rtc-hym8563.c 344 */;
	unsigned long *cocci_id/* drivers/rtc/rtc-hym8563.c 311 */;
	long cocci_id/* drivers/rtc/rtc-hym8563.c 310 */;
	unsigned long cocci_id/* drivers/rtc/rtc-hym8563.c 296 */;
	int cocci_id/* drivers/rtc/rtc-hym8563.c 289 */[];
	struct hym8563 cocci_id/* drivers/rtc/rtc-hym8563.c 287 */;
	const struct rtc_class_ops cocci_id/* drivers/rtc/rtc-hym8563.c 274 */;
	u8 cocci_id/* drivers/rtc/rtc-hym8563.c 187 */[4];
	struct rtc_time *cocci_id/* drivers/rtc/rtc-hym8563.c 186 */;
	struct rtc_wkalrm *cocci_id/* drivers/rtc/rtc-hym8563.c 183 */;
	unsigned int cocci_id/* drivers/rtc/rtc-hym8563.c 166 */;
}
