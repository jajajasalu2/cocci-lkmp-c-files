cocci_test_suite() {
	int __weak cocci_id/* drivers/tty/mips_ejtag_fdc.c 879 */;
	void cocci_id/* drivers/tty/mips_ejtag_fdc.c 879 */;
	const struct tty_operations cocci_id/* drivers/tty/mips_ejtag_fdc.c 869 */;
	struct mips_ejtag_fdc_tty cocci_id/* drivers/tty/mips_ejtag_fdc.c 84 */;
	const unsigned char *cocci_id/* drivers/tty/mips_ejtag_fdc.c 799 */;
	struct file *cocci_id/* drivers/tty/mips_ejtag_fdc.c 774 */;
	const struct tty_port_operations cocci_id/* drivers/tty/mips_ejtag_fdc.c 753 */;
	struct mips_ejtag_fdc_tty_port cocci_id/* drivers/tty/mips_ejtag_fdc.c 698 */;
	struct tty_port *cocci_id/* drivers/tty/mips_ejtag_fdc.c 694 */;
	struct timer_list *cocci_id/* drivers/tty/mips_ejtag_fdc.c 683 */;
	irqreturn_t cocci_id/* drivers/tty/mips_ejtag_fdc.c 649 */;
	void *cocci_id/* drivers/tty/mips_ejtag_fdc.c 649 */;
	struct mips_ejtag_fdc_tty_port *cocci_id/* drivers/tty/mips_ejtag_fdc.c 559 */;
	struct mips_ejtag_fdc_tty *cocci_id/* drivers/tty/mips_ejtag_fdc.c 557 */;
	unsigned int cocci_id/* drivers/tty/mips_ejtag_fdc.c 420 */[2];
	const char *cocci_id/* drivers/tty/mips_ejtag_fdc.c 419 */[2];
	struct tty_struct *cocci_id/* drivers/tty/mips_ejtag_fdc.c 418 */;
	struct mips_ejtag_fdc_console cocci_id/* drivers/tty/mips_ejtag_fdc.c 391 */;
	unsigned long cocci_id/* drivers/tty/mips_ejtag_fdc.c 369 */;
	struct mips_ejtag_fdc_console *cocci_id/* drivers/tty/mips_ejtag_fdc.c 358 */;
	int *cocci_id/* drivers/tty/mips_ejtag_fdc.c 356 */;
	struct tty_driver *cocci_id/* drivers/tty/mips_ejtag_fdc.c 355 */;
	struct console *cocci_id/* drivers/tty/mips_ejtag_fdc.c 355 */;
	u8 cocci_id/* drivers/tty/mips_ejtag_fdc.c 313 */[4];
	bool cocci_id/* drivers/tty/mips_ejtag_fdc.c 309 */;
	const char *cocci_id/* drivers/tty/mips_ejtag_fdc.c 300 */;
	struct mips_ejtag_fdc_console {
		struct console cons;
		struct tty_driver *tty_drv;
		raw_spinlock_t lock;
		bool initialised;
		void __iomem *regs[NR_CPUS];
	} cocci_id/* drivers/tty/mips_ejtag_fdc.c 291 */;
	u32 cocci_id/* drivers/tty/mips_ejtag_fdc.c 262 */;
	char *cocci_id/* drivers/tty/mips_ejtag_fdc.c 262 */;
	unsigned int *cocci_id/* drivers/tty/mips_ejtag_fdc.c 217 */;
	const char **cocci_id/* drivers/tty/mips_ejtag_fdc.c 216 */;
	struct fdc_word {
		u32 word;
		unsigned int bytes;
	} cocci_id/* drivers/tty/mips_ejtag_fdc.c 190 */;
	struct mips_ejtag_fdc_tty {
		struct device *dev;
		struct tty_driver *driver;
		unsigned int cpu;
		char fdc_name[16];
		char driver_name[16];
		struct mips_ejtag_fdc_tty_port ports[NUM_TTY_CHANNELS];
		wait_queue_head_t waitqueue;
		raw_spinlock_t lock;
		struct task_struct *thread;
		void __iomem *reg;
		u8 tx_fifo;
		unsigned int xmit_size;
		atomic_t xmit_total;
		unsigned int xmit_next;
		bool xmit_full;
		int irq;
		bool removing;
		struct timer_list poll_timer;
#ifdef CONFIG_MAGIC_SYSRQ
		bool sysrq_pressed;
#endif
	} cocci_id/* drivers/tty/mips_ejtag_fdc.c 141 */;
	int __init cocci_id/* drivers/tty/mips_ejtag_fdc.c 1265 */;
	struct kgdb_io cocci_id/* drivers/tty/mips_ejtag_fdc.c 1258 */;
	u8 cocci_id/* drivers/tty/mips_ejtag_fdc.c 1250 */;
	unsigned int cocci_id/* drivers/tty/mips_ejtag_fdc.c 1222 */;
	void __iomem *cocci_id/* drivers/tty/mips_ejtag_fdc.c 1221 */;
	struct fdc_word cocci_id/* drivers/tty/mips_ejtag_fdc.c 1220 */;
	const char *cocci_id/* drivers/tty/mips_ejtag_fdc.c 1219 */[1];
	int cocci_id/* drivers/tty/mips_ejtag_fdc.c 1181 */;
	char cocci_id/* drivers/tty/mips_ejtag_fdc.c 1154 */[4];
	struct mips_cdmm_driver cocci_id/* drivers/tty/mips_ejtag_fdc.c 1115 */;
	const struct mips_cdmm_device_id cocci_id/* drivers/tty/mips_ejtag_fdc.c 1110 */[];
	struct mips_cdmm_device *cocci_id/* drivers/tty/mips_ejtag_fdc.c 1048 */;
	struct mips_ejtag_fdc_tty_port {
		struct tty_port port;
		struct mips_ejtag_fdc_tty *driver;
		raw_spinlock_t rx_lock;
		void *rx_buf;
		spinlock_t xmit_lock;
		unsigned int xmit_cnt;
		unsigned int xmit_head;
		unsigned int xmit_tail;
		struct completion xmit_empty;
	} cocci_id/* drivers/tty/mips_ejtag_fdc.c 104 */;
}
