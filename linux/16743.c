cocci_test_suite() {
	struct gscps2port {
		struct list_head node;
		struct parisc_device *padev;
		struct serio *port;
		spinlock_t lock;
		char __iomem *addr;
		u8 act,append;
		struct {
			u8 data;
			u8 str;
		} buffer[BUFFER_SIZE + 1];
		int id;
	} cocci_id/* drivers/input/serio/gscps2.c 89 */;
	irqreturn_t cocci_id/* drivers/input/serio/gscps2.c 84 */(int irq,
								  void *dev);
	void __exit cocci_id/* drivers/input/serio/gscps2.c 454 */;
	int __init cocci_id/* drivers/input/serio/gscps2.c 448 */;
	struct parisc_driver cocci_id/* drivers/input/serio/gscps2.c 441 */;
	const struct parisc_device_id cocci_id/* drivers/input/serio/gscps2.c 432 */[]__initconst;
	int __exit cocci_id/* drivers/input/serio/gscps2.c 414 */;
	struct serio cocci_id/* drivers/input/serio/gscps2.c 342 */;
	struct gscps2port cocci_id/* drivers/input/serio/gscps2.c 341 */;
	struct parisc_device *cocci_id/* drivers/input/serio/gscps2.c 327 */;
	struct gscps2port *cocci_id/* drivers/input/serio/gscps2.c 318 */;
	struct serio *cocci_id/* drivers/input/serio/gscps2.c 316 */;
	void cocci_id/* drivers/input/serio/gscps2.c 316 */;
	unsigned char cocci_id/* drivers/input/serio/gscps2.c 282 */;
	unsigned int cocci_id/* drivers/input/serio/gscps2.c 253 */;
	irqreturn_t cocci_id/* drivers/input/serio/gscps2.c 227 */;
	void *cocci_id/* drivers/input/serio/gscps2.c 227 */;
	u8 cocci_id/* drivers/input/serio/gscps2.c 181 */;
	unsigned long cocci_id/* drivers/input/serio/gscps2.c 180 */;
	int cocci_id/* drivers/input/serio/gscps2.c 178 */;
	char __iomem *cocci_id/* drivers/input/serio/gscps2.c 149 */;
}
