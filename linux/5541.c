cocci_test_suite() {
	int cocci_id/* drivers/rtc/rtc-lp8788.c 98 */;
	u8 cocci_id/* drivers/rtc/rtc-lp8788.c 82 */;
	const u8 cocci_id/* drivers/rtc/rtc-lp8788.c 67 */[LP8788_ALARM_MAX];
	struct lp8788_rtc {
		struct lp8788 *lp;
		struct rtc_device *rdev;
		enum lp8788_alarm_sel alarm;
		int irq;
	} cocci_id/* drivers/rtc/rtc-lp8788.c 55 */;
	enum lp8788_time{LPTIME_SEC, LPTIME_MIN, LPTIME_HOUR, LPTIME_MDAY, LPTIME_MON, LPTIME_YEAR, LPTIME_WDAY, LPTIME_MAX,} cocci_id/* drivers/rtc/rtc-lp8788.c 44 */;
	struct platform_driver cocci_id/* drivers/rtc/rtc-lp8788.c 311 */;
	struct lp8788_rtc cocci_id/* drivers/rtc/rtc-lp8788.c 288 */;
	struct irq_domain *cocci_id/* drivers/rtc/rtc-lp8788.c 260 */;
	struct resource *cocci_id/* drivers/rtc/rtc-lp8788.c 258 */;
	struct platform_device *cocci_id/* drivers/rtc/rtc-lp8788.c 255 */;
	irqreturn_t cocci_id/* drivers/rtc/rtc-lp8788.c 247 */;
	void *cocci_id/* drivers/rtc/rtc-lp8788.c 247 */;
	const struct rtc_class_ops cocci_id/* drivers/rtc/rtc-lp8788.c 239 */;
	struct lp8788 *cocci_id/* drivers/rtc/rtc-lp8788.c 227 */;
	struct lp8788_rtc *cocci_id/* drivers/rtc/rtc-lp8788.c 226 */;
	struct device *cocci_id/* drivers/rtc/rtc-lp8788.c 224 */;
	unsigned int cocci_id/* drivers/rtc/rtc-lp8788.c 224 */;
	struct rtc_time *cocci_id/* drivers/rtc/rtc-lp8788.c 167 */;
	struct rtc_wkalrm *cocci_id/* drivers/rtc/rtc-lp8788.c 163 */;
	u8 cocci_id/* drivers/rtc/rtc-lp8788.c 137 */[LPTIME_MAX - 1];
	u8 cocci_id/* drivers/rtc/rtc-lp8788.c 113 */[LPTIME_MAX];
	void cocci_id/* drivers/rtc/rtc-lp8788.c 103 */;
}
