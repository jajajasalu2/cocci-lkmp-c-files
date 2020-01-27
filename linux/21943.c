cocci_test_suite() {
	struct sw842_param {
		u8 *in;
		u8 *instart;
		u64 ilen;
		u8 *out;
		u64 olen;
		u8 bit;
		u64 data8[1];
		u32 data4[2];
		u16 data2[4];
		int index8[1];
		int index4[2];
		int index2[4];
		DECLARE_HASHTABLE(htable8,SW842_HASHTABLE8_BITS);
		DECLARE_HASHTABLE(htable4,SW842_HASHTABLE4_BITS);
		DECLARE_HASHTABLE(htable2,SW842_HASHTABLE2_BITS);
		struct sw842_hlist_node8 node8[1 << I8_BITS];
		struct sw842_hlist_node4 node4[1 << I4_BITS];
		struct sw842_hlist_node2 node2[1 << I2_BITS];
	} cocci_id/* lib/842/842_compress.c 88 */;
	struct sw842_hlist_node2 {
		struct hlist_node node;
		u16 data;
		u8 index;
	} cocci_id/* lib/842/842_compress.c 79 */;
	struct sw842_hlist_node4 {
		struct hlist_node node;
		u32 data;
		u16 index;
	} cocci_id/* lib/842/842_compress.c 73 */;
	struct sw842_hlist_node8 {
		struct hlist_node node;
		u64 data;
		u8 index;
	} cocci_id/* lib/842/842_compress.c 67 */;
	void __exit cocci_id/* lib/842/842_compress.c 621 */;
	int __init cocci_id/* lib/842/842_compress.c 612 */;
	u64 *cocci_id/* lib/842/842_compress.c 514 */;
	u32 cocci_id/* lib/842/842_compress.c 484 */;
	unsigned int *cocci_id/* lib/842/842_compress.c 478 */;
	void *cocci_id/* lib/842/842_compress.c 478 */;
	const u8 *cocci_id/* lib/842/842_compress.c 477 */;
	unsigned int cocci_id/* lib/842/842_compress.c 477 */;
	void cocci_id/* lib/842/842_compress.c 408 */;
	u8 cocci_id/* lib/842/842_compress.c 38 */[OPS_MAX][5];
	bool cocci_id/* lib/842/842_compress.c 226 */;
	__be64 *cocci_id/* lib/842/842_compress.c 203 */;
	__be32 *cocci_id/* lib/842/842_compress.c 199 */;
	__be16 *cocci_id/* lib/842/842_compress.c 197 */;
	unsigned long cocci_id/* lib/842/842_compress.c 173 */;
	unsigned char cocci_id/* lib/842/842_compress.c 173 */;
	u8 *cocci_id/* lib/842/842_compress.c 171 */;
	u8 cocci_id/* lib/842/842_compress.c 154 */;
	u64 cocci_id/* lib/842/842_compress.c 154 */;
	struct sw842_param *cocci_id/* lib/842/842_compress.c 154 */;
	int cocci_id/* lib/842/842_compress.c 154 */;
	int cocci_id/* lib/842/842_compress.c 152 */(struct sw842_param *p,
						     u64 d, u8 n);
	u8 cocci_id/* lib/842/842_compress.c 150 */[8];
}
