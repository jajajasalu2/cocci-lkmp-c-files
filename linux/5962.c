cocci_test_suite() {
	const struct bm1880_pinmux_function *cocci_id/* drivers/pinctrl/pinctrl-bm1880.c 986 */;
	unsigned *constcocci_id/* drivers/pinctrl/pinctrl-bm1880.c 971 */;
	const char *const**cocci_id/* drivers/pinctrl/pinctrl-bm1880.c 970 */;
	const struct pinctrl_ops cocci_id/* drivers/pinctrl/pinctrl-bm1880.c 944 */;
	unsigned int *cocci_id/* drivers/pinctrl/pinctrl-bm1880.c 934 */;
	const unsigned int **cocci_id/* drivers/pinctrl/pinctrl-bm1880.c 933 */;
	int cocci_id/* drivers/pinctrl/pinctrl-bm1880.c 931 */;
	struct bm1880_pinctrl *cocci_id/* drivers/pinctrl/pinctrl-bm1880.c 926 */;
	unsigned int cocci_id/* drivers/pinctrl/pinctrl-bm1880.c 924 */;
	const char *cocci_id/* drivers/pinctrl/pinctrl-bm1880.c 923 */;
	struct pinctrl_dev *cocci_id/* drivers/pinctrl/pinctrl-bm1880.c 923 */;
	const struct bm1880_pinconf_data cocci_id/* drivers/pinctrl/pinctrl-bm1880.c 801 */[];
	const struct pinctrl_pin_desc cocci_id/* drivers/pinctrl/pinctrl-bm1880.c 80 */[];
	struct bm1880_pinconf_data {
		u32 drv_bits;
	} cocci_id/* drivers/pinctrl/pinctrl-bm1880.c 76 */;
	const struct bm1880_pinmux_function cocci_id/* drivers/pinctrl/pinctrl-bm1880.c 655 */[];
	struct bm1880_pinmux_function {
		const char *name;
		const char *const*groups;
		unsigned int ngroups;
		u32 mux_val;
		u32 mux;
		u8 mux_shift;
	} cocci_id/* drivers/pinctrl/pinctrl-bm1880.c 63 */;
	const char *constcocci_id/* drivers/pinctrl/pinctrl-bm1880.c 510 */[];
	struct bm1880_pctrl_group {
		const char *name;
		const unsigned int *pins;
		const unsigned int npins;
	} cocci_id/* drivers/pinctrl/pinctrl-bm1880.c 48 */;
	const struct bm1880_pctrl_group cocci_id/* drivers/pinctrl/pinctrl-bm1880.c 368 */[];
	struct bm1880_pinctrl {
		void __iomem *base;
		struct pinctrl_dev *pctrldev;
		const struct bm1880_pctrl_group *groups;
		unsigned int ngroups;
		const struct bm1880_pinmux_function *funcs;
		unsigned int nfuncs;
		const struct bm1880_pinconf_data *pinconf;
	} cocci_id/* drivers/pinctrl/pinctrl-bm1880.c 32 */;
	const unsigned int cocci_id/* drivers/pinctrl/pinctrl-bm1880.c 221 */[];
	enum bm1880_pinmux_functions{F_nand, F_spi, F_emmc, F_sdio, F_eth0, F_pwm0, F_pwm1, F_pwm2, F_pwm3, F_pwm4, F_pwm5, F_pwm6, F_pwm7, F_pwm8, F_pwm9, F_pwm10, F_pwm11, F_pwm12, F_pwm13, F_pwm14, F_pwm15, F_pwm16, F_pwm17, F_pwm18, F_pwm19, F_pwm20, F_pwm21, F_pwm22, F_pwm23, F_pwm24, F_pwm25, F_pwm26, F_pwm27, F_pwm28, F_pwm29, F_pwm30, F_pwm31, F_pwm32, F_pwm33, F_pwm34, F_pwm35, F_pwm36, F_pwm37, F_i2c0, F_i2c1, F_i2c2, F_i2c3, F_i2c4, F_uart0, F_uart1, F_uart2, F_uart3, F_uart4, F_uart5, F_uart6, F_uart7, F_uart8, F_uart9, F_uart10, F_uart11, F_uart12, F_uart13, F_uart14, F_uart15, F_gpio0, F_gpio1, F_gpio2, F_gpio3, F_gpio4, F_gpio5, F_gpio6, F_gpio7, F_gpio8, F_gpio9, F_gpio10, F_gpio11, F_gpio12, F_gpio13, F_gpio14, F_gpio15, F_gpio16, F_gpio17, F_gpio18, F_gpio19, F_gpio20, F_gpio21, F_gpio22, F_gpio23, F_gpio24, F_gpio25, F_gpio26, F_gpio27, F_gpio28, F_gpio29, F_gpio30, F_gpio31, F_gpio32, F_gpio33, F_gpio34, F_gpio35, F_gpio36, F_gpio37, F_gpio38, F_gpio39, F_gpio40, F_gpio41, F_gpio42, F_gpio43, F_gpio44, F_gpio45, F_gpio46, F_gpio47, F_gpio48, F_gpio49, F_gpio50, F_gpio51, F_gpio52, F_gpio53, F_gpio54, F_gpio55, F_gpio56, F_gpio57, F_gpio58, F_gpio59, F_gpio60, F_gpio61, F_gpio62, F_gpio63, F_gpio64, F_gpio65, F_gpio66, F_gpio67, F_eth1, F_i2s0, F_i2s0_mclkin, F_i2s1, F_i2s1_mclkin, F_spi0, F_max,} cocci_id/* drivers/pinctrl/pinctrl-bm1880.c 195 */;
	int __init cocci_id/* drivers/pinctrl/pinctrl-bm1880.c 1352 */;
	void cocci_id/* drivers/pinctrl/pinctrl-bm1880.c 1352 */;
	struct platform_driver cocci_id/* drivers/pinctrl/pinctrl-bm1880.c 1344 */;
	const struct of_device_id cocci_id/* drivers/pinctrl/pinctrl-bm1880.c 1339 */[];
	struct platform_device *cocci_id/* drivers/pinctrl/pinctrl-bm1880.c 1308 */;
	struct pinctrl_desc cocci_id/* drivers/pinctrl/pinctrl-bm1880.c 1298 */;
	const struct pinmux_ops cocci_id/* drivers/pinctrl/pinctrl-bm1880.c 1291 */;
	const struct pinconf_ops cocci_id/* drivers/pinctrl/pinctrl-bm1880.c 1284 */;
	const struct bm1880_pctrl_group *cocci_id/* drivers/pinctrl/pinctrl-bm1880.c 1272 */;
	u32 cocci_id/* drivers/pinctrl/pinctrl-bm1880.c 1155 */;
	unsigned long *cocci_id/* drivers/pinctrl/pinctrl-bm1880.c 1150 */;
	u32 *cocci_id/* drivers/pinctrl/pinctrl-bm1880.c 1014 */;
}
