cocci_test_suite() {
	struct pmic_wrapper_type {
		int *regs;
		enum pwrap_type type;
		u32 arb_en_all;
		u32 int_en_all;
		u32 int1_en_all;
		u32 spi_w;
		u32 wdt_src;
		u32 caps;
		int (*init_reg_clock)(struct pmic_wrapper *wrp);
		int (*init_soc_specific)(struct pmic_wrapper *wrp);
	} cocci_id/* drivers/soc/mediatek/mtk-pmic-wrap.c 986 */;
	struct pmic_wrapper {
		struct device *dev;
		void __iomem *base;
		struct regmap *regmap;
		const struct pmic_wrapper_type *master;
		const struct pwrap_slv_type *slave;
		struct clk *clk_spi;
		struct clk *clk_wrap;
		struct reset_control *rstc;
		struct reset_control *rstc_bridge;
		void __iomem *bridge_base;
	} cocci_id/* drivers/soc/mediatek/mtk-pmic-wrap.c 972 */;
	struct pwrap_slv_type {
		const u32 *dew_regs;
		enum pmic_type type;
		const struct regmap_config *regmap;
		u32 caps;
		int (*pwrap_read)(struct pmic_wrapper *wrp, u32 adr,
				  u32 *rdata);
		int (*pwrap_write)(struct pmic_wrapper *wrp, u32 adr,
				   u32 wdata);
	} cocci_id/* drivers/soc/mediatek/mtk-pmic-wrap.c 957 */;
	struct pmic_wrapper cocci_id/* drivers/soc/mediatek/mtk-pmic-wrap.c 956 */;
	enum pwrap_type{PWRAP_MT2701, PWRAP_MT6765, PWRAP_MT6797, PWRAP_MT7622, PWRAP_MT8135, PWRAP_MT8173, PWRAP_MT8183, PWRAP_MT8516,} cocci_id/* drivers/soc/mediatek/mtk-pmic-wrap.c 945 */;
	enum pmic_type{PMIC_MT6323, PMIC_MT6351, PMIC_MT6357, PMIC_MT6358, PMIC_MT6380, PMIC_MT6397,} cocci_id/* drivers/soc/mediatek/mtk-pmic-wrap.c 936 */;
	enum dew_regs{PWRAP_DEW_BASE, PWRAP_DEW_DIO_EN, PWRAP_DEW_READ_TEST, PWRAP_DEW_WRITE_TEST, PWRAP_DEW_CRC_EN, PWRAP_DEW_CRC_VAL, PWRAP_DEW_MON_GRP_SEL, PWRAP_DEW_CIPHER_KEY_SEL, PWRAP_DEW_CIPHER_IV_SEL, PWRAP_DEW_CIPHER_RDY, PWRAP_DEW_CIPHER_MODE, PWRAP_DEW_CIPHER_SWRST, PWRAP_DEW_CIPHER_EN, PWRAP_DEW_RDDMY_NO, PWRAP_SMT_CON1, PWRAP_DRV_CON1, PWRAP_FILTER_CON0, PWRAP_GPIO_PULLEN0_CLR, PWRAP_RG_SPI_CON0, PWRAP_RG_SPI_RECORD0, PWRAP_RG_SPI_CON2, PWRAP_RG_SPI_CON3, PWRAP_RG_SPI_CON4, PWRAP_RG_SPI_CON5, PWRAP_RG_SPI_CON6, PWRAP_RG_SPI_CON7, PWRAP_RG_SPI_CON8, PWRAP_RG_SPI_CON13, PWRAP_SPISLV_KEY, PWRAP_DEW_EVENT_OUT_EN, PWRAP_DEW_EVENT_SRC_EN, PWRAP_DEW_EVENT_SRC, PWRAP_DEW_EVENT_FLAG, PWRAP_DEW_MON_FLAG_SEL, PWRAP_DEW_EVENT_TEST, PWRAP_DEW_CIPHER_LOAD, PWRAP_DEW_CIPHER_START,} cocci_id/* drivers/soc/mediatek/mtk-pmic-wrap.c 79 */;
	int cocci_id/* drivers/soc/mediatek/mtk-pmic-wrap.c 382 */[];
	enum pwrap_regs{PWRAP_MUX_SEL, PWRAP_WRAP_EN, PWRAP_DIO_EN, PWRAP_SIDLY, PWRAP_CSHEXT_WRITE, PWRAP_CSHEXT_READ, PWRAP_CSLEXT_START, PWRAP_CSLEXT_END, PWRAP_STAUPD_PRD, PWRAP_STAUPD_GRPEN, PWRAP_STAUPD_MAN_TRIG, PWRAP_STAUPD_STA, PWRAP_WRAP_STA, PWRAP_HARB_INIT, PWRAP_HARB_HPRIO, PWRAP_HIPRIO_ARB_EN, PWRAP_HARB_STA0, PWRAP_HARB_STA1, PWRAP_MAN_EN, PWRAP_MAN_CMD, PWRAP_MAN_RDATA, PWRAP_MAN_VLDCLR, PWRAP_WACS0_EN, PWRAP_INIT_DONE0, PWRAP_WACS0_CMD, PWRAP_WACS0_RDATA, PWRAP_WACS0_VLDCLR, PWRAP_WACS1_EN, PWRAP_INIT_DONE1, PWRAP_WACS1_CMD, PWRAP_WACS1_RDATA, PWRAP_WACS1_VLDCLR, PWRAP_WACS2_EN, PWRAP_INIT_DONE2, PWRAP_WACS2_CMD, PWRAP_WACS2_RDATA, PWRAP_WACS2_VLDCLR, PWRAP_INT_EN, PWRAP_INT_FLG_RAW, PWRAP_INT_FLG, PWRAP_INT_CLR, PWRAP_SIG_ADR, PWRAP_SIG_MODE, PWRAP_SIG_VALUE, PWRAP_SIG_ERRVAL, PWRAP_CRC_EN, PWRAP_TIMER_EN, PWRAP_TIMER_STA, PWRAP_WDT_UNIT, PWRAP_WDT_SRC_EN, PWRAP_WDT_FLG, PWRAP_DEBUG_INT_SEL, PWRAP_CIPHER_KEY_SEL, PWRAP_CIPHER_IV_SEL, PWRAP_CIPHER_RDY, PWRAP_CIPHER_MODE, PWRAP_CIPHER_SWRST, PWRAP_DCM_EN, PWRAP_DCM_DBC_PRD, PWRAP_EINT_STA0_ADR, PWRAP_EINT_STA1_ADR, PWRAP_ADC_CMD_ADDR, PWRAP_PWRAP_ADC_CMD, PWRAP_ADC_RDY_ADDR, PWRAP_ADC_RDATA_ADDR1, PWRAP_ADC_RDATA_ADDR2, PWRAP_STA, PWRAP_CLR, PWRAP_DVFS_ADR8, PWRAP_DVFS_WDATA8, PWRAP_DVFS_ADR9, PWRAP_DVFS_WDATA9, PWRAP_DVFS_ADR10, PWRAP_DVFS_WDATA10, PWRAP_DVFS_ADR11, PWRAP_DVFS_WDATA11, PWRAP_DVFS_ADR12, PWRAP_DVFS_WDATA12, PWRAP_DVFS_ADR13, PWRAP_DVFS_WDATA13, PWRAP_DVFS_ADR14, PWRAP_DVFS_WDATA14, PWRAP_DVFS_ADR15, PWRAP_DVFS_WDATA15, PWRAP_EXT_CK, PWRAP_ADC_RDATA_ADDR, PWRAP_GPS_STA, PWRAP_SW_RST, PWRAP_DVFS_STEP_CTRL0, PWRAP_DVFS_STEP_CTRL1, PWRAP_DVFS_STEP_CTRL2, PWRAP_SPI2_CTRL, PWRAP_CSHEXT, PWRAP_EVENT_IN_EN, PWRAP_EVENT_DST_EN, PWRAP_RRARB_INIT, PWRAP_RRARB_EN, PWRAP_RRARB_STA0, PWRAP_RRARB_STA1, PWRAP_EVENT_STA, PWRAP_EVENT_STACLR, PWRAP_CIPHER_LOAD, PWRAP_CIPHER_START, PWRAP_RDDMY, PWRAP_SI_CK_CON, PWRAP_DVFS_ADR0, PWRAP_DVFS_WDATA0, PWRAP_DVFS_ADR1, PWRAP_DVFS_WDATA1, PWRAP_DVFS_ADR2, PWRAP_DVFS_WDATA2, PWRAP_DVFS_ADR3, PWRAP_DVFS_WDATA3, PWRAP_DVFS_ADR4, PWRAP_DVFS_WDATA4, PWRAP_DVFS_ADR5, PWRAP_DVFS_WDATA5, PWRAP_DVFS_ADR6, PWRAP_DVFS_WDATA6, PWRAP_DVFS_ADR7, PWRAP_DVFS_WDATA7, PWRAP_SPMINF_STA, PWRAP_CIPHER_EN, PWRAP_SI_SAMPLE_CTRL, PWRAP_CSLEXT_WRITE, PWRAP_CSLEXT_READ, PWRAP_EXT_CK_WRITE, PWRAP_STAUPD_CTRL, PWRAP_WACS_P2P_EN, PWRAP_INIT_DONE_P2P, PWRAP_WACS_MD32_EN, PWRAP_INIT_DONE_MD32, PWRAP_INT1_EN, PWRAP_INT1_FLG, PWRAP_INT1_CLR, PWRAP_WDT_SRC_EN_1, PWRAP_INT_GPS_AUXADC_CMD_ADDR, PWRAP_INT_GPS_AUXADC_CMD, PWRAP_INT_GPS_AUXADC_RDATA_ADDR, PWRAP_EXT_GPS_AUXADC_RDATA_ADDR, PWRAP_GPSINF_0_STA, PWRAP_GPSINF_1_STA, PWRAP_OP_TYPE, PWRAP_MSB_FIRST,} cocci_id/* drivers/soc/mediatek/mtk-pmic-wrap.c 223 */;
	struct platform_driver cocci_id/* drivers/soc/mediatek/mtk-pmic-wrap.c 2046 */;
	struct resource *cocci_id/* drivers/soc/mediatek/mtk-pmic-wrap.c 1900 */;
	const struct of_device_id *cocci_id/* drivers/soc/mediatek/mtk-pmic-wrap.c 1899 */;
	struct device_node *cocci_id/* drivers/soc/mediatek/mtk-pmic-wrap.c 1898 */;
	struct platform_device *cocci_id/* drivers/soc/mediatek/mtk-pmic-wrap.c 1894 */;
	const struct of_device_id cocci_id/* drivers/soc/mediatek/mtk-pmic-wrap.c 1863 */[];
	struct pmic_wrapper_type cocci_id/* drivers/soc/mediatek/mtk-pmic-wrap.c 1851 */;
	const struct pmic_wrapper_type cocci_id/* drivers/soc/mediatek/mtk-pmic-wrap.c 1761 */;
	const struct pwrap_slv_type cocci_id/* drivers/soc/mediatek/mtk-pmic-wrap.c 1677 */;
	const struct regmap_config cocci_id/* drivers/soc/mediatek/mtk-pmic-wrap.c 1659 */;
	irqreturn_t cocci_id/* drivers/soc/mediatek/mtk-pmic-wrap.c 1641 */;
	void *cocci_id/* drivers/soc/mediatek/mtk-pmic-wrap.c 1641 */;
	u32 cocci_id/* drivers/soc/mediatek/mtk-pmic-wrap.c 1366 */;
	bool cocci_id/* drivers/soc/mediatek/mtk-pmic-wrap.c 1345 */;
	struct pmic_wrapper *cocci_id/* drivers/soc/mediatek/mtk-pmic-wrap.c 1307 */;
	int cocci_id/* drivers/soc/mediatek/mtk-pmic-wrap.c 1307 */;
	u8 cocci_id/* drivers/soc/mediatek/mtk-pmic-wrap.c 1286 */;
	void cocci_id/* drivers/soc/mediatek/mtk-pmic-wrap.c 1286 */;
	const u32 cocci_id/* drivers/soc/mediatek/mtk-pmic-wrap.c 125 */[];
	signed char cocci_id/* drivers/soc/mediatek/mtk-pmic-wrap.c 1226 */[16];
	u32 *cocci_id/* drivers/soc/mediatek/mtk-pmic-wrap.c 1117 */;
	unsigned long cocci_id/* drivers/soc/mediatek/mtk-pmic-wrap.c 1054 */;
	bool (*cocci_id/* drivers/soc/mediatek/mtk-pmic-wrap.c 1052 */)(struct pmic_wrapper *);
	enum pwrap_regs cocci_id/* drivers/soc/mediatek/mtk-pmic-wrap.c 1000 */;
}
