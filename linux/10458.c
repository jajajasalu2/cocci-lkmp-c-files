cocci_test_suite() {
	int cocci_id/* drivers/gpu/drm/radeon/atom.c 79 */[8][4];
	int cocci_id/* drivers/gpu/drm/radeon/atom.c 77 */[8];
	uint32_t cocci_id/* drivers/gpu/drm/radeon/atom.c 73 */[8];
	int cocci_id/* drivers/gpu/drm/radeon/atom.c 71 */(struct atom_context *ctx,
							   int index,
							   uint32_t *params);
	unsigned long cocci_id/* drivers/gpu/drm/radeon/atom.c 698 */;
	unsigned cocci_id/* drivers/gpu/drm/radeon/atom.c 663 */;
	struct {
		struct atom_context *ctx;
		uint32_t *ps,*ws;
		int ps_shift;
		uint16_t start;
		unsigned last_jump;
		unsigned long last_jump_jiffies;
		bool abort;
	} cocci_id/* drivers/gpu/drm/radeon/atom.c 59 */;
	int *cocci_id/* drivers/gpu/drm/radeon/atom.c 435 */;
	uint8_t cocci_id/* drivers/gpu/drm/radeon/atom.c 434 */;
	uint32_t cocci_id/* drivers/gpu/drm/radeon/atom.c 434 */;
	atom_exec_context *cocci_id/* drivers/gpu/drm/radeon/atom.c 434 */;
	u32 *cocci_id/* drivers/gpu/drm/radeon/atom.c 227 */;
	struct _ATOM_VRAM_USAGE_BY_FIRMWARE *cocci_id/* drivers/gpu/drm/radeon/atom.c 1404 */;
	uint16_t cocci_id/* drivers/gpu/drm/radeon/atom.c 1402 */;
	struct atom_context *cocci_id/* drivers/gpu/drm/radeon/atom.c 1399 */;
	int cocci_id/* drivers/gpu/drm/radeon/atom.c 1399 */;
	u16 *cocci_id/* drivers/gpu/drm/radeon/atom.c 1387 */;
	bool cocci_id/* drivers/gpu/drm/radeon/atom.c 1382 */;
	uint8_t *cocci_id/* drivers/gpu/drm/radeon/atom.c 1382 */;
	uint16_t *cocci_id/* drivers/gpu/drm/radeon/atom.c 1362 */;
	void cocci_id/* drivers/gpu/drm/radeon/atom.c 1355 */;
	uint32_t cocci_id/* drivers/gpu/drm/radeon/atom.c 1330 */[16];
	struct radeon_device *cocci_id/* drivers/gpu/drm/radeon/atom.c 1328 */;
	char cocci_id/* drivers/gpu/drm/radeon/atom.c 1271 */[512];
	char *cocci_id/* drivers/gpu/drm/radeon/atom.c 1270 */;
	struct atom_context cocci_id/* drivers/gpu/drm/radeon/atom.c 1269 */;
	struct card_info *cocci_id/* drivers/gpu/drm/radeon/atom.c 1265 */;
	void *cocci_id/* drivers/gpu/drm/radeon/atom.c 1265 */;
	int cocci_id/* drivers/gpu/drm/radeon/atom.c 1249 */[];
	uint32_t *cocci_id/* drivers/gpu/drm/radeon/atom.c 1240 */;
	atom_exec_context cocci_id/* drivers/gpu/drm/radeon/atom.c 1163 */;
	unsigned char cocci_id/* drivers/gpu/drm/radeon/atom.c 1162 */;
	struct {
		void (*func)(atom_exec_context *, int *, int);
		int arg;
	} cocci_id/* drivers/gpu/drm/radeon/atom.c 1030 */[ATOM_OP_CNT];
}
