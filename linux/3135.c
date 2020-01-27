cocci_test_suite() {
	char cocci_id/* drivers/thunderbolt/property.c 98 */[TB_PROPERTY_KEY_SIZE + 1];
	enum tb_property_type cocci_id/* drivers/thunderbolt/property.c 80 */;
	struct tb_property cocci_id/* drivers/thunderbolt/property.c 678 */;
	const char *cocci_id/* drivers/thunderbolt/property.c 539 */;
	u32 cocci_id/* drivers/thunderbolt/property.c 511 */;
	const void *cocci_id/* drivers/thunderbolt/property.c 47 */;
	void *cocci_id/* drivers/thunderbolt/property.c 47 */;
	void cocci_id/* drivers/thunderbolt/property.c 47 */;
	struct tb_property_rootdir_entry *cocci_id/* drivers/thunderbolt/property.c 419 */;
	struct tb_property_dir_entry *cocci_id/* drivers/thunderbolt/property.c 413 */;
	struct tb_property_dir *cocci_id/* drivers/thunderbolt/property.c 38 */(const u32 *block,
										size_t block_len,
										unsigned int dir_offset,
										size_t dir_len,
										bool is_root);
	int cocci_id/* drivers/thunderbolt/property.c 355 */;
	struct tb_property_entry *cocci_id/* drivers/thunderbolt/property.c 353 */;
	const struct tb_property *cocci_id/* drivers/thunderbolt/property.c 352 */;
	u32 *cocci_id/* drivers/thunderbolt/property.c 349 */;
	unsigned int cocci_id/* drivers/thunderbolt/property.c 349 */;
	size_t cocci_id/* drivers/thunderbolt/property.c 349 */;
	const struct tb_property_dir *cocci_id/* drivers/thunderbolt/property.c 348 */;
	ssize_t cocci_id/* drivers/thunderbolt/property.c 348 */;
	struct tb_property_entry cocci_id/* drivers/thunderbolt/property.c 321 */;
	struct tb_property_rootdir_entry cocci_id/* drivers/thunderbolt/property.c 318 */;
	size_t *cocci_id/* drivers/thunderbolt/property.c 310 */;
	struct tb_property_dir_entry {
		u32 uuid[4];
		struct tb_property_entry entries[];
	} cocci_id/* drivers/thunderbolt/property.c 31 */;
	struct tb_property_rootdir_entry {
		u32 magic;
		u32 length;
		struct tb_property_entry entries[];
	} cocci_id/* drivers/thunderbolt/property.c 25 */;
	const uuid_t *cocci_id/* drivers/thunderbolt/property.c 242 */;
	const struct tb_property_rootdir_entry *cocci_id/* drivers/thunderbolt/property.c 223 */;
	struct tb_property *cocci_id/* drivers/thunderbolt/property.c 193 */;
	const struct tb_property_entry *cocci_id/* drivers/thunderbolt/property.c 164 */;
	bool cocci_id/* drivers/thunderbolt/property.c 162 */;
	const u32 *cocci_id/* drivers/thunderbolt/property.c 161 */;
	struct tb_property_dir *cocci_id/* drivers/thunderbolt/property.c 161 */;
	struct tb_property_entry {
		u32 key_hi;
		u32 key_lo;
		u16 length;
		u8 reserved;
		u8 type;
		u32 value;
	} cocci_id/* drivers/thunderbolt/property.c 16 */;
}
