cocci_test_suite() {
	struct i2400m_bootrom_header cocci_id/* drivers/net/wimax/i2400m/fw.c 885 */;
	enum i2400m_bri cocci_id/* drivers/net/wimax/i2400m/fw.c 880 */;
	struct {
		struct i2400m_bootrom_header cmd;
		u8 cmd_pl[0];
	}__packed *cocci_id/* drivers/net/wimax/i2400m/fw.c 793 */;
	struct {
		struct i2400m_bootrom_header cmd;
		u8 cmd_payload[];
	}__packed *cocci_id/* drivers/net/wimax/i2400m/fw.c 650 */;
	unsigned int cocci_id/* drivers/net/wimax/i2400m/fw.c 645 */;
	unsigned long cocci_id/* drivers/net/wimax/i2400m/fw.c 644 */;
	const void *cocci_id/* drivers/net/wimax/i2400m/fw.c 643 */;
	const struct i2400m_bootrom_header *cocci_id/* drivers/net/wimax/i2400m/fw.c 581 */;
	struct device *cocci_id/* drivers/net/wimax/i2400m/fw.c 455 */;
	size_t cocci_id/* drivers/net/wimax/i2400m/fw.c 452 */;
	struct i2400m_bootrom_header *cocci_id/* drivers/net/wimax/i2400m/fw.c 451 */;
	struct i2400m *cocci_id/* drivers/net/wimax/i2400m/fw.c 450 */;
	int cocci_id/* drivers/net/wimax/i2400m/fw.c 450 */;
	ssize_t cocci_id/* drivers/net/wimax/i2400m/fw.c 450 */;
	unsigned cocci_id/* drivers/net/wimax/i2400m/fw.c 326 */;
	char *cocci_id/* drivers/net/wimax/i2400m/fw.c 315 */;
	const char *cocci_id/* drivers/net/wimax/i2400m/fw.c 312 */;
	void cocci_id/* drivers/net/wimax/i2400m/fw.c 269 */;
	void **cocci_id/* drivers/net/wimax/i2400m/fw.c 255 */;
	struct i2400m_barker_db *cocci_id/* drivers/net/wimax/i2400m/fw.c 252 */;
	u32 cocci_id/* drivers/net/wimax/i2400m/fw.c 248 */;
	gfp_t cocci_id/* drivers/net/wimax/i2400m/fw.c 219 */;
	size_t *cocci_id/* drivers/net/wimax/i2400m/fw.c 218 */;
	struct i2400m_barker_db {
		__le32 data[4];
	} *cocci_id/* drivers/net/wimax/i2400m/fw.c 211 */;
	const u32 *cocci_id/* drivers/net/wimax/i2400m/fw.c 193 */;
	void *cocci_id/* drivers/net/wimax/i2400m/fw.c 193 */;
	const __le32 cocci_id/* drivers/net/wimax/i2400m/fw.c 168 */[4];
	const struct firmware *cocci_id/* drivers/net/wimax/i2400m/fw.c 1552 */;
	struct i2400m_fw *cocci_id/* drivers/net/wimax/i2400m/fw.c 1551 */;
	struct i2400m_fw cocci_id/* drivers/net/wimax/i2400m/fw.c 1510 */;
	struct kref *cocci_id/* drivers/net/wimax/i2400m/fw.c 1507 */;
	struct i2400m_fw {
		struct kref kref;
		const struct firmware *fw;
	} cocci_id/* drivers/net/wimax/i2400m/fw.c 1500 */;
	const struct i2400m_bcf_hdr **cocci_id/* drivers/net/wimax/i2400m/fw.c 1340 */;
	const struct i2400m_bcf_hdr *cocci_id/* drivers/net/wimax/i2400m/fw.c 1337 */;
	struct {
		struct i2400m_bootrom_header cmd;
		struct i2400m_bcf_hdr cmd_pl;
	}__packed *cocci_id/* drivers/net/wimax/i2400m/fw.c 1113 */;
	struct {
		struct i2400m_bootrom_header ack;
		u8 ack_pl[16];
	}__packed cocci_id/* drivers/net/wimax/i2400m/fw.c 1028 */;
	struct net_device *cocci_id/* drivers/net/wimax/i2400m/fw.c 1026 */;
}
