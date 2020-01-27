cocci_test_suite() {
	void cocci_id/* drivers/gpu/drm/radeon/mkregtable.c 69 */(struct list_head *new,
								  struct list_head *prev,
								  struct list_head *next);
	struct list_head *cocci_id/* drivers/gpu/drm/radeon/mkregtable.c 47 */;
	void cocci_id/* drivers/gpu/drm/radeon/mkregtable.c 47 */;
	struct list_head {
		struct list_head *next,*prev;
	} cocci_id/* drivers/gpu/drm/radeon/mkregtable.c 42 */;
	type cocci_id/* drivers/gpu/drm/radeon/mkregtable.c 30 */;
	type *cocci_id/* drivers/gpu/drm/radeon/mkregtable.c 30 */;
	char *cocci_id/* drivers/gpu/drm/radeon/mkregtable.c 30 */;
	const typeof(((type *)0)->member) *cocci_id/* drivers/gpu/drm/radeon/mkregtable.c 29 */;
	struct table cocci_id/* drivers/gpu/drm/radeon/mkregtable.c 267 */;
	char *cocci_id/* drivers/gpu/drm/radeon/mkregtable.c 265 */[];
	int cocci_id/* drivers/gpu/drm/radeon/mkregtable.c 265 */;
	TYPE *cocci_id/* drivers/gpu/drm/radeon/mkregtable.c 20 */;
	size_t cocci_id/* drivers/gpu/drm/radeon/mkregtable.c 195 */;
	char cocci_id/* drivers/gpu/drm/radeon/mkregtable.c 194 */[1024];
	regmatch_t cocci_id/* drivers/gpu/drm/radeon/mkregtable.c 193 */[4];
	regex_t cocci_id/* drivers/gpu/drm/radeon/mkregtable.c 192 */;
	FILE *cocci_id/* drivers/gpu/drm/radeon/mkregtable.c 191 */;
	const char *cocci_id/* drivers/gpu/drm/radeon/mkregtable.c 189 */;
	struct table *cocci_id/* drivers/gpu/drm/radeon/mkregtable.c 189 */;
	char cocci_id/* drivers/gpu/drm/radeon/mkregtable.c 188 */[10];
	unsigned *cocci_id/* drivers/gpu/drm/radeon/mkregtable.c 175 */;
	struct offset cocci_id/* drivers/gpu/drm/radeon/mkregtable.c 123 */;
	struct offset *cocci_id/* drivers/gpu/drm/radeon/mkregtable.c 119 */;
	unsigned cocci_id/* drivers/gpu/drm/radeon/mkregtable.c 119 */;
	struct table {
		struct list_head offsets;
		unsigned offset_max;
		unsigned nentry;
		unsigned *table;
		char *gpu_prefix;
	} cocci_id/* drivers/gpu/drm/radeon/mkregtable.c 111 */;
	struct offset {
		struct list_head list;
		unsigned offset;
	} cocci_id/* drivers/gpu/drm/radeon/mkregtable.c 106 */;
}
