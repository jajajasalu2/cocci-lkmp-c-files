cocci_test_suite() {
	const char *cocci_id/* drivers/clk/clk-stm32mp1.c 996 */;
	unsigned long *cocci_id/* drivers/clk/clk-stm32mp1.c 936 */;
	long cocci_id/* drivers/clk/clk-stm32mp1.c 935 */;
	unsigned int cocci_id/* drivers/clk/clk-stm32mp1.c 921 */;
	u32 cocci_id/* drivers/clk/clk-stm32mp1.c 920 */;
	struct timer_cker *cocci_id/* drivers/clk/clk-stm32mp1.c 919 */;
	struct clk_hw *cocci_id/* drivers/clk/clk-stm32mp1.c 916 */;
	unsigned long cocci_id/* drivers/clk/clk-stm32mp1.c 916 */;
	struct timer_cker cocci_id/* drivers/clk/clk-stm32mp1.c 911 */;
	struct timer_cker {
		spinlock_t *lock;
		void __iomem *apbdiv;
		void __iomem *timpre;
		struct clk_hw hw;
	} cocci_id/* drivers/clk/clk-stm32mp1.c 903 */;
	u64 cocci_id/* drivers/clk/clk-stm32mp1.c 827 */;
	struct stm32_pll_obj *cocci_id/* drivers/clk/clk-stm32mp1.c 751 */;
	int cocci_id/* drivers/clk/clk-stm32mp1.c 749 */;
	struct stm32_pll_obj cocci_id/* drivers/clk/clk-stm32mp1.c 736 */;
	struct stm32_pll_obj {
		spinlock_t *lock;
		void __iomem *reg;
		struct clk_hw hw;
	} cocci_id/* drivers/clk/clk-stm32mp1.c 729 */;
	const struct clk_ops cocci_id/* drivers/clk/clk-stm32mp1.c 722 */;
	u8 cocci_id/* drivers/clk/clk-stm32mp1.c 697 */;
	struct stm32_clk_mmux cocci_id/* drivers/clk/clk-stm32mp1.c 695 */;
	struct stm32_clk_mgate cocci_id/* drivers/clk/clk-stm32mp1.c 663 */;
	const struct clk_ops *cocci_id/* drivers/clk/clk-stm32mp1.c 615 */;
	const struct stm32_composite_cfg *cocci_id/* drivers/clk/clk-stm32mp1.c 612 */;
	const char *const*cocci_id/* drivers/clk/clk-stm32mp1.c 610 */;
	struct clk_gate *cocci_id/* drivers/clk/clk-stm32mp1.c 538 */;
	struct stm32_clk_mgate *cocci_id/* drivers/clk/clk-stm32mp1.c 537 */;
	const struct stm32_gate_cfg *cocci_id/* drivers/clk/clk-stm32mp1.c 535 */;
	struct clk_divider *cocci_id/* drivers/clk/clk-stm32mp1.c 516 */;
	const struct stm32_div_cfg *cocci_id/* drivers/clk/clk-stm32mp1.c 513 */;
	struct clk_mux *cocci_id/* drivers/clk/clk-stm32mp1.c 477 */;
	struct stm32_clk_mmux *cocci_id/* drivers/clk/clk-stm32mp1.c 476 */;
	const struct stm32_mux_cfg *cocci_id/* drivers/clk/clk-stm32mp1.c 473 */;
	void cocci_id/* drivers/clk/clk-stm32mp1.c 454 */;
	struct mux_cfg *cocci_id/* drivers/clk/clk-stm32mp1.c 436 */;
	struct div_cfg *cocci_id/* drivers/clk/clk-stm32mp1.c 416 */;
	const struct clock_config *cocci_id/* drivers/clk/clk-stm32mp1.c 414 */;
	spinlock_t *cocci_id/* drivers/clk/clk-stm32mp1.c 413 */;
	void __iomem *cocci_id/* drivers/clk/clk-stm32mp1.c 413 */;
	struct clk_hw_onecell_data *cocci_id/* drivers/clk/clk-stm32mp1.c 412 */;
	struct device *cocci_id/* drivers/clk/clk-stm32mp1.c 411 */;
	struct fixed_factor_cfg *cocci_id/* drivers/clk/clk-stm32mp1.c 403 */;
	struct gate_cfg *cocci_id/* drivers/clk/clk-stm32mp1.c 385 */;
	struct stm32_composite_cfg {
		const struct stm32_gate_cfg *gate;
		const struct stm32_div_cfg *div;
		const struct stm32_mux_cfg *mux;
	} cocci_id/* drivers/clk/clk-stm32mp1.c 373 */;
	struct stm32_mux_cfg {
		struct mux_cfg *mux;
		struct stm32_mmux *mmux;
		const struct clk_ops *ops;
	} cocci_id/* drivers/clk/clk-stm32mp1.c 366 */;
	struct stm32_div_cfg {
		struct div_cfg *div;
		const struct clk_ops *ops;
	} cocci_id/* drivers/clk/clk-stm32mp1.c 361 */;
	struct stm32_gate_cfg {
		struct gate_cfg *gate;
		struct stm32_mgate *mgate;
		const struct clk_ops *ops;
	} cocci_id/* drivers/clk/clk-stm32mp1.c 355 */;
	struct mux_cfg {
		u32 reg_off;
		u8 shift;
		u8 width;
		u8 mux_flags;
		u32 *table;
	} cocci_id/* drivers/clk/clk-stm32mp1.c 347 */;
	struct div_cfg {
		u32 reg_off;
		u8 shift;
		u8 width;
		u8 div_flags;
		const struct clk_div_table *table;
	} cocci_id/* drivers/clk/clk-stm32mp1.c 339 */;
	struct fixed_factor_cfg {
		unsigned int mult;
		unsigned int div;
	} cocci_id/* drivers/clk/clk-stm32mp1.c 334 */;
	struct gate_cfg {
		u32 reg_off;
		u8 bit_idx;
		u8 gate_flags;
	} cocci_id/* drivers/clk/clk-stm32mp1.c 328 */;
	struct clock_config {
		u32 id;
		const char *name;
		const char *parent_name;
		const char *const*parent_names;
		int num_parents;
		unsigned long flags;
		void *cfg;
		struct clk_hw *(*func)(struct device *dev,
				       struct clk_hw_onecell_data *clk_data,
				       void __iomem *base, spinlock_t *lock,
				       const struct clock_config *cfg);
	} cocci_id/* drivers/clk/clk-stm32mp1.c 312 */;
	struct stm32_clk_mgate {
		struct clk_gate gate;
		struct stm32_mgate *mgate;
		u32 mask;
	} cocci_id/* drivers/clk/clk-stm32mp1.c 306 */;
	struct stm32_mgate {
		u8 nbr_clk;
		u32 flag;
	} cocci_id/* drivers/clk/clk-stm32mp1.c 301 */;
	struct stm32_clk_mmux {
		struct clk_mux mux;
		struct stm32_mmux *mmux;
	} cocci_id/* drivers/clk/clk-stm32mp1.c 296 */;
	struct stm32_mmux {
		u8 nbr_clk;
		struct clk_hw *hws[MAX_MUX_CLK];
	} cocci_id/* drivers/clk/clk-stm32mp1.c 291 */;
	const struct clk_div_table cocci_id/* drivers/clk/clk-stm32mp1.c 277 */[];
	const char *constcocci_id/* drivers/clk/clk-stm32mp1.c 239 */[];
	const struct stm32_clock_match_data *cocci_id/* drivers/clk/clk-stm32mp1.c 2050 */;
	struct clk_hw **cocci_id/* drivers/clk/clk-stm32mp1.c 2048 */;
	const struct of_device_id *cocci_id/* drivers/clk/clk-stm32mp1.c 2045 */;
	struct device_node *cocci_id/* drivers/clk/clk-stm32mp1.c 2043 */;
	const struct of_device_id cocci_id/* drivers/clk/clk-stm32mp1.c 2011 */[];
	struct stm32_clock_match_data cocci_id/* drivers/clk/clk-stm32mp1.c 2005 */;
	struct stm32_clock_match_data {
		const struct clock_config *cfg;
		unsigned int num;
		unsigned int maxbinding;
	} cocci_id/* drivers/clk/clk-stm32mp1.c 1999 */;
	const struct clock_config cocci_id/* drivers/clk/clk-stm32mp1.c 1659 */[];
	const struct stm32_mux_cfg cocci_id/* drivers/clk/clk-stm32mp1.c 1618 */[M_LAST];
	struct stm32_mmux cocci_id/* drivers/clk/clk-stm32mp1.c 1595 */[M_LAST];
	enum{M_SDMMC12, M_SDMMC3, M_FMC, M_QSPI, M_RNG1, M_RNG2, M_USBPHY, M_USBO, M_STGEN, M_SPDIF, M_SPI1, M_SPI23, M_SPI45, M_SPI6, M_CEC, M_I2C12, M_I2C35, M_I2C46, M_LPTIM1, M_LPTIM23, M_LPTIM45, M_USART1, M_UART24, M_UART35, M_USART6, M_UART78, M_SAI1, M_SAI2, M_SAI3, M_SAI4, M_DSI, M_FDCAN, M_ADC12, M_ETHCK, M_CKPER, M_LAST,} cocci_id/* drivers/clk/clk-stm32mp1.c 1556 */;
	struct stm32_gate_cfg cocci_id/* drivers/clk/clk-stm32mp1.c 1433 */[G_LAST];
	struct stm32_mgate cocci_id/* drivers/clk/clk-stm32mp1.c 1410 */[G_LAST];
	enum{G_SAI1, G_SAI2, G_SAI3, G_SAI4, G_SPI1, G_SPI2, G_SPI3, G_SPI4, G_SPI5, G_SPI6, G_SPDIF, G_I2C1, G_I2C2, G_I2C3, G_I2C4, G_I2C5, G_I2C6, G_USART2, G_UART4, G_USART3, G_UART5, G_USART1, G_USART6, G_UART7, G_UART8, G_LPTIM1, G_LPTIM2, G_LPTIM3, G_LPTIM4, G_LPTIM5, G_LTDC, G_DSI, G_QSPI, G_FMC, G_SDMMC1, G_SDMMC2, G_SDMMC3, G_USBO, G_USBPHY, G_RNG1, G_RNG2, G_FDCAN, G_DAC12, G_CEC, G_ADC12, G_GPU, G_STGEN, G_DFSDM, G_ADFSDM, G_TIM2, G_TIM3, G_TIM4, G_TIM5, G_TIM6, G_TIM7, G_TIM12, G_TIM13, G_TIM14, G_MDIO, G_TIM1, G_TIM8, G_TIM15, G_TIM16, G_TIM17, G_SYSCFG, G_VREF, G_TMPSENS, G_PMBCTRL, G_HDP, G_IWDG2, G_STGENRO, G_DMA1, G_DMA2, G_DMAMUX, G_DCMI, G_CRYP2, G_HASH2, G_CRC2, G_HSEM, G_IPCC, G_GPIOA, G_GPIOB, G_GPIOC, G_GPIOD, G_GPIOE, G_GPIOF, G_GPIOG, G_GPIOH, G_GPIOI, G_GPIOJ, G_GPIOK, G_MDMA, G_ETHCK, G_ETHTX, G_ETHRX, G_ETHMAC, G_CRC1, G_USBH, G_ETHSTP, G_RTCAPB, G_TZC1, G_TZC2, G_TZPC, G_IWDG1, G_BSEC, G_GPIOZ, G_CRYP1, G_HASH1, G_BKPSRAM, G_DDRPERFM, G_LAST,} cocci_id/* drivers/clk/clk-stm32mp1.c 1295 */;
	struct stm32_composite_cfg cocci_id/* drivers/clk/clk-stm32mp1.c 1277 */;
	const char *cocci_id/* drivers/clk/clk-stm32mp1.c 1264 */[];
	struct stm32_gate_cfg cocci_id/* drivers/clk/clk-stm32mp1.c 1197 */;
	struct stm32_gate_cfg *cocci_id/* drivers/clk/clk-stm32mp1.c 1192 */;
	struct stm32_cktim_cfg cocci_id/* drivers/clk/clk-stm32mp1.c 1174 */;
	struct stm32_pll_cfg cocci_id/* drivers/clk/clk-stm32mp1.c 1162 */;
	struct mux_cfg cocci_id/* drivers/clk/clk-stm32mp1.c 1147 */;
	struct div_cfg cocci_id/* drivers/clk/clk-stm32mp1.c 1126 */;
	struct fixed_factor_cfg cocci_id/* drivers/clk/clk-stm32mp1.c 1112 */;
	struct gate_cfg cocci_id/* drivers/clk/clk-stm32mp1.c 1098 */;
	struct stm32_cktim_cfg *cocci_id/* drivers/clk/clk-stm32mp1.c 1059 */;
	struct stm32_cktim_cfg {
		u32 offset_apbdiv;
		u32 offset_timpre;
	} cocci_id/* drivers/clk/clk-stm32mp1.c 1049 */;
	struct stm32_pll_cfg *cocci_id/* drivers/clk/clk-stm32mp1.c 1043 */;
	struct stm32_pll_cfg {
		u32 offset;
	} cocci_id/* drivers/clk/clk-stm32mp1.c 1034 */;
	struct clk_init_data cocci_id/* drivers/clk/clk-stm32mp1.c 1004 */;
}
