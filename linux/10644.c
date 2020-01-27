cocci_test_suite() {
	u64 cocci_id/* drivers/gpu/drm/i915/gvt/kvmgt.c 992 */;
	struct intel_gvt *cocci_id/* drivers/gpu/drm/i915/gvt/kvmgt.c 985 */;
	unsigned int cocci_id/* drivers/gpu/drm/i915/gvt/kvmgt.c 984 */;
	loff_t *cocci_id/* drivers/gpu/drm/i915/gvt/kvmgt.c 981 */;
	struct mdev_device *cocci_id/* drivers/gpu/drm/i915/gvt/kvmgt.c 981 */;
	struct kvmgt_guest_info {
		struct kvm *kvm;
		struct intel_vgpu *vgpu;
		struct kvm_page_track_notifier_node track_node;
#define NR_BKT (1 << 18)
			struct hlist_head ptable[NR_BKT];
#undef NR_BKT 
		struct dentry *debugfs_cache_entries;
	} cocci_id/* drivers/gpu/drm/i915/gvt/kvmgt.c 91 */;
	void __iomem *cocci_id/* drivers/gpu/drm/i915/gvt/kvmgt.c 908 */;
	void *cocci_id/* drivers/gpu/drm/i915/gvt/kvmgt.c 906 */;
	u32 *cocci_id/* drivers/gpu/drm/i915/gvt/kvmgt.c 862 */;
	struct kvmgt_pgfn {
		gfn_t gfn;
		struct hlist_node hnode;
	} cocci_id/* drivers/gpu/drm/i915/gvt/kvmgt.c 86 */;
	u32 cocci_id/* drivers/gpu/drm/i915/gvt/kvmgt.c 859 */;
	struct work_struct *cocci_id/* drivers/gpu/drm/i915/gvt/kvmgt.c 849 */;
	struct kvmgt_guest_info *cocci_id/* drivers/gpu/drm/i915/gvt/kvmgt.c 811 */;
	struct vfio_edid_region {
		struct vfio_region_gfx_edid vfio_edid_regs;
		void *edid_blob;
	} cocci_id/* drivers/gpu/drm/i915/gvt/kvmgt.c 81 */;
	struct eventfd_ctx *cocci_id/* drivers/gpu/drm/i915/gvt/kvmgt.c 800 */;
	struct intel_vgpu cocci_id/* drivers/gpu/drm/i915/gvt/kvmgt.c 731 */;
	struct notifier_block *cocci_id/* drivers/gpu/drm/i915/gvt/kvmgt.c 727 */;
	struct vfio_region {
		u32 type;
		u32 subtype;
		size_t size;
		u32 flags;
		const struct intel_vgpu_regops *ops;
		void *data;
	} cocci_id/* drivers/gpu/drm/i915/gvt/kvmgt.c 72 */;
	struct vfio_iommu_type1_dma_unmap *cocci_id/* drivers/gpu/drm/i915/gvt/kvmgt.c 704 */;
	struct intel_vgpu_regops {
		size_t (*rw)(struct intel_vgpu *vgpu, char *buf, size_t count, loff_t *ppos, bool iswrite);
		void (*release)(struct intel_vgpu *vgpu, struct vfio_region *region);
	} cocci_id/* drivers/gpu/drm/i915/gvt/kvmgt.c 65 */;
	struct intel_vgpu_type *cocci_id/* drivers/gpu/drm/i915/gvt/kvmgt.c 649 */;
	struct kobject *cocci_id/* drivers/gpu/drm/i915/gvt/kvmgt.c 646 */;
	struct vfio_region cocci_id/* drivers/gpu/drm/i915/gvt/kvmgt.c 64 */;
	struct intel_vgpu_port *cocci_id/* drivers/gpu/drm/i915/gvt/kvmgt.c 611 */;
	const struct intel_vgpu_regops *cocci_id/* drivers/gpu/drm/i915/gvt/kvmgt.c 544 */;
	const struct intel_vgpu_regops cocci_id/* drivers/gpu/drm/i915/gvt/kvmgt.c 537 */;
	struct vfio_region *cocci_id/* drivers/gpu/drm/i915/gvt/kvmgt.c 532 */;
	const struct intel_gvt_ops *cocci_id/* drivers/gpu/drm/i915/gvt/kvmgt.c 52 */;
	loff_t cocci_id/* drivers/gpu/drm/i915/gvt/kvmgt.c 516 */;
	u16 cocci_id/* drivers/gpu/drm/i915/gvt/kvmgt.c 495 */;
	size_t cocci_id/* drivers/gpu/drm/i915/gvt/kvmgt.c 495 */;
	struct vfio_edid_region *cocci_id/* drivers/gpu/drm/i915/gvt/kvmgt.c 494 */;
	char *cocci_id/* drivers/gpu/drm/i915/gvt/kvmgt.c 494 */;
	u8 *cocci_id/* drivers/gpu/drm/i915/gvt/kvmgt.c 456 */;
	struct vfio_region_gfx_edid cocci_id/* drivers/gpu/drm/i915/gvt/kvmgt.c 453 */;
	unsigned int *cocci_id/* drivers/gpu/drm/i915/gvt/kvmgt.c 451 */;
	struct vfio_region_gfx_edid *cocci_id/* drivers/gpu/drm/i915/gvt/kvmgt.c 441 */;
	struct kvmgt_pgfn cocci_id/* drivers/gpu/drm/i915/gvt/kvmgt.c 389 */;
	struct kvmgt_pgfn *cocci_id/* drivers/gpu/drm/i915/gvt/kvmgt.c 358 */;
	struct hlist_node *cocci_id/* drivers/gpu/drm/i915/gvt/kvmgt.c 349 */;
	void cocci_id/* drivers/gpu/drm/i915/gvt/kvmgt.c 305 */;
	struct gvt_dma cocci_id/* drivers/gpu/drm/i915/gvt/kvmgt.c 262 */;
	struct rb_node **cocci_id/* drivers/gpu/drm/i915/gvt/kvmgt.c 260 */;
	struct gvt_dma *cocci_id/* drivers/gpu/drm/i915/gvt/kvmgt.c 259 */;
	dma_addr_t cocci_id/* drivers/gpu/drm/i915/gvt/kvmgt.c 257 */;
	unsigned long cocci_id/* drivers/gpu/drm/i915/gvt/kvmgt.c 257 */;
	gfn_t cocci_id/* drivers/gpu/drm/i915/gvt/kvmgt.c 256 */;
	struct intel_vgpu *cocci_id/* drivers/gpu/drm/i915/gvt/kvmgt.c 256 */;
	int cocci_id/* drivers/gpu/drm/i915/gvt/kvmgt.c 256 */;
	struct rb_node *cocci_id/* drivers/gpu/drm/i915/gvt/kvmgt.c 222 */;
	void __exit cocci_id/* drivers/gpu/drm/i915/gvt/kvmgt.c 2067 */;
	int __init cocci_id/* drivers/gpu/drm/i915/gvt/kvmgt.c 2060 */;
	struct intel_gvt_mpt cocci_id/* drivers/gpu/drm/i915/gvt/kvmgt.c 2037 */;
	typeof(*entry) cocci_id/* drivers/gpu/drm/i915/gvt/kvmgt.c 1943 */;
	struct kref *cocci_id/* drivers/gpu/drm/i915/gvt/kvmgt.c 1941 */;
	struct page *cocci_id/* drivers/gpu/drm/i915/gvt/kvmgt.c 191 */;
	struct device *cocci_id/* drivers/gpu/drm/i915/gvt/kvmgt.c 190 */;
	dma_addr_t *cocci_id/* drivers/gpu/drm/i915/gvt/kvmgt.c 188 */;
	kvm_pfn_t cocci_id/* drivers/gpu/drm/i915/gvt/kvmgt.c 1853 */;
	unsigned long *cocci_id/* drivers/gpu/drm/i915/gvt/kvmgt.c 1798 */;
	struct kvmgt_guest_info cocci_id/* drivers/gpu/drm/i915/gvt/kvmgt.c 1760 */;
	bool cocci_id/* drivers/gpu/drm/i915/gvt/kvmgt.c 1718 */;
	struct kvm *cocci_id/* drivers/gpu/drm/i915/gvt/kvmgt.c 1718 */;
	struct kvm_page_track_notifier_node *cocci_id/* drivers/gpu/drm/i915/gvt/kvmgt.c 1699 */;
	const u8 *cocci_id/* drivers/gpu/drm/i915/gvt/kvmgt.c 1686 */;
	gpa_t cocci_id/* drivers/gpu/drm/i915/gvt/kvmgt.c 1685 */;
	struct kvm_vcpu *cocci_id/* drivers/gpu/drm/i915/gvt/kvmgt.c 1685 */;
	struct kvm_memory_slot *cocci_id/* drivers/gpu/drm/i915/gvt/kvmgt.c 1621 */;
	struct attribute_group **cocci_id/* drivers/gpu/drm/i915/gvt/kvmgt.c 1601 */;
	struct attribute **cocci_id/* drivers/gpu/drm/i915/gvt/kvmgt.c 1600 */;
	const void *cocci_id/* drivers/gpu/drm/i915/gvt/kvmgt.c 1598 */;
	struct mdev_parent_ops cocci_id/* drivers/gpu/drm/i915/gvt/kvmgt.c 1584 */;
	const struct attribute_group *cocci_id/* drivers/gpu/drm/i915/gvt/kvmgt.c 1579 */[];
	const struct attribute_group cocci_id/* drivers/gpu/drm/i915/gvt/kvmgt.c 1574 */;
	struct attribute *cocci_id/* drivers/gpu/drm/i915/gvt/kvmgt.c 1569 */[];
	struct device_attribute *cocci_id/* drivers/gpu/drm/i915/gvt/kvmgt.c 1554 */;
	__u32 __user *cocci_id/* drivers/gpu/drm/i915/gvt/kvmgt.c 1542 */;
	__s32 cocci_id/* drivers/gpu/drm/i915/gvt/kvmgt.c 1540 */;
	__u32 cocci_id/* drivers/gpu/drm/i915/gvt/kvmgt.c 1539 */;
	struct vfio_device_gfx_plane_info cocci_id/* drivers/gpu/drm/i915/gvt/kvmgt.c 1522 */;
	struct vfio_irq_set cocci_id/* drivers/gpu/drm/i915/gvt/kvmgt.c 1486 */;
	struct vfio_irq_info cocci_id/* drivers/gpu/drm/i915/gvt/kvmgt.c 1455 */;
	struct page **cocci_id/* drivers/gpu/drm/i915/gvt/kvmgt.c 139 */;
	struct vfio_region_info_cap_type cocci_id/* drivers/gpu/drm/i915/gvt/kvmgt.c 1383 */;
	struct vfio_region_info_cap_sparse_mmap *cocci_id/* drivers/gpu/drm/i915/gvt/kvmgt.c 1308 */;
	struct vfio_info_cap cocci_id/* drivers/gpu/drm/i915/gvt/kvmgt.c 1305 */;
	struct vfio_region_info cocci_id/* drivers/gpu/drm/i915/gvt/kvmgt.c 1304 */;
	void __user *cocci_id/* drivers/gpu/drm/i915/gvt/kvmgt.c 1288 */;
	struct vfio_device_info cocci_id/* drivers/gpu/drm/i915/gvt/kvmgt.c 1284 */;
	long cocci_id/* drivers/gpu/drm/i915/gvt/kvmgt.c 1275 */;
	int (*cocci_id/* drivers/gpu/drm/i915/gvt/kvmgt.c 1238 */)(struct intel_vgpu *vgpu, unsigned int index, unsigned int start, unsigned int count, u32 flags, void *data);
	int *cocci_id/* drivers/gpu/drm/i915/gvt/kvmgt.c 1220 */;
	bool cocci_id/* drivers/gpu/drm/i915/gvt/kvmgt.c 118 */(struct kvmgt_guest_info *info);
	void cocci_id/* drivers/gpu/drm/i915/gvt/kvmgt.c 117 */(struct work_struct *work);
	int cocci_id/* drivers/gpu/drm/i915/gvt/kvmgt.c 116 */(struct mdev_device *mdev);
	pgprot_t cocci_id/* drivers/gpu/drm/i915/gvt/kvmgt.c 1151 */;
	struct vm_area_struct *cocci_id/* drivers/gpu/drm/i915/gvt/kvmgt.c 1146 */;
	const char __user *cocci_id/* drivers/gpu/drm/i915/gvt/kvmgt.c 1074 */;
	u8 cocci_id/* drivers/gpu/drm/i915/gvt/kvmgt.c 1048 */;
	struct gvt_dma {
		struct intel_vgpu *vgpu;
		struct rb_node gfn_node;
		struct rb_node dma_addr_node;
		gfn_t gfn;
		dma_addr_t dma_addr;
		unsigned long size;
		struct kref ref;
	} cocci_id/* drivers/gpu/drm/i915/gvt/kvmgt.c 101 */;
	char __user *cocci_id/* drivers/gpu/drm/i915/gvt/kvmgt.c 1000 */;
	ssize_t cocci_id/* drivers/gpu/drm/i915/gvt/kvmgt.c 1000 */;
}
