cocci_test_suite() {
	int cocci_id/* drivers/gpu/drm/lima/lima_device.c 80 */;
	const char *cocci_id/* drivers/gpu/drm/lima/lima_device.c 75 */;
	struct lima_ip_desc cocci_id/* drivers/gpu/drm/lima/lima_device.c 46 */[lima_ip_num];
	struct resource *cocci_id/* drivers/gpu/drm/lima/lima_device.c 294 */;
	struct lima_sched_pipe *cocci_id/* drivers/gpu/drm/lima/lima_device.c 236 */;
	struct lima_ip *cocci_id/* drivers/gpu/drm/lima/lima_device.c 206 */;
	struct lima_ip_desc *cocci_id/* drivers/gpu/drm/lima/lima_device.c 205 */;
	struct lima_ip_desc {
		char *name;
		char *irq_name;
		bool must_have[lima_gpu_num];
		int offset[lima_gpu_num];
		int (*init)(struct lima_ip *ip);
		void (*fini)(struct lima_ip *ip);
	} cocci_id/* drivers/gpu/drm/lima/lima_device.c 20 */;
	bool cocci_id/* drivers/gpu/drm/lima/lima_device.c 177 */;
	struct lima_device *cocci_id/* drivers/gpu/drm/lima/lima_device.c 134 */;
	void cocci_id/* drivers/gpu/drm/lima/lima_device.c 134 */;
}
