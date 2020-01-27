cocci_test_suite() {
	struct pci_driver cocci_id/* drivers/i2c/busses/i2c-eg20t.c 915 */;
	pm_message_t cocci_id/* drivers/i2c/busses/i2c-eg20t.c 849 */;
	struct adapter_info cocci_id/* drivers/i2c/busses/i2c-eg20t.c 739 */;
	const struct pci_device_id *cocci_id/* drivers/i2c/busses/i2c-eg20t.c 729 */;
	struct pci_dev *cocci_id/* drivers/i2c/busses/i2c-eg20t.c 728 */;
	const struct i2c_algorithm cocci_id/* drivers/i2c/busses/i2c-eg20t.c 708 */;
	struct i2c_adapter *cocci_id/* drivers/i2c/busses/i2c-eg20t.c 703 */;
	struct adapter_info *cocci_id/* drivers/i2c/busses/i2c-eg20t.c 623 */;
	irqreturn_t cocci_id/* drivers/i2c/busses/i2c-eg20t.c 618 */;
	void *cocci_id/* drivers/i2c/busses/i2c-eg20t.c 618 */;
	struct i2c_algo_pch_data *cocci_id/* drivers/i2c/busses/i2c-eg20t.c 592 */;
	u8 *cocci_id/* drivers/i2c/busses/i2c-eg20t.c 488 */;
	s32 cocci_id/* drivers/i2c/busses/i2c-eg20t.c 483 */;
	struct i2c_msg *cocci_id/* drivers/i2c/busses/i2c-eg20t.c 483 */;
	long cocci_id/* drivers/i2c/busses/i2c-eg20t.c 314 */;
	unsigned long cocci_id/* drivers/i2c/busses/i2c-eg20t.c 262 */;
	u32 cocci_id/* drivers/i2c/busses/i2c-eg20t.c 194 */;
	void __iomem *cocci_id/* drivers/i2c/busses/i2c-eg20t.c 194 */;
	void cocci_id/* drivers/i2c/busses/i2c-eg20t.c 194 */;
	irqreturn_t cocci_id/* drivers/i2c/busses/i2c-eg20t.c 184 */(int irq,
								     void *pData);
	const struct pci_device_id cocci_id/* drivers/i2c/busses/i2c-eg20t.c 176 */[];
	wait_queue_head_t cocci_id/* drivers/i2c/busses/i2c-eg20t.c 168 */;
	int cocci_id/* drivers/i2c/busses/i2c-eg20t.c 167 */;
	struct adapter_info {
		struct i2c_algo_pch_data pch_data[PCH_I2C_MAX_DEV];
		bool pch_i2c_suspended;
		int ch_num;
	} cocci_id/* drivers/i2c/busses/i2c-eg20t.c 159 */;
	struct i2c_algo_pch_data {
		struct i2c_adapter pch_adapter;
		struct adapter_info *p_adapter_info;
		void __iomem *pch_base_address;
		int pch_buff_mode_en;
		u32 pch_event_flag;
		bool pch_i2c_xfer_in_progress;
	} cocci_id/* drivers/i2c/busses/i2c-eg20t.c 140 */;
}
