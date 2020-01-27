cocci_test_suite() {
	struct stm32_cec *cocci_id/* drivers/media/platform/stm32/stm32-cec.c 80 */;
	void cocci_id/* drivers/media/platform/stm32/stm32-cec.c 80 */;
	struct stm32_cec {
		struct cec_adapter *adap;
		struct device *dev;
		struct clk *clk_cec;
		struct clk *clk_hdmi_cec;
		struct reset_control *rstc;
		struct regmap *regmap;
		int irq;
		u32 irq_status;
		struct cec_msg rx_msg;
		struct cec_msg tx_msg;
		int tx_cnt;
	} cocci_id/* drivers/media/platform/stm32/stm32-cec.c 66 */;
	struct platform_driver cocci_id/* drivers/media/platform/stm32/stm32-cec.c 354 */;
	const struct of_device_id cocci_id/* drivers/media/platform/stm32/stm32-cec.c 348 */[];
	void __iomem *cocci_id/* drivers/media/platform/stm32/stm32-cec.c 260 */;
	struct resource *cocci_id/* drivers/media/platform/stm32/stm32-cec.c 258 */;
	struct platform_device *cocci_id/* drivers/media/platform/stm32/stm32-cec.c 255 */;
	const struct regmap_config cocci_id/* drivers/media/platform/stm32/stm32-cec.c 247 */;
	const struct cec_adap_ops cocci_id/* drivers/media/platform/stm32/stm32-cec.c 241 */;
	struct cec_msg *cocci_id/* drivers/media/platform/stm32/stm32-cec.c 216 */;
	u32 cocci_id/* drivers/media/platform/stm32/stm32-cec.c 197 */;
	u8 cocci_id/* drivers/media/platform/stm32/stm32-cec.c 194 */;
	bool cocci_id/* drivers/media/platform/stm32/stm32-cec.c 173 */;
	struct cec_adapter *cocci_id/* drivers/media/platform/stm32/stm32-cec.c 173 */;
	int cocci_id/* drivers/media/platform/stm32/stm32-cec.c 173 */;
	irqreturn_t cocci_id/* drivers/media/platform/stm32/stm32-cec.c 160 */;
	void *cocci_id/* drivers/media/platform/stm32/stm32-cec.c 160 */;
}
