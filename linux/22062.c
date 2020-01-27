cocci_test_suite() {
	ulg cocci_id/* lib/zlib_deflate/deflate.c 831 */;
	long cocci_id/* lib/zlib_deflate/deflate.c 831 */;
	unsigned cocci_id/* lib/zlib_deflate/deflate.c 829 */;
	void cocci_id/* lib/zlib_deflate/deflate.c 80 */(deflate_state *s,
							 IPos start,
							 IPos match,
							 int length);
	uInt cocci_id/* lib/zlib_deflate/deflate.c 77 */(deflate_state *s,
							 IPos cur_match);
	int cocci_id/* lib/zlib_deflate/deflate.c 76 */(z_streamp strm,
							Byte *buf,
							unsigned size);
	void cocci_id/* lib/zlib_deflate/deflate.c 75 */(z_streamp strm);
	void cocci_id/* lib/zlib_deflate/deflate.c 74 */(deflate_state *s,
							 uInt b);
	block_state cocci_id/* lib/zlib_deflate/deflate.c 71 */(deflate_state *s,
								int flush);
	char *cocci_id/* lib/zlib_deflate/deflate.c 705 */;
	int cocci_id/* lib/zlib_deflate/deflate.c 701 */;
	IPos cocci_id/* lib/zlib_deflate/deflate.c 699 */;
	deflate_state *cocci_id/* lib/zlib_deflate/deflate.c 698 */;
	void cocci_id/* lib/zlib_deflate/deflate.c 697 */;
	void cocci_id/* lib/zlib_deflate/deflate.c 69 */(deflate_state *s);
	block_state (*cocci_id/* lib/zlib_deflate/deflate.c 66 */)(deflate_state *s,
								   int flush);
	enum{need_more, block_done, finish_started, finish_done,} cocci_id/* lib/zlib_deflate/deflate.c 59 */;
	Byte cocci_id/* lib/zlib_deflate/deflate.c 582 */;
	ush cocci_id/* lib/zlib_deflate/deflate.c 578 */;
	ush *cocci_id/* lib/zlib_deflate/deflate.c 578 */;
	Pos *cocci_id/* lib/zlib_deflate/deflate.c 570 */;
	Byte *cocci_id/* lib/zlib_deflate/deflate.c 560 */;
	z_streamp cocci_id/* lib/zlib_deflate/deflate.c 304 */;
	uch *cocci_id/* lib/zlib_deflate/deflate.c 239 */;
	struct internal_state *cocci_id/* lib/zlib_deflate/deflate.c 219 */;
	deflate_workspace *cocci_id/* lib/zlib_deflate/deflate.c 178 */;
	Pos cocci_id/* lib/zlib_deflate/deflate.c 156 */;
	const config cocci_id/* lib/zlib_deflate/deflate.c 114 */[10];
	deflate_workspace cocci_id/* lib/zlib_deflate/deflate.c 1132 */;
	uInt cocci_id/* lib/zlib_deflate/deflate.c 1066 */;
	struct config_s {
		ush good_length;
		ush max_lazy;
		ush nice_length;
		ush max_chain;
		compress_func func;
	} cocci_id/* lib/zlib_deflate/deflate.c 106 */;
	block_state cocci_id/* lib/zlib_deflate/deflate.c 1006 */;
}
