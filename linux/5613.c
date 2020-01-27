cocci_test_suite() {
	u16 cocci_id/* drivers/rtc/rtc-rv3028.c 98 */[];
	struct rv3028_data {
		struct regmap *regmap;
		struct rtc_device *rtc;
		enum rv3028_type type;
#ifdef CONFIG_COMMON_CLK
		struct clk_hw clkout_hw;
#endif
	} cocci_id/* drivers/rtc/rtc-rv3028.c 89 */;
	struct i2c_driver cocci_id/* drivers/rtc/rtc-rv3028.c 866 */;
	const struct of_device_id cocci_id/* drivers/rtc/rtc-rv3028.c 860 */[];
	enum rv3028_type{rv_3028,} cocci_id/* drivers/rtc/rtc-rv3028.c 85 */;
	struct rv3028_data cocci_id/* drivers/rtc/rtc-rv3028.c 765 */;
	struct nvmem_config cocci_id/* drivers/rtc/rtc-rv3028.c 746 */;
	const struct regmap_config cocci_id/* drivers/rtc/rtc-rv3028.c 735 */;
	struct rtc_class_ops cocci_id/* drivers/rtc/rtc-rv3028.c 727 */;
	struct device_node *cocci_id/* drivers/rtc/rtc-rv3028.c 701 */;
	struct clk_init_data cocci_id/* drivers/rtc/rtc-rv3028.c 700 */;
	struct clk *cocci_id/* drivers/rtc/rtc-rv3028.c 699 */;
	struct i2c_client *cocci_id/* drivers/rtc/rtc-rv3028.c 696 */;
	const struct clk_ops cocci_id/* drivers/rtc/rtc-rv3028.c 686 */;
	struct clk_hw *cocci_id/* drivers/rtc/rtc-rv3028.c 674 */;
	void cocci_id/* drivers/rtc/rtc-rv3028.c 665 */;
	unsigned long *cocci_id/* drivers/rtc/rtc-rv3028.c 620 */;
	long cocci_id/* drivers/rtc/rtc-rv3028.c 619 */;
	unsigned long cocci_id/* drivers/rtc/rtc-rv3028.c 605 */;
	int cocci_id/* drivers/rtc/rtc-rv3028.c 596 */[];
	u8 *cocci_id/* drivers/rtc/rtc-rv3028.c 534 */;
	u32 cocci_id/* drivers/rtc/rtc-rv3028.c 532 */;
	size_t cocci_id/* drivers/rtc/rtc-rv3028.c 530 */;
	void *cocci_id/* drivers/rtc/rtc-rv3028.c 529 */;
	void __user *cocci_id/* drivers/rtc/rtc-rv3028.c 436 */;
	long *cocci_id/* drivers/rtc/rtc-rv3028.c 382 */;
	struct rv3028_data *cocci_id/* drivers/rtc/rtc-rv3028.c 359 */;
	struct device *cocci_id/* drivers/rtc/rtc-rv3028.c 357 */;
	unsigned int cocci_id/* drivers/rtc/rtc-rv3028.c 357 */;
	int cocci_id/* drivers/rtc/rtc-rv3028.c 357 */;
	time64_t cocci_id/* drivers/rtc/rtc-rv3028.c 319 */;
	u8 cocci_id/* drivers/rtc/rtc-rv3028.c 314 */;
	u8 cocci_id/* drivers/rtc/rtc-rv3028.c 283 */[3];
	struct rtc_wkalrm *cocci_id/* drivers/rtc/rtc-rv3028.c 280 */;
	u8 cocci_id/* drivers/rtc/rtc-rv3028.c 224 */[7];
	struct rtc_time *cocci_id/* drivers/rtc/rtc-rv3028.c 221 */;
	irqreturn_t cocci_id/* drivers/rtc/rtc-rv3028.c 174 */;
	const struct attribute_group cocci_id/* drivers/rtc/rtc-rv3028.c 170 */;
	struct attribute *cocci_id/* drivers/rtc/rtc-rv3028.c 164 */[];
	struct device_attribute *cocci_id/* drivers/rtc/rtc-rv3028.c 150 */;
	char *cocci_id/* drivers/rtc/rtc-rv3028.c 150 */;
	ssize_t cocci_id/* drivers/rtc/rtc-rv3028.c 149 */;
	unsigned long long cocci_id/* drivers/rtc/rtc-rv3028.c 144 */;
	u8 cocci_id/* drivers/rtc/rtc-rv3028.c 118 */[6];
	struct rtc_time cocci_id/* drivers/rtc/rtc-rv3028.c 116 */;
	const char *cocci_id/* drivers/rtc/rtc-rv3028.c 102 */;
}
