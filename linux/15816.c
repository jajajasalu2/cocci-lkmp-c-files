cocci_test_suite() {
	void cocci_id/* drivers/staging/vc04_services/interface/vchiq_arm/vchiq_core.c 99 */(struct vchiq_state *state,
											     struct vchiq_header *header);
	const char *constcocci_id/* drivers/staging/vc04_services/interface/vchiq_arm/vchiq_core.c 87 */[];
	void *cocci_id/* drivers/staging/vc04_services/interface/vchiq_arm/vchiq_core.c 752 */;
	ssize_t (*cocci_id/* drivers/staging/vc04_services/interface/vchiq_arm/vchiq_core.c 750 */)(void *context,
												    void *dest,
												    size_t offset,
												    size_t maxsize);
	ssize_t cocci_id/* drivers/staging/vc04_services/interface/vchiq_arm/vchiq_core.c 748 */;
	struct vchiq_state *cocci_id/* drivers/staging/vc04_services/interface/vchiq_arm/vchiq_core.c 61 */[VCHIQ_MAX_STATES];
	BITSET_T *cocci_id/* drivers/staging/vc04_services/interface/vchiq_arm/vchiq_core.c 597 */;
	struct vchiq_header cocci_id/* drivers/staging/vc04_services/interface/vchiq_arm/vchiq_core.c 456 */;
	size_t cocci_id/* drivers/staging/vc04_services/interface/vchiq_arm/vchiq_core.c 452 */;
	wait_queue_head_t *cocci_id/* drivers/staging/vc04_services/interface/vchiq_arm/vchiq_core.c 390 */;
	struct remote_event *cocci_id/* drivers/staging/vc04_services/interface/vchiq_arm/vchiq_core.c 390 */;
	enum{QMFLAGS_IS_BLOCKING=(1 << 0), QMFLAGS_NO_MUTEX_LOCK=(1 << 1), QMFLAGS_NO_MUTEX_UNLOCK=(1 << 2),} cocci_id/* drivers/staging/vc04_services/interface/vchiq_arm/vchiq_core.c 38 */;
	char cocci_id/* drivers/staging/vc04_services/interface/vchiq_arm/vchiq_core.c 3621 */;
	u8 cocci_id/* drivers/staging/vc04_services/interface/vchiq_arm/vchiq_core.c 3617 */;
	char cocci_id/* drivers/staging/vc04_services/interface/vchiq_arm/vchiq_core.c 3602 */[100];
	const u8 *cocci_id/* drivers/staging/vc04_services/interface/vchiq_arm/vchiq_core.c 3600 */;
	const void *cocci_id/* drivers/staging/vc04_services/interface/vchiq_arm/vchiq_core.c 3597 */;
	struct vchiq_header *cocci_id/* drivers/staging/vc04_services/interface/vchiq_arm/vchiq_core.c 359 */;
	enum vchiq_reason cocci_id/* drivers/staging/vc04_services/interface/vchiq_arm/vchiq_core.c 358 */;
	char cocci_id/* drivers/staging/vc04_services/interface/vchiq_arm/vchiq_core.c 3458 */[30];
	char cocci_id/* drivers/staging/vc04_services/interface/vchiq_arm/vchiq_core.c 3449 */[80];
	struct vchiq_openack_payload {
		short version;
	} cocci_id/* drivers/staging/vc04_services/interface/vchiq_arm/vchiq_core.c 34 */;
	struct vchiq_slot_info cocci_id/* drivers/staging/vc04_services/interface/vchiq_arm/vchiq_core.c 3338 */;
	struct vchiq_service_quota *cocci_id/* drivers/staging/vc04_services/interface/vchiq_arm/vchiq_core.c 330 */;
	enum vchiq_service_option cocci_id/* drivers/staging/vc04_services/interface/vchiq_arm/vchiq_core.c 3226 */;
	struct vchiq_config *cocci_id/* drivers/staging/vc04_services/interface/vchiq_arm/vchiq_core.c 3214 */;
	short *cocci_id/* drivers/staging/vc04_services/interface/vchiq_arm/vchiq_core.c 3196 */;
	int cocci_id/* drivers/staging/vc04_services/interface/vchiq_arm/vchiq_core.c 2969 */[2];
	const int cocci_id/* drivers/staging/vc04_services/interface/vchiq_arm/vchiq_core.c 2966 */;
	const char cocci_id/* drivers/staging/vc04_services/interface/vchiq_arm/vchiq_core.c 2965 */;
	enum vchiq_bulk_dir cocci_id/* drivers/staging/vc04_services/interface/vchiq_arm/vchiq_core.c 2958 */;
	enum vchiq_bulk_mode cocci_id/* drivers/staging/vc04_services/interface/vchiq_arm/vchiq_core.c 2957 */;
	struct vchiq_open_payload {
		int fourcc;
		int client_id;
		short version;
		short version_min;
	} cocci_id/* drivers/staging/vc04_services/interface/vchiq_arm/vchiq_core.c 27 */;
	enum vchiq_status cocci_id/* drivers/staging/vc04_services/interface/vchiq_arm/vchiq_core.c 2535 */;
	int *cocci_id/* drivers/staging/vc04_services/interface/vchiq_arm/vchiq_core.c 231 */;
	struct vchiq_service **cocci_id/* drivers/staging/vc04_services/interface/vchiq_arm/vchiq_core.c 2287 */;
	vchiq_userdata_term cocci_id/* drivers/staging/vc04_services/interface/vchiq_arm/vchiq_core.c 2284 */;
	const struct vchiq_service_params *cocci_id/* drivers/staging/vc04_services/interface/vchiq_arm/vchiq_core.c 2282 */;
	unsigned short cocci_id/* drivers/staging/vc04_services/interface/vchiq_arm/vchiq_core.c 2194 */;
	struct vchiq_slot *cocci_id/* drivers/staging/vc04_services/interface/vchiq_arm/vchiq_core.c 2162 */;
	struct vchiq_state cocci_id/* drivers/staging/vc04_services/interface/vchiq_arm/vchiq_core.c 2154 */;
	char cocci_id/* drivers/staging/vc04_services/interface/vchiq_arm/vchiq_core.c 2132 */[16];
	struct vchiq_slot_zero cocci_id/* drivers/staging/vc04_services/interface/vchiq_arm/vchiq_core.c 2106 */;
	enum vchiq_connstate cocci_id/* drivers/staging/vc04_services/interface/vchiq_arm/vchiq_core.c 2081 */;
	const char *cocci_id/* drivers/staging/vc04_services/interface/vchiq_arm/vchiq_core.c 2080 */;
	unsigned int cocci_id/* drivers/staging/vc04_services/interface/vchiq_arm/vchiq_core.c 205 */;
	struct vchiq_instance *cocci_id/* drivers/staging/vc04_services/interface/vchiq_arm/vchiq_core.c 204 */;
	struct vchiq_slot_zero *cocci_id/* drivers/staging/vc04_services/interface/vchiq_arm/vchiq_core.c 1696 */;
	struct vchiq_openack_payload *cocci_id/* drivers/staging/vc04_services/interface/vchiq_arm/vchiq_core.c 1631 */;
	const struct vchiq_openack_payload *cocci_id/* drivers/staging/vc04_services/interface/vchiq_arm/vchiq_core.c 1630 */;
	unsigned long cocci_id/* drivers/staging/vc04_services/interface/vchiq_arm/vchiq_core.c 1613 */;
	struct vchiq_state *cocci_id/* drivers/staging/vc04_services/interface/vchiq_arm/vchiq_core.c 157 */;
	long cocci_id/* drivers/staging/vc04_services/interface/vchiq_arm/vchiq_core.c 1543 */;
	char *cocci_id/* drivers/staging/vc04_services/interface/vchiq_arm/vchiq_core.c 1530 */;
	struct vchiq_shared_state *cocci_id/* drivers/staging/vc04_services/interface/vchiq_arm/vchiq_core.c 1508 */;
	struct vchiq_openack_payload cocci_id/* drivers/staging/vc04_services/interface/vchiq_arm/vchiq_core.c 1431 */;
	short cocci_id/* drivers/staging/vc04_services/interface/vchiq_arm/vchiq_core.c 1409 */;
	struct vchiq_open_payload *cocci_id/* drivers/staging/vc04_services/interface/vchiq_arm/vchiq_core.c 1396 */;
	const struct vchiq_open_payload *cocci_id/* drivers/staging/vc04_services/interface/vchiq_arm/vchiq_core.c 1395 */;
	struct vchiq_open_payload cocci_id/* drivers/staging/vc04_services/interface/vchiq_arm/vchiq_core.c 1394 */;
	struct vchiq_bulk *cocci_id/* drivers/staging/vc04_services/interface/vchiq_arm/vchiq_core.c 1348 */;
	int cocci_id/* drivers/staging/vc04_services/interface/vchiq_arm/vchiq_core.c 1336 */;
	struct vchiq_bulk_queue *cocci_id/* drivers/staging/vc04_services/interface/vchiq_arm/vchiq_core.c 1334 */;
	struct vchiq_service *cocci_id/* drivers/staging/vc04_services/interface/vchiq_arm/vchiq_core.c 1333 */;
	void cocci_id/* drivers/staging/vc04_services/interface/vchiq_arm/vchiq_core.c 1332 */;
	u32 cocci_id/* drivers/staging/vc04_services/interface/vchiq_arm/vchiq_core.c 1272 */;
	struct bulk_waiter *cocci_id/* drivers/staging/vc04_services/interface/vchiq_arm/vchiq_core.c 1222 */;
	struct vchiq_slot_info *cocci_id/* drivers/staging/vc04_services/interface/vchiq_arm/vchiq_core.c 1123 */;
}
