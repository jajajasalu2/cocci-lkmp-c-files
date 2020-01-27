cocci_test_suite() {
	struct wktmr_time *cocci_id/* drivers/rtc/rtc-brcmstb-waketimer.c 76 */;
	struct wktmr_time {
		u32 sec;
		u32 pre;
	} cocci_id/* drivers/rtc/rtc-brcmstb-waketimer.c 70 */;
	irqreturn_t cocci_id/* drivers/rtc/rtc-brcmstb-waketimer.c 61 */;
	void *cocci_id/* drivers/rtc/rtc-brcmstb-waketimer.c 61 */;
	struct brcmstb_waketmr *cocci_id/* drivers/rtc/rtc-brcmstb-waketimer.c 44 */;
	void cocci_id/* drivers/rtc/rtc-brcmstb-waketimer.c 44 */;
	struct platform_driver cocci_id/* drivers/rtc/rtc-brcmstb-waketimer.c 315 */;
	const struct of_device_id cocci_id/* drivers/rtc/rtc-brcmstb-waketimer.c 310 */[];
	struct brcmstb_waketmr {
		struct rtc_device *rtc;
		struct device *dev;
		void __iomem *base;
		int irq;
		struct notifier_block reboot_notifier;
		struct clk *clk;
		u32 rate;
	} cocci_id/* drivers/rtc/rtc-brcmstb-waketimer.c 26 */;
	struct platform_device *cocci_id/* drivers/rtc/rtc-brcmstb-waketimer.c 199 */;
	const struct rtc_class_ops cocci_id/* drivers/rtc/rtc-brcmstb-waketimer.c 191 */;
	unsigned int cocci_id/* drivers/rtc/rtc-brcmstb-waketimer.c 186 */;
	struct device *cocci_id/* drivers/rtc/rtc-brcmstb-waketimer.c 185 */;
	int cocci_id/* drivers/rtc/rtc-brcmstb-waketimer.c 185 */;
	u32 cocci_id/* drivers/rtc/rtc-brcmstb-waketimer.c 150 */;
	time64_t cocci_id/* drivers/rtc/rtc-brcmstb-waketimer.c 149 */;
	struct rtc_wkalrm *cocci_id/* drivers/rtc/rtc-brcmstb-waketimer.c 146 */;
	struct wktmr_time cocci_id/* drivers/rtc/rtc-brcmstb-waketimer.c 123 */;
	struct rtc_time *cocci_id/* drivers/rtc/rtc-brcmstb-waketimer.c 120 */;
	struct brcmstb_waketmr cocci_id/* drivers/rtc/rtc-brcmstb-waketimer.c 110 */;
	unsigned long cocci_id/* drivers/rtc/rtc-brcmstb-waketimer.c 106 */;
	struct notifier_block *cocci_id/* drivers/rtc/rtc-brcmstb-waketimer.c 105 */;
}
