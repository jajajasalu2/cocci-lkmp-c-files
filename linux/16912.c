cocci_test_suite() {
	struct cyapa_reg_data {
		u8 device_status;
		u8 finger_btn;
		struct cyapa_touch touches[5];
	}__packed cocci_id/* drivers/input/mouse/cyapa_gen3.c 99 */;
	u8 cocci_id/* drivers/input/mouse/cyapa_gen3.c 982 */[QUERY_DATA_SIZE];
	enum cyapa_pm_stage cocci_id/* drivers/input/mouse/cyapa_gen3.c 908 */;
	u8 cocci_id/* drivers/input/mouse/cyapa_gen3.c 907 */;
	struct cyapa_touch {
		u8 xy_hi;
		u8 x_lo;
		u8 y_lo;
		u8 pressure;
		u8 id;
	}__packed cocci_id/* drivers/input/mouse/cyapa_gen3.c 85 */;
	char *cocci_id/* drivers/input/mouse/cyapa_gen3.c 800 */;
	unsigned long cocci_id/* drivers/input/mouse/cyapa_gen3.c 749 */;
	const char *cocci_id/* drivers/input/mouse/cyapa_gen3.c 746 */;
	struct device_attribute *cocci_id/* drivers/input/mouse/cyapa_gen3.c 745 */;
	ssize_t cocci_id/* drivers/input/mouse/cyapa_gen3.c 744 */;
	u8 cocci_id/* drivers/input/mouse/cyapa_gen3.c 651 */[BL_STATUS_SIZE];
	struct gen3_write_block_cmd cocci_id/* drivers/input/mouse/cyapa_gen3.c 650 */;
	unsigned char cocci_id/* drivers/input/mouse/cyapa_gen3.c 613 */[CYAPA_CMD_LEN + 1];
	u16 cocci_id/* drivers/input/mouse/cyapa_gen3.c 567 */;
	struct device *cocci_id/* drivers/input/mouse/cyapa_gen3.c 566 */;
	const u8 *cocci_id/* drivers/input/mouse/cyapa_gen3.c 538 */;
	size_t cocci_id/* drivers/input/mouse/cyapa_gen3.c 538 */;
	struct cyapa *cocci_id/* drivers/input/mouse/cyapa_gen3.c 458 */;
	int cocci_id/* drivers/input/mouse/cyapa_gen3.c 458 */;
	s32 cocci_id/* drivers/input/mouse/cyapa_gen3.c 277 */;
	struct i2c_client *cocci_id/* drivers/input/mouse/cyapa_gen3.c 251 */;
	int cocci_id/* drivers/input/mouse/cyapa_gen3.c 229 */(struct cyapa *cyapa);
	const struct cyapa_cmd_len cocci_id/* drivers/input/mouse/cyapa_gen3.c 188 */[];
	struct cyapa_cmd_len {
		u8 cmd;
		u8 len;
	} cocci_id/* drivers/input/mouse/cyapa_gen3.c 182 */;
	const u8 cocci_id/* drivers/input/mouse/cyapa_gen3.c 131 */[];
	const struct cyapa_dev_ops cocci_id/* drivers/input/mouse/cyapa_gen3.c 1235 */;
	cb_sort cocci_id/* drivers/input/mouse/cyapa_gen3.c 1233 */;
	u8 *cocci_id/* drivers/input/mouse/cyapa_gen3.c 1233 */;
	int *cocci_id/* drivers/input/mouse/cyapa_gen3.c 1233 */;
	const struct firmware *cocci_id/* drivers/input/mouse/cyapa_gen3.c 1231 */;
	struct gen3_write_block_cmd {
		u8 checksum_seed;
		u8 cmd_code;
		u8 key[8];
		__be16 block_num;
		u8 block_data[CYAPA_FW_BLOCK_SIZE];
		u8 block_checksum;
		u8 cmd_checksum;
	}__packed cocci_id/* drivers/input/mouse/cyapa_gen3.c 119 */;
	struct cyapa_reg_data cocci_id/* drivers/input/mouse/cyapa_gen3.c 1185 */;
	const struct cyapa_touch *cocci_id/* drivers/input/mouse/cyapa_gen3.c 1153 */;
	struct input_dev *cocci_id/* drivers/input/mouse/cyapa_gen3.c 1147 */;
	struct cyapa_reg_data *cocci_id/* drivers/input/mouse/cyapa_gen3.c 1145 */;
	bool cocci_id/* drivers/input/mouse/cyapa_gen3.c 1123 */;
	u8 cocci_id/* drivers/input/mouse/cyapa_gen3.c 1021 */[CYAPA_CMD_LEN];
}
