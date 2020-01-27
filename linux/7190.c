cocci_test_suite() {
	struct platform_driver cocci_id/* drivers/extcon/extcon-max14577.c 785 */;
	const struct platform_device_id cocci_id/* drivers/extcon/extcon-max14577.c 778 */[];
	struct max14577_muic_irq *cocci_id/* drivers/extcon/extcon-max14577.c 691 */;
	struct max14577_muic_info {
		struct device *dev;
		struct max14577 *max14577;
		struct extcon_dev *edev;
		int prev_cable_type;
		int prev_chg_type;
		u8 status[MAX14577_MUIC_STATUS_END];
		struct max14577_muic_irq *muic_irqs;
		unsigned int muic_irqs_num;
		bool irq_adc;
		bool irq_chg;
		struct work_struct irq_work;
		struct mutex mutex;
		struct delayed_work wq_detcable;
		int path_usb;
		int path_uart;
	} cocci_id/* drivers/extcon/extcon-max14577.c 69 */;
	struct max14577 *cocci_id/* drivers/extcon/extcon-max14577.c 657 */;
	struct platform_device *cocci_id/* drivers/extcon/extcon-max14577.c 655 */;
	struct max14577_muic_info cocci_id/* drivers/extcon/extcon-max14577.c 650 */;
	struct work_struct *cocci_id/* drivers/extcon/extcon-max14577.c 647 */;
	void cocci_id/* drivers/extcon/extcon-max14577.c 647 */;
	irqreturn_t cocci_id/* drivers/extcon/extcon-max14577.c 566 */;
	void *cocci_id/* drivers/extcon/extcon-max14577.c 566 */;
	struct max14577_muic_irq cocci_id/* drivers/extcon/extcon-max14577.c 45 */[];
	struct max14577_muic_irq {
		unsigned int irq;
		const char *name;
		unsigned int virq;
	} cocci_id/* drivers/extcon/extcon-max14577.c 39 */;
	bool cocci_id/* drivers/extcon/extcon-max14577.c 358 */;
	struct max14577_muic_info *cocci_id/* drivers/extcon/extcon-max14577.c 355 */;
	int cocci_id/* drivers/extcon/extcon-max14577.c 355 */;
	u8 cocci_id/* drivers/extcon/extcon-max14577.c 324 */;
	enum max14577_muic_status{MAX14577_MUIC_STATUS1=0, MAX14577_MUIC_STATUS2=1, MAX14577_MUIC_STATUS_END,} cocci_id/* drivers/extcon/extcon-max14577.c 27 */;
	enum max14577_muic_cable_group cocci_id/* drivers/extcon/extcon-max14577.c 254 */;
	bool *cocci_id/* drivers/extcon/extcon-max14577.c 254 */;
	enum max14577_muic_adc_debounce_time{ADC_DEBOUNCE_TIME_5MS=0, ADC_DEBOUNCE_TIME_10MS, ADC_DEBOUNCE_TIME_25MS, ADC_DEBOUNCE_TIME_38_62MS,} cocci_id/* drivers/extcon/extcon-max14577.c 20 */;
	enum max14577_muic_adc_debounce_time cocci_id/* drivers/extcon/extcon-max14577.c 158 */;
	const unsigned int cocci_id/* drivers/extcon/extcon-max14577.c 141 */[];
	enum max14577_muic_acc_type{MAX14577_MUIC_ADC_GROUND=0x0, MAX14577_MUIC_ADC_SEND_END_BUTTON, MAX14577_MUIC_ADC_REMOTE_S1_BUTTON, MAX14577_MUIC_ADC_REMOTE_S2_BUTTON, MAX14577_MUIC_ADC_REMOTE_S3_BUTTON, MAX14577_MUIC_ADC_REMOTE_S4_BUTTON, MAX14577_MUIC_ADC_REMOTE_S5_BUTTON, MAX14577_MUIC_ADC_REMOTE_S6_BUTTON, MAX14577_MUIC_ADC_REMOTE_S7_BUTTON, MAX14577_MUIC_ADC_REMOTE_S8_BUTTON, MAX14577_MUIC_ADC_REMOTE_S9_BUTTON, MAX14577_MUIC_ADC_REMOTE_S10_BUTTON, MAX14577_MUIC_ADC_REMOTE_S11_BUTTON, MAX14577_MUIC_ADC_REMOTE_S12_BUTTON, MAX14577_MUIC_ADC_RESERVED_ACC_1, MAX14577_MUIC_ADC_RESERVED_ACC_2, MAX14577_MUIC_ADC_RESERVED_ACC_3, MAX14577_MUIC_ADC_RESERVED_ACC_4, MAX14577_MUIC_ADC_RESERVED_ACC_5, MAX14577_MUIC_ADC_AUDIO_DEVICE_TYPE2, MAX14577_MUIC_ADC_PHONE_POWERED_DEV, MAX14577_MUIC_ADC_TTY_CONVERTER, MAX14577_MUIC_ADC_UART_CABLE, MAX14577_MUIC_ADC_CEA936A_TYPE1_CHG, MAX14577_MUIC_ADC_FACTORY_MODE_USB_OFF, MAX14577_MUIC_ADC_FACTORY_MODE_USB_ON, MAX14577_MUIC_ADC_AV_CABLE_NOLOAD, MAX14577_MUIC_ADC_CEA936A_TYPE2_CHG, MAX14577_MUIC_ADC_FACTORY_MODE_UART_OFF, MAX14577_MUIC_ADC_FACTORY_MODE_UART_ON, MAX14577_MUIC_ADC_AUDIO_DEVICE_TYPE1, MAX14577_MUIC_ADC_OPEN,} cocci_id/* drivers/extcon/extcon-max14577.c 106 */;
	enum max14577_muic_cable_group{MAX14577_CABLE_GROUP_ADC=0, MAX14577_CABLE_GROUP_CHG,} cocci_id/* drivers/extcon/extcon-max14577.c 100 */;
}
