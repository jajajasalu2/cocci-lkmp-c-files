cocci_test_suite() {
	ct_data cocci_id/* lib/zlib_deflate/deftree.c 95 */[D_CODES];
	ct_data cocci_id/* lib/zlib_deflate/deftree.c 88 */[L_CODES + 2];
	char cocci_id/* lib/zlib_deflate/deftree.c 79 */;
	tree_desc *cocci_id/* lib/zlib_deflate/deftree.c 735 */;
	ct_data *cocci_id/* lib/zlib_deflate/deftree.c 731 */;
	const uch cocci_id/* lib/zlib_deflate/deftree.c 73 */[BL_CODES];
	deflate_state *cocci_id/* lib/zlib_deflate/deftree.c 725 */;
	int cocci_id/* lib/zlib_deflate/deftree.c 724 */;
	const int cocci_id/* lib/zlib_deflate/deftree.c 70 */[BL_CODES];
	const int cocci_id/* lib/zlib_deflate/deftree.c 67 */[D_CODES];
	const int cocci_id/* lib/zlib_deflate/deftree.c 64 */[LENGTH_CODES];
	ush cocci_id/* lib/zlib_deflate/deftree.c 598 */;
	uch cocci_id/* lib/zlib_deflate/deftree.c 597 */;
	const ct_data *cocci_id/* lib/zlib_deflate/deftree.c 544 */;
	void cocci_id/* lib/zlib_deflate/deftree.c 538 */;
	u32 cocci_id/* lib/zlib_deflate/deftree.c 523 */;
	ush cocci_id/* lib/zlib_deflate/deftree.c 501 */[MAX_BITS + 1];
	ush *cocci_id/* lib/zlib_deflate/deftree.c 498 */;
	long cocci_id/* lib/zlib_deflate/deftree.c 478 */;
	const int *cocci_id/* lib/zlib_deflate/deftree.c 415 */;
	void cocci_id/* lib/zlib_deflate/deftree.c 177 */(deflate_state *s,
							  int value,
							  int length);
	void cocci_id/* lib/zlib_deflate/deftree.c 152 */(deflate_state *s,
							  char *buf,
							  unsigned len,
							  int header);
	void cocci_id/* lib/zlib_deflate/deftree.c 151 */(deflate_state *s);
	void cocci_id/* lib/zlib_deflate/deftree.c 147 */(deflate_state *s,
							  ct_data *ltree,
							  ct_data *dtree);
	void cocci_id/* lib/zlib_deflate/deftree.c 145 */(deflate_state *s,
							  int lcodes,
							  int dcodes,
							  int blcodes);
	int cocci_id/* lib/zlib_deflate/deftree.c 144 */(deflate_state *s);
	void cocci_id/* lib/zlib_deflate/deftree.c 142 */(deflate_state *s,
							  ct_data *tree,
							  int max_code);
	void cocci_id/* lib/zlib_deflate/deftree.c 141 */(deflate_state *s,
							  tree_desc *desc);
	void cocci_id/* lib/zlib_deflate/deftree.c 140 */(ct_data *tree,
							  int max_code,
							  ush *bl_count);
	void cocci_id/* lib/zlib_deflate/deftree.c 138 */(deflate_state *s,
							  ct_data *tree,
							  int k);
	void cocci_id/* lib/zlib_deflate/deftree.c 136 */(void);
	static_tree_desc cocci_id/* lib/zlib_deflate/deftree.c 129 */;
	struct static_tree_desc_s {
		const ct_data *static_tree;
		const int *extra_bits;
		int extra_base;
		int elems;
		int max_length;
	} cocci_id/* lib/zlib_deflate/deftree.c 115 */;
	int cocci_id/* lib/zlib_deflate/deftree.c 112 */[D_CODES];
	ulg cocci_id/* lib/zlib_deflate/deftree.c 1107 */;
	char *cocci_id/* lib/zlib_deflate/deftree.c 1091 */;
	int cocci_id/* lib/zlib_deflate/deftree.c 109 */[LENGTH_CODES];
	Byte cocci_id/* lib/zlib_deflate/deftree.c 1082 */;
	uch cocci_id/* lib/zlib_deflate/deftree.c 106 */[MAX_MATCH - MIN_MATCH + 1];
	unsigned cocci_id/* lib/zlib_deflate/deftree.c 1024 */;
	uch cocci_id/* lib/zlib_deflate/deftree.c 100 */[512];
}
