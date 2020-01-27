cocci_test_suite() {
	unsigned int cocci_id/* drivers/rtc/rtc-bq4802.c 54 */;
	unsigned long cocci_id/* drivers/rtc/rtc-bq4802.c 53 */;
	struct rtc_time *cocci_id/* drivers/rtc/rtc-bq4802.c 50 */;
	struct device *cocci_id/* drivers/rtc/rtc-bq4802.c 50 */;
	void cocci_id/* drivers/rtc/rtc-bq4802.c 35 */;
	u8 cocci_id/* drivers/rtc/rtc-bq4802.c 30 */;
	struct bq4802 {
		void __iomem *regs;
		unsigned long ioport;
		struct rtc_device *rtc;
		spinlock_t lock;
		struct resource *r;
		u8 (*read)(struct bq4802 *, int);
		void (*write)(struct bq4802 *, int, u8);
	} cocci_id/* drivers/rtc/rtc-bq4802.c 20 */;
	struct platform_driver cocci_id/* drivers/rtc/rtc-bq4802.c 195 */;
	struct bq4802 *cocci_id/* drivers/rtc/rtc-bq4802.c 144 */;
	struct platform_device *cocci_id/* drivers/rtc/rtc-bq4802.c 142 */;
	int cocci_id/* drivers/rtc/rtc-bq4802.c 142 */;
	const struct rtc_class_ops cocci_id/* drivers/rtc/rtc-bq4802.c 137 */;
}
