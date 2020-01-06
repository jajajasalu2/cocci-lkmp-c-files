/* drivers/infiniband/core/uverbs_ioctl.c 43 */
struct bundle_priv {
	/* Must be first */
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

	DECLARE_BITMAP(uobj_finalize, UVERBS_API_ATTR_BKEY_LEN);
	DECLARE_BITMAP(spec_finalize, UVERBS_API_ATTR_BKEY_LEN);

	/*
	 * Must be last. bundle ends in a flex array which overlaps
	 * internal_buffer.
	 */
	struct uverbs_attr_bundle bundle;
	u64 internal_buffer[32];
};
