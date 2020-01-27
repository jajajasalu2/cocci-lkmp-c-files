cocci_test_suite() {
	struct v3020 {
		void __iomem *ioaddress;
		int leftshift;
		struct gpio *gpio;
		const struct v3020_chip_ops *ops;
		struct rtc_device *rtc;
	} cocci_id/* drivers/rtc/rtc-v3020.c 48 */;
	struct platform_driver cocci_id/* drivers/rtc/rtc-v3020.c 356 */;
	struct v3020_chip_ops {
		int (*map_io)(struct v3020 *chip,
			      struct platform_device *pdev,
			      struct v3020_platform_data *pdata);
		void (*unmap_io)(struct v3020 *chip);
		unsigned char (*read_bit)(struct v3020 *chip);
		void (*write_bit)(struct v3020 *chip, unsigned char bit);
	} cocci_id/* drivers/rtc/rtc-v3020.c 35 */;
	struct v3020 cocci_id/* drivers/rtc/rtc-v3020.c 33 */;
	unsigned long long cocci_id/* drivers/rtc/rtc-v3020.c 327 */;
	struct v3020 *cocci_id/* drivers/rtc/rtc-v3020.c 284 */;
	struct v3020_platform_data *cocci_id/* drivers/rtc/rtc-v3020.c 283 */;
	struct platform_device *cocci_id/* drivers/rtc/rtc-v3020.c 281 */;
	int cocci_id/* drivers/rtc/rtc-v3020.c 281 */;
	const struct rtc_class_ops cocci_id/* drivers/rtc/rtc-v3020.c 276 */;
	struct rtc_time *cocci_id/* drivers/rtc/rtc-v3020.c 208 */;
	struct device *cocci_id/* drivers/rtc/rtc-v3020.c 208 */;
	unsigned int cocci_id/* drivers/rtc/rtc-v3020.c 189 */;
	unsigned char cocci_id/* drivers/rtc/rtc-v3020.c 187 */;
	const struct v3020_chip_ops cocci_id/* drivers/rtc/rtc-v3020.c 157 */;
	void cocci_id/* drivers/rtc/rtc-v3020.c 126 */;
	struct gpio cocci_id/* drivers/rtc/rtc-v3020.c 101 */[];
}
