cocci_test_suite() {
	const struct pci_device_id cocci_id/* drivers/tty/synclink_gt.c 97 */[];
	char cocci_id/* drivers/tty/synclink_gt.c 868 */;
	const unsigned char *cocci_id/* drivers/tty/synclink_gt.c 813 */;
	struct ktermios *cocci_id/* drivers/tty/synclink_gt.c 766 */;
	struct tty_ldisc *cocci_id/* drivers/tty/synclink_gt.c 634 */;
	const __u8 *cocci_id/* drivers/tty/synclink_gt.c 632 */;
	const char *cocci_id/* drivers/tty/synclink_gt.c 605 */;
	void cocci_id/* drivers/tty/synclink_gt.c 530 */(int adapter_num,
							 struct pci_dev *pdev);
	void cocci_id/* drivers/tty/synclink_gt.c 529 */(struct slgt_info *info);
	int cocci_id/* drivers/tty/synclink_gt.c 519 */(struct slgt_info *info,
							struct gpio_desc __user *gpio);
	int cocci_id/* drivers/tty/synclink_gt.c 517 */(struct slgt_info *info,
							int if_mode);
	int cocci_id/* drivers/tty/synclink_gt.c 516 */(struct slgt_info *info,
							int __user *if_mode);
	int cocci_id/* drivers/tty/synclink_gt.c 513 */(struct tty_struct *tty,
							unsigned int set,
							unsigned int clear);
	struct timer_list *cocci_id/* drivers/tty/synclink_gt.c 5117 */;
	int cocci_id/* drivers/tty/synclink_gt.c 511 */(struct slgt_info *info,
							int __user *mask_ptr);
	int cocci_id/* drivers/tty/synclink_gt.c 510 */(struct slgt_info *info,
							int arg);
	int cocci_id/* drivers/tty/synclink_gt.c 509 */(struct slgt_info *info,
							int enable);
	struct slgt_info *cocci_id/* drivers/tty/synclink_gt.c 5075 */;
	int cocci_id/* drivers/tty/synclink_gt.c 5075 */;
	int cocci_id/* drivers/tty/synclink_gt.c 506 */(struct slgt_info *info,
							int idle_mode);
	int cocci_id/* drivers/tty/synclink_gt.c 505 */(struct slgt_info *info,
							int __user *idle_mode);
	int cocci_id/* drivers/tty/synclink_gt.c 503 */(struct slgt_info *info,
							MGSL_PARAMS __user *params);
	unsigned char cocci_id/* drivers/tty/synclink_gt.c 5021 */[TESTFRAMESIZE];
	u16 cocci_id/* drivers/tty/synclink_gt.c 5020 */;
	int cocci_id/* drivers/tty/synclink_gt.c 502 */(struct slgt_info *info,
							struct mgsl_icount __user *user_icount);
	unsigned char *cocci_id/* drivers/tty/synclink_gt.c 4993 */;
	void cocci_id/* drivers/tty/synclink_gt.c 497 */(struct timer_list *t);
	u32 cocci_id/* drivers/tty/synclink_gt.c 4954 */;
	unsigned short cocci_id/* drivers/tty/synclink_gt.c 4929 */[];
	void cocci_id/* drivers/tty/synclink_gt.c 491 */(struct slgt_info *info,
							 struct slgt_desc *bufs,
							 int count);
	int cocci_id/* drivers/tty/synclink_gt.c 490 */(struct slgt_info *info,
							struct slgt_desc *bufs,
							int count);
	void cocci_id/* drivers/tty/synclink_gt.c 483 */(struct slgt_info *info,
							 unsigned short status);
	void cocci_id/* drivers/tty/synclink_gt.c 479 */(struct work_struct *work);
	void cocci_id/* drivers/tty/synclink_gt.c 476 */(struct slgt_info *info,
							 u32 data_rate);
	bool cocci_id/* drivers/tty/synclink_gt.c 471 */(struct slgt_info *info,
							 const char *buf,
							 unsigned int count);
	unsigned int cocci_id/* drivers/tty/synclink_gt.c 467 */(struct slgt_info *info);
	bool cocci_id/* drivers/tty/synclink_gt.c 462 */(struct slgt_info *info);
	void cocci_id/* drivers/tty/synclink_gt.c 459 */(struct slgt_info *info,
							 unsigned int first,
							 unsigned int last);
	int cocci_id/* drivers/tty/synclink_gt.c 449 */(struct slgt_info *info);
	int cocci_id/* drivers/tty/synclink_gt.c 441 */(struct tty_struct *tty,
							struct file *filp,
							struct slgt_info *info);
	void cocci_id/* drivers/tty/synclink_gt.c 436 */(struct slgt_info *info,
							 unsigned int addr,
							 __u32 value);
	__u32 cocci_id/* drivers/tty/synclink_gt.c 435 */(struct slgt_info *info,
							  unsigned int addr);
	void cocci_id/* drivers/tty/synclink_gt.c 434 */(struct slgt_info *info,
							 unsigned int addr,
							 __u16 value);
	__u16 cocci_id/* drivers/tty/synclink_gt.c 433 */(struct slgt_info *info,
							  unsigned int addr);
	void cocci_id/* drivers/tty/synclink_gt.c 432 */(struct slgt_info *info,
							 unsigned int addr,
							 __u8 value);
	__u8 cocci_id/* drivers/tty/synclink_gt.c 431 */(struct slgt_info *info,
							 unsigned int addr);
	unsigned short cocci_id/* drivers/tty/synclink_gt.c 4093 */;
	__u32 cocci_id/* drivers/tty/synclink_gt.c 3849 */;
	void __iomem *cocci_id/* drivers/tty/synclink_gt.c 3840 */;
	__u16 cocci_id/* drivers/tty/synclink_gt.c 3837 */;
	__u8 cocci_id/* drivers/tty/synclink_gt.c 3825 */;
	void __exit cocci_id/* drivers/tty/synclink_gt.c 3806 */;
	int __init cocci_id/* drivers/tty/synclink_gt.c 3752 */;
	const struct tty_operations cocci_id/* drivers/tty/synclink_gt.c 3679 */;
	const struct pci_device_id *cocci_id/* drivers/tty/synclink_gt.c 3664 */;
	struct slgt_info *cocci_id/* drivers/tty/synclink_gt.c 3597 */[SLGT_MAX_PORTS];
	MGSL_PARAMS cocci_id/* drivers/tty/synclink_gt.c 3573 */;
	struct slgt_info cocci_id/* drivers/tty/synclink_gt.c 3555 */;
	struct pci_dev *cocci_id/* drivers/tty/synclink_gt.c 3551 */;
	const struct tty_port_operations cocci_id/* drivers/tty/synclink_gt.c 3543 */;
	char *cocci_id/* drivers/tty/synclink_gt.c 3490 */;
	unsigned int cocci_id/* drivers/tty/synclink_gt.c 3400 */;
	struct slgt_desc *cocci_id/* drivers/tty/synclink_gt.c 3394 */;
	struct slgt_desc cocci_id/* drivers/tty/synclink_gt.c 3360 */;
	struct tty_port *cocci_id/* drivers/tty/synclink_gt.c 3237 */;
	bool cocci_id/* drivers/tty/synclink_gt.c 3234 */;
	struct file *cocci_id/* drivers/tty/synclink_gt.c 3229 */;
	struct cond_wait cocci_id/* drivers/tty/synclink_gt.c 3050 */;
	struct cond_wait *cocci_id/* drivers/tty/synclink_gt.c 2997 */;
	struct cond_wait **cocci_id/* drivers/tty/synclink_gt.c 2997 */;
	void cocci_id/* drivers/tty/synclink_gt.c 2997 */;
	struct gpio_desc cocci_id/* drivers/tty/synclink_gt.c 2973 */;
	struct gpio_desc __user *cocci_id/* drivers/tty/synclink_gt.c 2971 */;
	int __user *cocci_id/* drivers/tty/synclink_gt.c 2833 */;
	struct _input_signal_events cocci_id/* drivers/tty/synclink_gt.c 2727 */;
	MGSL_PARAMS __user *cocci_id/* drivers/tty/synclink_gt.c 2591 */;
	struct mgsl_icount __user *cocci_id/* drivers/tty/synclink_gt.c 2579 */;
	unsigned cocci_id/* drivers/tty/synclink_gt.c 2508 */;
	irqreturn_t cocci_id/* drivers/tty/synclink_gt.c 2334 */;
	void *cocci_id/* drivers/tty/synclink_gt.c 2334 */;
	struct _input_signal_events {
		int ri_up;
		int ri_down;
		int dsr_up;
		int dsr_down;
		int dcd_up;
		int dcd_down;
		int cts_up;
		int cts_down;
	} cocci_id/* drivers/tty/synclink_gt.c 224 */;
	struct tty_struct *cocci_id/* drivers/tty/synclink_gt.c 1970 */;
	struct slgt_desc {
		__le16 count;
		__le16 status;
		__le32 pbuf;
		__le32 next;
		char *buf;
		unsigned int pdesc;
		dma_addr_t buf_dma_addr;
		unsigned short buf_count;
	} cocci_id/* drivers/tty/synclink_gt.c 197 */;
	struct work_struct *cocci_id/* drivers/tty/synclink_gt.c 1921 */;
	void cocci_id/* drivers/tty/synclink_gt.c 192 */(struct cond_wait **head);
	void cocci_id/* drivers/tty/synclink_gt.c 190 */(struct cond_wait **head,
							 struct cond_wait *w);
	unsigned long cocci_id/* drivers/tty/synclink_gt.c 1892 */;
	void cocci_id/* drivers/tty/synclink_gt.c 189 */(struct cond_wait *w,
							 unsigned int data);
	struct cond_wait {
		struct cond_wait *next;
		wait_queue_head_t q;
		wait_queue_entry_t wait;
		unsigned int data;
	} cocci_id/* drivers/tty/synclink_gt.c 183 */;
	struct mgsl_icount *cocci_id/* drivers/tty/synclink_gt.c 1822 */;
	hdlc_device *cocci_id/* drivers/tty/synclink_gt.c 1765 */;
	const struct net_device_ops cocci_id/* drivers/tty/synclink_gt.c 1745 */;
	struct sk_buff *cocci_id/* drivers/tty/synclink_gt.c 1724 */;
	void cocci_id/* drivers/tty/synclink_gt.c 167 */(struct slgt_info *info,
							 char *buf, int size);
	int cocci_id/* drivers/tty/synclink_gt.c 159 */(struct tty_struct *tty,
							int break_state);
	sync_serial_settings __user *cocci_id/* drivers/tty/synclink_gt.c 1589 */;
	const size_t cocci_id/* drivers/tty/synclink_gt.c 1587 */;
	sync_serial_settings cocci_id/* drivers/tty/synclink_gt.c 1587 */;
	struct ifreq *cocci_id/* drivers/tty/synclink_gt.c 1585 */;
	int cocci_id/* drivers/tty/synclink_gt.c 156 */(struct tty_struct *tty);
	int cocci_id/* drivers/tty/synclink_gt.c 155 */(struct tty_struct *tty,
							unsigned int cmd,
							unsigned long arg);
	void cocci_id/* drivers/tty/synclink_gt.c 151 */(struct tty_struct *tty);
	void cocci_id/* drivers/tty/synclink_gt.c 148 */(struct tty_struct *tty,
							 int timeout);
	void cocci_id/* drivers/tty/synclink_gt.c 147 */(struct tty_struct *tty,
							 char ch);
	int cocci_id/* drivers/tty/synclink_gt.c 146 */(struct tty_struct *tty,
							unsigned char ch);
	netdev_tx_t cocci_id/* drivers/tty/synclink_gt.c 1454 */;
	int cocci_id/* drivers/tty/synclink_gt.c 145 */(struct tty_struct *tty,
							const unsigned char *buf,
							int count);
	void cocci_id/* drivers/tty/synclink_gt.c 143 */(struct tty_struct *tty,
							 struct ktermios *old_termios);
	unsigned char cocci_id/* drivers/tty/synclink_gt.c 1411 */;
	void cocci_id/* drivers/tty/synclink_gt.c 141 */(struct tty_struct *tty,
							 struct file *filp);
	struct net_device *cocci_id/* drivers/tty/synclink_gt.c 1407 */;
	int cocci_id/* drivers/tty/synclink_gt.c 140 */(struct tty_struct *tty,
							struct file *filp);
	struct tty_driver *cocci_id/* drivers/tty/synclink_gt.c 138 */;
	int cocci_id/* drivers/tty/synclink_gt.c 125 */[MAX_DEVICES];
	char cocci_id/* drivers/tty/synclink_gt.c 1231 */[30];
	struct seq_file *cocci_id/* drivers/tty/synclink_gt.c 1229 */;
	compat_ulong_t cocci_id/* drivers/tty/synclink_gt.c 1133 */;
	struct MGSL_PARAMS32 cocci_id/* drivers/tty/synclink_gt.c 1129 */;
	struct MGSL_PARAMS32 __user *cocci_id/* drivers/tty/synclink_gt.c 1127 */;
	long cocci_id/* drivers/tty/synclink_gt.c 1127 */;
	struct mgsl_icount cocci_id/* drivers/tty/synclink_gt.c 1101 */;
	struct serial_icounter_struct *cocci_id/* drivers/tty/synclink_gt.c 1097 */;
	struct pci_driver cocci_id/* drivers/tty/synclink_gt.c 108 */;
	void cocci_id/* drivers/tty/synclink_gt.c 107 */(struct pci_dev *dev);
	int cocci_id/* drivers/tty/synclink_gt.c 106 */(struct pci_dev *dev,
							const struct pci_device_id *ent);
	void __user *cocci_id/* drivers/tty/synclink_gt.c 1025 */;
	struct slgt_info {
		void *if_ptr;
		struct tty_port port;
		struct slgt_info *next_device;
		int magic;
		char device_name[25];
		struct pci_dev *pdev;
		int port_count;
		int adapter_num;
		int port_num;
		struct slgt_info *port_array[SLGT_MAX_PORTS];
		int line;
		struct mgsl_icount icount;
		int timeout;
		int x_char;
		unsigned int read_status_mask;
		unsigned int ignore_status_mask;
		wait_queue_head_t status_event_wait_q;
		wait_queue_head_t event_wait_q;
		struct timer_list tx_timer;
		struct timer_list rx_timer;
		unsigned int gpio_present;
		struct cond_wait *gpio_wait_q;
		spinlock_t lock;
		struct work_struct task;
		u32 pending_bh;
		bool bh_requested;
		bool bh_running;
		int isr_overflow;
		bool irq_requested;
		bool irq_occurred;
		unsigned int bus_type;
		unsigned int irq_level;
		unsigned long irq_flags;
		unsigned char __iomem *reg_addr;
		u32 phys_reg_addr;
		bool reg_addr_requested;
		MGSL_PARAMS params;
		u32 idle_mode;
		u32 max_frame_size;
		unsigned int rbuf_fill_level;
		unsigned int rx_pio;
		unsigned int if_mode;
		unsigned int base_clock;
		unsigned int xsync;
		unsigned int xctrl;
		bool rx_enabled;
		bool rx_restart;
		bool tx_enabled;
		bool tx_active;
		unsigned char signals;
		int init_error;
		unsigned char *tx_buf;
		int tx_count;
		char *flag_buf;
		bool drop_rts_on_tx_done;
		struct _input_signal_events input_signal_events;
		int dcd_chkcount;
		int cts_chkcount;
		int dsr_chkcount;
		int ri_chkcount;
		char *bufs;
		dma_addr_t bufs_dma_addr;
		unsigned int rbuf_count;
		struct slgt_desc *rbufs;
		unsigned int rbuf_current;
		unsigned int rbuf_index;
		unsigned int rbuf_fill_index;
		unsigned short rbuf_fill_count;
		unsigned int tbuf_count;
		struct slgt_desc *tbufs;
		unsigned int tbuf_current;
		unsigned int tbuf_start;
		unsigned char *tmp_rbuf;
		unsigned int tmp_rbuf_count;
		int netcount;
		spinlock_t netlock;
#if SYNCLINK_GENERIC_HDLC
		struct net_device *netdev;
#endif
	} cocci_id/*  1 */;
}
