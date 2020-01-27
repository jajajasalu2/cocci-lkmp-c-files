cocci_test_suite() {
	const struct rc5t583_irq_data cocci_id/* drivers/mfd/rc5t583-irq.c 94 */[RC5T583_MAX_IRQS];
	struct rc5t583_irq_data {
		u8 int_type;
		u8 master_bit;
		u8 int_en_bit;
		u8 mask_reg_index;
		int grp_index;
	} cocci_id/* drivers/mfd/rc5t583-irq.c 76 */;
	struct irq_chip cocci_id/* drivers/mfd/rc5t583-irq.c 313 */;
	const struct rc5t583_irq_data *cocci_id/* drivers/mfd/rc5t583-irq.c 303 */;
	unsigned int cocci_id/* drivers/mfd/rc5t583-irq.c 248 */;
	uint8_t cocci_id/* drivers/mfd/rc5t583-irq.c 245 */;
	uint8_t cocci_id/* drivers/mfd/rc5t583-irq.c 244 */[RC5T583_MAX_INTERRUPT_MASK_REGS];
	struct rc5t583 *cocci_id/* drivers/mfd/rc5t583-irq.c 243 */;
	irqreturn_t cocci_id/* drivers/mfd/rc5t583-irq.c 241 */;
	void *cocci_id/* drivers/mfd/rc5t583-irq.c 241 */;
	int cocci_id/* drivers/mfd/rc5t583-irq.c 241 */;
	int cocci_id/* drivers/mfd/rc5t583-irq.c 24 */[];
	enum int_type{SYS_INT=0x1, DCDC_INT=0x2, RTC_INT=0x4, ADC_INT=0x8, GPIO_INT=0x10,} cocci_id/* drivers/mfd/rc5t583-irq.c 16 */;
	struct irq_data *cocci_id/* drivers/mfd/rc5t583-irq.c 140 */;
	void cocci_id/* drivers/mfd/rc5t583-irq.c 140 */;
}
