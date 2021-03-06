cocci_test_suite() {
	struct platform_driver cocci_id/* drivers/i2c/busses/i2c-xgene-slimpro.c 599 */;
	const struct acpi_device_id cocci_id/* drivers/i2c/busses/i2c-xgene-slimpro.c 591 */[];
	const struct of_device_id cocci_id/* drivers/i2c/busses/i2c-xgene-slimpro.c 584 */[];
	const struct acpi_device_id *cocci_id/* drivers/i2c/busses/i2c-xgene-slimpro.c 471 */;
	struct acpi_pcct_hw_reduced *cocci_id/* drivers/i2c/busses/i2c-xgene-slimpro.c 470 */;
	struct platform_device *cocci_id/* drivers/i2c/busses/i2c-xgene-slimpro.c 441 */;
	const struct i2c_algorithm cocci_id/* drivers/i2c/busses/i2c-xgene-slimpro.c 436 */;
	struct i2c_adapter *cocci_id/* drivers/i2c/busses/i2c-xgene-slimpro.c 427 */;
	union i2c_smbus_data *cocci_id/* drivers/i2c/busses/i2c-xgene-slimpro.c 339 */;
	u8 cocci_id/* drivers/i2c/busses/i2c-xgene-slimpro.c 338 */;
	unsigned short cocci_id/* drivers/i2c/busses/i2c-xgene-slimpro.c 337 */;
	char cocci_id/* drivers/i2c/busses/i2c-xgene-slimpro.c 337 */;
	u32 cocci_id/* drivers/i2c/busses/i2c-xgene-slimpro.c 276 */[3];
	dma_addr_t cocci_id/* drivers/i2c/busses/i2c-xgene-slimpro.c 275 */;
	void *cocci_id/* drivers/i2c/busses/i2c-xgene-slimpro.c 273 */;
	u32 cocci_id/* drivers/i2c/busses/i2c-xgene-slimpro.c 271 */;
	struct slimpro_i2c_dev *cocci_id/* drivers/i2c/busses/i2c-xgene-slimpro.c 271 */;
	int cocci_id/* drivers/i2c/busses/i2c-xgene-slimpro.c 271 */;
	u16 cocci_id/* drivers/i2c/busses/i2c-xgene-slimpro.c 182 */;
	u32 *cocci_id/* drivers/i2c/busses/i2c-xgene-slimpro.c 172 */;
	struct acpi_pcct_shared_memory *cocci_id/* drivers/i2c/busses/i2c-xgene-slimpro.c 159 */;
	struct mbox_client *cocci_id/* drivers/i2c/busses/i2c-xgene-slimpro.c 156 */;
	void cocci_id/* drivers/i2c/busses/i2c-xgene-slimpro.c 156 */;
	u16 *cocci_id/* drivers/i2c/busses/i2c-xgene-slimpro.c 127 */;
	enum slimpro_i2c_version{XGENE_SLIMPRO_I2C_V1=0, XGENE_SLIMPRO_I2C_V2=1,} cocci_id/* drivers/i2c/busses/i2c-xgene-slimpro.c 119 */;
	struct slimpro_i2c_dev cocci_id/* drivers/i2c/busses/i2c-xgene-slimpro.c 117 */;
	struct slimpro_i2c_dev {
		struct i2c_adapter adapter;
		struct device *dev;
		struct mbox_chan *mbox_chan;
		struct mbox_client mbox_client;
		int mbox_idx;
		struct completion rd_complete;
		u8 dma_buffer[I2C_SMBUS_BLOCK_MAX + 1];
		u32 *resp_msg;
		phys_addr_t comm_base_addr;
		void *pcc_comm_addr;
	} cocci_id/* drivers/i2c/busses/i2c-xgene-slimpro.c 103 */;
}
