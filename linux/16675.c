cocci_test_suite() {
	struct platform_device *cocci_id/* drivers/input/keyboard/imx_sc_key.c 96 */;
	int cocci_id/* drivers/input/keyboard/imx_sc_key.c 68 */;
	bool cocci_id/* drivers/input/keyboard/imx_sc_key.c 67 */;
	struct imx_sc_rpc_msg *cocci_id/* drivers/input/keyboard/imx_sc_key.c 66 */;
	struct imx_sc_msg_key cocci_id/* drivers/input/keyboard/imx_sc_key.c 65 */;
	struct input_dev *cocci_id/* drivers/input/keyboard/imx_sc_key.c 64 */;
	struct imx_key_drv_data cocci_id/* drivers/input/keyboard/imx_sc_key.c 62 */;
	struct imx_key_drv_data *cocci_id/* drivers/input/keyboard/imx_sc_key.c 60 */;
	struct work_struct *cocci_id/* drivers/input/keyboard/imx_sc_key.c 58 */;
	void cocci_id/* drivers/input/keyboard/imx_sc_key.c 58 */;
	u8 *cocci_id/* drivers/input/keyboard/imx_sc_key.c 49 */;
	void *cocci_id/* drivers/input/keyboard/imx_sc_key.c 42 */;
	unsigned long cocci_id/* drivers/input/keyboard/imx_sc_key.c 42 */;
	struct notifier_block *cocci_id/* drivers/input/keyboard/imx_sc_key.c 41 */;
	struct imx_sc_msg_key {
		struct imx_sc_rpc_msg hdr;
		u32 state;
	} cocci_id/* drivers/input/keyboard/imx_sc_key.c 36 */;
	struct imx_key_drv_data {
		u32 keycode;
		bool keystate;
		struct delayed_work check_work;
		struct input_dev *input;
		struct imx_sc_ipc *key_ipc_handle;
		struct notifier_block key_notifier;
	} cocci_id/* drivers/input/keyboard/imx_sc_key.c 27 */;
	struct platform_driver cocci_id/* drivers/input/keyboard/imx_sc_key.c 175 */;
	const struct of_device_id cocci_id/* drivers/input/keyboard/imx_sc_key.c 169 */[];
}
