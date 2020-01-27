cocci_test_suite() {
	unsigned int cocci_id/* drivers/infiniband/core/cache.c 895 */;
	struct ib_gid_table_entry {
		struct kref kref;
		struct work_struct del_work;
		struct ib_gid_attr attr;
		void *context;
		struct roce_gid_ndev_storage *ndev_storage;
		enum gid_table_entry_state state;
	} cocci_id/* drivers/infiniband/core/cache.c 86 */;
	union ib_gid cocci_id/* drivers/infiniband/core/cache.c 839 */;
	enum ib_cache_gid_default_mode cocci_id/* drivers/infiniband/core/cache.c 837 */;
	void cocci_id/* drivers/infiniband/core/cache.c 818 */;
	struct roce_gid_ndev_storage {
		struct rcu_head rcu_head;
		struct net_device *ndev;
	} cocci_id/* drivers/infiniband/core/cache.c 81 */;
	bool (*cocci_id/* drivers/infiniband/core/cache.c 735 */)(const union ib_gid *gid,
								  const struct ib_gid_attr *,
								  void *);
	enum gid_table_entry_state{GID_TABLE_ENTRY_INVALID=1, GID_TABLE_ENTRY_VALID=2, GID_TABLE_ENTRY_PENDING_DEL=3,} cocci_id/* drivers/infiniband/core/cache.c 69 */;
	enum gid_attr_find_mask{GID_ATTR_FIND_MASK_GID=1UL << 0, GID_ATTR_FIND_MASK_NETDEV=1UL << 1, GID_ATTR_FIND_MASK_DEFAULT=1UL << 2, GID_ATTR_FIND_MASK_GID_TYPE=1UL << 3,} cocci_id/* drivers/infiniband/core/cache.c 62 */;
	struct ib_gid_table *cocci_id/* drivers/infiniband/core/cache.c 547 */;
	bool cocci_id/* drivers/infiniband/core/cache.c 545 */;
	unsigned long cocci_id/* drivers/infiniband/core/cache.c 545 */;
	union ib_gid *cocci_id/* drivers/infiniband/core/cache.c 544 */;
	struct ib_gid_attr *cocci_id/* drivers/infiniband/core/cache.c 544 */;
	u8 cocci_id/* drivers/infiniband/core/cache.c 543 */;
	struct ib_device *cocci_id/* drivers/infiniband/core/cache.c 543 */;
	int cocci_id/* drivers/infiniband/core/cache.c 543 */;
	struct ib_update_work {
		struct work_struct work;
		struct ib_device *device;
		u8 port_num;
		bool enforce_security;
	} cocci_id/* drivers/infiniband/core/cache.c 52 */;
	struct ib_pkey_cache {
		int table_len;
		u16 table[0];
	} cocci_id/* drivers/infiniband/core/cache.c 47 */;
	int *cocci_id/* drivers/infiniband/core/cache.c 465 */;
	const union ib_gid *cocci_id/* drivers/infiniband/core/cache.c 463 */;
	struct ib_gid_table_entry *cocci_id/* drivers/infiniband/core/cache.c 426 */;
	const struct ib_gid_attr *cocci_id/* drivers/infiniband/core/cache.c 424 */;
	struct roce_gid_ndev_storage *cocci_id/* drivers/infiniband/core/cache.c 382 */;
	struct net_device *cocci_id/* drivers/infiniband/core/cache.c 294 */;
	struct work_struct *cocci_id/* drivers/infiniband/core/cache.c 277 */;
	struct ib_gid_table_entry cocci_id/* drivers/infiniband/core/cache.c 264 */;
	struct kref *cocci_id/* drivers/infiniband/core/cache.c 261 */;
	struct roce_gid_ndev_storage cocci_id/* drivers/infiniband/core/cache.c 223 */;
	struct rcu_head *cocci_id/* drivers/infiniband/core/cache.c 220 */;
	const struct ib_gid_table_entry *cocci_id/* drivers/infiniband/core/cache.c 202 */;
	size_t cocci_id/* drivers/infiniband/core/cache.c 176 */;
	const char *cocci_id/* drivers/infiniband/core/cache.c 173 */;
	const struct ib_gid_table *cocci_id/* drivers/infiniband/core/cache.c 167 */;
	struct ib_update_work *cocci_id/* drivers/infiniband/core/cache.c 1470 */;
	struct ib_event *cocci_id/* drivers/infiniband/core/cache.c 1468 */;
	struct ib_event_handler *cocci_id/* drivers/infiniband/core/cache.c 1467 */;
	struct ib_update_work cocci_id/* drivers/infiniband/core/cache.c 1459 */;
	enum ib_gid_type cocci_id/* drivers/infiniband/core/cache.c 141 */;
	struct ib_pkey_cache *cocci_id/* drivers/infiniband/core/cache.c 1389 */;
	struct ib_port_attr *cocci_id/* drivers/infiniband/core/cache.c 1388 */;
	const char *constcocci_id/* drivers/infiniband/core/cache.c 136 */[];
	struct ib_gid_attr cocci_id/* drivers/infiniband/core/cache.c 1356 */;
	u16 *cocci_id/* drivers/infiniband/core/cache.c 1299 */;
	void *cocci_id/* drivers/infiniband/core/cache.c 1297 */;
	struct ib_event cocci_id/* drivers/infiniband/core/cache.c 127 */;
	enum ib_port_state *cocci_id/* drivers/infiniband/core/cache.c 1162 */;
	u8 *cocci_id/* drivers/infiniband/core/cache.c 1144 */;
	u16 cocci_id/* drivers/infiniband/core/cache.c 1071 */;
	u64 *cocci_id/* drivers/infiniband/core/cache.c 1054 */;
	struct ib_gid_table {
		int sz;
		struct mutex lock;
		rwlock_t rwlock;
		struct ib_gid_table_entry **data_vec;
		u32 default_gid_indices;
	} cocci_id/* drivers/infiniband/core/cache.c 100 */;
}
