cocci_test_suite() {
	struct pvcalls_data *cocci_id/* drivers/xen/pvcalls-back.c 98 */;
	struct radix_tree_iter cocci_id/* drivers/xen/pvcalls-back.c 977 */;
	struct pvcalls_data_intf *cocci_id/* drivers/xen/pvcalls-back.c 97 */;
	int32_t cocci_id/* drivers/xen/pvcalls-back.c 96 */;
	RING_IDX cocci_id/* drivers/xen/pvcalls-back.c 95 */;
	void **cocci_id/* drivers/xen/pvcalls-back.c 945 */;
	struct kvec cocci_id/* drivers/xen/pvcalls-back.c 94 */[2];
	struct msghdr cocci_id/* drivers/xen/pvcalls-back.c 93 */;
	struct pvcalls_fedata cocci_id/* drivers/xen/pvcalls-back.c 912 */;
	grant_ref_t cocci_id/* drivers/xen/pvcalls-back.c 909 */;
	struct xenbus_device *cocci_id/* drivers/xen/pvcalls-back.c 906 */;
	irqreturn_t cocci_id/* drivers/xen/pvcalls-back.c 888 */;
	void *cocci_id/* drivers/xen/pvcalls-back.c 888 */;
	int cocci_id/* drivers/xen/pvcalls-back.c 86 */(struct xenbus_device *dev,
							struct pvcalls_fedata *fedata,
							struct sock_mapping *map);
	irqreturn_t cocci_id/* drivers/xen/pvcalls-back.c 85 */(int irq,
								void *sock_map);
	struct xen_pvcalls_request cocci_id/* drivers/xen/pvcalls-back.c 847 */;
	bool cocci_id/* drivers/xen/pvcalls-back.c 754 */;
	struct request_sock_queue *cocci_id/* drivers/xen/pvcalls-back.c 751 */;
	struct inet_connection_sock *cocci_id/* drivers/xen/pvcalls-back.c 750 */;
	struct sockpass_mapping {
		struct list_head list;
		struct pvcalls_fedata *fedata;
		struct socket *sock;
		uint64_t id;
		struct xen_pvcalls_request reqcopy;
		spinlock_t copy_lock;
		struct workqueue_struct *wq;
		struct work_struct register_work;
		void (*saved_data_ready)(struct sock *sk);
	} cocci_id/* drivers/xen/pvcalls-back.c 73 */;
	struct sockaddr *cocci_id/* drivers/xen/pvcalls-back.c 635 */;
	struct sock *cocci_id/* drivers/xen/pvcalls-back.c 574 */;
	struct sock_mapping {
		struct list_head list;
		struct pvcalls_fedata *fedata;
		struct sockpass_mapping *sockpass;
		struct socket *sock;
		uint64_t id;
		grant_ref_t ref;
		struct pvcalls_data_intf *ring;
		void *bytes;
		struct pvcalls_data data;
		uint32_t ring_order;
		int irq;
		atomic_t read;
		atomic_t write;
		atomic_t io;
		atomic_t release;
		void (*saved_data_ready)(struct sock *sk);
		struct pvcalls_ioworker ioworker;
	} cocci_id/* drivers/xen/pvcalls-back.c 53 */;
	unsigned long cocci_id/* drivers/xen/pvcalls-back.c 515 */;
	int cocci_id/* drivers/xen/pvcalls-back.c 513 */;
	struct xen_pvcalls_request *cocci_id/* drivers/xen/pvcalls-back.c 512 */;
	struct xen_pvcalls_response *cocci_id/* drivers/xen/pvcalls-back.c 511 */;
	struct socket *cocci_id/* drivers/xen/pvcalls-back.c 510 */;
	struct pvcalls_fedata *cocci_id/* drivers/xen/pvcalls-back.c 509 */;
	struct pvcalls_ioworker *cocci_id/* drivers/xen/pvcalls-back.c 508 */;
	struct sock_mapping *cocci_id/* drivers/xen/pvcalls-back.c 507 */;
	struct sockpass_mapping cocci_id/* drivers/xen/pvcalls-back.c 506 */;
	struct sockpass_mapping *cocci_id/* drivers/xen/pvcalls-back.c 505 */;
	struct work_struct *cocci_id/* drivers/xen/pvcalls-back.c 503 */;
	void cocci_id/* drivers/xen/pvcalls-back.c 503 */;
	struct pvcalls_ioworker {
		struct work_struct register_work;
		struct workqueue_struct *wq;
	} cocci_id/* drivers/xen/pvcalls-back.c 48 */;
	struct pvcalls_fedata {
		struct list_head list;
		struct xenbus_device *dev;
		struct xen_pvcalls_sring *sring;
		struct xen_pvcalls_back_ring ring;
		int irq;
		struct list_head socket_mappings;
		struct radix_tree_root socketpass_mappings;
		struct semaphore socket_lock;
	} cocci_id/* drivers/xen/pvcalls-back.c 37 */;
	uint32_t cocci_id/* drivers/xen/pvcalls-back.c 303 */;
	uint64_t cocci_id/* drivers/xen/pvcalls-back.c 301 */;
	struct pvcalls_back_global {
		struct list_head frontends;
		struct semaphore frontends_lock;
	} cocci_id/* drivers/xen/pvcalls-back.c 27 */;
	struct sock_mapping cocci_id/* drivers/xen/pvcalls-back.c 228 */;
	struct pvcalls_ioworker cocci_id/* drivers/xen/pvcalls-back.c 227 */;
	void __exit cocci_id/* drivers/xen/pvcalls-back.c 1208 */;
	int __init cocci_id/* drivers/xen/pvcalls-back.c 1191 */;
	struct xenbus_driver cocci_id/* drivers/xen/pvcalls-back.c 1183 */;
	const struct xenbus_device_id cocci_id/* drivers/xen/pvcalls-back.c 1178 */[];
	struct kobj_uevent_env *cocci_id/* drivers/xen/pvcalls-back.c 1173 */;
	enum xenbus_state cocci_id/* drivers/xen/pvcalls-back.c 1133 */;
	struct xenbus_transaction cocci_id/* drivers/xen/pvcalls-back.c 1018 */;
	const struct xenbus_device_id *cocci_id/* drivers/xen/pvcalls-back.c 1015 */;
}
