cocci_test_suite() {
	u32 cocci_id/* drivers/rtc/rtc-vt8500.c 82 */;
	irqreturn_t cocci_id/* drivers/rtc/rtc-vt8500.c 79 */;
	void *cocci_id/* drivers/rtc/rtc-vt8500.c 79 */;
	struct vt8500_rtc {
		void __iomem *regbase;
		int irq_alarm;
		struct rtc_device *rtc;
		spinlock_t lock;
	} cocci_id/* drivers/rtc/rtc-vt8500.c 72 */;
	struct platform_driver cocci_id/* drivers/rtc/rtc-vt8500.c 254 */;
	const struct of_device_id cocci_id/* drivers/rtc/rtc-vt8500.c 248 */[];
	struct vt8500_rtc cocci_id/* drivers/rtc/rtc-vt8500.c 200 */;
	struct platform_device *cocci_id/* drivers/rtc/rtc-vt8500.c 194 */;
	const struct rtc_class_ops cocci_id/* drivers/rtc/rtc-vt8500.c 186 */;
	unsigned long cocci_id/* drivers/rtc/rtc-vt8500.c 175 */;
	struct vt8500_rtc *cocci_id/* drivers/rtc/rtc-vt8500.c 174 */;
	struct device *cocci_id/* drivers/rtc/rtc-vt8500.c 172 */;
	unsigned int cocci_id/* drivers/rtc/rtc-vt8500.c 172 */;
	int cocci_id/* drivers/rtc/rtc-vt8500.c 172 */;
	struct rtc_wkalrm *cocci_id/* drivers/rtc/rtc-vt8500.c 139 */;
	struct rtc_time *cocci_id/* drivers/rtc/rtc-vt8500.c 101 */;
}
