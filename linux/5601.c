cocci_test_suite() {
	struct device *cocci_id/* drivers/rtc/rtc-88pm860x.c 68 */;
	irqreturn_t cocci_id/* drivers/rtc/rtc-88pm860x.c 57 */;
	void *cocci_id/* drivers/rtc/rtc-88pm860x.c 57 */;
	struct platform_driver cocci_id/* drivers/rtc/rtc-88pm860x.c 450 */;
	unsigned long cocci_id/* drivers/rtc/rtc-88pm860x.c 321 */;
	struct rtc_time cocci_id/* drivers/rtc/rtc-88pm860x.c 320 */;
	struct pm860x_rtc_pdata *cocci_id/* drivers/rtc/rtc-88pm860x.c 318 */;
	struct pm860x_chip *cocci_id/* drivers/rtc/rtc-88pm860x.c 317 */;
	struct device_node *cocci_id/* drivers/rtc/rtc-88pm860x.c 296 */;
	struct platform_device *cocci_id/* drivers/rtc/rtc-88pm860x.c 293 */;
	int cocci_id/* drivers/rtc/rtc-88pm860x.c 251 */;
	unsigned int cocci_id/* drivers/rtc/rtc-88pm860x.c 250 */;
	unsigned char cocci_id/* drivers/rtc/rtc-88pm860x.c 249 */[2];
	struct pm860x_rtc_info cocci_id/* drivers/rtc/rtc-88pm860x.c 248 */;
	struct pm860x_rtc_info *cocci_id/* drivers/rtc/rtc-88pm860x.c 247 */;
	struct work_struct *cocci_id/* drivers/rtc/rtc-88pm860x.c 245 */;
	void cocci_id/* drivers/rtc/rtc-88pm860x.c 245 */;
	const struct rtc_class_ops cocci_id/* drivers/rtc/rtc-88pm860x.c 236 */;
	struct pm860x_rtc_info {
		struct pm860x_chip *chip;
		struct i2c_client *i2c;
		struct rtc_device *rtc_dev;
		struct device *dev;
		struct delayed_work calib_work;
		int irq;
		int vrtc;
		int (*sync)(unsigned int ticks);
	} cocci_id/* drivers/rtc/rtc-88pm860x.c 22 */;
	unsigned char cocci_id/* drivers/rtc/rtc-88pm860x.c 166 */[8];
	struct rtc_wkalrm *cocci_id/* drivers/rtc/rtc-88pm860x.c 163 */;
	unsigned char cocci_id/* drivers/rtc/rtc-88pm860x.c 134 */[4];
	struct rtc_time *cocci_id/* drivers/rtc/rtc-88pm860x.c 106 */;
}
