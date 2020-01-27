cocci_test_suite() {
	void __exit cocci_id/* drivers/media/rc/serial_ir.c 798 */;
	int __init cocci_id/* drivers/media/rc/serial_ir.c 733 */;
	struct platform_driver cocci_id/* drivers/media/rc/serial_ir.c 724 */;
	pm_message_t cocci_id/* drivers/media/rc/serial_ir.c 686 */;
	u32 cocci_id/* drivers/media/rc/serial_ir.c 676 */;
	struct serial_ir_hw cocci_id/* drivers/media/rc/serial_ir.c 66 */[];
	s64 cocci_id/* drivers/media/rc/serial_ir.c 639 */;
	unsigned int *cocci_id/* drivers/media/rc/serial_ir.c 634 */;
	void cocci_id/* drivers/media/rc/serial_ir.c 63 */(void);
	unsigned long cocci_id/* drivers/media/rc/serial_ir.c 621 */;
	void cocci_id/* drivers/media/rc/serial_ir.c 62 */(unsigned int length,
							   ktime_t edge);
	struct rc_dev *cocci_id/* drivers/media/rc/serial_ir.c 619 */;
	ulong cocci_id/* drivers/media/rc/serial_ir.c 51 */;
	struct platform_device *cocci_id/* drivers/media/rc/serial_ir.c 483 */;
	void cocci_id/* drivers/media/rc/serial_ir.c 481 */(struct rc_dev *rcdev);
	int cocci_id/* drivers/media/rc/serial_ir.c 480 */(struct rc_dev *rcdev);
	int cocci_id/* drivers/media/rc/serial_ir.c 479 */(struct rc_dev *dev,
							   u32 carrier);
	int cocci_id/* drivers/media/rc/serial_ir.c 478 */(struct rc_dev *dev,
							   u32 cycle);
	int cocci_id/* drivers/media/rc/serial_ir.c 476 */(struct rc_dev *dev,
							   unsigned int *txbuf,
							   unsigned int count);
	struct timer_list *cocci_id/* drivers/media/rc/serial_ir.c 465 */;
	u8 cocci_id/* drivers/media/rc/serial_ir.c 397 */;
	int cocci_id/* drivers/media/rc/serial_ir.c 395 */;
	irqreturn_t cocci_id/* drivers/media/rc/serial_ir.c 319 */;
	void *cocci_id/* drivers/media/rc/serial_ir.c 319 */;
	struct serial_ir_hw {
		int signal_pin;
		int signal_pin_change;
		u8 on;
		u8 off;
		unsigned set_send_carrier:1;
		unsigned set_duty_cycle:1;
		void (*send_pulse)(unsigned int length, ktime_t edge);
		void (*send_space)(void);
		spinlock_t lock;
	} cocci_id/* drivers/media/rc/serial_ir.c 29 */;
	struct ir_raw_event cocci_id/* drivers/media/rc/serial_ir.c 268 */;
	bool cocci_id/* drivers/media/rc/serial_ir.c 264 */;
	unsigned int cocci_id/* drivers/media/rc/serial_ir.c 264 */;
	void cocci_id/* drivers/media/rc/serial_ir.c 264 */;
	ktime_t cocci_id/* drivers/media/rc/serial_ir.c 250 */;
	s32 cocci_id/* drivers/media/rc/serial_ir.c 221 */;
	unsigned char cocci_id/* drivers/media/rc/serial_ir.c 180 */;
	long cocci_id/* drivers/media/rc/serial_ir.c 178 */;
	struct serial_ir cocci_id/* drivers/media/rc/serial_ir.c 138 */;
	struct serial_ir {
		ktime_t lastkt;
		struct rc_dev *rcdev;
		struct platform_device *pdev;
		struct timer_list timeout_timer;
		unsigned int carrier;
		unsigned int duty_cycle;
	} cocci_id/* drivers/media/rc/serial_ir.c 128 */;
}
