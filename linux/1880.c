cocci_test_suite() {
	struct stm32_adc_priv {
		int irq[STM32_ADC_MAX_ADCS];
		struct irq_domain *domain;
		struct clk *aclk;
		struct clk *bclk;
		u32 max_clk_rate;
		struct regulator *booster;
		struct regulator *vdd;
		struct regulator *vdda;
		struct regulator *vref;
		int vdd_uv;
		int vdda_uv;
		const struct stm32_adc_priv_cfg *cfg;
		struct stm32_adc_common common;
		u32 ccr_bak;
		struct regmap *syscfg;
	} cocci_id/* drivers/iio/adc/stm32-adc-core.c 94 */;
	struct platform_driver cocci_id/* drivers/iio/adc/stm32-adc-core.c 848 */;
	void *cocci_id/* drivers/iio/adc/stm32-adc-core.c 836 */;
	const struct of_device_id cocci_id/* drivers/iio/adc/stm32-adc-core.c 833 */[];
	const struct stm32_adc_priv_cfg cocci_id/* drivers/iio/adc/stm32-adc-core.c 813 */;
	struct stm32_adc_priv_cfg {
		const struct stm32_adc_common_regs *regs;
		int (*clk_sel)(struct platform_device *,
			       struct stm32_adc_priv *);
		u32 max_clk_rate_hz;
		unsigned int has_syscfg;
	} cocci_id/* drivers/iio/adc/stm32-adc-core.c 69 */;
	const struct stm32_adc_priv_cfg *cocci_id/* drivers/iio/adc/stm32-adc-core.c 671 */;
	struct resource *cocci_id/* drivers/iio/adc/stm32-adc-core.c 659 */;
	struct stm32_adc_priv cocci_id/* drivers/iio/adc/stm32-adc-core.c 60 */;
	struct device_node *cocci_id/* drivers/iio/adc/stm32-adc-core.c 587 */;
	void cocci_id/* drivers/iio/adc/stm32-adc-core.c 568 */;
	struct stm32_adc_priv *cocci_id/* drivers/iio/adc/stm32-adc-core.c 509 */;
	struct stm32_adc_common *cocci_id/* drivers/iio/adc/stm32-adc-core.c 508 */;
	struct device *cocci_id/* drivers/iio/adc/stm32-adc-core.c 506 */;
	int cocci_id/* drivers/iio/adc/stm32-adc-core.c 506 */;
	struct stm32_adc_common_regs {
		u32 csr;
		u32 ccr;
		u32 eoc1_msk;
		u32 eoc2_msk;
		u32 eoc3_msk;
		u32 ier;
		u32 eocie_msk;
	} cocci_id/* drivers/iio/adc/stm32-adc-core.c 50 */;
	struct platform_device *cocci_id/* drivers/iio/adc/stm32-adc-core.c 372 */;
	const struct irq_domain_ops cocci_id/* drivers/iio/adc/stm32-adc-core.c 366 */;
	irq_hw_number_t cocci_id/* drivers/iio/adc/stm32-adc-core.c 352 */;
	struct irq_domain *cocci_id/* drivers/iio/adc/stm32-adc-core.c 351 */;
	unsigned int cocci_id/* drivers/iio/adc/stm32-adc-core.c 351 */;
	struct irq_chip *cocci_id/* drivers/iio/adc/stm32-adc-core.c 318 */;
	struct irq_desc *cocci_id/* drivers/iio/adc/stm32-adc-core.c 315 */;
	u32 cocci_id/* drivers/iio/adc/stm32-adc-core.c 307 */;
	const unsigned int cocci_id/* drivers/iio/adc/stm32-adc-core.c 300 */[STM32_ADC_MAX_ADCS];
	const struct stm32_adc_common_regs cocci_id/* drivers/iio/adc/stm32-adc-core.c 280 */;
	const struct stm32h7_adc_ck_spec cocci_id/* drivers/iio/adc/stm32-adc-core.c 178 */[];
	struct stm32h7_adc_ck_spec {
		u32 ckmode;
		u32 presc;
		int div;
	} cocci_id/* drivers/iio/adc/stm32-adc-core.c 172 */;
	unsigned long cocci_id/* drivers/iio/adc/stm32-adc-core.c 129 */;
	int cocci_id/* drivers/iio/adc/stm32-adc-core.c 118 */[];
}
