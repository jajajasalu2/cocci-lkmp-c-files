cocci_test_suite() {
	void *cocci_id/* drivers/tty/rocket.c 987 */;
	unsigned int cocci_id/* drivers/tty/rocket.c 98 */[NUM_BOARDS];
	struct r_port *cocci_id/* drivers/tty/rocket.c 97 */[MAX_RP_PORTS];
	struct file *cocci_id/* drivers/tty/rocket.c 959 */;
	struct rocket_version cocci_id/* drivers/tty/rocket.c 93 */;
	struct tty_driver *cocci_id/* drivers/tty/rocket.c 91 */;
	void cocci_id/* drivers/tty/rocket.c 89 */(struct timer_list *unused);
	struct r_port cocci_id/* drivers/tty/rocket.c 848 */;
	struct r_port *cocci_id/* drivers/tty/rocket.c 848 */;
	struct tty_port *cocci_id/* drivers/tty/rocket.c 846 */;
	CHANNEL_t *cocci_id/* drivers/tty/rocket.c 699 */;
	unsigned cocci_id/* drivers/tty/rocket.c 695 */;
	struct ktermios *cocci_id/* drivers/tty/rocket.c 693 */;
	struct tty_struct *cocci_id/* drivers/tty/rocket.c 692 */;
	void cocci_id/* drivers/tty/rocket.c 692 */;
	CONTROLLER_T *cocci_id/* drivers/tty/rocket.c 611 */;
	void __init cocci_id/* drivers/tty/rocket.c 605 */;
	Word_t cocci_id/* drivers/tty/rocket.c 535 */;
	unsigned int cocci_id/* drivers/tty/rocket.c 532 */;
	struct timer_list *cocci_id/* drivers/tty/rocket.c 528 */;
	unsigned short *cocci_id/* drivers/tty/rocket.c 396 */;
	char cocci_id/* drivers/tty/rocket.c 341 */;
	unsigned char cocci_id/* drivers/tty/rocket.c 3112 */;
	int cocci_id/* drivers/tty/rocket.c 3112 */;
	unsigned char *cocci_id/* drivers/tty/rocket.c 306 */;
	Byte_t cocci_id/* drivers/tty/rocket.c 3053 */;
	CHANNEL_T *cocci_id/* drivers/tty/rocket.c 3051 */;
	Word_t *cocci_id/* drivers/tty/rocket.c 2948 */;
	const char *cocci_id/* drivers/tty/rocket.c 282 */;
	DWordIO_t cocci_id/* drivers/tty/rocket.c 2715 */;
	void cocci_id/* drivers/tty/rocket.c 270 */(void);
	Byte_t cocci_id/* drivers/tty/rocket.c 2698 */[4];
	Byte_t *cocci_id/* drivers/tty/rocket.c 2696 */;
	int __init cocci_id/* drivers/tty/rocket.c 269 */(void);
	ByteIO_t *cocci_id/* drivers/tty/rocket.c 2559 */;
	bool cocci_id/* drivers/tty/rocket.c 250 */;
	int cocci_id/* drivers/tty/rocket.c 236 */(WordIO_t io);
	int cocci_id/* drivers/tty/rocket.c 235 */(ByteIO_t io);
	int cocci_id/* drivers/tty/rocket.c 232 */(CONTROLLER_T *CtlP,
						   int CtlNum,
						   ByteIO_t MudbacIO,
						   ByteIO_t *AiopIOList,
						   int AiopIOListSize,
						   int IRQNum,
						   Byte_t Frequency,
						   int PeriodicOnly);
	const struct tty_operations cocci_id/* drivers/tty/rocket.c 2312 */;
	int cocci_id/* drivers/tty/rocket.c 231 */(CHANNEL_T *ChP,
						   Byte_t Data);
	void cocci_id/* drivers/tty/rocket.c 229 */(CONTROLLER_T *CtlP,
						    int chan, int on);
	void cocci_id/* drivers/tty/rocket.c 228 */(CHANNEL_T *ChP,
						    Word_t Flags);
	void cocci_id/* drivers/tty/rocket.c 225 */(CHANNEL_T *ChP);
	void cocci_id/* drivers/tty/rocket.c 224 */(CHANNEL_T *ChP,
						    Byte_t mode);
	int cocci_id/* drivers/tty/rocket.c 222 */(CONTROLLER_T *CtlP,
						   CHANNEL_T *ChP,
						   int AiopNum, int ChanNum);
	char *cocci_id/* drivers/tty/rocket.c 2210 */;
	CONTROLLER_t *cocci_id/* drivers/tty/rocket.c 2209 */;
	unsigned int cocci_id/* drivers/tty/rocket.c 2208 */[MAX_AIOPS_PER_BOARD];
	int __init cocci_id/* drivers/tty/rocket.c 2204 */;
	unsigned char cocci_id/* drivers/tty/rocket.c 219 */(int ctrl,
							     int aiop, int ch);
	struct pci_dev *cocci_id/* drivers/tty/rocket.c 2186 */;
	void cocci_id/* drivers/tty/rocket.c 218 */(struct tty_struct *tty);
	void cocci_id/* drivers/tty/rocket.c 217 */(struct tty_struct *tty,
						    int timeout);
	int __init cocci_id/* drivers/tty/rocket.c 216 */(int i);
	unsigned char cocci_id/* drivers/tty/rocket.c 212 */[MAX_RP_PORTS];
	Byte_t cocci_id/* drivers/tty/rocket.c 197 */[8];
	ByteIO_t cocci_id/* drivers/tty/rocket.c 1893 */;
	WordIO_t cocci_id/* drivers/tty/rocket.c 1892 */;
	CONTROLLER_T cocci_id/* drivers/tty/rocket.c 186 */[CTL_SIZE];
	const struct pci_device_id cocci_id/* drivers/tty/rocket.c 1712 */[];
	Byte_t cocci_id/* drivers/tty/rocket.c 170 */[RREGDATASIZE];
	const unsigned char *cocci_id/* drivers/tty/rocket.c 1556 */;
	Byte_t cocci_id/* drivers/tty/rocket.c 149 */[RDATASIZE];
	Word_t cocci_id/* drivers/tty/rocket.c 133 */[AIOP_CTL_SIZE];
	struct rocket_version __user *cocci_id/* drivers/tty/rocket.c 1273 */;
	const struct tty_port_operations cocci_id/* drivers/tty/rocket.c 125 */;
	void __user *cocci_id/* drivers/tty/rocket.c 1249 */;
	rocketModel_t cocci_id/* drivers/tty/rocket.c 123 */[NUM_BOARDS];
	struct rocket_ports *cocci_id/* drivers/tty/rocket.c 1225 */;
	struct rocket_ports __user *cocci_id/* drivers/tty/rocket.c 1223 */;
	int cocci_id/* drivers/tty/rocket.c 122 */[NUM_BOARDS];
	unsigned long cocci_id/* drivers/tty/rocket.c 120 */[NUM_BOARDS];
	unsigned long *cocci_id/* drivers/tty/rocket.c 117 */[4];
	struct rocket_config cocci_id/* drivers/tty/rocket.c 1165 */;
	struct rocket_config __user *cocci_id/* drivers/tty/rocket.c 1163 */;
	unsigned long cocci_id/* drivers/tty/rocket.c 113 */[8];
	unsigned long cocci_id/* drivers/tty/rocket.c 103 */;
	atomic_t cocci_id/* drivers/tty/rocket.c 100 */;
}
