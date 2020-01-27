cocci_test_suite() {
	struct dvb_ca_slot *cocci_id/* drivers/media/dvb-core/dvb_ca_en50221.c 935 */;
	struct dvb_ca_private *cocci_id/* drivers/media/dvb-core/dvb_ca_en50221.c 934 */;
	struct dvb_ca_en50221 *cocci_id/* drivers/media/dvb-core/dvb_ca_en50221.c 931 */;
	int cocci_id/* drivers/media/dvb-core/dvb_ca_en50221.c 931 */;
	void cocci_id/* drivers/media/dvb-core/dvb_ca_en50221.c 931 */;
	struct dvb_ca_slot {
		int slot_state;
		struct mutex slot_lock;
		atomic_t camchange_count;
		int camchange_type;
		u32 config_base;
		u8 config_option;
		u8 da_irq_supported:1;
		int link_buf_size;
		struct dvb_ringbuffer rx_buffer;
		unsigned long timeout;
	} cocci_id/* drivers/media/dvb-core/dvb_ca_en50221.c 80 */;
	u8 *cocci_id/* drivers/media/dvb-core/dvb_ca_en50221.c 632 */;
	u16 cocci_id/* drivers/media/dvb-core/dvb_ca_en50221.c 463 */;
	char *cocci_id/* drivers/media/dvb-core/dvb_ca_en50221.c 457 */;
	u8 cocci_id/* drivers/media/dvb-core/dvb_ca_en50221.c 456 */[257];
	int cocci_id/* drivers/media/dvb-core/dvb_ca_en50221.c 187 */(struct dvb_ca_private *ca,
								      int slot,
								      u8 *ebuf,
								      int ecount);
	struct dvb_ca_slot cocci_id/* drivers/media/dvb-core/dvb_ca_en50221.c 1861 */;
	void cocci_id/* drivers/media/dvb-core/dvb_ca_en50221.c 186 */(struct dvb_ca_private *ca);
	struct dvb_adapter *cocci_id/* drivers/media/dvb-core/dvb_ca_en50221.c 1839 */;
	const struct dvb_device cocci_id/* drivers/media/dvb-core/dvb_ca_en50221.c 1815 */;
	const struct file_operations cocci_id/* drivers/media/dvb-core/dvb_ca_en50221.c 1804 */;
	__poll_t cocci_id/* drivers/media/dvb-core/dvb_ca_en50221.c 1779 */;
	poll_table *cocci_id/* drivers/media/dvb-core/dvb_ca_en50221.c 1779 */;
	struct dvb_ca_private cocci_id/* drivers/media/dvb-core/dvb_ca_en50221.c 172 */;
	struct inode *cocci_id/* drivers/media/dvb-core/dvb_ca_en50221.c 1700 */;
	struct kref *cocci_id/* drivers/media/dvb-core/dvb_ca_en50221.c 168 */;
	u8 cocci_id/* drivers/media/dvb-core/dvb_ca_en50221.c 1599 */[2];
	loff_t *cocci_id/* drivers/media/dvb-core/dvb_ca_en50221.c 1592 */;
	size_t cocci_id/* drivers/media/dvb-core/dvb_ca_en50221.c 1592 */;
	char __user *cocci_id/* drivers/media/dvb-core/dvb_ca_en50221.c 1591 */;
	ssize_t cocci_id/* drivers/media/dvb-core/dvb_ca_en50221.c 1591 */;
	int *cocci_id/* drivers/media/dvb-core/dvb_ca_en50221.c 1536 */;
	u8 cocci_id/* drivers/media/dvb-core/dvb_ca_en50221.c 1444 */[HOST_LINK_BUF_SIZE];
	u8 cocci_id/* drivers/media/dvb-core/dvb_ca_en50221.c 1442 */;
	const char __user *cocci_id/* drivers/media/dvb-core/dvb_ca_en50221.c 1436 */;
	unsigned long cocci_id/* drivers/media/dvb-core/dvb_ca_en50221.c 1420 */;
	long cocci_id/* drivers/media/dvb-core/dvb_ca_en50221.c 1419 */;
	struct ca_slot_info *cocci_id/* drivers/media/dvb-core/dvb_ca_en50221.c 1379 */;
	struct ca_caps *cocci_id/* drivers/media/dvb-core/dvb_ca_en50221.c 1369 */;
	struct dvb_device *cocci_id/* drivers/media/dvb-core/dvb_ca_en50221.c 1339 */;
	void *cocci_id/* drivers/media/dvb-core/dvb_ca_en50221.c 1337 */;
	unsigned int cocci_id/* drivers/media/dvb-core/dvb_ca_en50221.c 1337 */;
	struct file *cocci_id/* drivers/media/dvb-core/dvb_ca_en50221.c 1336 */;
	struct dvb_ca_private {
		struct kref refcount;
		struct dvb_ca_en50221 *pub;
		struct dvb_device *dvbdev;
		u32 flags;
		unsigned int slot_count;
		struct dvb_ca_slot *slot_info;
		wait_queue_head_t wait_queue;
		struct task_struct *thread;
		unsigned int open:1;
		unsigned int wakeup:1;
		unsigned long delay;
		int next_read_slot;
		struct mutex ioctl_mutex;
	} cocci_id/* drivers/media/dvb-core/dvb_ca_en50221.c 113 */;
}
