cocci_test_suite() {
	u32 *cocci_id/* drivers/pinctrl/pinctrl-lpc18xx.c 932 */;
	u16 cocci_id/* drivers/pinctrl/pinctrl-lpc18xx.c 897 */;
	enum pin_config_param cocci_id/* drivers/pinctrl/pinctrl-lpc18xx.c 876 */;
	unsigned long *cocci_id/* drivers/pinctrl/pinctrl-lpc18xx.c 873 */;
	struct pinctrl_dev *cocci_id/* drivers/pinctrl/pinctrl-lpc18xx.c 872 */;
	struct lpc18xx_pin_caps *cocci_id/* drivers/pinctrl/pinctrl-lpc18xx.c 860 */;
	unsigned cocci_id/* drivers/pinctrl/pinctrl-lpc18xx.c 860 */;
	unsigned int cocci_id/* drivers/pinctrl/pinctrl-lpc18xx.c 751 */;
	enum{FUNC_R, FUNC_ADC, FUNC_ADCTRIG, FUNC_CAN0, FUNC_CAN1, FUNC_CGU_OUT, FUNC_CLKIN, FUNC_CLKOUT, FUNC_CTIN, FUNC_CTOUT, FUNC_DAC, FUNC_EMC, FUNC_EMC_ALT, FUNC_ENET, FUNC_ENET_ALT, FUNC_GPIO, FUNC_I2C0, FUNC_I2C1, FUNC_I2S0_RX_MCLK, FUNC_I2S0_RX_SCK, FUNC_I2S0_RX_SDA, FUNC_I2S0_RX_WS, FUNC_I2S0_TX_MCLK, FUNC_I2S0_TX_SCK, FUNC_I2S0_TX_SDA, FUNC_I2S0_TX_WS, FUNC_I2S1, FUNC_LCD, FUNC_LCD_ALT, FUNC_MCTRL, FUNC_NMI, FUNC_QEI, FUNC_SDMMC, FUNC_SGPIO, FUNC_SPI, FUNC_SPIFI, FUNC_SSP0, FUNC_SSP0_ALT, FUNC_SSP1, FUNC_TIMER0, FUNC_TIMER1, FUNC_TIMER2, FUNC_TIMER3, FUNC_TRACE, FUNC_UART0, FUNC_UART1, FUNC_UART2, FUNC_UART3, FUNC_USB0, FUNC_USB1, FUNC_MAX,} cocci_id/* drivers/pinctrl/pinctrl-lpc18xx.c 74 */;
	u32 cocci_id/* drivers/pinctrl/pinctrl-lpc18xx.c 732 */;
	int *cocci_id/* drivers/pinctrl/pinctrl-lpc18xx.c 732 */;
	void __iomem *cocci_id/* drivers/pinctrl/pinctrl-lpc18xx.c 732 */;
	struct pinctrl_gpio_range *cocci_id/* drivers/pinctrl/pinctrl-lpc18xx.c 723 */;
	u8 cocci_id/* drivers/pinctrl/pinctrl-lpc18xx.c 678 */;
	enum{TYPE_ND, TYPE_HD, TYPE_HS, TYPE_I2C0, TYPE_USB1,} cocci_id/* drivers/pinctrl/pinctrl-lpc18xx.c 65 */;
	const struct pin_config_item cocci_id/* drivers/pinctrl/pinctrl-lpc18xx.c 641 */[ARRAY_SIZE(lpc18xx_params)];
	const struct pinconf_generic_params cocci_id/* drivers/pinctrl/pinctrl-lpc18xx.c 636 */[];
	const struct pinctrl_pin_desc cocci_id/* drivers/pinctrl/pinctrl-lpc18xx.c 447 */[];
	enum{PIN_CLK0=600, PIN_CLK1, PIN_CLK2, PIN_CLK3, PIN_USB1_DM, PIN_USB1_DP, PIN_I2C0_SCL, PIN_I2C0_SDA,} cocci_id/* drivers/pinctrl/pinctrl-lpc18xx.c 430 */;
	struct lpc18xx_pin_caps {
		unsigned int offset;
		unsigned char functions[LPC18XX_SCU_FUNC_PER_PIN];
		unsigned char analog;
		unsigned char type;
	} cocci_id/* drivers/pinctrl/pinctrl-lpc18xx.c 193 */;
	struct lpc18xx_scu_data {
		struct pinctrl_dev *pctl;
		void __iomem *base;
		struct clk *clk;
		struct lpc18xx_pmx_func func[FUNC_MAX];
	} cocci_id/* drivers/pinctrl/pinctrl-lpc18xx.c 186 */;
	struct lpc18xx_pmx_func {
		const char **groups;
		unsigned ngroups;
	} cocci_id/* drivers/pinctrl/pinctrl-lpc18xx.c 181 */;
	struct platform_driver cocci_id/* drivers/pinctrl/pinctrl-lpc18xx.c 1372 */;
	const struct of_device_id cocci_id/* drivers/pinctrl/pinctrl-lpc18xx.c 1367 */[];
	struct platform_device *cocci_id/* drivers/pinctrl/pinctrl-lpc18xx.c 1324 */;
	char *cocci_id/* drivers/pinctrl/pinctrl-lpc18xx.c 1312 */;
	u16 cocci_id/* drivers/pinctrl/pinctrl-lpc18xx.c 1301 */[ARRAY_SIZE(lpc18xx_pins)];
	struct lpc18xx_scu_data *cocci_id/* drivers/pinctrl/pinctrl-lpc18xx.c 1299 */;
	struct device *cocci_id/* drivers/pinctrl/pinctrl-lpc18xx.c 1298 */;
	int cocci_id/* drivers/pinctrl/pinctrl-lpc18xx.c 1298 */;
	const char *constcocci_id/* drivers/pinctrl/pinctrl-lpc18xx.c 128 */[];
	bool cocci_id/* drivers/pinctrl/pinctrl-lpc18xx.c 1273 */;
	struct pinctrl_desc cocci_id/* drivers/pinctrl/pinctrl-lpc18xx.c 1258 */;
	const struct pinctrl_ops cocci_id/* drivers/pinctrl/pinctrl-lpc18xx.c 1250 */;
	unsigned *cocci_id/* drivers/pinctrl/pinctrl-lpc18xx.c 1242 */;
	const unsigned **cocci_id/* drivers/pinctrl/pinctrl-lpc18xx.c 1241 */;
	const char *cocci_id/* drivers/pinctrl/pinctrl-lpc18xx.c 1233 */;
	const struct pinmux_ops cocci_id/* drivers/pinctrl/pinctrl-lpc18xx.c 1221 */;
	unsigned *constcocci_id/* drivers/pinctrl/pinctrl-lpc18xx.c 1142 */;
	const char *const**cocci_id/* drivers/pinctrl/pinctrl-lpc18xx.c 1141 */;
	const struct pinconf_ops cocci_id/* drivers/pinctrl/pinctrl-lpc18xx.c 1122 */;
}
