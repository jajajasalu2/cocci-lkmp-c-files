cocci_test_suite() {
	enum rio_cm_state{RIO_CM_IDLE, RIO_CM_CONNECT, RIO_CM_CONNECTED, RIO_CM_DISCONNECT, RIO_CM_CHAN_BOUND, RIO_CM_LISTEN, RIO_CM_DESTROYING,} cocci_id/* drivers/rapidio/rio_cm.c 97 */;
	void **cocci_id/* drivers/rapidio/rio_cm.c 866 */;
	size_t cocci_id/* drivers/rapidio/rio_cm.c 734 */;
	int cocci_id/* drivers/rapidio/rio_cm.c 73 */;
	struct tx_req *cocci_id/* drivers/rapidio/rio_cm.c 672 */;
	struct cm_dev cocci_id/* drivers/rapidio/rio_cm.c 582 */;
	struct work_struct *cocci_id/* drivers/rapidio/rio_cm.c 580 */;
	struct rio_ch_chan_hdr *cocci_id/* drivers/rapidio/rio_cm.c 488 */;
	void cocci_id/* drivers/rapidio/rio_cm.c 486 */;
	enum{DBG_NONE=0, DBG_INIT=BIT(0), DBG_EXIT=BIT(1), DBG_MPORT=BIT(2), DBG_RDEV=BIT(3), DBG_CHOP=BIT(4), DBG_WAIT=BIT(5), DBG_TX=BIT(6), DBG_TX_EVENT=BIT(7), DBG_RX_DATA=BIT(8), DBG_RX_CMD=BIT(9), DBG_ALL=~0,} cocci_id/* drivers/rapidio/rio_cm.c 35 */;
	struct channel_dev cocci_id/* drivers/rapidio/rio_cm.c 240 */;
	dev_t cocci_id/* drivers/rapidio/rio_cm.c 239 */;
	unsigned int cocci_id/* drivers/rapidio/rio_cm.c 237 */;
	void __exit cocci_id/* drivers/rapidio/rio_cm.c 2361 */;
	struct class *cocci_id/* drivers/rapidio/rio_cm.c 236 */;
	int __init cocci_id/* drivers/rapidio/rio_cm.c 2296 */;
	struct notifier_block cocci_id/* drivers/rapidio/rio_cm.c 2292 */;
	struct class_interface cocci_id/* drivers/rapidio/rio_cm.c 2286 */;
	int cocci_id/* drivers/rapidio/rio_cm.c 228 */(struct rio_channel *ch);
	struct subsys_interface cocci_id/* drivers/rapidio/rio_cm.c 2276 */;
	int cocci_id/* drivers/rapidio/rio_cm.c 226 */(struct cm_dev *cm,
						       struct rio_dev *rdev,
						       void *buffer,
						       size_t len);
	void cocci_id/* drivers/rapidio/rio_cm.c 225 */(struct kref *ref);
	struct notifier_block *cocci_id/* drivers/rapidio/rio_cm.c 2241 */;
	unsigned long cocci_id/* drivers/rapidio/rio_cm.c 2241 */;
	struct rio_channel *cocci_id/* drivers/rapidio/rio_cm.c 224 */(u16 ch_num);
	struct channel_dev {
		struct cdev cdev;
		struct device *dev;
	} cocci_id/* drivers/rapidio/rio_cm.c 219 */;
	struct rio_mport *cocci_id/* drivers/rapidio/rio_cm.c 2101 */;
	struct class_interface *cocci_id/* drivers/rapidio/rio_cm.c 2096 */;
	struct conn_req {
		struct list_head node;
		u32 destid;
		u16 chan;
		struct cm_dev *cmdev;
	} cocci_id/* drivers/rapidio/rio_cm.c 207 */;
	struct rio_cm_work {
		struct work_struct work;
		struct cm_dev *cm;
		void *data;
	} cocci_id/* drivers/rapidio/rio_cm.c 201 */;
	bool cocci_id/* drivers/rapidio/rio_cm.c 1995 */;
	struct cm_peer {
		struct list_head node;
		struct rio_dev *rdev;
	} cocci_id/* drivers/rapidio/rio_cm.c 196 */;
	struct rio_dev *cocci_id/* drivers/rapidio/rio_cm.c 1947 */;
	struct subsys_interface *cocci_id/* drivers/rapidio/rio_cm.c 1944 */;
	struct device *cocci_id/* drivers/rapidio/rio_cm.c 1944 */;
	const struct file_operations cocci_id/* drivers/rapidio/rio_cm.c 1929 */;
	uintptr_t cocci_id/* drivers/rapidio/rio_cm.c 1884 */;
	void *cocci_id/* drivers/rapidio/rio_cm.c 1862 */;
	struct rio_cm_msg cocci_id/* drivers/rapidio/rio_cm.c 1860 */;
	struct cm_peer *cocci_id/* drivers/rapidio/rio_cm.c 1782 */;
	struct cm_dev *cocci_id/* drivers/rapidio/rio_cm.c 1781 */;
	struct rio_channel {
		u16 id;
		struct kref ref;
		struct file *filp;
		struct cm_dev *cmdev;
		struct rio_dev *rdev;
		enum rio_cm_state state;
		int error;
		spinlock_t lock;
		void *context;
		u32 loc_destid;
		u32 rem_destid;
		u16 rem_channel;
		struct list_head accept_queue;
		struct list_head ch_node;
		struct completion comp;
		struct completion comp_close;
		struct chan_rx_ring rx_ring;
	} cocci_id/* drivers/rapidio/rio_cm.c 176 */;
	struct rio_channel *cocci_id/* drivers/rapidio/rio_cm.c 1750 */;
	long cocci_id/* drivers/rapidio/rio_cm.c 1749 */;
	struct rio_cm_accept cocci_id/* drivers/rapidio/rio_cm.c 1748 */;
	struct file *cocci_id/* drivers/rapidio/rio_cm.c 1746 */;
	void __user *cocci_id/* drivers/rapidio/rio_cm.c 1746 */;
	struct rio_cm_channel cocci_id/* drivers/rapidio/rio_cm.c 1716 */;
	u16 cocci_id/* drivers/rapidio/rio_cm.c 1685 */;
	u16 __user *cocci_id/* drivers/rapidio/rio_cm.c 1684 */;
	struct chan_rx_ring {
		void *buf[RIOCM_RX_RING_SIZE];
		int head;
		int tail;
		int count;
		void *inuse[RIOCM_RX_RING_SIZE];
		int inuse_cnt;
	} cocci_id/* drivers/rapidio/rio_cm.c 165 */;
	u8 cocci_id/* drivers/rapidio/rio_cm.c 1580 */;
	u32 *cocci_id/* drivers/rapidio/rio_cm.c 1567 */;
	u32 cocci_id/* drivers/rapidio/rio_cm.c 1566 */;
	u32 cocci_id/* drivers/rapidio/rio_cm.c 1564 */[2];
	u32 __user *cocci_id/* drivers/rapidio/rio_cm.c 1531 */;
	struct inode *cocci_id/* drivers/rapidio/rio_cm.c 1480 */;
	struct cm_dev {
		struct list_head list;
		struct rio_mport *mport;
		void *rx_buf[RIOCM_RX_RING_SIZE];
		int rx_slots;
		struct mutex rx_lock;
		void *tx_buf[RIOCM_TX_RING_SIZE];
		int tx_slot;
		int tx_cnt;
		int tx_ack_slot;
		struct list_head tx_reqs;
		spinlock_t tx_lock;
		struct list_head peers;
		u32 npeers;
		struct workqueue_struct *rx_wq;
		struct work_struct rx_work;
	} cocci_id/* drivers/rapidio/rio_cm.c 145 */;
	enum rio_cm_state cocci_id/* drivers/rapidio/rio_cm.c 1437 */;
	struct tx_req {
		struct list_head node;
		struct rio_dev *rdev;
		void *buffer;
		size_t len;
	} cocci_id/* drivers/rapidio/rio_cm.c 138 */;
	struct rio_channel cocci_id/* drivers/rapidio/rio_cm.c 1365 */;
	struct kref *cocci_id/* drivers/rapidio/rio_cm.c 1363 */;
	struct rio_ch_chan_hdr {
		struct rio_ch_base_bhdr bhdr;
		u8 ch_op;
		u16 dst_ch;
		u16 src_ch;
		u16 msg_len;
		u16 rsrvd;
	}__attribute__((__packed__)) cocci_id/* drivers/rapidio/rio_cm.c 129 */;
	struct rio_ch_base_bhdr {
		u32 src_id;
		u32 dst_id;
#define RIO_HDR_LETTER_MASK 0xffff0000
#define RIO_HDR_MBOX_MASK 0x0000ffff
		u8 src_mbox;
		u8 dst_mbox;
		u8 type;
	}__attribute__((__packed__)) cocci_id/* drivers/rapidio/rio_cm.c 119 */;
	struct conn_req cocci_id/* drivers/rapidio/rio_cm.c 1140 */;
	enum rio_cm_chop{CM_CONN_REQ, CM_CONN_ACK, CM_CONN_CLOSE, CM_DATA_MSG,} cocci_id/* drivers/rapidio/rio_cm.c 112 */;
	struct conn_req *cocci_id/* drivers/rapidio/rio_cm.c 1076 */;
	u16 *cocci_id/* drivers/rapidio/rio_cm.c 1071 */;
	enum rio_cm_pkt_type{RIO_CM_SYS=0xaa, RIO_CM_CHAN=0x55,} cocci_id/* drivers/rapidio/rio_cm.c 107 */;
}
