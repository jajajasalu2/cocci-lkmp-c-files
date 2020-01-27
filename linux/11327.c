cocci_test_suite() {
	struct qxl_ring_header *cocci_id/* drivers/gpu/drm/qxl/qxl_cmd.c 89 */;
	struct qxl_ring *cocci_id/* drivers/gpu/drm/qxl/qxl_cmd.c 86 */;
	struct ring *cocci_id/* drivers/gpu/drm/qxl/qxl_cmd.c 75 */;
	wait_queue_head_t *cocci_id/* drivers/gpu/drm/qxl/qxl_cmd.c 67 */;
	void *cocci_id/* drivers/gpu/drm/qxl/qxl_cmd.c 627 */;
	struct qxl_rect cocci_id/* drivers/gpu/drm/qxl/qxl_cmd.c 554 */;
	struct qxl_surface_cmd *cocci_id/* drivers/gpu/drm/qxl/qxl_cmd.c 469 */;
	struct qxl_ring {
		struct ring *ring;
		int element_size;
		int n_elements;
		int prod_notify;
		wait_queue_head_t *push_event;
		spinlock_t lock;
	} cocci_id/* drivers/gpu/drm/qxl/qxl_cmd.c 42 */;
	uint8_t cocci_id/* drivers/gpu/drm/qxl/qxl_cmd.c 410 */;
	struct qxl_surface_create *cocci_id/* drivers/gpu/drm/qxl/qxl_cmd.c 386 */;
	void cocci_id/* drivers/gpu/drm/qxl/qxl_cmd.c 384 */;
	struct ring {
		struct qxl_ring_header header;
		uint8_t elements[0];
	} cocci_id/* drivers/gpu/drm/qxl/qxl_cmd.c 37 */;
	int cocci_id/* drivers/gpu/drm/qxl/qxl_cmd.c 35 */(struct qxl_device *qdev,
							   int max_to_reap);
	uint32_t cocci_id/* drivers/gpu/drm/qxl/qxl_cmd.c 336 */;
	const struct qxl_rect *cocci_id/* drivers/gpu/drm/qxl/qxl_cmd.c 333 */;
	long cocci_id/* drivers/gpu/drm/qxl/qxl_cmd.c 322 */;
	struct qxl_bo *cocci_id/* drivers/gpu/drm/qxl/qxl_cmd.c 267 */;
	struct qxl_bo **cocci_id/* drivers/gpu/drm/qxl/qxl_cmd.c 265 */;
	unsigned long cocci_id/* drivers/gpu/drm/qxl/qxl_cmd.c 264 */;
	struct qxl_release *cocci_id/* drivers/gpu/drm/qxl/qxl_cmd.c 263 */;
	struct qxl_device *cocci_id/* drivers/gpu/drm/qxl/qxl_cmd.c 262 */;
	int cocci_id/* drivers/gpu/drm/qxl/qxl_cmd.c 262 */;
	union qxl_release_info *cocci_id/* drivers/gpu/drm/qxl/qxl_cmd.c 225 */;
	uint64_t cocci_id/* drivers/gpu/drm/qxl/qxl_cmd.c 223 */;
	struct qxl_command cocci_id/* drivers/gpu/drm/qxl/qxl_cmd.c 189 */;
	bool cocci_id/* drivers/gpu/drm/qxl/qxl_cmd.c 187 */;
	volatile uint8_t *cocci_id/* drivers/gpu/drm/qxl/qxl_cmd.c 163 */;
	volatile struct qxl_ring_header *cocci_id/* drivers/gpu/drm/qxl/qxl_cmd.c 162 */;
	uint8_t *cocci_id/* drivers/gpu/drm/qxl/qxl_cmd.c 116 */;
	const void *cocci_id/* drivers/gpu/drm/qxl/qxl_cmd.c 113 */;
}
