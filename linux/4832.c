cocci_test_suite() {
	struct mcast_group {
		struct ib_sa_mcmember_rec rec;
		struct rb_node node;
		struct mcast_port *port;
		spinlock_t lock;
		struct work_struct work;
		struct list_head pending_list;
		struct list_head active_list;
		struct mcast_member *last_join;
		int members[NUM_JOIN_MEMBERSHIP_TYPES];
		atomic_t refcount;
		enum mcast_group_state state;
		struct ib_sa_query *query;
		u16 pkey_index;
		u8 leave_state;
		int retries;
	} cocci_id/* drivers/infiniband/core/multicast.c 96 */;
	enum{MCAST_INVALID_PKEY_INDEX=0xFFFF,} cocci_id/* drivers/infiniband/core/multicast.c 90 */;
	enum mcast_group_state{MCAST_IDLE, MCAST_BUSY, MCAST_GROUP_ERROR, MCAST_PKEY_EVENT,} cocci_id/* drivers/infiniband/core/multicast.c 83 */;
	struct mcast_device cocci_id/* drivers/infiniband/core/multicast.c 798 */;
	struct ib_event *cocci_id/* drivers/infiniband/core/multicast.c 793 */;
	struct ib_event_handler *cocci_id/* drivers/infiniband/core/multicast.c 792 */;
	enum mcast_group_state cocci_id/* drivers/infiniband/core/multicast.c 771 */;
	enum mcast_state{MCAST_JOINING, MCAST_MEMBER, MCAST_ERROR,} cocci_id/* drivers/infiniband/core/multicast.c 77 */;
	const struct ib_gid_attr *cocci_id/* drivers/infiniband/core/multicast.c 740 */;
	struct rdma_ah_attr *cocci_id/* drivers/infiniband/core/multicast.c 738 */;
	enum ib_gid_type cocci_id/* drivers/infiniband/core/multicast.c 737 */;
	struct net_device *cocci_id/* drivers/infiniband/core/multicast.c 736 */;
	struct ib_device *cocci_id/* drivers/infiniband/core/multicast.c 734 */;
	struct mcast_device *cocci_id/* drivers/infiniband/core/multicast.c 696 */;
	struct mcast_device {
		struct ib_device *device;
		struct ib_event_handler event_handler;
		int start_port;
		int end_port;
		struct mcast_port port[0];
	} cocci_id/* drivers/infiniband/core/multicast.c 69 */;
	struct mcast_member cocci_id/* drivers/infiniband/core/multicast.c 667 */;
	struct ib_sa_multicast *cocci_id/* drivers/infiniband/core/multicast.c 662 */;
	void *cocci_id/* drivers/infiniband/core/multicast.c 613 */;
	int (*cocci_id/* drivers/infiniband/core/multicast.c 611 */)(int status,
								     struct ib_sa_multicast *multicast);
	struct ib_sa_client *cocci_id/* drivers/infiniband/core/multicast.c 607 */;
	struct mcast_port {
		struct mcast_device *dev;
		spinlock_t lock;
		struct rb_root table;
		atomic_t refcount;
		struct completion comp;
		u8 port_num;
	} cocci_id/* drivers/infiniband/core/multicast.c 60 */;
	int cocci_id/* drivers/infiniband/core/multicast.c 562 */;
	unsigned long cocci_id/* drivers/infiniband/core/multicast.c 561 */;
	union ib_gid cocci_id/* drivers/infiniband/core/multicast.c 56 */;
	gfp_t cocci_id/* drivers/infiniband/core/multicast.c 558 */;
	union ib_gid *cocci_id/* drivers/infiniband/core/multicast.c 558 */;
	struct mcast_port *cocci_id/* drivers/infiniband/core/multicast.c 557 */;
	struct mcast_group *cocci_id/* drivers/infiniband/core/multicast.c 557 */;
	struct workqueue_struct *cocci_id/* drivers/infiniband/core/multicast.c 55 */;
	struct ib_sa_client cocci_id/* drivers/infiniband/core/multicast.c 54 */;
	u16 cocci_id/* drivers/infiniband/core/multicast.c 515 */;
	struct ib_client cocci_id/* drivers/infiniband/core/multicast.c 48 */;
	void cocci_id/* drivers/infiniband/core/multicast.c 46 */(struct ib_device *device,
								  void *client_data);
	void cocci_id/* drivers/infiniband/core/multicast.c 45 */(struct ib_device *device);
	typeof(*group) cocci_id/* drivers/infiniband/core/multicast.c 432 */;
	struct work_struct *cocci_id/* drivers/infiniband/core/multicast.c 424 */;
	struct ib_sa_mcmember_rec cocci_id/* drivers/infiniband/core/multicast.c 348 */;
	struct ib_sa_mcmember_rec *cocci_id/* drivers/infiniband/core/multicast.c 283 */;
	ib_sa_comp_mask cocci_id/* drivers/infiniband/core/multicast.c 255 */;
	u8 cocci_id/* drivers/infiniband/core/multicast.c 228 */;
	void cocci_id/* drivers/infiniband/core/multicast.c 228 */;
	struct mcast_member *cocci_id/* drivers/infiniband/core/multicast.c 200 */;
	struct rb_node **cocci_id/* drivers/infiniband/core/multicast.c 154 */;
	struct mcast_group cocci_id/* drivers/infiniband/core/multicast.c 137 */;
	struct rb_node *cocci_id/* drivers/infiniband/core/multicast.c 132 */;
	void cocci_id/* drivers/infiniband/core/multicast.c 124 */(int status,
								   struct ib_sa_mcmember_rec *rec,
								   void *context);
	struct mcast_member {
		struct ib_sa_multicast multicast;
		struct ib_sa_client *client;
		struct mcast_group *group;
		struct list_head list;
		enum mcast_state state;
		atomic_t refcount;
		struct completion comp;
	} cocci_id/* drivers/infiniband/core/multicast.c 114 */;
}
