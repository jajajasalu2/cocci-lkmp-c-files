cocci_test_suite() {
	struct carm_fw_ver *cocci_id/* drivers/block/sx8.c 963 */;
	__le32 cocci_id/* drivers/block/sx8.c 906 */;
	unsigned long long cocci_id/* drivers/block/sx8.c 851 */;
	size_t cocci_id/* drivers/block/sx8.c 811 */;
	u64 cocci_id/* drivers/block/sx8.c 809 */;
	struct carm_array_info *cocci_id/* drivers/block/sx8.c 808 */;
	blk_status_t cocci_id/* drivers/block/sx8.c 804 */;
	u8 *cocci_id/* drivers/block/sx8.c 803 */;
	struct carm_msg_sg cocci_id/* drivers/block/sx8.c 772 */;
	struct carm_msg_sg *cocci_id/* drivers/block/sx8.c 769 */;
	struct carm_msg_rw cocci_id/* drivers/block/sx8.c 767 */;
	u16 cocci_id/* drivers/block/sx8.c 764 */;
	struct scatterlist *cocci_id/* drivers/block/sx8.c 711 */;
	struct carm_msg_rw *cocci_id/* drivers/block/sx8.c 710 */;
	const struct blk_mq_queue_data *cocci_id/* drivers/block/sx8.c 703 */;
	struct blk_mq_hw_ctx *cocci_id/* drivers/block/sx8.c 702 */;
	enum dma_data_direction cocci_id/* drivers/block/sx8.c 697 */;
	struct carm_fw_ver cocci_id/* drivers/block/sx8.c 660 */;
	struct carm_msg_get_fw_ver cocci_id/* drivers/block/sx8.c 659 */;
	struct carm_msg_get_fw_ver *cocci_id/* drivers/block/sx8.c 650 */;
	struct carm_msg_allocbuf cocci_id/* drivers/block/sx8.c 624 */;
	struct carm_msg_allocbuf *cocci_id/* drivers/block/sx8.c 605 */;
	void *cocci_id/* drivers/block/sx8.c 603 */;
	struct carm_msg_sync_time cocci_id/* drivers/block/sx8.c 599 */;
	time64_t cocci_id/* drivers/block/sx8.c 591 */;
	struct carm_msg_sync_time *cocci_id/* drivers/block/sx8.c 589 */;
	carm_sspc_t cocci_id/* drivers/block/sx8.c 555 */;
	unsigned int (*cocci_id/* drivers/block/sx8.c 553 */)(struct carm_host *,
							      unsigned int,
							      void *);
	u8 cocci_id/* drivers/block/sx8.c 532 */;
	struct carm_msg_ioctl cocci_id/* drivers/block/sx8.c 524 */;
	struct carm_array_info cocci_id/* drivers/block/sx8.c 520 */;
	struct request *cocci_id/* drivers/block/sx8.c 508 */;
	struct carm_request *cocci_id/* drivers/block/sx8.c 507 */;
	dma_addr_t cocci_id/* drivers/block/sx8.c 506 */;
	u32 cocci_id/* drivers/block/sx8.c 505 */;
	struct carm_msg_ioctl *cocci_id/* drivers/block/sx8.c 504 */;
	struct carm_host *cocci_id/* drivers/block/sx8.c 502 */;
	unsigned int cocci_id/* drivers/block/sx8.c 502 */;
	int cocci_id/* drivers/block/sx8.c 502 */;
	unsigned cocci_id/* drivers/block/sx8.c 474 */;
	const u32 cocci_id/* drivers/block/sx8.c 440 */[];
	struct carm_port *cocci_id/* drivers/block/sx8.c 432 */;
	struct hd_geometry *cocci_id/* drivers/block/sx8.c 430 */;
	struct block_device *cocci_id/* drivers/block/sx8.c 430 */;
	const struct block_device_operations cocci_id/* drivers/block/sx8.c 420 */;
	struct pci_driver cocci_id/* drivers/block/sx8.c 413 */;
	const struct pci_device_id cocci_id/* drivers/block/sx8.c 406 */[];
	int cocci_id/* drivers/block/sx8.c 404 */(struct block_device *bdev,
						  struct hd_geometry *geo);
	void cocci_id/* drivers/block/sx8.c 403 */(struct pci_dev *pdev);
	int cocci_id/* drivers/block/sx8.c 402 */(struct pci_dev *pdev,
						  const struct pci_device_id *ent);
	struct carm_array_info {
		__le32 size;
		__le16 size_hi;
		__le16 stripe_size;
		__le32 mode;
		__le16 stripe_blk_sz;
		__le16 reserved1;
		__le16 cyl;
		__le16 head;
		__le16 sect;
		u8 array_id;
		u8 reserved2;
		char name[40];
		__le32 array_status;
	}__attribute__((packed)) cocci_id/* drivers/block/sx8.c 377 */;
	struct carm_fw_ver {
		__le32 version;
		u8 features;
		u8 reserved1;
		u16 reserved2;
	}__attribute__((packed)) cocci_id/* drivers/block/sx8.c 370 */;
	struct carm_msg_get_fw_ver {
		u8 type;
		u8 subtype;
		u16 reserved1;
		__le32 handle;
		__le32 data_addr;
		u32 reserved2;
	}__attribute__((packed)) cocci_id/* drivers/block/sx8.c 361 */;
	struct carm_msg_sync_time {
		u8 type;
		u8 subtype;
		u16 reserved1;
		__le32 handle;
		u32 reserved2;
		__le32 timestamp;
	}__attribute__((packed)) cocci_id/* drivers/block/sx8.c 352 */;
	struct carm_msg_ioctl {
		u8 type;
		u8 subtype;
		u8 array_id;
		u8 reserved1;
		__le32 handle;
		__le32 data_addr;
		u32 reserved2;
	}__attribute__((packed)) cocci_id/* drivers/block/sx8.c 342 */;
	struct carm_msg_allocbuf {
		u8 type;
		u8 subtype;
		u8 n_sg;
		u8 sg_type;
		__le32 handle;
		__le32 addr;
		__le32 len;
		__le32 evt_pool;
		__le32 n_evt;
		__le32 rbuf_pool;
		__le32 n_rbuf;
		__le32 msg_pool;
		__le32 n_msg;
		struct carm_msg_sg sg[8];
	}__attribute__((packed)) cocci_id/* drivers/block/sx8.c 325 */;
	struct carm_msg_rw {
		u8 type;
		u8 id;
		u8 sg_count;
		u8 sg_type;
		__le32 handle;
		__le32 lba;
		__le16 lba_count;
		__le16 lba_high;
		struct carm_msg_sg sg[32];
	}__attribute__((packed)) cocci_id/* drivers/block/sx8.c 313 */;
	struct carm_msg_sg {
		__le32 start;
		__le32 len;
	}__attribute__((packed)) cocci_id/* drivers/block/sx8.c 308 */;
	struct carm_response {
		__le32 ret_handle;
		__le32 status;
	}__attribute__((packed)) cocci_id/* drivers/block/sx8.c 303 */;
	struct carm_host {
		unsigned long flags;
		void __iomem *mmio;
		void *shm;
		dma_addr_t shm_dma;
		int major;
		int id;
		char name[32];
		spinlock_t lock;
		struct pci_dev *pdev;
		unsigned int state;
		u32 fw_ver;
		struct blk_mq_tag_set tag_set;
		struct request_queue *oob_q;
		unsigned int n_oob;
		unsigned int hw_sg_used;
		unsigned int resp_idx;
		unsigned int wait_q_prod;
		unsigned int wait_q_cons;
		struct request_queue *wait_q[CARM_MAX_WAIT_Q];
		void *msg_base;
		dma_addr_t msg_dma;
		int cur_scan_dev;
		unsigned long dev_active;
		unsigned long dev_present;
		struct carm_port port[CARM_MAX_PORTS];
		struct work_struct fsm_task;
		struct completion probe_comp;
	} cocci_id/* drivers/block/sx8.c 263 */;
	struct carm_request {
		int n_elem;
		unsigned int msg_type;
		unsigned int msg_subtype;
		unsigned int msg_bucket;
		struct scatterlist sg[CARM_MAX_REQ_SG];
	} cocci_id/* drivers/block/sx8.c 255 */;
	struct carm_port {
		unsigned int port_no;
		struct gendisk *disk;
		struct carm_host *host;
		u64 capacity;
		char name[41];
		u16 dev_geom_head;
		u16 dev_geom_sect;
		u16 dev_geom_cyl;
	} cocci_id/* drivers/block/sx8.c 242 */;
	const char *cocci_id/* drivers/block/sx8.c 227 */[];
	enum host_states{HST_INVALID, HST_ALLOC_BUF, HST_ERROR, HST_PORT_SCAN, HST_DEV_SCAN_START, HST_DEV_SCAN, HST_DEV_ACTIVATE, HST_PROBE_FINISHED, HST_PROBE_START, HST_SYNC_TIME, HST_GET_FW_VER,} cocci_id/* drivers/block/sx8.c 212 */;
	enum scatter_gather_types{SGT_32BIT=0, SGT_64BIT=1,} cocci_id/* drivers/block/sx8.c 207 */;
	enum{CARM_SG_BOUNDARY=0xffffUL,} cocci_id/* drivers/block/sx8.c 203 */;
	struct carm_request cocci_id/* drivers/block/sx8.c 1461 */;
	const struct pci_device_id *cocci_id/* drivers/block/sx8.c 1406 */;
	struct pci_dev *cocci_id/* drivers/block/sx8.c 1406 */;
	struct gendisk *cocci_id/* drivers/block/sx8.c 1378 */;
	void cocci_id/* drivers/block/sx8.c 1375 */;
	struct request_queue *cocci_id/* drivers/block/sx8.c 1346 */;
	const struct blk_mq_ops cocci_id/* drivers/block/sx8.c 1338 */;
	unsigned long cocci_id/* drivers/block/sx8.c 1099 */;
	struct carm_host cocci_id/* drivers/block/sx8.c 1098 */;
	struct work_struct *cocci_id/* drivers/block/sx8.c 1095 */;
	enum{CARM_MAX_PORTS=8, CARM_SHM_SIZE=(4096 << 7), CARM_MINORS_PER_MAJOR=256 / CARM_MAX_PORTS, CARM_MAX_WAIT_Q=CARM_MAX_PORTS + 1, CARM_MAX_REQ=64, CARM_MSG_LOW_WATER=(CARM_MAX_REQ / 4), CARM_MAX_REQ_SG=32, CARM_MAX_HOST_SG=600, CARM_SG_LOW_WATER=(CARM_MAX_HOST_SG / 4), CARM_IHQP=0x1c, CARM_INT_STAT=0x10, CARM_INT_MASK=0x14, CARM_HMUC=0x18, RBUF_ADDR_LO=0x20, RBUF_ADDR_HI=0x24, RBUF_BYTE_SZ=0x28, CARM_RESP_IDX=0x2c, CARM_CMS0=0x30, CARM_LMUC=0x48, CARM_HMPHA=0x6c, CARM_INITC=0xb5, INT_RESERVED=0xfffffff0, INT_WATCHDOG=(1 << 3), INT_Q_OVERFLOW=(1 << 2), INT_Q_AVAILABLE=(1 << 1), INT_RESPONSE=(1 << 0), INT_ACK_MASK=INT_WATCHDOG | INT_Q_OVERFLOW, INT_DEF_MASK=INT_RESERVED | INT_Q_OVERFLOW | INT_RESPONSE, CARM_HAVE_RESP=0x01, CARM_MSG_READ=1, CARM_MSG_WRITE=2, CARM_MSG_VERIFY=3, CARM_MSG_GET_CAPACITY=4, CARM_MSG_FLUSH=5, CARM_MSG_IOCTL=6, CARM_MSG_ARRAY=8, CARM_MSG_MISC=9, CARM_CME=(1 << 2), CARM_RME=(1 << 1), CARM_WZBC=(1 << 0), CARM_RMI=(1 << 0), CARM_Q_FULL=(1 << 3), CARM_MSG_SIZE=288, CARM_Q_LEN=48, CARM_IOC_SCAN_CHAN=5, CARM_IOC_GET_TCQ=13, CARM_IOC_SET_TCQ=14, IOC_SCAN_CHAN_NODEV=0x1f, IOC_SCAN_CHAN_OFFSET=0x40, CARM_ARRAY_INFO=0, ARRAY_NO_EXIST=(1 << 31), RMSG_SZ=8, RMSG_Q_LEN=48, RMSG_OK=1, RBUF_LEN=RMSG_SZ * RMSG_Q_LEN, PDC_SHM_SIZE=(4096 << 7), MISC_GET_FW_VER=2, MISC_ALLOC_MEM=3, MISC_SET_TIME=5, FW_VER_4PORT=(1 << 2), FW_VER_NON_RAID=(1 << 1), FW_VER_ZCR=(1 << 0), FL_NON_RAID=FW_VER_NON_RAID, FL_4PORT=FW_VER_4PORT, FL_FW_VER_MASK=(FW_VER_NON_RAID | FW_VER_4PORT), FL_DYN_MAJOR=(1 << 17),} cocci_id/* drivers/block/sx8.c 106 */;
	irqreturn_t cocci_id/* drivers/block/sx8.c 1051 */;
	struct carm_response *cocci_id/* drivers/block/sx8.c 1014 */;
	void __iomem *cocci_id/* drivers/block/sx8.c 1013 */;
}
