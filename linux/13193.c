cocci_test_suite() {
	unsigned long cocci_id/* drivers/media/pci/netup_unidvb/netup_unidvb_i2c.c 68 */;
	u16 cocci_id/* drivers/media/pci/netup_unidvb/netup_unidvb_i2c.c 67 */;
	irqreturn_t cocci_id/* drivers/media/pci/netup_unidvb/netup_unidvb_i2c.c 65 */;
	struct netup_i2c_regs {
		__le16 clkdiv;
		__le16 twi_ctrl0_stat;
		__le16 twi_addr_ctrl1;
		__le16 length;
		__u8 padding1[8];
		struct netup_i2c_fifo_regs tx_fifo;
		__u8 padding2[6];
		struct netup_i2c_fifo_regs rx_fifo;
	}__packed __aligned(1) cocci_id/* drivers/media/pci/netup_unidvb/netup_unidvb_i2c.c 54 */;
	struct netup_i2c_fifo_regs {
		union {
			__u8 data8;
			__le16 data16;
			__le32 data32;
		};
		__u8 padding[4];
		__le16 stat_ctrl;
	}__packed __aligned(1) cocci_id/* drivers/media/pci/netup_unidvb/netup_unidvb_i2c.c 44 */;
	struct netup_i2c_regs __iomem *cocci_id/* drivers/media/pci/netup_unidvb/netup_unidvb_i2c.c 309 */;
	struct netup_unidvb_dev *cocci_id/* drivers/media/pci/netup_unidvb/netup_unidvb_i2c.c 296 */;
	int cocci_id/* drivers/media/pci/netup_unidvb/netup_unidvb_i2c.c 296 */;
	const struct i2c_adapter cocci_id/* drivers/media/pci/netup_unidvb/netup_unidvb_i2c.c 289 */;
	const struct i2c_algorithm cocci_id/* drivers/media/pci/netup_unidvb/netup_unidvb_i2c.c 284 */;
	struct i2c_adapter *cocci_id/* drivers/media/pci/netup_unidvb/netup_unidvb_i2c.c 279 */;
	struct i2c_msg *cocci_id/* drivers/media/pci/netup_unidvb/netup_unidvb_i2c.c 201 */;
	u32 cocci_id/* drivers/media/pci/netup_unidvb/netup_unidvb_i2c.c 156 */;
	u8 cocci_id/* drivers/media/pci/netup_unidvb/netup_unidvb_i2c.c 155 */;
	struct netup_i2c *cocci_id/* drivers/media/pci/netup_unidvb/netup_unidvb_i2c.c 153 */;
	void cocci_id/* drivers/media/pci/netup_unidvb/netup_unidvb_i2c.c 153 */;
}
