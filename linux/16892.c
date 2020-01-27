cocci_test_suite() {
	unsigned long cocci_id/* drivers/input/mouse/psmouse-smbus.c 89 */;
	struct notifier_block *cocci_id/* drivers/input/mouse/psmouse-smbus.c 88 */;
	struct i2c_client *cocci_id/* drivers/input/mouse/psmouse-smbus.c 60 */;
	struct psmouse_smbus_dev *cocci_id/* drivers/input/mouse/psmouse-smbus.c 31 */;
	int __init cocci_id/* drivers/input/mouse/psmouse-smbus.c 292 */;
	struct i2c_adapter *cocci_id/* drivers/input/mouse/psmouse-smbus.c 29 */;
	void cocci_id/* drivers/input/mouse/psmouse-smbus.c 29 */;
	bool cocci_id/* drivers/input/mouse/psmouse-smbus.c 229 */;
	const void *cocci_id/* drivers/input/mouse/psmouse-smbus.c 228 */;
	size_t cocci_id/* drivers/input/mouse/psmouse-smbus.c 228 */;
	const struct i2c_board_info *cocci_id/* drivers/input/mouse/psmouse-smbus.c 227 */;
	struct psmouse *cocci_id/* drivers/input/mouse/psmouse-smbus.c 210 */;
	unsigned short cocci_id/* drivers/input/mouse/psmouse-smbus.c 191 */[];
	struct device *cocci_id/* drivers/input/mouse/psmouse-smbus.c 188 */;
	void *cocci_id/* drivers/input/mouse/psmouse-smbus.c 188 */;
	int cocci_id/* drivers/input/mouse/psmouse-smbus.c 188 */;
	struct psmouse_smbus_dev {
		struct i2c_board_info board;
		struct psmouse *psmouse;
		struct i2c_client *client;
		struct list_head node;
		bool dead;
		bool need_deactivate;
	} cocci_id/* drivers/input/mouse/psmouse-smbus.c 17 */;
	struct psmouse_smbus_removal_work cocci_id/* drivers/input/mouse/psmouse-smbus.c 135 */;
	struct psmouse_smbus_removal_work *cocci_id/* drivers/input/mouse/psmouse-smbus.c 134 */;
	struct work_struct *cocci_id/* drivers/input/mouse/psmouse-smbus.c 132 */;
	struct psmouse_smbus_removal_work {
		struct work_struct work;
		struct i2c_client *client;
	} cocci_id/* drivers/input/mouse/psmouse-smbus.c 127 */;
	psmouse_ret_t cocci_id/* drivers/input/mouse/psmouse-smbus.c 112 */;
	struct notifier_block cocci_id/* drivers/input/mouse/psmouse-smbus.c 108 */;
}
