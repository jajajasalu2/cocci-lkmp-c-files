cocci_test_suite() {
	unsigned cocci_id/* drivers/media/pci/cobalt/cobalt-i2c.c 82 */;
	int cocci_id/* drivers/media/pci/cobalt/cobalt-i2c.c 376 */;
	struct cobalt *cocci_id/* drivers/media/pci/cobalt/cobalt-i2c.c 374 */;
	void cocci_id/* drivers/media/pci/cobalt/cobalt-i2c.c 374 */;
	struct cobalt_i2c_regs __iomem *cocci_id/* drivers/media/pci/cobalt/cobalt-i2c.c 318 */;
	unsigned long cocci_id/* drivers/media/pci/cobalt/cobalt-i2c.c 310 */;
	const struct i2c_algorithm cocci_id/* drivers/media/pci/cobalt/cobalt-i2c.c 299 */;
	const struct i2c_adapter cocci_id/* drivers/media/pci/cobalt/cobalt-i2c.c 292 */;
	u32 cocci_id/* drivers/media/pci/cobalt/cobalt-i2c.c 286 */;
	struct i2c_adapter *cocci_id/* drivers/media/pci/cobalt/cobalt-i2c.c 286 */;
	unsigned short cocci_id/* drivers/media/pci/cobalt/cobalt-i2c.c 236 */;
	struct i2c_msg *cocci_id/* drivers/media/pci/cobalt/cobalt-i2c.c 235 */;
	struct cobalt_i2c_data *cocci_id/* drivers/media/pci/cobalt/cobalt-i2c.c 233 */;
	struct i2c_msg cocci_id/* drivers/media/pci/cobalt/cobalt-i2c.c 231 */[];
	u8 cocci_id/* drivers/media/pci/cobalt/cobalt-i2c.c 225 */;
	u16 cocci_id/* drivers/media/pci/cobalt/cobalt-i2c.c 167 */;
	u8 *cocci_id/* drivers/media/pci/cobalt/cobalt-i2c.c 167 */;
	bool cocci_id/* drivers/media/pci/cobalt/cobalt-i2c.c 166 */;
	struct cobalt_i2c_regs {
		u8 prerlo;
		u8 dummy0[3];
		u8 prerhi;
		u8 dummy1[3];
		u8 ctr;
		u8 dummy2[3];
		u8 txr_rxr;
		u8 dummy3[3];
		u8 cr_sr;
		u8 dummy4[3];
	} cocci_id/* drivers/media/pci/cobalt/cobalt-i2c.c 14 */;
}
