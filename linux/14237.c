cocci_test_suite() {
	struct platform_driver cocci_id/* drivers/media/platform/sti/cec/stih-cec.c 387 */;
	const struct of_device_id cocci_id/* drivers/media/platform/sti/cec/stih-cec.c 379 */[];
	struct resource *cocci_id/* drivers/media/platform/sti/cec/stih-cec.c 302 */;
	struct device *cocci_id/* drivers/media/platform/sti/cec/stih-cec.c 301 */;
	struct platform_device *cocci_id/* drivers/media/platform/sti/cec/stih-cec.c 299 */;
	const struct cec_adap_ops cocci_id/* drivers/media/platform/sti/cec/stih-cec.c 293 */;
	irqreturn_t cocci_id/* drivers/media/platform/sti/cec/stih-cec.c 283 */;
	void *cocci_id/* drivers/media/platform/sti/cec/stih-cec.c 283 */;
	struct cec_msg cocci_id/* drivers/media/platform/sti/cec/stih-cec.c 245 */;
	void cocci_id/* drivers/media/platform/sti/cec/stih-cec.c 243 */;
	struct cec_msg *cocci_id/* drivers/media/platform/sti/cec/stih-cec.c 204 */;
	u8 cocci_id/* drivers/media/platform/sti/cec/stih-cec.c 188 */;
	u32 cocci_id/* drivers/media/platform/sti/cec/stih-cec.c 139 */;
	unsigned long cocci_id/* drivers/media/platform/sti/cec/stih-cec.c 138 */;
	struct stih_cec *cocci_id/* drivers/media/platform/sti/cec/stih-cec.c 134 */;
	bool cocci_id/* drivers/media/platform/sti/cec/stih-cec.c 132 */;
	struct cec_adapter *cocci_id/* drivers/media/platform/sti/cec/stih-cec.c 132 */;
	int cocci_id/* drivers/media/platform/sti/cec/stih-cec.c 132 */;
	struct stih_cec {
		struct cec_adapter *adap;
		struct device *dev;
		struct clk *clk;
		void __iomem *regs;
		int irq;
		u32 irq_status;
		struct cec_notifier *notifier;
	} cocci_id/* drivers/media/platform/sti/cec/stih-cec.c 122 */;
}
