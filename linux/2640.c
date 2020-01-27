cocci_test_suite() {
	struct pmcmsptwi_cfg {
		u8 arbf;
		u8 nak;
		u8 add10;
		u8 mst_code;
		u8 arb;
		u8 highspeed;
	} cocci_id/* drivers/i2c/busses/i2c-pmcmsp.c 91 */;
	struct pmcmsptwi_clockcfg {
		struct pmcmsptwi_clock standard;
		struct pmcmsptwi_clock highspeed;
	} cocci_id/* drivers/i2c/busses/i2c-pmcmsp.c 85 */;
	struct pmcmsptwi_clock {
		u8 filter;
		u16 clock;
	} cocci_id/* drivers/i2c/busses/i2c-pmcmsp.c 80 */;
	enum pmcmsptwi_xfer_result{MSP_TWI_XFER_OK=0, MSP_TWI_XFER_TIMEOUT, MSP_TWI_XFER_BUSY, MSP_TWI_XFER_DATA_COLLISION, MSP_TWI_XFER_NO_RESPONSE, MSP_TWI_XFER_LOST_ARBITRATION,} cocci_id/* drivers/i2c/busses/i2c-pmcmsp.c 70 */;
	enum pmcmsptwi_cmd_type{MSP_TWI_CMD_WRITE=0, MSP_TWI_CMD_READ=1, MSP_TWI_CMD_WRITE_READ=2,} cocci_id/* drivers/i2c/busses/i2c-pmcmsp.c 63 */;
	struct platform_driver cocci_id/* drivers/i2c/busses/i2c-pmcmsp.c 588 */;
	const struct i2c_algorithm cocci_id/* drivers/i2c/busses/i2c-pmcmsp.c 575 */;
	const struct i2c_adapter_quirks cocci_id/* drivers/i2c/busses/i2c-pmcmsp.c 565 */;
	struct i2c_adapter *cocci_id/* drivers/i2c/busses/i2c-pmcmsp.c 558 */;
	struct pmcmsptwi_cfg cocci_id/* drivers/i2c/busses/i2c-pmcmsp.c 500 */;
	struct pmcmsptwi_cmd cocci_id/* drivers/i2c/busses/i2c-pmcmsp.c 499 */;
	struct i2c_msg *cocci_id/* drivers/i2c/busses/i2c-pmcmsp.c 496 */;
	u64 cocci_id/* drivers/i2c/busses/i2c-pmcmsp.c 454 */;
	__be64 *cocci_id/* drivers/i2c/busses/i2c-pmcmsp.c 454 */;
	struct pmcmsptwi_cmd *cocci_id/* drivers/i2c/busses/i2c-pmcmsp.c 442 */;
	const struct pmcmsptwi_cmd *cocci_id/* drivers/i2c/busses/i2c-pmcmsp.c 431 */;
	unsigned long cocci_id/* drivers/i2c/busses/i2c-pmcmsp.c 414 */;
	struct pmcmsptwi_data *cocci_id/* drivers/i2c/busses/i2c-pmcmsp.c 409 */;
	enum pmcmsptwi_xfer_result cocci_id/* drivers/i2c/busses/i2c-pmcmsp.c 408 */;
	struct resource *cocci_id/* drivers/i2c/busses/i2c-pmcmsp.c 263 */;
	struct platform_device *cocci_id/* drivers/i2c/busses/i2c-pmcmsp.c 261 */;
	irqreturn_t cocci_id/* drivers/i2c/busses/i2c-pmcmsp.c 240 */;
	void *cocci_id/* drivers/i2c/busses/i2c-pmcmsp.c 240 */;
	int cocci_id/* drivers/i2c/busses/i2c-pmcmsp.c 240 */;
	struct pmcmsptwi_cfg *cocci_id/* drivers/i2c/busses/i2c-pmcmsp.c 188 */;
	void cocci_id/* drivers/i2c/busses/i2c-pmcmsp.c 188 */;
	const struct pmcmsptwi_clockcfg *cocci_id/* drivers/i2c/busses/i2c-pmcmsp.c 174 */;
	u32 cocci_id/* drivers/i2c/busses/i2c-pmcmsp.c 151 */;
	const struct pmcmsptwi_cfg *cocci_id/* drivers/i2c/busses/i2c-pmcmsp.c 151 */;
	const struct pmcmsptwi_clock *cocci_id/* drivers/i2c/busses/i2c-pmcmsp.c 146 */;
	struct i2c_adapter cocci_id/* drivers/i2c/busses/i2c-pmcmsp.c 142 */;
	struct pmcmsptwi_data cocci_id/* drivers/i2c/busses/i2c-pmcmsp.c 140 */;
	const struct pmcmsptwi_cfg cocci_id/* drivers/i2c/busses/i2c-pmcmsp.c 131 */;
	const struct pmcmsptwi_clockcfg cocci_id/* drivers/i2c/busses/i2c-pmcmsp.c 120 */;
	struct pmcmsptwi_data {
		void __iomem *iobase;
		int irq;
		struct completion wait;
		struct mutex lock;
		enum pmcmsptwi_xfer_result last_result;
	} cocci_id/* drivers/i2c/busses/i2c-pmcmsp.c 111 */;
	struct pmcmsptwi_cmd {
		u16 addr;
		enum pmcmsptwi_cmd_type type;
		u8 write_len;
		u8 read_len;
		u8 *write_data;
		u8 *read_data;
	} cocci_id/* drivers/i2c/busses/i2c-pmcmsp.c 101 */;
}
