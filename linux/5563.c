cocci_test_suite() {
	struct i2c_driver cocci_id/* drivers/rtc/rtc-pcf85363.c 438 */;
	const struct of_device_id cocci_id/* drivers/rtc/rtc-pcf85363.c 431 */[];
	struct pcf85363 cocci_id/* drivers/rtc/rtc-pcf85363.c 386 */;
	struct nvmem_config cocci_id/* drivers/rtc/rtc-pcf85363.c 364 */[];
	const void *cocci_id/* drivers/rtc/rtc-pcf85363.c 363 */;
	const struct pcf85x63_config *cocci_id/* drivers/rtc/rtc-pcf85363.c 362 */;
	const struct i2c_device_id *cocci_id/* drivers/rtc/rtc-pcf85363.c 359 */;
	struct i2c_client *cocci_id/* drivers/rtc/rtc-pcf85363.c 358 */;
	const struct pcf85x63_config cocci_id/* drivers/rtc/rtc-pcf85363.c 340 */;
	unsigned char cocci_id/* drivers/rtc/rtc-pcf85363.c 324 */;
	size_t cocci_id/* drivers/rtc/rtc-pcf85363.c 299 */;
	void *cocci_id/* drivers/rtc/rtc-pcf85363.c 298 */;
	const struct rtc_class_ops cocci_id/* drivers/rtc/rtc-pcf85363.c 285 */;
	irqreturn_t cocci_id/* drivers/rtc/rtc-pcf85363.c 266 */;
	struct device *cocci_id/* drivers/rtc/rtc-pcf85363.c 230 */;
	struct pcf85363 *cocci_id/* drivers/rtc/rtc-pcf85363.c 208 */;
	unsigned int cocci_id/* drivers/rtc/rtc-pcf85363.c 208 */;
	int cocci_id/* drivers/rtc/rtc-pcf85363.c 208 */;
	unsigned char cocci_id/* drivers/rtc/rtc-pcf85363.c 184 */[DT_MONTH_ALM1 - DT_SECOND_ALM1 + 1];
	struct rtc_wkalrm *cocci_id/* drivers/rtc/rtc-pcf85363.c 181 */;
	unsigned char *cocci_id/* drivers/rtc/rtc-pcf85363.c 153 */;
	unsigned char cocci_id/* drivers/rtc/rtc-pcf85363.c 152 */[11];
	unsigned char cocci_id/* drivers/rtc/rtc-pcf85363.c 123 */[DT_YEARS + 1];
	struct rtc_time *cocci_id/* drivers/rtc/rtc-pcf85363.c 120 */;
	struct pcf85x63_config {
		struct regmap_config regmap;
		unsigned int num_nvram;
	} cocci_id/* drivers/rtc/rtc-pcf85363.c 115 */;
	struct pcf85363 {
		struct rtc_device *rtc;
		struct regmap *regmap;
	} cocci_id/* drivers/rtc/rtc-pcf85363.c 110 */;
}
