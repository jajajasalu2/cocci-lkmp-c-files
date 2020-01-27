cocci_test_suite() {
	u32 cocci_id/* drivers/pinctrl/pinctrl-zynq.c 988 */;
	unsigned long *cocci_id/* drivers/pinctrl/pinctrl-zynq.c 986 */;
	const struct pin_config_item cocci_id/* drivers/pinctrl/pinctrl-zynq.c 974 */[ARRAY_SIZE(zynq_dt_params)];
	const struct pinconf_generic_params cocci_id/* drivers/pinctrl/pinctrl-zynq.c 969 */[];
	enum zynq_io_standards{zynq_iostd_min, zynq_iostd_lvcmos18, zynq_iostd_lvcmos25, zynq_iostd_lvcmos33, zynq_iostd_hstl, zynq_iostd_max,} cocci_id/* drivers/pinctrl/pinctrl-zynq.c 953 */;
	const struct pinmux_ops cocci_id/* drivers/pinctrl/pinctrl-zynq.c 937 */;
	const struct zynq_pinmux_function *cocci_id/* drivers/pinctrl/pinctrl-zynq.c 895 */;
	unsigned *constcocci_id/* drivers/pinctrl/pinctrl-zynq.c 879 */;
	const char *const**cocci_id/* drivers/pinctrl/pinctrl-zynq.c 878 */;
	const struct pinctrl_ops cocci_id/* drivers/pinctrl/pinctrl-zynq.c 852 */;
	unsigned int *cocci_id/* drivers/pinctrl/pinctrl-zynq.c 842 */;
	const unsigned int **cocci_id/* drivers/pinctrl/pinctrl-zynq.c 841 */;
	int cocci_id/* drivers/pinctrl/pinctrl-zynq.c 839 */;
	struct zynq_pinctrl *cocci_id/* drivers/pinctrl/pinctrl-zynq.c 834 */;
	unsigned int cocci_id/* drivers/pinctrl/pinctrl-zynq.c 832 */;
	const char *cocci_id/* drivers/pinctrl/pinctrl-zynq.c 831 */;
	struct pinctrl_dev *cocci_id/* drivers/pinctrl/pinctrl-zynq.c 831 */;
	const struct zynq_pinmux_function cocci_id/* drivers/pinctrl/pinctrl-zynq.c 779 */[];
	enum zynq_pinmux_functions{ZYNQ_PMUX_can0, ZYNQ_PMUX_can1, ZYNQ_PMUX_ethernet0, ZYNQ_PMUX_ethernet1, ZYNQ_PMUX_gpio0, ZYNQ_PMUX_i2c0, ZYNQ_PMUX_i2c1, ZYNQ_PMUX_mdio0, ZYNQ_PMUX_mdio1, ZYNQ_PMUX_qspi0, ZYNQ_PMUX_qspi1, ZYNQ_PMUX_qspi_fbclk, ZYNQ_PMUX_qspi_cs1, ZYNQ_PMUX_spi0, ZYNQ_PMUX_spi1, ZYNQ_PMUX_spi0_ss, ZYNQ_PMUX_spi1_ss, ZYNQ_PMUX_sdio0, ZYNQ_PMUX_sdio0_pc, ZYNQ_PMUX_sdio0_cd, ZYNQ_PMUX_sdio0_wp, ZYNQ_PMUX_sdio1, ZYNQ_PMUX_sdio1_pc, ZYNQ_PMUX_sdio1_cd, ZYNQ_PMUX_sdio1_wp, ZYNQ_PMUX_smc0_nor, ZYNQ_PMUX_smc0_nor_cs1, ZYNQ_PMUX_smc0_nor_addr25, ZYNQ_PMUX_smc0_nand, ZYNQ_PMUX_ttc0, ZYNQ_PMUX_ttc1, ZYNQ_PMUX_uart0, ZYNQ_PMUX_uart1, ZYNQ_PMUX_usb0, ZYNQ_PMUX_usb1, ZYNQ_PMUX_swdt0, ZYNQ_PMUX_MAX_FUNC,} cocci_id/* drivers/pinctrl/pinctrl-zynq.c 76 */;
	const char *constcocci_id/* drivers/pinctrl/pinctrl-zynq.c 705 */[];
	struct zynq_pinmux_function {
		const char *name;
		const char *const*groups;
		unsigned int ngroups;
		unsigned int mux_val;
		u32 mux;
		u32 mux_mask;
		u8 mux_shift;
	} cocci_id/* drivers/pinctrl/pinctrl-zynq.c 66 */;
	struct zynq_pctrl_group {
		const char *name;
		const unsigned int *pins;
		const unsigned int npins;
	} cocci_id/* drivers/pinctrl/pinctrl-zynq.c 50 */;
	struct zynq_pinctrl {
		struct pinctrl_dev *pctrl;
		struct regmap *syscon;
		u32 pctrl_offset;
		const struct zynq_pctrl_group *groups;
		unsigned int ngroups;
		const struct zynq_pinmux_function *funcs;
		unsigned int nfuncs;
	} cocci_id/* drivers/pinctrl/pinctrl-zynq.c 40 */;
	const struct zynq_pctrl_group cocci_id/* drivers/pinctrl/pinctrl-zynq.c 386 */[];
	const unsigned int cocci_id/* drivers/pinctrl/pinctrl-zynq.c 241 */[];
	int __init cocci_id/* drivers/pinctrl/pinctrl-zynq.c 1211 */;
	void cocci_id/* drivers/pinctrl/pinctrl-zynq.c 1211 */;
	struct platform_driver cocci_id/* drivers/pinctrl/pinctrl-zynq.c 1203 */;
	const struct of_device_id cocci_id/* drivers/pinctrl/pinctrl-zynq.c 1198 */[];
	struct resource *cocci_id/* drivers/pinctrl/pinctrl-zynq.c 1161 */;
	const struct pinctrl_pin_desc cocci_id/* drivers/pinctrl/pinctrl-zynq.c 116 */[];
	struct platform_device *cocci_id/* drivers/pinctrl/pinctrl-zynq.c 1158 */;
	struct pinctrl_desc cocci_id/* drivers/pinctrl/pinctrl-zynq.c 1143 */;
	const struct pinconf_ops cocci_id/* drivers/pinctrl/pinctrl-zynq.c 1136 */;
	const struct zynq_pctrl_group *cocci_id/* drivers/pinctrl/pinctrl-zynq.c 1124 */;
	enum zynq_io_standards cocci_id/* drivers/pinctrl/pinctrl-zynq.c 1021 */;
}
