cocci_test_suite() {
	struct device *cocci_id/* drivers/rtc/rtc-cpcap.c 74 */;
	unsigned int cocci_id/* drivers/rtc/rtc-cpcap.c 74 */;
	unsigned long cocci_id/* drivers/rtc/rtc-cpcap.c 64 */;
	unsigned long int cocci_id/* drivers/rtc/rtc-cpcap.c 53 */;
	struct rtc_time *cocci_id/* drivers/rtc/rtc-cpcap.c 51 */;
	struct cpcap_time *cocci_id/* drivers/rtc/rtc-cpcap.c 51 */;
	void cocci_id/* drivers/rtc/rtc-cpcap.c 51 */;
	struct cpcap_rtc {
		struct regmap *regmap;
		struct rtc_device *rtc_dev;
		u16 vendor;
		int alarm_irq;
		bool alarm_enabled;
		int update_irq;
		bool update_enabled;
	} cocci_id/* drivers/rtc/rtc-cpcap.c 41 */;
	struct cpcap_time {
		int day;
		int tod1;
		int tod2;
	} cocci_id/* drivers/rtc/rtc-cpcap.c 35 */;
	struct platform_driver cocci_id/* drivers/rtc/rtc-cpcap.c 310 */;
	const struct of_device_id cocci_id/* drivers/rtc/rtc-cpcap.c 304 */[];
	struct platform_device *cocci_id/* drivers/rtc/rtc-cpcap.c 244 */;
	struct cpcap_rtc *cocci_id/* drivers/rtc/rtc-cpcap.c 230 */;
	irqreturn_t cocci_id/* drivers/rtc/rtc-cpcap.c 228 */;
	void *cocci_id/* drivers/rtc/rtc-cpcap.c 228 */;
	int cocci_id/* drivers/rtc/rtc-cpcap.c 228 */;
	const struct rtc_class_ops cocci_id/* drivers/rtc/rtc-cpcap.c 220 */;
	struct cpcap_time cocci_id/* drivers/rtc/rtc-cpcap.c 172 */;
	struct rtc_wkalrm *cocci_id/* drivers/rtc/rtc-cpcap.c 169 */;
}
