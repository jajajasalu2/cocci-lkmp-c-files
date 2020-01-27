cocci_test_suite() {
	struct vhost_vring_state cocci_id/* drivers/vhost/vhost.c 98 */;
	__typeof__(ptr) cocci_id/* drivers/vhost/vhost.c 909 */;
	uintptr_t cocci_id/* drivers/vhost/vhost.c 896 */;
	u64 cocci_id/* drivers/vhost/vhost.c 896 */;
	void *cocci_id/* drivers/vhost/vhost.c 892 */;
	unsigned int cocci_id/* drivers/vhost/vhost.c 892 */;
	unsigned long long cocci_id/* drivers/vhost/vhost.c 872 */;
	const void *cocci_id/* drivers/vhost/vhost.c 786 */;
	int cocci_id/* drivers/vhost/vhost.c 782 */(struct vhost_virtqueue *vq,
						    u64 addr, u32 len,
						    struct iovec iov[],
						    int iov_size, int access);
	struct vhost_dev *cocci_id/* drivers/vhost/vhost.c 758 */;
	unsigned long cocci_id/* drivers/vhost/vhost.c 698 */;
	struct vhost_umem cocci_id/* drivers/vhost/vhost.c 586 */;
	struct task_struct *cocci_id/* drivers/vhost/vhost.c 541 */;
	 cocci_id/* drivers/vhost/vhost.c 53 */(struct vhost_umem_node,
						rb,__u64,__subtree_last,
						START,LAST,static inline,
						vhost_umem_interval_tree);
	struct vhost_attach_cgroups_struct cocci_id/* drivers/vhost/vhost.c 522 */;
	struct vhost_attach_cgroups_struct *cocci_id/* drivers/vhost/vhost.c 514 */;
	struct vhost_work *cocci_id/* drivers/vhost/vhost.c 512 */;
	struct vhost_attach_cgroups_struct {
		struct vhost_work work;
		struct task_struct *owner;
		int ret;
	} cocci_id/* drivers/vhost/vhost.c 506 */;
	__virtio16 __user *cocci_id/* drivers/vhost/vhost.c 50 */;
	enum{VHOST_MEMORY_F_LOG=0x1,} cocci_id/* drivers/vhost/vhost.c 46 */;
	struct vhost_virtqueue **cocci_id/* drivers/vhost/vhost.c 459 */;
	long cocci_id/* drivers/vhost/vhost.c 384 */;
	ushort cocci_id/* drivers/vhost/vhost.c 37 */;
	mm_segment_t cocci_id/* drivers/vhost/vhost.c 337 */;
	struct llist_node *cocci_id/* drivers/vhost/vhost.c 336 */;
	void cocci_id/* drivers/vhost/vhost.c 285 */;
	void __exit cocci_id/* drivers/vhost/vhost.c 2632 */;
	int __init cocci_id/* drivers/vhost/vhost.c 2627 */;
	struct vhost_msg_node cocci_id/* drivers/vhost/vhost.c 2616 */;
	struct list_head *cocci_id/* drivers/vhost/vhost.c 2610 */;
	__virtio16 cocci_id/* drivers/vhost/vhost.c 2531 */;
	struct vhost_poll *cocci_id/* drivers/vhost/vhost.c 250 */;
	__u16 cocci_id/* drivers/vhost/vhost.c 2446 */;
	struct vring_used cocci_id/* drivers/vhost/vhost.c 2435 */;
	void __user *cocci_id/* drivers/vhost/vhost.c 2393 */;
	u16 cocci_id/* drivers/vhost/vhost.c 2380 */;
	struct vring_used_elem __user *cocci_id/* drivers/vhost/vhost.c 2379 */;
	unsigned cocci_id/* drivers/vhost/vhost.c 2377 */;
	struct vring_used_elem *cocci_id/* drivers/vhost/vhost.c 2376 */;
	struct vhost_virtqueue *cocci_id/* drivers/vhost/vhost.c 2375 */;
	int cocci_id/* drivers/vhost/vhost.c 2375 */;
	struct vring_used_elem cocci_id/* drivers/vhost/vhost.c 2366 */;
	size_t cocci_id/* drivers/vhost/vhost.c 2161 */;
	struct iov_iter cocci_id/* drivers/vhost/vhost.c 2117 */;
	u32 cocci_id/* drivers/vhost/vhost.c 2116 */;
	struct vring_desc cocci_id/* drivers/vhost/vhost.c 2114 */;
	struct vring_desc *cocci_id/* drivers/vhost/vhost.c 2112 */;
	struct vhost_log *cocci_id/* drivers/vhost/vhost.c 2111 */;
	unsigned int *cocci_id/* drivers/vhost/vhost.c 2110 */;
	struct iovec cocci_id/* drivers/vhost/vhost.c 2109 */[];
	struct iovec *cocci_id/* drivers/vhost/vhost.c 2052 */;
	struct iovec cocci_id/* drivers/vhost/vhost.c 1918 */[64];
	vhost_work_fn_t cocci_id/* drivers/vhost/vhost.c 189 */;
	struct vhost_umem_node *cocci_id/* drivers/vhost/vhost.c 1879 */;
	struct page *cocci_id/* drivers/vhost/vhost.c 1833 */;
	int __user *cocci_id/* drivers/vhost/vhost.c 1800 */;
	struct eventfd_ctx *cocci_id/* drivers/vhost/vhost.c 1757 */;
	wait_queue_entry_t *cocci_id/* drivers/vhost/vhost.c 169 */;
	struct vhost_poll cocci_id/* drivers/vhost/vhost.c 164 */;
	struct vhost_vring_file cocci_id/* drivers/vhost/vhost.c 1599 */;
	u32 __user *cocci_id/* drivers/vhost/vhost.c 1596 */;
	wait_queue_head_t *cocci_id/* drivers/vhost/vhost.c 159 */;
	struct vhost_flush_struct cocci_id/* drivers/vhost/vhost.c 155 */;
	struct vhost_flush_struct *cocci_id/* drivers/vhost/vhost.c 153 */;
	struct vhost_vring_addr cocci_id/* drivers/vhost/vhost.c 1518 */;
	struct vhost_flush_struct {
		struct vhost_work work;
		struct completion wait_event;
	} cocci_id/* drivers/vhost/vhost.c 146 */;
	struct vhost_memory_region *cocci_id/* drivers/vhost/vhost.c 1428 */;
	struct vhost_memory cocci_id/* drivers/vhost/vhost.c 1427 */;
	struct vhost_memory __user *cocci_id/* drivers/vhost/vhost.c 1425 */;
	struct vhost_umem *cocci_id/* drivers/vhost/vhost.c 1328 */;
	const struct vhost_umem_node *cocci_id/* drivers/vhost/vhost.c 1327 */;
	bool cocci_id/* drivers/vhost/vhost.c 1324 */;
	struct vring_used __user *cocci_id/* drivers/vhost/vhost.c 1305 */;
	struct vring_avail __user *cocci_id/* drivers/vhost/vhost.c 1304 */;
	struct vring_desc __user *cocci_id/* drivers/vhost/vhost.c 1303 */;
	struct vhost_iotlb_msg *cocci_id/* drivers/vhost/vhost.c 1246 */;
	struct vhost_msg cocci_id/* drivers/vhost/vhost.c 1213 */;
	struct vhost_msg_node *cocci_id/* drivers/vhost/vhost.c 1211 */;
	struct iov_iter *cocci_id/* drivers/vhost/vhost.c 1207 */;
	ssize_t cocci_id/* drivers/vhost/vhost.c 1207 */;
	poll_table *cocci_id/* drivers/vhost/vhost.c 1194 */;
	__poll_t cocci_id/* drivers/vhost/vhost.c 1193 */;
	struct file *cocci_id/* drivers/vhost/vhost.c 1193 */;
	struct vhost_msg_v2 cocci_id/* drivers/vhost/vhost.c 1187 */;
	struct vhost_iotlb_msg cocci_id/* drivers/vhost/vhost.c 1150 */;
	typeof(*tmp) cocci_id/* drivers/vhost/vhost.c 1037 */;
	__virtio16 *cocci_id/* drivers/vhost/vhost.c 1000 */;
}
