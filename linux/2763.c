cocci_test_suite() {
	u8 cocci_id/* drivers/i2c/i2c-stub.c 92 */;
	bool cocci_id/* drivers/i2c/i2c-stub.c 92 */;
	struct smbus_block_data *cocci_id/* drivers/i2c/i2c-stub.c 90 */;
	struct device *cocci_id/* drivers/i2c/i2c-stub.c 90 */;
	struct stub_chip {
		u8 pointer;
		u16 words[256];
		struct list_head smbus_blocks;
		u8 bank_reg;
		u8 bank_shift;
		u8 bank_mask;
		u8 bank_sel;
		u8 bank_start;
		u8 bank_end;
		u16 bank_size;
		u16 *bank_words;
	} cocci_id/* drivers/i2c/i2c-stub.c 70 */;
	struct smbus_block_data {
		struct list_head node;
		u8 command;
		u8 len;
		u8 block[I2C_SMBUS_BLOCK_MAX];
	} cocci_id/* drivers/i2c/i2c-stub.c 63 */;
	u8 cocci_id/* drivers/i2c/i2c-stub.c 59 */[MAX_CHIPS];
	unsigned long cocci_id/* drivers/i2c/i2c-stub.c 41 */;
	void __exit cocci_id/* drivers/i2c/i2c-stub.c 403 */;
	void cocci_id/* drivers/i2c/i2c-stub.c 403 */;
	struct stub_chip cocci_id/* drivers/i2c/i2c-stub.c 376 */;
	unsigned short cocci_id/* drivers/i2c/i2c-stub.c 36 */[MAX_CHIPS];
	u16 cocci_id/* drivers/i2c/i2c-stub.c 334 */;
	struct stub_chip *cocci_id/* drivers/i2c/i2c-stub.c 319 */;
	int __init cocci_id/* drivers/i2c/i2c-stub.c 317 */;
	int cocci_id/* drivers/i2c/i2c-stub.c 317 */;
	struct i2c_adapter cocci_id/* drivers/i2c/i2c-stub.c 310 */;
	const struct i2c_algorithm cocci_id/* drivers/i2c/i2c-stub.c 305 */;
	u32 cocci_id/* drivers/i2c/i2c-stub.c 300 */;
	struct i2c_adapter *cocci_id/* drivers/i2c/i2c-stub.c 300 */;
	union i2c_smbus_data *cocci_id/* drivers/i2c/i2c-stub.c 125 */;
	char cocci_id/* drivers/i2c/i2c-stub.c 125 */;
	s32 cocci_id/* drivers/i2c/i2c-stub.c 124 */;
	unsigned short cocci_id/* drivers/i2c/i2c-stub.c 124 */;
	u16 *cocci_id/* drivers/i2c/i2c-stub.c 112 */;
}
