cocci_test_suite() {
	const struct i2c_device_id *cocci_id/* drivers/input/keyboard/adp5589-keys.c 991 */;
	struct input_dev *cocci_id/* drivers/input/keyboard/adp5589-keys.c 865 */;
	u8 (*cocci_id/* drivers/input/keyboard/adp5589-keys.c 660 */)(u8);
	unsigned short cocci_id/* drivers/input/keyboard/adp5589-keys.c 642 */;
	struct i2c_client *cocci_id/* drivers/input/keyboard/adp5589-keys.c 621 */;
	irqreturn_t cocci_id/* drivers/input/keyboard/adp5589-keys.c 618 */;
	void *cocci_id/* drivers/input/keyboard/adp5589-keys.c 618 */;
	void cocci_id/* drivers/input/keyboard/adp5589-keys.c 553 */;
	const struct adp5589_gpio_platform_data *cocci_id/* drivers/input/keyboard/adp5589-keys.c 502 */;
	struct device *cocci_id/* drivers/input/keyboard/adp5589-keys.c 500 */;
	bool cocci_id/* drivers/input/keyboard/adp5589-keys.c 469 */[ADP5589_MAXGPIO];
	const struct adp5589_kpad_platform_data *cocci_id/* drivers/input/keyboard/adp5589-keys.c 467 */;
	struct adp5589_kpad *cocci_id/* drivers/input/keyboard/adp5589-keys.c 466 */;
	int cocci_id/* drivers/input/keyboard/adp5589-keys.c 466 */;
	unsigned int cocci_id/* drivers/input/keyboard/adp5589-keys.c 422 */;
	struct gpio_chip *cocci_id/* drivers/input/keyboard/adp5589-keys.c 419 */;
	unsigned cocci_id/* drivers/input/keyboard/adp5589-keys.c 419 */;
	const struct adp_constants cocci_id/* drivers/input/keyboard/adp5589-keys.c 352 */;
	const unsigned char cocci_id/* drivers/input/keyboard/adp5589-keys.c 304 */[];
	unsigned char cocci_id/* drivers/input/keyboard/adp5589-keys.c 293 */;
	struct adp5589_kpad {
		struct i2c_client *client;
		struct input_dev *input;
		const struct adp_constants *var;
		unsigned short keycode[ADP5589_KEYMAPSIZE];
		const struct adp5589_gpi_map *gpimap;
		unsigned short gpimapsize;
		unsigned extend_cfg;
		bool is_adp5585;
		bool support_row5;
#ifdef CONFIG_GPIOLIB
		unsigned char gpiomap[ADP5589_MAXGPIO];
		bool export_gpio;
		struct gpio_chip gc;
		struct mutex gpio_lock;
		u8 dat_out[3];
		u8 dir[3];
#endif
	} cocci_id/* drivers/input/keyboard/adp5589-keys.c 229 */;
	struct adp_constants {
		u8 maxgpio;
		u8 keymapsize;
		u8 gpi_pin_row_base;
		u8 gpi_pin_row_end;
		u8 gpi_pin_col_base;
		u8 gpi_pin_base;
		u8 gpi_pin_end;
		u8 gpimapsize_max;
		u8 max_row_num;
		u8 max_col_num;
		u8 row_mask;
		u8 col_mask;
		u8 col_shift;
		u8 c4_extend_cfg;
		u8 (*bank)(u8 offset);
		u8 (*bit)(u8 offset);
		u8 (*reg)(u8 reg);
	} cocci_id/* drivers/input/keyboard/adp5589-keys.c 209 */;
	enum{ADP5589, ADP5585_01, ADP5585_02,} cocci_id/* drivers/input/keyboard/adp5589-keys.c 203 */;
	struct i2c_driver cocci_id/* drivers/input/keyboard/adp5589-keys.c 1125 */;
	const struct i2c_device_id cocci_id/* drivers/input/keyboard/adp5589-keys.c 1116 */[];
	u8 cocci_id/* drivers/input/keyboard/adp5589-keys.c 1036 */;
}
