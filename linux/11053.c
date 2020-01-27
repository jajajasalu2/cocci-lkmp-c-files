cocci_test_suite() {
	enum kfd_queue_type cocci_id/* drivers/gpu/drm/amd/amdkfd/kfd_kernel_queue_cik.c 39 */;
	unsigned int cocci_id/* drivers/gpu/drm/amd/amdkfd/kfd_kernel_queue_cik.c 39 */;
	bool cocci_id/* drivers/gpu/drm/amd/amdkfd/kfd_kernel_queue_cik.c 38 */;
	struct kfd_dev *cocci_id/* drivers/gpu/drm/amd/amdkfd/kfd_kernel_queue_cik.c 38 */;
	struct kernel_queue *cocci_id/* drivers/gpu/drm/amd/amdkfd/kfd_kernel_queue_cik.c 38 */;
	struct kernel_queue_ops *cocci_id/* drivers/gpu/drm/amd/amdkfd/kfd_kernel_queue_cik.c 31 */;
	void cocci_id/* drivers/gpu/drm/amd/amdkfd/kfd_kernel_queue_cik.c 31 */;
	void cocci_id/* drivers/gpu/drm/amd/amdkfd/kfd_kernel_queue_cik.c 29 */(struct kernel_queue *kq);
	bool cocci_id/* drivers/gpu/drm/amd/amdkfd/kfd_kernel_queue_cik.c 26 */(struct kernel_queue *kq,
										struct kfd_dev *dev,
										enum kfd_queue_type type,
										unsigned int queue_size);
}
