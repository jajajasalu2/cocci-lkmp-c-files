cocci_test_suite() {
	const struct uverbs_attr *cocci_id/* drivers/infiniband/core/uverbs_ioctl.c 774 */;
	u64 cocci_id/* drivers/infiniband/core/uverbs_ioctl.c 771 */;
	s64 cocci_id/* drivers/infiniband/core/uverbs_ioctl.c 771 */;
	const struct uverbs_attr_bundle *cocci_id/* drivers/infiniband/core/uverbs_ioctl.c 770 */;
	s64 *cocci_id/* drivers/infiniband/core/uverbs_ioctl.c 770 */;
	int cocci_id/* drivers/infiniband/core/uverbs_ioctl.c 770 */;
	struct uverbs_api_ioctl_method *cocci_id/* drivers/infiniband/core/uverbs_ioctl.c 75 */;
	void cocci_id/* drivers/infiniband/core/uverbs_ioctl.c 75 */;
	const void *cocci_id/* drivers/infiniband/core/uverbs_ioctl.c 739 */;
	struct ib_udata *cocci_id/* drivers/infiniband/core/uverbs_ioctl.c 706 */;
	u32 *cocci_id/* drivers/infiniband/core/uverbs_ioctl.c 682 */;
	u64 *cocci_id/* drivers/infiniband/core/uverbs_ioctl.c 649 */;
	struct ib_uverbs_ioctl_hdr cocci_id/* drivers/infiniband/core/uverbs_ioctl.c 625 */;
	struct ib_uverbs_ioctl_hdr __user *cocci_id/* drivers/infiniband/core/uverbs_ioctl.c 623 */;
	struct file *cocci_id/* drivers/infiniband/core/uverbs_ioctl.c 620 */;
	unsigned long cocci_id/* drivers/infiniband/core/uverbs_ioctl.c 620 */;
	long cocci_id/* drivers/infiniband/core/uverbs_ioctl.c 620 */;
	struct radix_tree_iter cocci_id/* drivers/infiniband/core/uverbs_ioctl.c 561 */;
	struct uverbs_api *cocci_id/* drivers/infiniband/core/uverbs_ioctl.c 560 */;
	const struct uverbs_api_ioctl_method *cocci_id/* drivers/infiniband/core/uverbs_ioctl.c 559 */;
	struct ib_uverbs_attr __user *cocci_id/* drivers/infiniband/core/uverbs_ioctl.c 557 */;
	struct ib_uverbs_ioctl_hdr *cocci_id/* drivers/infiniband/core/uverbs_ioctl.c 556 */;
	struct ib_uverbs_file *cocci_id/* drivers/infiniband/core/uverbs_ioctl.c 555 */;
	void __rcu **cocci_id/* drivers/infiniband/core/uverbs_ioctl.c 525 */;
	const struct uverbs_api_attr *cocci_id/* drivers/infiniband/core/uverbs_ioctl.c 524 */;
	struct uverbs_attr *cocci_id/* drivers/infiniband/core/uverbs_ioctl.c 509 */;
	unsigned int cocci_id/* drivers/infiniband/core/uverbs_ioctl.c 500 */;
	bool cocci_id/* drivers/infiniband/core/uverbs_ioctl.c 498 */;
	struct uverbs_obj_attr *cocci_id/* drivers/infiniband/core/uverbs_ioctl.c 460 */;
	struct ib_udata cocci_id/* drivers/infiniband/core/uverbs_ioctl.c 457 */;
	struct bundle_priv {
		struct bundle_alloc_head alloc_head;
		struct bundle_alloc_head *allocated_mem;
		size_t internal_avail;
		size_t internal_used;
		struct radix_tree_root *radix;
		const struct uverbs_api_ioctl_method *method_elm;
		void __rcu **radix_slots;
		unsigned long radix_slots_len;
		u32 method_key;
		struct ib_uverbs_attr __user *user_attrs;
		struct ib_uverbs_attr *uattrs;
	DECLARE_BITMAP(uobj_finalize,UVERBS_API_ATTR_BKEY_LEN)
		;
	DECLARE_BITMAP(spec_finalize,UVERBS_API_ATTR_BKEY_LEN)
		;
		struct uverbs_attr_bundle bundle;
		u64 internal_buffer[32];
	} cocci_id/* drivers/infiniband/core/uverbs_ioctl.c 43 */;
	int (*cocci_id/* drivers/infiniband/core/uverbs_ioctl.c 421 */)(struct uverbs_attr_bundle *attrs);
	struct bundle_alloc_head {
		struct bundle_alloc_head *next;
		u8 data[];
	} cocci_id/* drivers/infiniband/core/uverbs_ioctl.c 38 */;
	u32 cocci_id/* drivers/infiniband/core/uverbs_ioctl.c 367 */;
	const struct uverbs_attr_spec *cocci_id/* drivers/infiniband/core/uverbs_ioctl.c 227 */;
	struct uverbs_objs_arr_attr *cocci_id/* drivers/infiniband/core/uverbs_ioctl.c 224 */;
	struct ib_uverbs_attr *cocci_id/* drivers/infiniband/core/uverbs_ioctl.c 139 */;
	u16 cocci_id/* drivers/infiniband/core/uverbs_ioctl.c 137 */;
	const struct ib_uverbs_attr *cocci_id/* drivers/infiniband/core/uverbs_ioctl.c 136 */;
	struct bundle_alloc_head *cocci_id/* drivers/infiniband/core/uverbs_ioctl.c 117 */;
	struct bundle_priv cocci_id/* drivers/infiniband/core/uverbs_ioctl.c 109 */;
	struct bundle_priv *cocci_id/* drivers/infiniband/core/uverbs_ioctl.c 108 */;
	gfp_t cocci_id/* drivers/infiniband/core/uverbs_ioctl.c 106 */;
	struct uverbs_attr_bundle *cocci_id/* drivers/infiniband/core/uverbs_ioctl.c 105 */;
	void *cocci_id/* drivers/infiniband/core/uverbs_ioctl.c 105 */;
	size_t cocci_id/* drivers/infiniband/core/uverbs_ioctl.c 105 */;
}
