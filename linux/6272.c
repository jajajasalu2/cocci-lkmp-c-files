cocci_test_suite() {
	char cocci_id/* drivers/mfd/menelaus.c 944 */[6];
	struct i2c_msg cocci_id/* drivers/mfd/menelaus.c 943 */[2];
	struct rtc_wkalrm *cocci_id/* drivers/mfd/menelaus.c 941 */;
	char cocci_id/* drivers/mfd/menelaus.c 889 */[7];
	struct rtc_time *cocci_id/* drivers/mfd/menelaus.c 886 */;
	char *cocci_id/* drivers/mfd/menelaus.c 828 */;
	struct menelaus_chip *cocci_id/* drivers/mfd/menelaus.c 798 */;
	irqreturn_t cocci_id/* drivers/mfd/menelaus.c 796 */;
	void *cocci_id/* drivers/mfd/menelaus.c 796 */;
	void (*cocci_id/* drivers/mfd/menelaus.c 764 */)(struct menelaus_chip *menelaus);
	struct menelaus_chip cocci_id/* drivers/mfd/menelaus.c 763 */;
	struct work_struct *cocci_id/* drivers/mfd/menelaus.c 760 */;
	u32 cocci_id/* drivers/mfd/menelaus.c 731 */;
	void cocci_id/* drivers/mfd/menelaus.c 725 */;
	unsigned int cocci_id/* drivers/mfd/menelaus.c 711 */;
	const struct menelaus_vtg cocci_id/* drivers/mfd/menelaus.c 703 */;
	const struct menelaus_vtg_value cocci_id/* drivers/mfd/menelaus.c 696 */[];
	const struct menelaus_vtg *cocci_id/* drivers/mfd/menelaus.c 646 */;
	const struct menelaus_vtg_value *cocci_id/* drivers/mfd/menelaus.c 480 */;
	struct menelaus_vtg_value {
		u16 vtg;
		u16 val;
	} cocci_id/* drivers/mfd/menelaus.c 444 */;
	struct menelaus_vtg {
		const char *name;
		u8 vtg_reg;
		u8 vtg_shift;
		u8 vtg_bits;
		u8 mode_reg;
	} cocci_id/* drivers/mfd/menelaus.c 436 */;
	void (*cocci_id/* drivers/mfd/menelaus.c 398 */)(void *data,
							 u8 card_mask);
	unsigned char cocci_id/* drivers/mfd/menelaus.c 265 */;
	void (*cocci_id/* drivers/mfd/menelaus.c 231 */)(struct menelaus_chip *);
	int cocci_id/* drivers/mfd/menelaus.c 221 */;
	u8 cocci_id/* drivers/mfd/menelaus.c 171 */;
	struct menelaus_chip {
		struct mutex lock;
		struct i2c_client *client;
		struct work_struct work;
#ifdef CONFIG_RTC_DRV_TWL92330
		struct rtc_device *rtc;
		u8 rtc_control;
		unsigned uie:1;
#endif
		unsigned vcore_hw_mode:1;
		u8 mask1,mask2;
		void (*handlers[16])(struct menelaus_chip *);
		void (*mmc_callback)(void *data, u8 mask);
		void *mmc_callback_data;
	} cocci_id/* drivers/mfd/menelaus.c 153 */;
	void cocci_id/* drivers/mfd/menelaus.c 151 */(struct work_struct *_menelaus);
	const struct i2c_device_id cocci_id/* drivers/mfd/menelaus.c 1235 */[];
	struct menelaus_platform_data *cocci_id/* drivers/mfd/menelaus.c 1151 */;
	const struct i2c_device_id *cocci_id/* drivers/mfd/menelaus.c 1146 */;
	struct i2c_client *cocci_id/* drivers/mfd/menelaus.c 1145 */;
	struct i2c_driver cocci_id/* drivers/mfd/menelaus.c 1143 */;
	const struct rtc_class_ops cocci_id/* drivers/mfd/menelaus.c 1063 */;
	struct device *cocci_id/* drivers/mfd/menelaus.c 1015 */;
	unsigned long cocci_id/* drivers/mfd/menelaus.c 1015 */;
	unsigned cocci_id/* drivers/mfd/menelaus.c 1015 */;
}
