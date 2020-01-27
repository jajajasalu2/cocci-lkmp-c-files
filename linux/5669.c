cocci_test_suite() {
	u8 cocci_id/* drivers/rtc/rtc-pcf85063.c 70 */[7];
	struct rtc_time *cocci_id/* drivers/rtc/rtc-pcf85063.c 66 */;
	struct pcf85063 {
		struct rtc_device *rtc;
		struct regmap *regmap;
	} cocci_id/* drivers/rtc/rtc-pcf85063.c 61 */;
	struct pcf85063_config {
		struct regmap_config regmap;
		unsigned has_alarms:1;
		unsigned force_cap_7000:1;
	} cocci_id/* drivers/rtc/rtc-pcf85063.c 55 */;
	struct i2c_driver cocci_id/* drivers/rtc/rtc-pcf85063.c 486 */;
	const struct of_device_id cocci_id/* drivers/rtc/rtc-pcf85063.c 476 */[];
	struct pcf85063 cocci_id/* drivers/rtc/rtc-pcf85063.c 416 */;
	struct nvmem_config cocci_id/* drivers/rtc/rtc-pcf85063.c 406 */;
	const void *cocci_id/* drivers/rtc/rtc-pcf85063.c 405 */;
	const struct pcf85063_config *cocci_id/* drivers/rtc/rtc-pcf85063.c 404 */;
	struct i2c_client *cocci_id/* drivers/rtc/rtc-pcf85063.c 399 */;
	const struct pcf85063_config cocci_id/* drivers/rtc/rtc-pcf85063.c 372 */;
	u8 cocci_id/* drivers/rtc/rtc-pcf85063.c 349 */;
	u32 cocci_id/* drivers/rtc/rtc-pcf85063.c 348 */;
	const struct device_node *cocci_id/* drivers/rtc/rtc-pcf85063.c 345 */;
	u8 *cocci_id/* drivers/rtc/rtc-pcf85063.c 341 */;
	size_t cocci_id/* drivers/rtc/rtc-pcf85063.c 333 */;
	void *cocci_id/* drivers/rtc/rtc-pcf85063.c 332 */;
	const struct rtc_class_ops cocci_id/* drivers/rtc/rtc-pcf85063.c 313 */;
	void __user *cocci_id/* drivers/rtc/rtc-pcf85063.c 297 */;
	struct pcf85063 *cocci_id/* drivers/rtc/rtc-pcf85063.c 283 */;
	unsigned long cocci_id/* drivers/rtc/rtc-pcf85063.c 281 */;
	struct device *cocci_id/* drivers/rtc/rtc-pcf85063.c 280 */;
	unsigned int cocci_id/* drivers/rtc/rtc-pcf85063.c 280 */;
	int cocci_id/* drivers/rtc/rtc-pcf85063.c 280 */;
	s8 cocci_id/* drivers/rtc/rtc-pcf85063.c 259 */;
	long cocci_id/* drivers/rtc/rtc-pcf85063.c 237 */;
	long *cocci_id/* drivers/rtc/rtc-pcf85063.c 234 */;
	irqreturn_t cocci_id/* drivers/rtc/rtc-pcf85063.c 213 */;
	u8 cocci_id/* drivers/rtc/rtc-pcf85063.c 179 */[5];
	u8 cocci_id/* drivers/rtc/rtc-pcf85063.c 153 */[4];
	struct rtc_wkalrm *cocci_id/* drivers/rtc/rtc-pcf85063.c 150 */;
}
