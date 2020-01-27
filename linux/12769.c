cocci_test_suite() {
	struct glink_msg cocci_id/* drivers/rpmsg/qcom_glink_native.c 981 */;
	irqreturn_t cocci_id/* drivers/rpmsg/qcom_glink_native.c 978 */;
	struct qcom_glink {
		struct device *dev;
		const char *name;
		struct mbox_client mbox_client;
		struct mbox_chan *mbox_chan;
		struct qcom_glink_pipe *rx_pipe;
		struct qcom_glink_pipe *tx_pipe;
		int irq;
		struct work_struct rx_work;
		spinlock_t rx_lock;
		struct list_head rx_queue;
		spinlock_t tx_lock;
		spinlock_t idr_lock;
		struct idr lcids;
		struct idr rcids;
		unsigned long features;
		bool intentless;
	} cocci_id/* drivers/rpmsg/qcom_glink_native.c 96 */;
	const size_t cocci_id/* drivers/rpmsg/qcom_glink_native.c 916 */;
	struct {
		struct glink_msg msg;
		struct intent_pair intents[];
	}__packed *cocci_id/* drivers/rpmsg/qcom_glink_native.c 911 */;
	struct intent_pair {
		__le32 size;
		__le32 iid;
	} cocci_id/* drivers/rpmsg/qcom_glink_native.c 906 */;
	unsigned int cocci_id/* drivers/rpmsg/qcom_glink_native.c 900 */;
	uint32_t cocci_id/* drivers/rpmsg/qcom_glink_native.c 691 */;
	struct glink_core_rx_intent {
		void *data;
		u32 id;
		size_t size;
		bool reuse;
		bool in_use;
		u32 offset;
		struct list_head node;
	} cocci_id/* drivers/rpmsg/qcom_glink_native.c 67 */;
	size_t cocci_id/* drivers/rpmsg/qcom_glink_native.c 654 */;
	struct command cocci_id/* drivers/rpmsg/qcom_glink_native.c 638 */;
	struct command {
		__le16 id;
		__le16 lcid;
		__le32 count;
		__le32 size;
		__le32 liid;
	}__packed cocci_id/* drivers/rpmsg/qcom_glink_native.c 631 */;
	struct glink_defer_cmd {
		struct list_head node;
		struct glink_msg msg;
		u8 data[];
	} cocci_id/* drivers/rpmsg/qcom_glink_native.c 48 */;
	struct {
		u16 id;
		u16 lcid;
		u32 liid;
	}__packed cocci_id/* drivers/rpmsg/qcom_glink_native.c 479 */;
	struct work_struct *cocci_id/* drivers/rpmsg/qcom_glink_native.c 473 */;
	struct {
		struct glink_msg msg;
		u8 name[GLINK_NAME_SIZE];
	}__packed cocci_id/* drivers/rpmsg/qcom_glink_native.c 408 */;
	struct glink_msg {
		__le16 cmd;
		__le16 param1;
		__le32 param2;
		u8 data[];
	}__packed cocci_id/* drivers/rpmsg/qcom_glink_native.c 32 */;
	const void *cocci_id/* drivers/rpmsg/qcom_glink_native.c 305 */;
	struct glink_channel cocci_id/* drivers/rpmsg/qcom_glink_native.c 242 */;
	struct kref *cocci_id/* drivers/rpmsg/qcom_glink_native.c 240 */;
	const char *cocci_id/* drivers/rpmsg/qcom_glink_native.c 210 */;
	void cocci_id/* drivers/rpmsg/qcom_glink_native.c 207 */(struct work_struct *work);
	const struct rpmsg_endpoint_ops cocci_id/* drivers/rpmsg/qcom_glink_native.c 188 */;
	struct qcom_glink_pipe *cocci_id/* drivers/rpmsg/qcom_glink_native.c 1579 */;
	struct device *cocci_id/* drivers/rpmsg/qcom_glink_native.c 1577 */;
	struct glink_defer_cmd *cocci_id/* drivers/rpmsg/qcom_glink_native.c 1567 */;
	void cocci_id/* drivers/rpmsg/qcom_glink_native.c 1565 */;
	struct glink_channel {
		struct rpmsg_endpoint ept;
		struct rpmsg_device *rpdev;
		struct qcom_glink *glink;
		struct kref refcount;
		spinlock_t recv_lock;
		char *name;
		unsigned int lcid;
		unsigned int rcid;
		spinlock_t intent_lock;
		struct idr liids;
		struct idr riids;
		struct work_struct intent_work;
		struct list_head done_intents;
		struct glink_core_rx_intent *buf;
		int buf_offset;
		int buf_size;
		struct completion open_ack;
		struct completion open_req;
		struct mutex intent_req_lock;
		bool intent_req_result;
		struct completion intent_req_comp;
	} cocci_id/* drivers/rpmsg/qcom_glink_native.c 154 */;
	struct glink_defer_cmd cocci_id/* drivers/rpmsg/qcom_glink_native.c 1528 */;
	struct glink_msg *cocci_id/* drivers/rpmsg/qcom_glink_native.c 1515 */;
	struct qcom_glink cocci_id/* drivers/rpmsg/qcom_glink_native.c 1512 */;
	char *cocci_id/* drivers/rpmsg/qcom_glink_native.c 1380 */;
	const struct rpmsg_device_ops cocci_id/* drivers/rpmsg/qcom_glink_native.c 1359 */;
	unsigned long cocci_id/* drivers/rpmsg/qcom_glink_native.c 1272 */;
	struct {
		struct glink_msg msg;
		__le32 chunk_size;
		__le32 left_size;
	}__packed cocci_id/* drivers/rpmsg/qcom_glink_native.c 1266 */;
	struct glink_core_rx_intent *cocci_id/* drivers/rpmsg/qcom_glink_native.c 1263 */;
	struct qcom_glink *cocci_id/* drivers/rpmsg/qcom_glink_native.c 1262 */;
	bool cocci_id/* drivers/rpmsg/qcom_glink_native.c 1260 */;
	void *cocci_id/* drivers/rpmsg/qcom_glink_native.c 1260 */;
	struct glink_channel *cocci_id/* drivers/rpmsg/qcom_glink_native.c 1259 */;
	int cocci_id/* drivers/rpmsg/qcom_glink_native.c 1259 */;
	enum{GLINK_STATE_CLOSED, GLINK_STATE_OPENING, GLINK_STATE_OPEN, GLINK_STATE_CLOSING,} cocci_id/* drivers/rpmsg/qcom_glink_native.c 123 */;
	struct {
		u16 id;
		u16 cid;
		u32 size;
	}__packed cocci_id/* drivers/rpmsg/qcom_glink_native.c 1226 */;
	u32 cocci_id/* drivers/rpmsg/qcom_glink_native.c 1187 */;
	__be32 *cocci_id/* drivers/rpmsg/qcom_glink_native.c 1178 */;
	__be32 cocci_id/* drivers/rpmsg/qcom_glink_native.c 1175 */[];
	const struct property *cocci_id/* drivers/rpmsg/qcom_glink_native.c 1174 */;
	struct device_node *cocci_id/* drivers/rpmsg/qcom_glink_native.c 1171 */;
	struct rpmsg_device *cocci_id/* drivers/rpmsg/qcom_glink_native.c 1168 */;
	struct rpmsg_channel_info cocci_id/* drivers/rpmsg/qcom_glink_native.c 1130 */;
	rpmsg_rx_cb_t cocci_id/* drivers/rpmsg/qcom_glink_native.c 1128 */;
	struct rpmsg_endpoint *cocci_id/* drivers/rpmsg/qcom_glink_native.c 1127 */;
}
