cocci_test_suite() {
	struct kfd_vm_fault_info *cocci_id/* drivers/gpu/drm/amd/amdkfd/kfd_events.c 976 */;
	int cocci_id/* drivers/gpu/drm/amd/amdkfd/kfd_events.c 94 */;
	struct mm_struct *cocci_id/* drivers/gpu/drm/amd/amdkfd/kfd_events.c 889 */;
	struct kfd_dev *cocci_id/* drivers/gpu/drm/amd/amdkfd/kfd_events.c 876 */;
	uint64_t __user *cocci_id/* drivers/gpu/drm/amd/amdkfd/kfd_events.c 816 */;
	uint8_t cocci_id/* drivers/gpu/drm/amd/amdkfd/kfd_events.c 79 */;
	unsigned long cocci_id/* drivers/gpu/drm/amd/amdkfd/kfd_events.c 784 */;
	struct vm_area_struct *cocci_id/* drivers/gpu/drm/amd/amdkfd/kfd_events.c 782 */;
	struct kfd_event_data cocci_id/* drivers/gpu/drm/amd/amdkfd/kfd_events.c 687 */;
	long cocci_id/* drivers/gpu/drm/amd/amdkfd/kfd_events.c 676 */;
	void __user *cocci_id/* drivers/gpu/drm/amd/amdkfd/kfd_events.c 666 */;
	void *cocci_id/* drivers/gpu/drm/amd/amdkfd/kfd_events.c 66 */;
	struct kfd_signal_page *cocci_id/* drivers/gpu/drm/amd/amdkfd/kfd_events.c 64 */;
	struct kfd_hsa_memory_exception_data cocci_id/* drivers/gpu/drm/amd/amdkfd/kfd_events.c 624 */;
	struct kfd_hsa_memory_exception_data __user *cocci_id/* drivers/gpu/drm/amd/amdkfd/kfd_events.c 612 */;
	struct kfd_hsa_memory_exception_data *cocci_id/* drivers/gpu/drm/amd/amdkfd/kfd_events.c 611 */;
	struct kfd_event_data __user *cocci_id/* drivers/gpu/drm/amd/amdkfd/kfd_events.c 609 */;
	struct kfd_event_waiter cocci_id/* drivers/gpu/drm/amd/amdkfd/kfd_events.c 533 */;
	uint32_t cocci_id/* drivers/gpu/drm/amd/amdkfd/kfd_events.c 527 */;
	struct kfd_event_waiter *cocci_id/* drivers/gpu/drm/amd/amdkfd/kfd_events.c 527 */;
	struct kfd_signal_page {
		uint64_t *kernel_address;
		uint64_t __user *user_address;
		bool need_to_free_pages;
	} cocci_id/* drivers/gpu/drm/amd/amdkfd/kfd_events.c 52 */;
	unsigned int cocci_id/* drivers/gpu/drm/amd/amdkfd/kfd_events.c 464 */;
	struct kfd_process *cocci_id/* drivers/gpu/drm/amd/amdkfd/kfd_events.c 450 */;
	struct kfd_event *cocci_id/* drivers/gpu/drm/amd/amdkfd/kfd_events.c 450 */;
	void cocci_id/* drivers/gpu/drm/amd/amdkfd/kfd_events.c 450 */;
	struct kfd_event_waiter {
		wait_queue_entry_t wait;
		struct kfd_event *event;
		bool activated;
	} cocci_id/* drivers/gpu/drm/amd/amdkfd/kfd_events.c 39 */;
	uint64_t *cocci_id/* drivers/gpu/drm/amd/amdkfd/kfd_events.c 325 */;
	uint32_t *cocci_id/* drivers/gpu/drm/amd/amdkfd/kfd_events.c 324 */;
	uint64_t cocci_id/* drivers/gpu/drm/amd/amdkfd/kfd_events.c 299 */;
	bool cocci_id/* drivers/gpu/drm/amd/amdkfd/kfd_events.c 293 */;
	const struct kfd_event *cocci_id/* drivers/gpu/drm/amd/amdkfd/kfd_events.c 293 */;
	struct file *cocci_id/* drivers/gpu/drm/amd/amdkfd/kfd_events.c 181 */;
	struct kfd_hsa_hw_exception_data cocci_id/* drivers/gpu/drm/amd/amdkfd/kfd_events.c 1014 */;
}
