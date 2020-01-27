cocci_test_suite() {
	struct armada38x_rtc_data {
		void (*update_mbus_timing)(struct armada38x_rtc *rtc);
		u32 (*read_rtc_reg)(struct armada38x_rtc *rtc, u8 rtc_reg);
		void (*clear_isr)(struct armada38x_rtc *rtc);
		void (*unmask_interrupt)(struct armada38x_rtc *rtc);
		u32 alarm;
	} cocci_id/* drivers/rtc/rtc-armada38x.c 85 */;
	struct armada38x_rtc {
		struct rtc_device *rtc_dev;
		void __iomem *regs;
		void __iomem *regs_soc;
		spinlock_t lock;
		int irq;
		bool initialized;
		struct value_to_freq *val_to_freq;
		const struct armada38x_rtc_data *data;
	} cocci_id/* drivers/rtc/rtc-armada38x.c 69 */;
	struct value_to_freq {
		u32 value;
		u8 freq;
	} cocci_id/* drivers/rtc/rtc-armada38x.c 64 */;
	struct platform_driver cocci_id/* drivers/rtc/rtc-armada38x.c 592 */;
	struct value_to_freq cocci_id/* drivers/rtc/rtc-armada38x.c 513 */;
	struct armada38x_rtc cocci_id/* drivers/rtc/rtc-armada38x.c 505 */;
	struct resource *cocci_id/* drivers/rtc/rtc-armada38x.c 502 */;
	struct platform_device *cocci_id/* drivers/rtc/rtc-armada38x.c 500 */;
	const struct of_device_id cocci_id/* drivers/rtc/rtc-armada38x.c 486 */[];
	const struct armada38x_rtc_data cocci_id/* drivers/rtc/rtc-armada38x.c 469 */;
	const struct rtc_class_ops cocci_id/* drivers/rtc/rtc-armada38x.c 451 */;
	s8 cocci_id/* drivers/rtc/rtc-armada38x.c 408 */;
	long *cocci_id/* drivers/rtc/rtc-armada38x.c 398 */;
	long cocci_id/* drivers/rtc/rtc-armada38x.c 391 */;
	irqreturn_t cocci_id/* drivers/rtc/rtc-armada38x.c 324 */;
	void *cocci_id/* drivers/rtc/rtc-armada38x.c 324 */;
	int cocci_id/* drivers/rtc/rtc-armada38x.c 324 */;
	unsigned long cocci_id/* drivers/rtc/rtc-armada38x.c 310 */;
	unsigned int cocci_id/* drivers/rtc/rtc-armada38x.c 306 */;
	struct device *cocci_id/* drivers/rtc/rtc-armada38x.c 305 */;
	struct rtc_wkalrm *cocci_id/* drivers/rtc/rtc-armada38x.c 261 */;
	struct rtc_time *cocci_id/* drivers/rtc/rtc-armada38x.c 213 */;
	u32 cocci_id/* drivers/rtc/rtc-armada38x.c 191 */;
	struct armada38x_rtc *cocci_id/* drivers/rtc/rtc-armada38x.c 189 */;
	void cocci_id/* drivers/rtc/rtc-armada38x.c 189 */;
	u8 cocci_id/* drivers/rtc/rtc-armada38x.c 142 */;
}
