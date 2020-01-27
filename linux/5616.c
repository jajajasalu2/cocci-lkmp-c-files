cocci_test_suite() {
	unsigned int cocci_id/* drivers/rtc/rtc-m48t35.c 90 */;
	unsigned char cocci_id/* drivers/rtc/rtc-m48t35.c 89 */;
	u8 cocci_id/* drivers/rtc/rtc-m48t35.c 47 */;
	struct rtc_time *cocci_id/* drivers/rtc/rtc-m48t35.c 44 */;
	struct device *cocci_id/* drivers/rtc/rtc-m48t35.c 44 */;
	struct m48t35_priv {
		struct rtc_device *rtc;
		struct m48t35_rtc __iomem *reg;
		size_t size;
		unsigned long baseaddr;
		spinlock_t lock;
	} cocci_id/* drivers/rtc/rtc-m48t35.c 36 */;
	struct m48t35_rtc {
		u8 pad[0x7ff8];
		u8 control;
		u8 sec;
		u8 min;
		u8 hour;
		u8 day;
		u8 date;
		u8 month;
		u8 year;
	} cocci_id/* drivers/rtc/rtc-m48t35.c 21 */;
	struct platform_driver cocci_id/* drivers/rtc/rtc-m48t35.c 175 */;
	struct m48t35_priv cocci_id/* drivers/rtc/rtc-m48t35.c 147 */;
	struct m48t35_priv *cocci_id/* drivers/rtc/rtc-m48t35.c 142 */;
	struct resource *cocci_id/* drivers/rtc/rtc-m48t35.c 141 */;
	struct platform_device *cocci_id/* drivers/rtc/rtc-m48t35.c 139 */;
	int cocci_id/* drivers/rtc/rtc-m48t35.c 139 */;
	const struct rtc_class_ops cocci_id/* drivers/rtc/rtc-m48t35.c 134 */;
}
