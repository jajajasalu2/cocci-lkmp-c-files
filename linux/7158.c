cocci_test_suite() {
	void __init cocci_id/* drivers/xen/xenbus/xenbus_client.c 929 */;
	const struct xenbus_ring_ops cocci_id/* drivers/xen/xenbus/xenbus_client.c 924 */;
	const char *const cocci_id/* drivers/xen/xenbus/xenbus_client.c 86 */[];
	const struct xenbus_ring_ops *cocci_id/* drivers/xen/xenbus/xenbus_client.c 82 */;
	struct unmap_ring_vfree_hvm cocci_id/* drivers/xen/xenbus/xenbus_client.c 819 */;
	struct unmap_ring_vfree_hvm *cocci_id/* drivers/xen/xenbus/xenbus_client.c 807 */;
	struct unmap_ring_vfree_hvm {
		unsigned int idx;
		unsigned long addrs[XENBUS_MAX_RING_GRANTS];
	} cocci_id/* drivers/xen/xenbus/xenbus_client.c 796 */;
	struct xenbus_ring_ops {
		int (*map)(struct xenbus_device *dev, grant_ref_t *gnt_refs,
			   unsigned int nr_grefs, void **vaddr);
		int (*unmap)(struct xenbus_device *dev, void *vaddr);
	} cocci_id/* drivers/xen/xenbus/xenbus_client.c 75 */;
	pte_t *cocci_id/* drivers/xen/xenbus/xenbus_client.c 676 */[XENBUS_MAX_RING_GRANTS];
	struct vm_struct *cocci_id/* drivers/xen/xenbus/xenbus_client.c 675 */;
	unsigned long cocci_id/* drivers/xen/xenbus/xenbus_client.c 642 */;
	phys_addr_t cocci_id/* drivers/xen/xenbus/xenbus_client.c 635 */[XENBUS_MAX_RING_GRANTS];
	unsigned long *cocci_id/* drivers/xen/xenbus/xenbus_client.c 633 */;
	struct xenbus_map_node {
		struct list_head next;
		union {
			struct {
				struct vm_struct *area;
			} pv;
			struct {
				struct page *pages[XENBUS_MAX_RING_PAGES];
				unsigned long addrs[XENBUS_MAX_RING_GRANTS];
				void *addr;
			} hvm;
		};
		grant_handle_t handles[XENBUS_MAX_RING_GRANTS];
		unsigned int nr_handles;
	} cocci_id/* drivers/xen/xenbus/xenbus_client.c 56 */;
	struct map_ring_valloc_hvm cocci_id/* drivers/xen/xenbus/xenbus_client.c 552 */;
	bool cocci_id/* drivers/xen/xenbus/xenbus_client.c 551 */;
	struct xenbus_map_node *cocci_id/* drivers/xen/xenbus/xenbus_client.c 548 */;
	struct map_ring_valloc_hvm *cocci_id/* drivers/xen/xenbus/xenbus_client.c 534 */;
	struct map_ring_valloc_hvm {
		unsigned int idx;
		phys_addr_t phys_addrs[XENBUS_MAX_RING_GRANTS];
		unsigned long addrs[XENBUS_MAX_RING_GRANTS];
	} cocci_id/* drivers/xen/xenbus/xenbus_client.c 520 */;
	phys_addr_t cocci_id/* drivers/xen/xenbus/xenbus_client.c 500 */;
	struct gnttab_unmap_grant_ref cocci_id/* drivers/xen/xenbus/xenbus_client.c 467 */[XENBUS_MAX_RING_GRANTS];
	struct gnttab_map_grant_ref cocci_id/* drivers/xen/xenbus/xenbus_client.c 466 */[XENBUS_MAX_RING_GRANTS];
	bool *cocci_id/* drivers/xen/xenbus/xenbus_client.c 464 */;
	phys_addr_t *cocci_id/* drivers/xen/xenbus/xenbus_client.c 462 */;
	grant_handle_t *cocci_id/* drivers/xen/xenbus/xenbus_client.c 461 */;
	unsigned int cocci_id/* drivers/xen/xenbus/xenbus_client.c 460 */;
	grant_ref_t *cocci_id/* drivers/xen/xenbus/xenbus_client.c 459 */;
	struct xenbus_device *cocci_id/* drivers/xen/xenbus/xenbus_client.c 458 */;
	int cocci_id/* drivers/xen/xenbus/xenbus_client.c 458 */;
	void **cocci_id/* drivers/xen/xenbus/xenbus_client.c 449 */;
	struct evtchn_close cocci_id/* drivers/xen/xenbus/xenbus_client.c 419 */;
	struct evtchn_alloc_unbound cocci_id/* drivers/xen/xenbus/xenbus_client.c 396 */;
	int *cocci_id/* drivers/xen/xenbus/xenbus_client.c 394 */;
	void *cocci_id/* drivers/xen/xenbus/xenbus_client.c 359 */;
	va_list cocci_id/* drivers/xen/xenbus/xenbus_client.c 299 */;
	const char *cocci_id/* drivers/xen/xenbus/xenbus_client.c 297 */;
	void cocci_id/* drivers/xen/xenbus/xenbus_client.c 297 */;
	char *cocci_id/* drivers/xen/xenbus/xenbus_client.c 266 */;
	struct xenbus_transaction cocci_id/* drivers/xen/xenbus/xenbus_client.c 199 */;
	enum xenbus_state cocci_id/* drivers/xen/xenbus/xenbus_client.c 184 */;
	void cocci_id/* drivers/xen/xenbus/xenbus_client.c 179 */(struct xenbus_device *,
								  int, int,
								  const char *,
								  ...);
	void (*cocci_id/* drivers/xen/xenbus/xenbus_client.c 117 */)(struct xenbus_watch *,
								     const char *,
								     const char *);
	struct xenbus_watch *cocci_id/* drivers/xen/xenbus/xenbus_client.c 116 */;
}
