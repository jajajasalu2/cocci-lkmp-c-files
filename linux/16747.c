cocci_test_suite() {
	unsigned int cocci_id/* drivers/input/serio/sa1111ps2.c 64 */;
	irqreturn_t cocci_id/* drivers/input/serio/sa1111ps2.c 61 */;
	void *cocci_id/* drivers/input/serio/sa1111ps2.c 61 */;
	struct ps2if {
		struct serio *io;
		struct sa1111_dev *dev;
		void __iomem *base;
		int rx_irq;
		int tx_irq;
		unsigned int open;
		spinlock_t lock;
		unsigned int head;
		unsigned int tail;
		unsigned char buf[4];
	} cocci_id/* drivers/input/serio/sa1111ps2.c 43 */;
	void __exit cocci_id/* drivers/input/serio/sa1111ps2.c 378 */;
	int __init cocci_id/* drivers/input/serio/sa1111ps2.c 373 */;
	struct sa1111_driver cocci_id/* drivers/input/serio/sa1111ps2.c 363 */;
	struct serio cocci_id/* drivers/input/serio/sa1111ps2.c 260 */;
	struct ps2if cocci_id/* drivers/input/serio/sa1111ps2.c 259 */;
	struct sa1111_dev *cocci_id/* drivers/input/serio/sa1111ps2.c 253 */;
	int cocci_id/* drivers/input/serio/sa1111ps2.c 197 */;
	struct ps2if *cocci_id/* drivers/input/serio/sa1111ps2.c 195 */;
	void cocci_id/* drivers/input/serio/sa1111ps2.c 195 */;
	struct serio *cocci_id/* drivers/input/serio/sa1111ps2.c 176 */;
	unsigned long cocci_id/* drivers/input/serio/sa1111ps2.c 116 */;
	unsigned char cocci_id/* drivers/input/serio/sa1111ps2.c 113 */;
}
