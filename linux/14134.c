cocci_test_suite() {
	struct platform_driver cocci_id/* drivers/media/platform/meson/ao-cec.c 719 */;
	const struct of_device_id cocci_id/* drivers/media/platform/meson/ao-cec.c 713 */[];
	struct resource *cocci_id/* drivers/media/platform/meson/ao-cec.c 605 */;
	struct device *cocci_id/* drivers/media/platform/meson/ao-cec.c 604 */;
	struct platform_device *cocci_id/* drivers/media/platform/meson/ao-cec.c 601 */;
	const struct cec_adap_ops cocci_id/* drivers/media/platform/meson/ao-cec.c 595 */;
	struct meson_ao_cec_device *cocci_id/* drivers/media/platform/meson/ao-cec.c 545 */;
	bool cocci_id/* drivers/media/platform/meson/ao-cec.c 543 */;
	struct cec_adapter *cocci_id/* drivers/media/platform/meson/ao-cec.c 543 */;
	int cocci_id/* drivers/media/platform/meson/ao-cec.c 543 */;
	struct cec_msg *cocci_id/* drivers/media/platform/meson/ao-cec.c 516 */;
	u8 cocci_id/* drivers/media/platform/meson/ao-cec.c 429 */;
	void cocci_id/* drivers/media/platform/meson/ao-cec.c 426 */;
	unsigned long cocci_id/* drivers/media/platform/meson/ao-cec.c 384 */;
	u32 cocci_id/* drivers/media/platform/meson/ao-cec.c 374 */;
	irqreturn_t cocci_id/* drivers/media/platform/meson/ao-cec.c 371 */;
	void *cocci_id/* drivers/media/platform/meson/ao-cec.c 371 */;
	unsigned int cocci_id/* drivers/media/platform/meson/ao-cec.c 340 */;
	int *cocci_id/* drivers/media/platform/meson/ao-cec.c 245 */;
	u8 *cocci_id/* drivers/media/platform/meson/ao-cec.c 244 */;
	ktime_t cocci_id/* drivers/media/platform/meson/ao-cec.c 233 */;
	struct meson_ao_cec_device {
		struct platform_device *pdev;
		void __iomem *base;
		struct clk *core;
		spinlock_t cec_reg_lock;
		struct cec_notifier *notify;
		struct cec_adapter *adap;
		struct cec_msg rx_msg;
	} cocci_id/* drivers/media/platform/meson/ao-cec.c 218 */;
}
