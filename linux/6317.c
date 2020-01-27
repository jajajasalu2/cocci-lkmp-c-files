cocci_test_suite() {
	const char *cocci_id/* drivers/mfd/twl4030-irq.c 766 */;
	struct device_node *cocci_id/* drivers/mfd/twl4030-irq.c 678 */;
	struct irq_chip cocci_id/* drivers/mfd/twl4030-irq.c 675 */;
	struct device *cocci_id/* drivers/mfd/twl4030-irq.c 673 */;
	const struct sih *cocci_id/* drivers/mfd/twl4030-irq.c 583 */;
	struct sih_agent *cocci_id/* drivers/mfd/twl4030-irq.c 582 */;
	union {
		u8 bytes[4];
		u32 word;
	} cocci_id/* drivers/mfd/twl4030-irq.c 562 */;
	struct sih {
		char name[8];
		u8 module;
		u8 control_offset;
		bool set_cor;
		u8 bits;
		u8 bytes_ixr;
		u8 edr_offset;
		u8 bytes_edr;
		u8 irq_lines;
		struct sih_irq_data {
			u8 isr_offset;
			u8 imr_offset;
		} mask[2];
	} cocci_id/* drivers/mfd/twl4030-irq.c 55 */;
	u8 cocci_id/* drivers/mfd/twl4030-irq.c 499 */[6];
	u32 cocci_id/* drivers/mfd/twl4030-irq.c 498 */;
	union {
		u32 word;
		u8 bytes[4];
	} cocci_id/* drivers/mfd/twl4030-irq.c 479 */;
	struct irq_data *cocci_id/* drivers/mfd/twl4030-irq.c 465 */;
	struct sih_agent {
		int irq_base;
		const struct sih *sih;
		u32 imr;
		bool imr_change_pending;
		u32 edge_change;
		struct mutex irq_lock;
		char *irq_name;
	} cocci_id/* drivers/mfd/twl4030-irq.c 414 */;
	int cocci_id/* drivers/mfd/twl4030-irq.c 407 */;
	void cocci_id/* drivers/mfd/twl4030-irq.c 407 */;
	u8 cocci_id/* drivers/mfd/twl4030-irq.c 317 */[4];
	unsigned cocci_id/* drivers/mfd/twl4030-irq.c 314 */;
	unsigned int cocci_id/* drivers/mfd/twl4030-irq.c 293 */;
	unsigned long cocci_id/* drivers/mfd/twl4030-irq.c 292 */;
	u8 cocci_id/* drivers/mfd/twl4030-irq.c 282 */;
	irqreturn_t cocci_id/* drivers/mfd/twl4030-irq.c 279 */;
	void *cocci_id/* drivers/mfd/twl4030-irq.c 279 */;
	const struct sih cocci_id/* drivers/mfd/twl4030-irq.c 168 */[8];
	const struct sih cocci_id/* drivers/mfd/twl4030-irq.c 108 */[6];
}
