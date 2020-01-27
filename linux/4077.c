cocci_test_suite() {
	struct vring_used_elem cocci_id/* drivers/vhost/vringh.c 998 */;
	ssize_t cocci_id/* drivers/vhost/vringh.c 950 */;
	struct vring_avail *cocci_id/* drivers/vhost/vringh.c 876 */;
	struct vring_desc *cocci_id/* drivers/vhost/vringh.c 875 */;
	struct vring_used_elem *cocci_id/* drivers/vhost/vringh.c 841 */;
	const void *cocci_id/* drivers/vhost/vringh.c 835 */;
	__virtio16 *cocci_id/* drivers/vhost/vringh.c 829 */;
	const __virtio16 *cocci_id/* drivers/vhost/vringh.c 823 */;
	unsigned cocci_id/* drivers/vhost/vringh.c 776 */;
	const struct vring_used_elem cocci_id/* drivers/vhost/vringh.c 775 */[];
	int (*cocci_id/* drivers/vhost/vringh.c 76 */)(void *addr, void *ptr,
						       size_t len);
	struct iovec *cocci_id/* drivers/vhost/vringh.c 683 */;
	struct kvec cocci_id/* drivers/vhost/vringh.c 678 */;
	struct vringh_kiov cocci_id/* drivers/vhost/vringh.c 669 */;
	struct vringh_iov cocci_id/* drivers/vhost/vringh.c 669 */;
	struct vringh_iov *cocci_id/* drivers/vhost/vringh.c 651 */;
	struct vring_used __user *cocci_id/* drivers/vhost/vringh.c 610 */;
	struct vring_avail __user *cocci_id/* drivers/vhost/vringh.c 609 */;
	struct vring_desc __user *cocci_id/* drivers/vhost/vringh.c 608 */;
	void __user *cocci_id/* drivers/vhost/vringh.c 569 */;
	__virtio16 __user *cocci_id/* drivers/vhost/vringh.c 556 */;
	__virtio16 cocci_id/* drivers/vhost/vringh.c 555 */;
	void cocci_id/* drivers/vhost/vringh.c 538 */;
	u16 cocci_id/* drivers/vhost/vringh.c 413 */;
	struct vring_used *cocci_id/* drivers/vhost/vringh.c 411 */;
	int (*cocci_id/* drivers/vhost/vringh.c 407 */)(struct vring_used_elem *dst,
							const struct vring_used_elem *src,
							unsigned num);
	int (*cocci_id/* drivers/vhost/vringh.c 405 */)(const struct vringh *vrh,
							__virtio16 *p,
							u16 val);
	unsigned int cocci_id/* drivers/vhost/vringh.c 404 */;
	const struct vring_used_elem *cocci_id/* drivers/vhost/vringh.c 403 */;
	struct vringh *cocci_id/* drivers/vhost/vringh.c 402 */;
	int cocci_id/* drivers/vhost/vringh.c 402 */;
	u16 *cocci_id/* drivers/vhost/vringh.c 36 */;
	unsigned long cocci_id/* drivers/vhost/vringh.c 356 */;
	int (*cocci_id/* drivers/vhost/vringh.c 34 */)(const struct vringh *vrh,
						       u16 *val,
						       const __virtio16 *p);
	const struct vringh *cocci_id/* drivers/vhost/vringh.c 33 */;
	long cocci_id/* drivers/vhost/vringh.c 315 */;
	u64 cocci_id/* drivers/vhost/vringh.c 300 */;
	size_t cocci_id/* drivers/vhost/vringh.c 288 */;
	void *cocci_id/* drivers/vhost/vringh.c 286 */;
	bool cocci_id/* drivers/vhost/vringh.c 270 */;
	struct vringh_range cocci_id/* drivers/vhost/vringh.c 269 */;
	struct vring_desc cocci_id/* drivers/vhost/vringh.c 268 */;
	int (*cocci_id/* drivers/vhost/vringh.c 265 */)(void *dst,
							const void *src,
							size_t len);
	gfp_t cocci_id/* drivers/vhost/vringh.c 264 */;
	bool (*cocci_id/* drivers/vhost/vringh.c 263 */)(struct vringh *, u64,
							 struct vringh_range *);
	bool (*cocci_id/* drivers/vhost/vringh.c 259 */)(struct vringh *vrh,
							 u64 addr,
							 size_t *len,
							 struct vringh_range *range,
							 bool (*getrange)(struct vringh *, u64, struct vringh_range *));
	struct vringh_kiov *cocci_id/* drivers/vhost/vringh.c 257 */;
	va_list cocci_id/* drivers/vhost/vringh.c 24 */;
	bool (*cocci_id/* drivers/vhost/vringh.c 226 */)(struct vringh *vrh,
							 u64 addr,
							 struct vringh_range *r);
	bool (*cocci_id/* drivers/vhost/vringh.c 221 */)(struct vringh *vrh,
							 u64 addr,
							 size_t *len,
							 struct vringh_range *range,
							 bool (*getrange)(struct vringh *vrh, u64, struct vringh_range *));
	u16 __cold cocci_id/* drivers/vhost/vringh.c 209 */;
	struct iovec cocci_id/* drivers/vhost/vringh.c 193 */;
	struct kvec *cocci_id/* drivers/vhost/vringh.c 185 */;
	const char *cocci_id/* drivers/vhost/vringh.c 18 */;
	u32 cocci_id/* drivers/vhost/vringh.c 156 */;
	struct vring_desc **cocci_id/* drivers/vhost/vringh.c 154 */;
	const struct vring_desc *cocci_id/* drivers/vhost/vringh.c 153 */;
	int *cocci_id/* drivers/vhost/vringh.c 152 */;
	struct vringh_range *cocci_id/* drivers/vhost/vringh.c 143 */;
	size_t *cocci_id/* drivers/vhost/vringh.c 142 */;
	unsigned long long cocci_id/* drivers/vhost/vringh.c 129 */;
}
