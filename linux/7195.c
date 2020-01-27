cocci_test_suite() {
	const unsigned int cocci_id/* drivers/extcon/extcon-sm5502.c 95 */[];
	int __init cocci_id/* drivers/extcon/extcon-sm5502.c 703 */;
	struct i2c_driver cocci_id/* drivers/extcon/extcon-sm5502.c 692 */;
	const struct i2c_device_id cocci_id/* drivers/extcon/extcon-sm5502.c 686 */[];
	struct device *cocci_id/* drivers/extcon/extcon-sm5502.c 672 */;
	struct reg_data cocci_id/* drivers/extcon/extcon-sm5502.c 66 */[];
	const struct of_device_id cocci_id/* drivers/extcon/extcon-sm5502.c 655 */[];
	struct muic_irq *cocci_id/* drivers/extcon/extcon-sm5502.c 594 */;
	struct sm5502_muic_info *cocci_id/* drivers/extcon/extcon-sm5502.c 552 */;
	struct device_node *cocci_id/* drivers/extcon/extcon-sm5502.c 551 */;
	const struct i2c_device_id *cocci_id/* drivers/extcon/extcon-sm5502.c 549 */;
	struct i2c_client *cocci_id/* drivers/extcon/extcon-sm5502.c 548 */;
	int cocci_id/* drivers/extcon/extcon-sm5502.c 548 */;
	unsigned int cocci_id/* drivers/extcon/extcon-sm5502.c 517 */;
	void cocci_id/* drivers/extcon/extcon-sm5502.c 515 */;
	struct sm5502_muic_info cocci_id/* drivers/extcon/extcon-sm5502.c 506 */;
	struct work_struct *cocci_id/* drivers/extcon/extcon-sm5502.c 503 */;
	irqreturn_t cocci_id/* drivers/extcon/extcon-sm5502.c 483 */;
	void *cocci_id/* drivers/extcon/extcon-sm5502.c 483 */;
	bool cocci_id/* drivers/extcon/extcon-sm5502.c 372 */;
	struct sm5502_muic_info {
		struct device *dev;
		struct extcon_dev *edev;
		struct i2c_client *i2c;
		struct regmap *regmap;
		struct regmap_irq_chip_data *irq_data;
		struct muic_irq *muic_irqs;
		unsigned int num_muic_irqs;
		int irq;
		bool irq_attach;
		bool irq_detach;
		struct work_struct irq_work;
		struct reg_data *reg_data;
		unsigned int num_reg_data;
		struct mutex mutex;
		struct delayed_work wq_detcable;
	} cocci_id/* drivers/extcon/extcon-sm5502.c 36 */;
	struct reg_data {
		u8 reg;
		unsigned int val;
		bool invert;
	} cocci_id/* drivers/extcon/extcon-sm5502.c 30 */;
	struct muic_irq {
		unsigned int irq;
		const char *name;
		unsigned int virq;
	} cocci_id/* drivers/extcon/extcon-sm5502.c 24 */;
	const struct regmap_config cocci_id/* drivers/extcon/extcon-sm5502.c 214 */;
	const struct regmap_irq_chip cocci_id/* drivers/extcon/extcon-sm5502.c 191 */;
	const struct regmap_irq cocci_id/* drivers/extcon/extcon-sm5502.c 171 */[];
	struct muic_irq cocci_id/* drivers/extcon/extcon-sm5502.c 153 */[];
	enum sm5502_muic_acc_type{SM5502_MUIC_ADC_GROUND=0x0, SM5502_MUIC_ADC_SEND_END_BUTTON, SM5502_MUIC_ADC_REMOTE_S1_BUTTON, SM5502_MUIC_ADC_REMOTE_S2_BUTTON, SM5502_MUIC_ADC_REMOTE_S3_BUTTON, SM5502_MUIC_ADC_REMOTE_S4_BUTTON, SM5502_MUIC_ADC_REMOTE_S5_BUTTON, SM5502_MUIC_ADC_REMOTE_S6_BUTTON, SM5502_MUIC_ADC_REMOTE_S7_BUTTON, SM5502_MUIC_ADC_REMOTE_S8_BUTTON, SM5502_MUIC_ADC_REMOTE_S9_BUTTON, SM5502_MUIC_ADC_REMOTE_S10_BUTTON, SM5502_MUIC_ADC_REMOTE_S11_BUTTON, SM5502_MUIC_ADC_REMOTE_S12_BUTTON, SM5502_MUIC_ADC_RESERVED_ACC_1, SM5502_MUIC_ADC_RESERVED_ACC_2, SM5502_MUIC_ADC_RESERVED_ACC_3, SM5502_MUIC_ADC_RESERVED_ACC_4, SM5502_MUIC_ADC_RESERVED_ACC_5, SM5502_MUIC_ADC_AUDIO_TYPE2, SM5502_MUIC_ADC_PHONE_POWERED_DEV, SM5502_MUIC_ADC_TTY_CONVERTER, SM5502_MUIC_ADC_UART_CABLE, SM5502_MUIC_ADC_TYPE1_CHARGER, SM5502_MUIC_ADC_FACTORY_MODE_BOOT_OFF_USB, SM5502_MUIC_ADC_FACTORY_MODE_BOOT_ON_USB, SM5502_MUIC_ADC_AUDIO_VIDEO_CABLE, SM5502_MUIC_ADC_TYPE2_CHARGER, SM5502_MUIC_ADC_FACTORY_MODE_BOOT_OFF_UART, SM5502_MUIC_ADC_FACTORY_MODE_BOOT_ON_UART, SM5502_MUIC_ADC_AUDIO_TYPE1, SM5502_MUIC_ADC_OPEN=0x1f, SM5502_MUIC_ADC_AUDIO_TYPE1_FULL_REMOTE=0x3e, SM5502_MUIC_ADC_AUDIO_TYPE1_SEND_END=0x5e, SM5502_MUIC_ADC_OPEN_USB=0x5f, SM5502_MUIC_ADC_OPEN_TA=0xdf, SM5502_MUIC_ADC_OPEN_USB_OTG=0xff,} cocci_id/* drivers/extcon/extcon-sm5502.c 104 */;
}
