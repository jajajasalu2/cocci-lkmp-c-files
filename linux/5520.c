cocci_test_suite() {
	void *cocci_id/* drivers/rtc/rtc-ds2404.c 75 */;
	struct ds2404_platform_data *cocci_id/* drivers/rtc/rtc-ds2404.c 47 */;
	struct platform_device *cocci_id/* drivers/rtc/rtc-ds2404.c 46 */;
	struct ds2404 *cocci_id/* drivers/rtc/rtc-ds2404.c 46 */;
	int cocci_id/* drivers/rtc/rtc-ds2404.c 46 */;
	struct ds2404_gpio cocci_id/* drivers/rtc/rtc-ds2404.c 40 */[];
	struct ds2404 {
		struct ds2404_gpio *gpio;
		struct rtc_device *rtc;
	} cocci_id/* drivers/rtc/rtc-ds2404.c 35 */;
	struct ds2404_gpio {
		const char *name;
		unsigned int gpio;
	} cocci_id/* drivers/rtc/rtc-ds2404.c 30 */;
	struct platform_driver cocci_id/* drivers/rtc/rtc-ds2404.c 245 */;
	struct ds2404 cocci_id/* drivers/rtc/rtc-ds2404.c 212 */;
	const struct rtc_class_ops cocci_id/* drivers/rtc/rtc-ds2404.c 201 */;
	u32 cocci_id/* drivers/rtc/rtc-ds2404.c 196 */;
	__le32 cocci_id/* drivers/rtc/rtc-ds2404.c 185 */;
	unsigned long cocci_id/* drivers/rtc/rtc-ds2404.c 184 */;
	struct rtc_time *cocci_id/* drivers/rtc/rtc-ds2404.c 182 */;
	u8 cocci_id/* drivers/rtc/rtc-ds2404.c 178 */[1];
	struct device *cocci_id/* drivers/rtc/rtc-ds2404.c 176 */;
	void cocci_id/* drivers/rtc/rtc-ds2404.c 176 */;
	u8 *cocci_id/* drivers/rtc/rtc-ds2404.c 127 */;
	u16 cocci_id/* drivers/rtc/rtc-ds2404.c 126 */;
	u8 cocci_id/* drivers/rtc/rtc-ds2404.c 108 */;
}
