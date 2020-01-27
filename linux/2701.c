cocci_test_suite() {
	enum bsc_xfer_cmd{CMD_WR, CMD_RD, CMD_WR_NOACK, CMD_RD_NOACK,} cocci_id/* drivers/i2c/busses/i2c-brcmstb.c 97 */;
	struct bsc_clk_param {
		u32 hz;
		u32 scl_mask;
		u32 div_mask;
	} cocci_id/* drivers/i2c/busses/i2c-brcmstb.c 91 */;
	struct bsc_regs {
		u32 chip_address;
		u32 data_in[N_DATA_REGS];
		u32 cnt_reg;
		u32 ctl_reg;
		u32 iic_enable;
		u32 data_out[N_DATA_REGS];
		u32 ctlhi_reg;
		u32 scl_param;
	} cocci_id/* drivers/i2c/busses/i2c-brcmstb.c 80 */;
	struct platform_driver cocci_id/* drivers/i2c/busses/i2c-brcmstb.c 712 */;
	const struct of_device_id cocci_id/* drivers/i2c/busses/i2c-brcmstb.c 705 */[];
	struct device *cocci_id/* drivers/i2c/busses/i2c-brcmstb.c 691 */;
	u8 cocci_id/* drivers/i2c/busses/i2c-brcmstb.c 644 */;
	const char *cocci_id/* drivers/i2c/busses/i2c-brcmstb.c 589 */;
	struct resource *cocci_id/* drivers/i2c/busses/i2c-brcmstb.c 588 */;
	struct platform_device *cocci_id/* drivers/i2c/busses/i2c-brcmstb.c 583 */;
	const struct i2c_algorithm cocci_id/* drivers/i2c/busses/i2c-brcmstb.c 540 */;
	u32 cocci_id/* drivers/i2c/busses/i2c-brcmstb.c 534 */;
	struct i2c_adapter *cocci_id/* drivers/i2c/busses/i2c-brcmstb.c 534 */;
	struct i2c_msg cocci_id/* drivers/i2c/busses/i2c-brcmstb.c 456 */[];
	unsigned char cocci_id/* drivers/i2c/busses/i2c-brcmstb.c 423 */;
	struct i2c_msg *cocci_id/* drivers/i2c/busses/i2c-brcmstb.c 421 */;
	struct brcmstb_i2c_dev *cocci_id/* drivers/i2c/busses/i2c-brcmstb.c 420 */;
	int cocci_id/* drivers/i2c/busses/i2c-brcmstb.c 420 */;
	enum bsc_xfer_cmd cocci_id/* drivers/i2c/busses/i2c-brcmstb.c 411 */;
	u8 *cocci_id/* drivers/i2c/busses/i2c-brcmstb.c 409 */;
	unsigned int cocci_id/* drivers/i2c/busses/i2c-brcmstb.c 409 */;
	struct bsc_regs *cocci_id/* drivers/i2c/busses/i2c-brcmstb.c 341 */;
	unsigned long cocci_id/* drivers/i2c/busses/i2c-brcmstb.c 252 */;
	irqreturn_t cocci_id/* drivers/i2c/busses/i2c-brcmstb.c 216 */;
	void *cocci_id/* drivers/i2c/busses/i2c-brcmstb.c 216 */;
	bool cocci_id/* drivers/i2c/busses/i2c-brcmstb.c 202 */;
	void cocci_id/* drivers/i2c/busses/i2c-brcmstb.c 201 */;
	struct bsc_regs cocci_id/* drivers/i2c/busses/i2c-brcmstb.c 186 */;
	struct brcmstb_i2c_dev {
		struct device *device;
		void __iomem *base;
		int irq;
		struct bsc_regs *bsc_regmap;
		struct i2c_adapter adapter;
		struct completion done;
		u32 clk_freq_hz;
		int data_regsz;
	} cocci_id/* drivers/i2c/busses/i2c-brcmstb.c 165 */;
	const struct bsc_clk_param cocci_id/* drivers/i2c/busses/i2c-brcmstb.c 122 */[];
	enum bus_speeds{SPD_375K, SPD_390K, SPD_187K, SPD_200K, SPD_93K, SPD_97K, SPD_46K, SPD_50K,} cocci_id/* drivers/i2c/busses/i2c-brcmstb.c 111 */;
	const char *cocci_id/* drivers/i2c/busses/i2c-brcmstb.c 104 */[];
}
