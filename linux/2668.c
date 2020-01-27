cocci_test_suite() {
	enum mtk_trans_op{I2C_MASTER_WR=1, I2C_MASTER_RD, I2C_MASTER_WRRD,} cocci_id/* drivers/i2c/busses/i2c-mt65xx.c 97 */;
	enum i2c_trans_st_rs{I2C_TRANS_STOP=0, I2C_TRANS_REPEATED_START,} cocci_id/* drivers/i2c/busses/i2c-mt65xx.c 92 */;
	struct resource *cocci_id/* drivers/i2c/busses/i2c-mt65xx.c 917 */;
	struct clk *cocci_id/* drivers/i2c/busses/i2c-mt65xx.c 916 */;
	struct platform_device *cocci_id/* drivers/i2c/busses/i2c-mt65xx.c 912 */;
	struct device_node *cocci_id/* drivers/i2c/busses/i2c-mt65xx.c 890 */;
	const struct i2c_algorithm cocci_id/* drivers/i2c/busses/i2c-mt65xx.c 885 */;
	struct i2c_adapter *cocci_id/* drivers/i2c/busses/i2c-mt65xx.c 876 */;
	irqreturn_t cocci_id/* drivers/i2c/busses/i2c-mt65xx.c 844 */;
	void *cocci_id/* drivers/i2c/busses/i2c-mt65xx.c 844 */;
	struct i2c_msg cocci_id/* drivers/i2c/busses/i2c-mt65xx.c 781 */[];
	enum DMA_REGS_OFFSET{OFFSET_INT_FLAG=0x0, OFFSET_INT_EN=0x04, OFFSET_EN=0x08, OFFSET_RST=0x0c, OFFSET_CON=0x18, OFFSET_TX_MEM_ADDR=0x1c, OFFSET_RX_MEM_ADDR=0x20, OFFSET_TX_LEN=0x24, OFFSET_RX_LEN=0x28, OFFSET_TX_4G_MODE=0x54, OFFSET_RX_4G_MODE=0x58,} cocci_id/* drivers/i2c/busses/i2c-mt65xx.c 78 */;
	dma_addr_t cocci_id/* drivers/i2c/busses/i2c-mt65xx.c 571 */;
	u8 *cocci_id/* drivers/i2c/busses/i2c-mt65xx.c 569 */;
	u32 cocci_id/* drivers/i2c/busses/i2c-mt65xx.c 568 */;
	u16 cocci_id/* drivers/i2c/busses/i2c-mt65xx.c 564 */;
	struct i2c_msg *cocci_id/* drivers/i2c/busses/i2c-mt65xx.c 561 */;
	unsigned int *cocci_id/* drivers/i2c/busses/i2c-mt65xx.c 441 */;
	struct mtk_i2c *cocci_id/* drivers/i2c/busses/i2c-mt65xx.c 439 */;
	unsigned int cocci_id/* drivers/i2c/busses/i2c-mt65xx.c 439 */;
	int cocci_id/* drivers/i2c/busses/i2c-mt65xx.c 439 */;
	void cocci_id/* drivers/i2c/busses/i2c-mt65xx.c 376 */;
	enum I2C_REGS_OFFSET cocci_id/* drivers/i2c/busses/i2c-mt65xx.c 328 */;
	const struct of_device_id cocci_id/* drivers/i2c/busses/i2c-mt65xx.c 317 */[];
	const struct mtk_i2c_compatible cocci_id/* drivers/i2c/busses/i2c-mt65xx.c 241 */;
	const struct i2c_adapter_quirks cocci_id/* drivers/i2c/busses/i2c-mt65xx.c 224 */;
	struct mtk_i2c {
		struct i2c_adapter adap;
		struct device *dev;
		struct completion msg_complete;
		void __iomem *base;
		void __iomem *pdmabase;
		struct clk *clk_main;
		struct clk *clk_dma;
		struct clk *clk_pmic;
		struct clk *clk_arb;
		bool have_pmic;
		bool use_push_pull;
		u16 irq_stat;
		unsigned int clk_src_div;
		unsigned int speed_hz;
		enum mtk_trans_op op;
		u16 timing_reg;
		u16 high_speed_reg;
		u16 ltiming_reg;
		unsigned char auto_restart;
		bool ignore_restart_irq;
		const struct mtk_i2c_compatible *dev_comp;
	} cocci_id/* drivers/i2c/busses/i2c-mt65xx.c 197 */;
	struct mtk_i2c_compatible {
		const struct i2c_adapter_quirks *quirks;
		const u16 *regs;
		unsigned char pmic_i2c:1;
		unsigned char dcm:1;
		unsigned char auto_restart:1;
		unsigned char aux_len_reg:1;
		unsigned char support_33bits:1;
		unsigned char timing_adjust:1;
		unsigned char dma_sync:1;
		unsigned char ltiming_adjust:1;
	} cocci_id/* drivers/i2c/busses/i2c-mt65xx.c 184 */;
	const u16 cocci_id/* drivers/i2c/busses/i2c-mt65xx.c 131 */[];
	struct platform_driver cocci_id/* drivers/i2c/busses/i2c-mt65xx.c 1061 */;
	const struct dev_pm_ops cocci_id/* drivers/i2c/busses/i2c-mt65xx.c 1057 */;
	struct device *cocci_id/* drivers/i2c/busses/i2c-mt65xx.c 1038 */;
	enum I2C_REGS_OFFSET{OFFSET_DATA_PORT, OFFSET_SLAVE_ADDR, OFFSET_INTR_MASK, OFFSET_INTR_STAT, OFFSET_CONTROL, OFFSET_TRANSFER_LEN, OFFSET_TRANSAC_LEN, OFFSET_DELAY_LEN, OFFSET_TIMING, OFFSET_START, OFFSET_EXT_CONF, OFFSET_FIFO_STAT, OFFSET_FIFO_THRESH, OFFSET_FIFO_ADDR_CLR, OFFSET_IO_CONFIG, OFFSET_RSV_DEBUG, OFFSET_HS, OFFSET_SOFTRESET, OFFSET_DCM_EN, OFFSET_PATH_DIR, OFFSET_DEBUGSTAT, OFFSET_DEBUGCTRL, OFFSET_TRANSFER_LEN_AUX, OFFSET_CLOCK_DIV, OFFSET_LTIMING,} cocci_id/* drivers/i2c/busses/i2c-mt65xx.c 103 */;
}
