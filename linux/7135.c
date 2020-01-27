cocci_test_suite() {
	struct socket *cocci_id/* drivers/xen/pvcalls-front.c 99 */;
	poll_table *cocci_id/* drivers/xen/pvcalls-front.c 979 */;
	__poll_t cocci_id/* drivers/xen/pvcalls-front.c 978 */;
	struct file *cocci_id/* drivers/xen/pvcalls-front.c 978 */;
	uint32_t cocci_id/* drivers/xen/pvcalls-front.c 908 */;
	uintptr_t cocci_id/* drivers/xen/pvcalls-front.c 847 */;
	struct xen_pvcalls_request *cocci_id/* drivers/xen/pvcalls-front.c 767 */;
	struct sockaddr *cocci_id/* drivers/xen/pvcalls-front.c 660 */;
	struct msghdr *cocci_id/* drivers/xen/pvcalls-front.c 624 */;
	int32_t cocci_id/* drivers/xen/pvcalls-front.c 582 */;
	RING_IDX cocci_id/* drivers/xen/pvcalls-front.c 580 */;
	size_t cocci_id/* drivers/xen/pvcalls-front.c 578 */;
	struct iov_iter *cocci_id/* drivers/xen/pvcalls-front.c 577 */;
	struct pvcalls_data *cocci_id/* drivers/xen/pvcalls-front.c 576 */;
	struct pvcalls_data_intf *cocci_id/* drivers/xen/pvcalls-front.c 575 */;
	int cocci_id/* drivers/xen/pvcalls-front.c 575 */;
	struct sock_mapping {
		bool active_socket;
		struct list_head list;
		struct socket *sock;
		atomic_t refcount;
		union {
			struct {
				int irq;
				grant_ref_t ref;
				struct pvcalls_data_intf *ring;
				struct pvcalls_data data;
				struct mutex in_mutex;
				struct mutex out_mutex;
				wait_queue_head_t inflight_conn_req;
			} active;
			struct {
#define PVCALLS_STATUS_UNINITALIZED 0
#define PVCALLS_STATUS_BIND 1
#define PVCALLS_STATUS_LISTEN 2
				uint8_t status __attribute__((aligned(8)));
#define PVCALLS_FLAG_ACCEPT_INFLIGHT 0
#define PVCALLS_FLAG_POLL_INFLIGHT 1
#define PVCALLS_FLAG_POLL_RET 2
				uint8_t flags __attribute__((aligned(8)));
				uint32_t inflight_req_id;
				struct sock_mapping *accept_map;
				wait_queue_head_t inflight_accept_req;
			} passive;
		};
	} cocci_id/* drivers/xen/pvcalls-front.c 56 */;
	atomic_t cocci_id/* drivers/xen/pvcalls-front.c 44 */;
	int *cocci_id/* drivers/xen/pvcalls-front.c 371 */;
	void *cocci_id/* drivers/xen/pvcalls-front.c 347 */;
	struct sock_mapping *cocci_id/* drivers/xen/pvcalls-front.c 345 */;
	unsigned long cocci_id/* drivers/xen/pvcalls-front.c 340 */;
	void cocci_id/* drivers/xen/pvcalls-front.c 335 */;
	struct pvcalls_bedata {
		struct xen_pvcalls_front_ring ring;
		grant_ref_t ref;
		int irq;
		struct list_head socket_mappings;
		spinlock_t socket_lock;
		wait_queue_head_t inflight_req;
		struct xen_pvcalls_response rsp[PVCALLS_NR_RSP_PER_RING];
	} cocci_id/* drivers/xen/pvcalls-front.c 31 */;
	struct sock cocci_id/* drivers/xen/pvcalls-front.c 28 */;
	struct proto cocci_id/* drivers/xen/pvcalls-front.c 25 */;
	irqreturn_t cocci_id/* drivers/xen/pvcalls-front.c 248 */;
	uint8_t *cocci_id/* drivers/xen/pvcalls-front.c 170 */;
	struct xen_pvcalls_response *cocci_id/* drivers/xen/pvcalls-front.c 169 */;
	bool cocci_id/* drivers/xen/pvcalls-front.c 151 */;
	int __init cocci_id/* drivers/xen/pvcalls-front.c 1277 */;
	struct xenbus_driver cocci_id/* drivers/xen/pvcalls-front.c 1270 */;
	struct pvcalls_bedata *cocci_id/* drivers/xen/pvcalls-front.c 125 */;
	enum xenbus_state cocci_id/* drivers/xen/pvcalls-front.c 1242 */;
	struct xenbus_device *cocci_id/* drivers/xen/pvcalls-front.c 1241 */;
	struct pvcalls_bedata cocci_id/* drivers/xen/pvcalls-front.c 1162 */;
	struct xen_pvcalls_sring *cocci_id/* drivers/xen/pvcalls-front.c 1134 */;
	struct xenbus_transaction cocci_id/* drivers/xen/pvcalls-front.c 1132 */;
	grant_ref_t cocci_id/* drivers/xen/pvcalls-front.c 1131 */;
	char *cocci_id/* drivers/xen/pvcalls-front.c 1130 */;
	unsigned int cocci_id/* drivers/xen/pvcalls-front.c 1129 */;
	const struct xenbus_device_id *cocci_id/* drivers/xen/pvcalls-front.c 1126 */;
	const struct xenbus_device_id cocci_id/* drivers/xen/pvcalls-front.c 1081 */[];
}
