cocci_test_suite() {
	const char *cocci_id/* net/9p/trans_xen.c 93 */;
	char *cocci_id/* net/9p/trans_xen.c 93 */;
	struct p9_req_t *cocci_id/* net/9p/trans_xen.c 88 */;
	struct p9_client *cocci_id/* net/9p/trans_xen.c 88 */;
	struct xen_9pfs_front_priv {
		struct list_head list;
		struct xenbus_device *dev;
		char *tag;
		struct p9_client *client;
		int num_rings;
		struct xen_9pfs_dataring *rings;
	} cocci_id/* net/9p/trans_xen.c 74 */;
	struct xen_9pfs_dataring {
		struct xen_9pfs_front_priv *priv;
		struct xen_9pfs_data_intf *intf;
		grant_ref_t ref;
		int evtchn;
		int irq;
		spinlock_t lock;
		struct xen_9pfs_data data;
		wait_queue_head_t wq;
		struct work_struct work;
	} cocci_id/* net/9p/trans_xen.c 58 */;
	void cocci_id/* net/9p/trans_xen.c 549 */;
	int cocci_id/* net/9p/trans_xen.c 531 */;
	struct xenbus_driver cocci_id/* net/9p/trans_xen.c 523 */;
	enum xenbus_state cocci_id/* net/9p/trans_xen.c 496 */;
	struct xen_9pfs_header {
		uint32_t size;
		uint8_t id;
		uint16_t tag;
	}__attribute__((packed)) cocci_id/* net/9p/trans_xen.c 49 */;
	char cocci_id/* net/9p/trans_xen.c 444 */[16];
	unsigned int cocci_id/* net/9p/trans_xen.c 392 */;
	struct xenbus_transaction cocci_id/* net/9p/trans_xen.c 389 */;
	const struct xenbus_device_id *cocci_id/* net/9p/trans_xen.c 386 */;
	struct xen_9pfs_data_intf *cocci_id/* net/9p/trans_xen.c 336 */;
	void *cocci_id/* net/9p/trans_xen.c 330 */;
	struct xenbus_device *cocci_id/* net/9p/trans_xen.c 325 */;
	grant_ref_t cocci_id/* net/9p/trans_xen.c 299 */;
	const struct xenbus_device_id cocci_id/* net/9p/trans_xen.c 279 */[];
	struct p9_trans_module cocci_id/* net/9p/trans_xen.c 268 */;
	irqreturn_t cocci_id/* net/9p/trans_xen.c 253 */;
	struct xen_9pfs_dataring cocci_id/* net/9p/trans_xen.c 202 */;
	struct xen_9pfs_header cocci_id/* net/9p/trans_xen.c 198 */;
	struct work_struct *cocci_id/* net/9p/trans_xen.c 193 */;
	struct xen_9pfs_dataring *cocci_id/* net/9p/trans_xen.c 145 */;
	u32 cocci_id/* net/9p/trans_xen.c 144 */;
	unsigned long cocci_id/* net/9p/trans_xen.c 143 */;
	RING_IDX cocci_id/* net/9p/trans_xen.c 142 */;
	bool cocci_id/* net/9p/trans_xen.c 127 */;
	struct xen_9pfs_front_priv *cocci_id/* net/9p/trans_xen.c 114 */;
}
