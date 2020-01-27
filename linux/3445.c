cocci_test_suite() {
	unsigned int cocci_id/* drivers/macintosh/macio-adb.c 98 */;
	struct resource cocci_id/* drivers/macintosh/macio-adb.c 97 */;
	struct device_node *cocci_id/* drivers/macintosh/macio-adb.c 96 */;
	struct adb_driver cocci_id/* drivers/macintosh/macio-adb.c 72 */;
	int cocci_id/* drivers/macintosh/macio-adb.c 70 */(void);
	void cocci_id/* drivers/macintosh/macio-adb.c 69 */(void);
	int cocci_id/* drivers/macintosh/macio-adb.c 68 */(int devs);
	int cocci_id/* drivers/macintosh/macio-adb.c 67 */(struct adb_request *req,
							   int sync);
	irqreturn_t cocci_id/* drivers/macintosh/macio-adb.c 66 */(int irq,
								   void *arg);
	volatile struct adb_regs __iomem *cocci_id/* drivers/macintosh/macio-adb.c 60 */;
	void cocci_id/* drivers/macintosh/macio-adb.c 276 */;
	void (*cocci_id/* drivers/macintosh/macio-adb.c 261 */)(struct adb_request *);
	struct adb_regs {
		struct preg intr;
		struct preg data[9];
		struct preg intr_enb;
		struct preg dcount;
		struct preg error;
		struct preg ctrl;
		struct preg autopoll;
		struct preg active_hi;
		struct preg active_lo;
		struct preg test;
	} cocci_id/* drivers/macintosh/macio-adb.c 26 */;
	struct preg {
		unsigned char r;
		char pad[15];
	} cocci_id/* drivers/macintosh/macio-adb.c 21 */;
	unsigned char cocci_id/* drivers/macintosh/macio-adb.c 205 */[16];
	struct adb_request *cocci_id/* drivers/macintosh/macio-adb.c 204 */;
	irqreturn_t cocci_id/* drivers/macintosh/macio-adb.c 201 */;
	void *cocci_id/* drivers/macintosh/macio-adb.c 201 */;
	unsigned long cocci_id/* drivers/macintosh/macio-adb.c 132 */;
	int cocci_id/* drivers/macintosh/macio-adb.c 130 */;
	struct adb_regs cocci_id/* drivers/macintosh/macio-adb.c 108 */;
}
