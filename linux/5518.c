cocci_test_suite() {
	struct stm32_rtc_registers {
		u16 tr;
		u16 dr;
		u16 cr;
		u16 isr;
		u16 prer;
		u16 alrmar;
		u16 wpr;
		u16 sr;
		u16 scr;
		u16 verr;
	} cocci_id/* drivers/rtc/rtc-stm32.c 94 */;
	struct stm32_rtc cocci_id/* drivers/rtc/rtc-stm32.c 92 */;
	struct platform_driver cocci_id/* drivers/rtc/rtc-stm32.c 913 */;
	u32 cocci_id/* drivers/rtc/rtc-stm32.c 825 */;
	struct stm32_rtc_data *cocci_id/* drivers/rtc/rtc-stm32.c 706 */;
	struct platform_device *cocci_id/* drivers/rtc/rtc-stm32.c 630 */;
	const struct of_device_id cocci_id/* drivers/rtc/rtc-stm32.c 622 */[];
	struct stm32_rtc_registers cocci_id/* drivers/rtc/rtc-stm32.c 594 */;
	const struct stm32_rtc_data cocci_id/* drivers/rtc/rtc-stm32.c 547 */;
	const struct rtc_class_ops cocci_id/* drivers/rtc/rtc-stm32.c 529 */;
	struct device *cocci_id/* drivers/rtc/rtc-stm32.c 404 */;
	struct rtc_wkalrm *cocci_id/* drivers/rtc/rtc-stm32.c 336 */;
	struct rtc_time *cocci_id/* drivers/rtc/rtc-stm32.c 253 */;
	void cocci_id/* drivers/rtc/rtc-stm32.c 253 */;
	unsigned int cocci_id/* drivers/rtc/rtc-stm32.c 210 */;
	const struct stm32_rtc_events *cocci_id/* drivers/rtc/rtc-stm32.c 209 */;
	const struct stm32_rtc_registers *cocci_id/* drivers/rtc/rtc-stm32.c 208 */;
	struct stm32_rtc *cocci_id/* drivers/rtc/rtc-stm32.c 207 */;
	irqreturn_t cocci_id/* drivers/rtc/rtc-stm32.c 205 */;
	void *cocci_id/* drivers/rtc/rtc-stm32.c 205 */;
	int cocci_id/* drivers/rtc/rtc-stm32.c 205 */;
	struct stm32_rtc {
		struct rtc_device *rtc_dev;
		void __iomem *base;
		struct regmap *dbp;
		unsigned int dbp_reg;
		unsigned int dbp_mask;
		struct clk *pclk;
		struct clk *rtc_ck;
		const struct stm32_rtc_data *data;
		int irq_alarm;
		int wakeirq_alarm;
	} cocci_id/* drivers/rtc/rtc-stm32.c 120 */;
	struct stm32_rtc_data {
		const struct stm32_rtc_registers regs;
		const struct stm32_rtc_events events;
		void (*clear_events)(struct stm32_rtc *rtc,
				     unsigned int flags);
		bool has_pclk;
		bool need_dbp;
		bool has_wakeirq;
	} cocci_id/* drivers/rtc/rtc-stm32.c 111 */;
	struct stm32_rtc_events {
		u32 alra;
	} cocci_id/* drivers/rtc/rtc-stm32.c 107 */;
}
