cocci_test_suite() {
	struct iucv_message *cocci_id/* drivers/tty/hvc/hvc_iucv.c 952 */;
	void cocci_id/* drivers/tty/hvc/hvc_iucv.c 95 */(struct iucv_path *,
							 struct iucv_message *);
	void cocci_id/* drivers/tty/hvc/hvc_iucv.c 93 */(struct iucv_path *,
							 u8 *);
	int cocci_id/* drivers/tty/hvc/hvc_iucv.c 92 */(struct iucv_path *,
							u8 *, u8 *);
	struct iucv_tty_buffer {
		struct list_head list;
		struct iucv_message msg;
		size_t offset;
		struct iucv_tty_msg *mbuf;
	} cocci_id/* drivers/tty/hvc/hvc_iucv.c 84 */;
	u8 cocci_id/* drivers/tty/hvc/hvc_iucv.c 792 */[16];
	u8 cocci_id/* drivers/tty/hvc/hvc_iucv.c 790 */[9];
	u8 *cocci_id/* drivers/tty/hvc/hvc_iucv.c 786 */;
	const char *cocci_id/* drivers/tty/hvc/hvc_iucv.c 744 */;
	u8 cocci_id/* drivers/tty/hvc/hvc_iucv.c 742 */[8];
	struct iucv_path *cocci_id/* drivers/tty/hvc/hvc_iucv.c 673 */;
	struct hvc_struct *cocci_id/* drivers/tty/hvc/hvc_iucv.c 670 */;
	struct hvc_iucv_private {
		struct hvc_struct *hvc;
		u8 srv_name[8];
		unsigned char is_console;
		enum iucv_state_t iucv_state;
		enum tty_state_t tty_state;
		struct iucv_path *path;
		spinlock_t lock;
#define SNDBUF_SIZE (PAGE_SIZE)
			void *sndbuf;
		size_t sndbuf_len;
#define QUEUE_SNDBUF_DELAY (HZ / 25)
			struct delayed_work sndbuf_work;
		wait_queue_head_t sndbuf_waitq;
		struct list_head tty_outqueue;
		struct list_head tty_inqueue;
		struct device *dev;
		u8 info_path[16];
	} cocci_id/* drivers/tty/hvc/hvc_iucv.c 64 */;
	enum tty_state_t{TTY_CLOSED=0, TTY_OPENED=1,} cocci_id/* drivers/tty/hvc/hvc_iucv.c 59 */;
	int cocci_id/* drivers/tty/hvc/hvc_iucv.c 544 */;
	struct hvc_iucv_private *cocci_id/* drivers/tty/hvc/hvc_iucv.c 542 */;
	enum iucv_state_t{IUCV_DISCONN=0, IUCV_CONNECTED=1, IUCV_SEVERED=2,} cocci_id/* drivers/tty/hvc/hvc_iucv.c 53 */;
	struct iucv_tty_msg cocci_id/* drivers/tty/hvc/hvc_iucv.c 51 */;
	struct iucv_tty_msg {
		u8 version;
		u8 type;
#define MSG_MAX_DATALEN ((u16)(~0))
			u16 datalen;
		u8 data[];
	}__attribute__((packed)) cocci_id/* drivers/tty/hvc/hvc_iucv.c 44 */;
	struct work_struct *cocci_id/* drivers/tty/hvc/hvc_iucv.c 436 */;
	uint32_t cocci_id/* drivers/tty/hvc/hvc_iucv.c 316 */;
	struct winsize *cocci_id/* drivers/tty/hvc/hvc_iucv.c 284 */;
	struct winsize cocci_id/* drivers/tty/hvc/hvc_iucv.c 280 */;
	int *cocci_id/* drivers/tty/hvc/hvc_iucv.c 220 */;
	struct list_head *cocci_id/* drivers/tty/hvc/hvc_iucv.c 189 */;
	void cocci_id/* drivers/tty/hvc/hvc_iucv.c 179 */;
	u16 cocci_id/* drivers/tty/hvc/hvc_iucv.c 170 */;
	gfp_t cocci_id/* drivers/tty/hvc/hvc_iucv.c 152 */;
	struct iucv_tty_buffer *cocci_id/* drivers/tty/hvc/hvc_iucv.c 152 */;
	size_t cocci_id/* drivers/tty/hvc/hvc_iucv.c 152 */;
	char *cocci_id/* drivers/tty/hvc/hvc_iucv.c 1471 */;
	struct iucv_tty_buffer cocci_id/* drivers/tty/hvc/hvc_iucv.c 1408 */;
	const struct kernel_param_ops cocci_id/* drivers/tty/hvc/hvc_iucv.c 1349 */;
	const struct kernel_param *cocci_id/* drivers/tty/hvc/hvc_iucv.c 1322 */;
	void __init cocci_id/* drivers/tty/hvc/hvc_iucv.c 1171 */;
	struct iucv_handler cocci_id/* drivers/tty/hvc/hvc_iucv.c 117 */;
	unsigned long cocci_id/* drivers/tty/hvc/hvc_iucv.c 1162 */;
	void (*cocci_id/* drivers/tty/hvc/hvc_iucv.c 1149 */)(struct device *);
	mempool_t *cocci_id/* drivers/tty/hvc/hvc_iucv.c 114 */;
	struct kmem_cache *cocci_id/* drivers/tty/hvc/hvc_iucv.c 113 */;
	void *cocci_id/* drivers/tty/hvc/hvc_iucv.c 1112 */;
	struct hvc_iucv_private cocci_id/* drivers/tty/hvc/hvc_iucv.c 1102 */;
	char cocci_id/* drivers/tty/hvc/hvc_iucv.c 1099 */[9];
	unsigned int cocci_id/* drivers/tty/hvc/hvc_iucv.c 1096 */;
	int __init cocci_id/* drivers/tty/hvc/hvc_iucv.c 1096 */;
	const struct attribute_group *cocci_id/* drivers/tty/hvc/hvc_iucv.c 1081 */[];
	struct attribute_group cocci_id/* drivers/tty/hvc/hvc_iucv.c 1078 */;
	struct attribute *cocci_id/* drivers/tty/hvc/hvc_iucv.c 1072 */[];
	struct device_driver cocci_id/* drivers/tty/hvc/hvc_iucv.c 1062 */;
	const struct dev_pm_ops cocci_id/* drivers/tty/hvc/hvc_iucv.c 1055 */;
	const struct hv_ops cocci_id/* drivers/tty/hvc/hvc_iucv.c 1045 */;
	struct device_attribute *cocci_id/* drivers/tty/hvc/hvc_iucv.c 1023 */;
	struct device *cocci_id/* drivers/tty/hvc/hvc_iucv.c 1022 */;
	ssize_t cocci_id/* drivers/tty/hvc/hvc_iucv.c 1022 */;
	struct hvc_iucv_private *cocci_id/* drivers/tty/hvc/hvc_iucv.c 102 */[MAX_HVC_IUCV_LINES];
}
