cocci_test_suite() {
	struct ds1216_regs cocci_id/* drivers/rtc/rtc-ds1216.c 81 */;
	struct rtc_time *cocci_id/* drivers/rtc/rtc-ds1216.c 78 */;
	struct device *cocci_id/* drivers/rtc/rtc-ds1216.c 78 */;
	const u8 *cocci_id/* drivers/rtc/rtc-ds1216.c 56 */;
	int cocci_id/* drivers/rtc/rtc-ds1216.c 46 */;
	unsigned char cocci_id/* drivers/rtc/rtc-ds1216.c 45 */;
	u8 __iomem *cocci_id/* drivers/rtc/rtc-ds1216.c 43 */;
	u8 *cocci_id/* drivers/rtc/rtc-ds1216.c 43 */;
	void cocci_id/* drivers/rtc/rtc-ds1216.c 43 */;
	const u8 cocci_id/* drivers/rtc/rtc-ds1216.c 34 */[];
	struct ds1216_priv {
		struct rtc_device *rtc;
		void __iomem *ioaddr;
	} cocci_id/* drivers/rtc/rtc-ds1216.c 29 */;
	struct platform_driver cocci_id/* drivers/rtc/rtc-ds1216.c 163 */;
	struct ds1216_regs {
		u8 tsec;
		u8 sec;
		u8 min;
		u8 hour;
		u8 wday;
		u8 mday;
		u8 month;
		u8 year;
	} cocci_id/* drivers/rtc/rtc-ds1216.c 15 */;
	u8 cocci_id/* drivers/rtc/rtc-ds1216.c 141 */[8];
	struct ds1216_priv *cocci_id/* drivers/rtc/rtc-ds1216.c 140 */;
	struct platform_device *cocci_id/* drivers/rtc/rtc-ds1216.c 138 */;
	int __init cocci_id/* drivers/rtc/rtc-ds1216.c 138 */;
	const struct rtc_class_ops cocci_id/* drivers/rtc/rtc-ds1216.c 133 */;
}
