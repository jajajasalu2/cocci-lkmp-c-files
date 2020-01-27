cocci_test_suite() {
	struct net_conf *cocci_id/* drivers/block/drbd/drbd_state.c 829 */;
	enum drbd_fencing_p cocci_id/* drivers/block/drbd/drbd_state.c 827 */;
	char *cocci_id/* drivers/block/drbd/drbd_state.c 803 */;
	char cocci_id/* drivers/block/drbd/drbd_state.c 802 */[300];
	void *cocci_id/* drivers/block/drbd/drbd_state.c 72 */;
	const char *cocci_id/* drivers/block/drbd/drbd_state.c 715 */;
	struct drbd_peer_device_state_change cocci_id/* drivers/block/drbd/drbd_state.c 66 */;
	struct drbd_connection_state_change cocci_id/* drivers/block/drbd/drbd_state.c 65 */;
	struct drbd_device *cocci_id/* drivers/block/drbd/drbd_state.c 649 */;
	struct drbd_device_state_change cocci_id/* drivers/block/drbd/drbd_state.c 64 */;
	struct drbd_state_change cocci_id/* drivers/block/drbd/drbd_state.c 63 */;
	gfp_t cocci_id/* drivers/block/drbd/drbd_state.c 58 */;
	unsigned int cocci_id/* drivers/block/drbd/drbd_state.c 58 */;
	struct completion cocci_id/* drivers/block/drbd/drbd_state.c 566 */;
	unsigned int *cocci_id/* drivers/block/drbd/drbd_state.c 42 */;
	enum drbd_disk_state cocci_id/* drivers/block/drbd/drbd_state.c 367 */;
	enum drbd_role cocci_id/* drivers/block/drbd/drbd_state.c 351 */;
	enum sanitize_state_warnings{NO_WARNING, ABORTED_ONLINE_VERIFY, ABORTED_RESYNC, CONNECTION_LOST_NEGOTIATING, IMPLICITLY_UPGRADED_DISK, IMPLICITLY_UPGRADED_PDSK,} cocci_id/* drivers/block/drbd/drbd_state.c 32 */;
	union drbd_state cocci_id/* drivers/block/drbd/drbd_state.c 286 */(struct drbd_device *device,
									   union drbd_state os,
									   union drbd_state ns,
									   enum sanitize_state_warnings *warn);
	enum drbd_state_rv cocci_id/* drivers/block/drbd/drbd_state.c 285 */(union drbd_state os,
									     union drbd_state ns);
	enum drbd_state_rv cocci_id/* drivers/block/drbd/drbd_state.c 284 */(union drbd_state,
									     union drbd_state,
									     struct drbd_connection *);
	enum drbd_state_rv cocci_id/* drivers/block/drbd/drbd_state.c 283 */(struct drbd_device *,
									     union drbd_state);
	void cocci_id/* drivers/block/drbd/drbd_state.c 280 */(struct drbd_device *device,
							       union drbd_state os,
							       union drbd_state ns,
							       enum chg_state_flags flags,
							       struct drbd_state_change *);
	int cocci_id/* drivers/block/drbd/drbd_state.c 279 */(struct drbd_work *w,
							      int unused);
	struct drbd_state_change *cocci_id/* drivers/block/drbd/drbd_state.c 2292 */;
	bool cocci_id/* drivers/block/drbd/drbd_state.c 2291 */;
	enum drbd_conns cocci_id/* drivers/block/drbd/drbd_state.c 2289 */;
	struct after_conn_state_chg_work *cocci_id/* drivers/block/drbd/drbd_state.c 2288 */;
	enum chg_state_flags cocci_id/* drivers/block/drbd/drbd_state.c 2285 */;
	union drbd_state cocci_id/* drivers/block/drbd/drbd_state.c 2284 */;
	struct drbd_connection *cocci_id/* drivers/block/drbd/drbd_state.c 2284 */;
	enum drbd_state_rv cocci_id/* drivers/block/drbd/drbd_state.c 2283 */;
	struct after_state_chg_work {
		struct drbd_work w;
		struct drbd_device *device;
		union drbd_state os;
		union drbd_state ns;
		enum chg_state_flags flags;
		struct completion *done;
		struct drbd_state_change *state_change;
	} cocci_id/* drivers/block/drbd/drbd_state.c 22 */;
	union drbd_state *cocci_id/* drivers/block/drbd/drbd_state.c 2104 */;
	enum chg_state_flags *cocci_id/* drivers/block/drbd/drbd_state.c 2104 */;
	struct after_conn_state_chg_work cocci_id/* drivers/block/drbd/drbd_state.c 2040 */;
	struct drbd_work *cocci_id/* drivers/block/drbd/drbd_state.c 2037 */;
	struct after_conn_state_chg_work {
		struct drbd_work w;
		enum drbd_conns oc;
		union drbd_state ns_min;
		union drbd_state ns_max;
		enum chg_state_flags flags;
		struct drbd_connection *connection;
		struct drbd_state_change *state_change;
	} cocci_id/* drivers/block/drbd/drbd_state.c 2027 */;
	enum drbd_io_error_p cocci_id/* drivers/block/drbd/drbd_state.c 1895 */;
	enum drbd_req_event cocci_id/* drivers/block/drbd/drbd_state.c 1733 */;
	u64 cocci_id/* drivers/block/drbd/drbd_state.c 1719 */;
	struct sib_info cocci_id/* drivers/block/drbd/drbd_state.c 1707 */;
	struct drbd_resource *cocci_id/* drivers/block/drbd/drbd_state.c 1704 */;
	struct drbd_peer_device_state_change *cocci_id/* drivers/block/drbd/drbd_state.c 1653 */;
	struct drbd_device_state_change *cocci_id/* drivers/block/drbd/drbd_state.c 1643 */;
	struct drbd_connection_state_change *cocci_id/* drivers/block/drbd/drbd_state.c 1633 */;
	void (*cocci_id/* drivers/block/drbd/drbd_state.c 1605 */)(struct sk_buff *,
								   unsigned int,
								   void *,
								   enum drbd_notification_type);
	struct drbd_resource_state_change *cocci_id/* drivers/block/drbd/drbd_state.c 1602 */;
	struct peer_device_info cocci_id/* drivers/block/drbd/drbd_state.c 1589 */;
	struct device_info cocci_id/* drivers/block/drbd/drbd_state.c 1576 */;
	struct connection_info cocci_id/* drivers/block/drbd/drbd_state.c 1562 */;
	enum drbd_notification_type cocci_id/* drivers/block/drbd/drbd_state.c 1559 */;
	struct sk_buff *cocci_id/* drivers/block/drbd/drbd_state.c 1556 */;
	struct resource_info cocci_id/* drivers/block/drbd/drbd_state.c 1546 */;
	enum bm_flag cocci_id/* drivers/block/drbd/drbd_state.c 1522 */;
	int (*cocci_id/* drivers/block/drbd/drbd_state.c 1521 */)(struct drbd_device *);
	void cocci_id/* drivers/block/drbd/drbd_state.c 1502 */;
	struct after_state_chg_work cocci_id/* drivers/block/drbd/drbd_state.c 1490 */;
	u32 cocci_id/* drivers/block/drbd/drbd_state.c 1411 */;
	int cocci_id/* drivers/block/drbd/drbd_state.c 1388 */;
	unsigned long cocci_id/* drivers/block/drbd/drbd_state.c 1387 */;
	long cocci_id/* drivers/block/drbd/drbd_state.c 1373 */;
	unsigned long long cocci_id/* drivers/block/drbd/drbd_state.c 1367 */;
	union drbd_dev_state cocci_id/* drivers/block/drbd/drbd_state.c 1341 */;
	struct after_state_chg_work *cocci_id/* drivers/block/drbd/drbd_state.c 1269 */;
	enum sanitize_state_warnings cocci_id/* drivers/block/drbd/drbd_state.c 1268 */;
	struct drbd_peer_device *cocci_id/* drivers/block/drbd/drbd_state.c 1264 */;
	struct completion *cocci_id/* drivers/block/drbd/drbd_state.c 1262 */;
	sector_t cocci_id/* drivers/block/drbd/drbd_state.c 1237 */;
	enum sanitize_state_warnings *cocci_id/* drivers/block/drbd/drbd_state.c 1053 */;
	const char *cocci_id/* drivers/block/drbd/drbd_state.c 1029 */[];
}
