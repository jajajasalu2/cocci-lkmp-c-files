cocci_test_suite() {
	long cocci_id/* virt/kvm/vfio.c 96 */;
	long (*cocci_id/* virt/kvm/vfio.c 95 */)(struct vfio_group *,
						 unsigned long);
	void (*cocci_id/* virt/kvm/vfio.c 82 */)(struct vfio_group *,
						 struct kvm *);
	void (*cocci_id/* virt/kvm/vfio.c 69 */)(struct vfio_group *);
	struct file *cocci_id/* virt/kvm/vfio.c 52 */;
	bool cocci_id/* virt/kvm/vfio.c 51 */;
	struct kvm_vfio *cocci_id/* virt/kvm/vfio.c 398 */;
	u32 cocci_id/* virt/kvm/vfio.c 395 */;
	struct kvm_device *cocci_id/* virt/kvm/vfio.c 395 */;
	int cocci_id/* virt/kvm/vfio.c 395 */;
	struct kvm_device_ops cocci_id/* virt/kvm/vfio.c 387 */;
	int cocci_id/* virt/kvm/vfio.c 385 */(struct kvm_device *dev,
					      u32 type);
	struct vfio_group *(*cocci_id/* virt/kvm/vfio.c 38 */)(struct file *);
	struct kvm_vfio_group *cocci_id/* virt/kvm/vfio.c 366 */;
	struct kvm_device_attr *cocci_id/* virt/kvm/vfio.c 344 */;
	struct kvm_vfio {
		struct list_head group_list;
		struct mutex lock;
		bool noncoherent;
	} cocci_id/* virt/kvm/vfio.c 29 */;
	void __user *cocci_id/* virt/kvm/vfio.c 286 */;
	struct kvm_vfio_spapr_tce cocci_id/* virt/kvm/vfio.c 279 */;
	struct kvm_vfio_group {
		struct list_head node;
		struct vfio_group *vfio_group;
	} cocci_id/* virt/kvm/vfio.c 24 */;
	int32_t cocci_id/* virt/kvm/vfio.c 191 */;
	struct fd cocci_id/* virt/kvm/vfio.c 190 */;
	int32_t __user *cocci_id/* virt/kvm/vfio.c 189 */;
	unsigned long cocci_id/* virt/kvm/vfio.c 189 */;
	u64 cocci_id/* virt/kvm/vfio.c 184 */;
	struct iommu_group *cocci_id/* virt/kvm/vfio.c 140 */;
	struct vfio_group *cocci_id/* virt/kvm/vfio.c 138 */;
	struct kvm *cocci_id/* virt/kvm/vfio.c 137 */;
	void cocci_id/* virt/kvm/vfio.c 137 */;
	int (*cocci_id/* virt/kvm/vfio.c 112 */)(struct vfio_group *);
}
