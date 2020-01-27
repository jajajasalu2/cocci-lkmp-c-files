cocci_test_suite() {
	struct nouveau_svmm {
		struct mmu_notifier notifier;
		struct nouveau_vmm *vmm;
		struct {
			unsigned long start;
			unsigned long limit;
		} unmanaged;
		struct mutex mutex;
	} cocci_id/* drivers/gpu/drm/nouveau/nouveau_svm.c 90 */;
	const struct nvif_mclass cocci_id/* drivers/gpu/drm/nouveau/nouveau_svm.c 887 */[];
	struct nvif_clb069_v0 cocci_id/* drivers/gpu/drm/nouveau/nouveau_svm.c 827 */;
	s32 cocci_id/* drivers/gpu/drm/nouveau/nouveau_svm.c 822 */;
	void cocci_id/* drivers/gpu/drm/nouveau/nouveau_svm.c 803 */;
	u64 cocci_id/* drivers/gpu/drm/nouveau/nouveau_svm.c 80 */;
	struct nouveau_svm *cocci_id/* drivers/gpu/drm/nouveau/nouveau_svm.c 80 */;
	struct nouveau_ivmm *cocci_id/* drivers/gpu/drm/nouveau/nouveau_svm.c 79 */;
	struct nouveau_svm_fault *cocci_id/* drivers/gpu/drm/nouveau/nouveau_svm.c 766 */;
	struct nouveau_ivmm {
		struct nouveau_svmm *svmm;
		u64 inst;
		struct list_head head;
	} cocci_id/* drivers/gpu/drm/nouveau/nouveau_svm.c 73 */;
	struct svm_notifier cocci_id/* drivers/gpu/drm/nouveau/nouveau_svm.c 643 */;
	struct vm_area_struct *cocci_id/* drivers/gpu/drm/nouveau/nouveau_svm.c 588 */;
	struct {
		struct {
			struct nvif_ioctl_v0 i;
			struct nvif_ioctl_mthd_v0 m;
			struct nvif_vmm_pfnmap_v0 p;
		} i;
		u64 phys[16];
	} cocci_id/* drivers/gpu/drm/nouveau/nouveau_svm.c 580 */;
	struct nvif_object *cocci_id/* drivers/gpu/drm/nouveau/nouveau_svm.c 578 */;
	typeof(*svm) cocci_id/* drivers/gpu/drm/nouveau/nouveau_svm.c 577 */;
	typeof(*buffer) cocci_id/* drivers/gpu/drm/nouveau/nouveau_svm.c 575 */;
	struct nouveau_svm_fault_buffer *cocci_id/* drivers/gpu/drm/nouveau/nouveau_svm.c 574 */;
	struct nvif_notify *cocci_id/* drivers/gpu/drm/nouveau/nouveau_svm.c 572 */;
	long cocci_id/* drivers/gpu/drm/nouveau/nouveau_svm.c 534 */;
	struct mm_struct *cocci_id/* drivers/gpu/drm/nouveau/nouveau_svm.c 533 */;
	struct hmm_range cocci_id/* drivers/gpu/drm/nouveau/nouveau_svm.c 524 */;
	unsigned long cocci_id/* drivers/gpu/drm/nouveau/nouveau_svm.c 521 */;
	u64 *cocci_id/* drivers/gpu/drm/nouveau/nouveau_svm.c 519 */;
	struct svm_notifier *cocci_id/* drivers/gpu/drm/nouveau/nouveau_svm.c 519 */;
	u32 cocci_id/* drivers/gpu/drm/nouveau/nouveau_svm.c 518 */;
	struct nouveau_drm *cocci_id/* drivers/gpu/drm/nouveau/nouveau_svm.c 518 */;
	void *cocci_id/* drivers/gpu/drm/nouveau/nouveau_svm.c 518 */;
	struct nouveau_svmm *cocci_id/* drivers/gpu/drm/nouveau/nouveau_svm.c 517 */;
	int cocci_id/* drivers/gpu/drm/nouveau/nouveau_svm.c 517 */;
	const struct mmu_interval_notifier_ops cocci_id/* drivers/gpu/drm/nouveau/nouveau_svm.c 513 */;
	const struct mmu_notifier_range *cocci_id/* drivers/gpu/drm/nouveau/nouveau_svm.c 491 */;
	bool cocci_id/* drivers/gpu/drm/nouveau/nouveau_svm.c 490 */;
	struct mmu_interval_notifier *cocci_id/* drivers/gpu/drm/nouveau/nouveau_svm.c 490 */;
	struct svm_notifier {
		struct mmu_interval_notifier notifier;
		struct nouveau_svmm *svmm;
	} cocci_id/* drivers/gpu/drm/nouveau/nouveau_svm.c 485 */;
	const u8 cocci_id/* drivers/gpu/drm/nouveau/nouveau_svm.c 450 */;
	const u64 cocci_id/* drivers/gpu/drm/nouveau/nouveau_svm.c 449 */;
	const u32 cocci_id/* drivers/gpu/drm/nouveau/nouveau_svm.c 441 */;
	s64 cocci_id/* drivers/gpu/drm/nouveau/nouveau_svm.c 427 */;
	const struct nouveau_svm_fault *cocci_id/* drivers/gpu/drm/nouveau/nouveau_svm.c 424 */;
	struct nouveau_svm_fault **cocci_id/* drivers/gpu/drm/nouveau/nouveau_svm.c 424 */;
	const void *cocci_id/* drivers/gpu/drm/nouveau/nouveau_svm.c 422 */;
	struct gp100_vmm_fault_cancel_v0 cocci_id/* drivers/gpu/drm/nouveau/nouveau_svm.c 403 */;
	u8 cocci_id/* drivers/gpu/drm/nouveau/nouveau_svm.c 398 */;
	struct nouveau_svm {
		struct nouveau_drm *drm;
		struct mutex mutex;
		struct list_head inst;
		struct nouveau_svm_fault_buffer {
			int id;
			struct nvif_object object;
			u32 entries;
			u32 getaddr;
			u32 putaddr;
			u32 get;
			u32 put;
			struct nvif_notify notify;
			struct nouveau_svm_fault {
				u64 inst;
				u64 addr;
				u64 time;
				u32 engine;
				u8 gpc;
				u8 hub;
				u8 access;
				u8 client;
				u8 fault;
				struct nouveau_svmm *svmm;
			} **fault;
			int fault_nr;
		} buffer[1];
	} cocci_id/* drivers/gpu/drm/nouveau/nouveau_svm.c 39 */;
	struct gp100_vmm_fault_replay_vn cocci_id/* drivers/gpu/drm/nouveau/nouveau_svm.c 387 */;
	const u64 cocci_id/* drivers/gpu/drm/nouveau/nouveau_svm.c 373 */[HMM_PFN_VALUE_MAX];
	const u64 cocci_id/* drivers/gpu/drm/nouveau/nouveau_svm.c 366 */[HMM_PFN_FLAG_MAX];
	struct gp100_vmm_v0 cocci_id/* drivers/gpu/drm/nouveau/nouveau_svm.c 339 */;
	struct drm_nouveau_svm_init *cocci_id/* drivers/gpu/drm/nouveau/nouveau_svm.c 313 */;
	struct nouveau_svmm **cocci_id/* drivers/gpu/drm/nouveau/nouveau_svm.c 295 */;
	const struct mmu_notifier_ops cocci_id/* drivers/gpu/drm/nouveau/nouveau_svm.c 289 */;
	struct nouveau_svmm cocci_id/* drivers/gpu/drm/nouveau/nouveau_svm.c 286 */;
	struct mmu_notifier *cocci_id/* drivers/gpu/drm/nouveau/nouveau_svm.c 284 */;
	struct nvif_vmm_pfnclr_v0 cocci_id/* drivers/gpu/drm/nouveau/nouveau_svm.c 243 */;
	unsigned cocci_id/* drivers/gpu/drm/nouveau/nouveau_svm.c 112 */;
	struct drm_nouveau_svm_bind *cocci_id/* drivers/gpu/drm/nouveau/nouveau_svm.c 111 */;
	struct nouveau_cli *cocci_id/* drivers/gpu/drm/nouveau/nouveau_svm.c 110 */;
	struct drm_file *cocci_id/* drivers/gpu/drm/nouveau/nouveau_svm.c 108 */;
	struct drm_device *cocci_id/* drivers/gpu/drm/nouveau/nouveau_svm.c 107 */;
}
