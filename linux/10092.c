cocci_test_suite() {
	struct ppp_deflate_state *cocci_id/* drivers/net/ppp/ppp_deflate.c 87 */;
	unsigned char *cocci_id/* drivers/net/ppp/ppp_deflate.c 85 */;
	void *cocci_id/* drivers/net/ppp/ppp_deflate.c 85 */;
	void __exit cocci_id/* drivers/net/ppp/ppp_deflate.c 626 */;
	void cocci_id/* drivers/net/ppp/ppp_deflate.c 626 */;
	int cocci_id/* drivers/net/ppp/ppp_deflate.c 610 */;
	int __init cocci_id/* drivers/net/ppp/ppp_deflate.c 608 */;
	struct compressor cocci_id/* drivers/net/ppp/ppp_deflate.c 572 */;
	void cocci_id/* drivers/net/ppp/ppp_deflate.c 567 */(struct compressor *cp);
	int cocci_id/* drivers/net/ppp/ppp_deflate.c 566 */(struct compressor *cp);
	void cocci_id/* drivers/net/ppp/ppp_deflate.c 54 */(void *state,
							    struct compstat *stats);
	int cocci_id/* drivers/net/ppp/ppp_deflate.c 50 */(void *state,
							   unsigned char *ibuf,
							   int isize,
							   unsigned char *obuf,
							   int osize);
	void cocci_id/* drivers/net/ppp/ppp_deflate.c 49 */(void *state,
							    unsigned char *ibuf,
							    int icnt);
	int cocci_id/* drivers/net/ppp/ppp_deflate.c 46 */(void *state,
							   unsigned char *rptr,
							   unsigned char *obuf,
							   int isize,
							   int osize);
	int cocci_id/* drivers/net/ppp/ppp_deflate.c 43 */(void *state,
							   unsigned char *options,
							   int opt_len,
							   int unit,
							   int hdrlen,
							   int mru, int debug);
	unsigned char cocci_id/* drivers/net/ppp/ppp_deflate.c 417 */[1];
	int cocci_id/* drivers/net/ppp/ppp_deflate.c 40 */(void *state,
							   unsigned char *options,
							   int opt_len,
							   int unit,
							   int hdrlen,
							   int debug);
	void cocci_id/* drivers/net/ppp/ppp_deflate.c 38 */(void *state);
	void *cocci_id/* drivers/net/ppp/ppp_deflate.c 36 */(unsigned char *options,
							     int opt_len);
	struct compstat *cocci_id/* drivers/net/ppp/ppp_deflate.c 266 */;
	struct ppp_deflate_state {
		int seqno;
		int w_size;
		int unit;
		int mru;
		int debug;
		z_stream strm;
		struct compstat stats;
	} cocci_id/* drivers/net/ppp/ppp_deflate.c 24 */;
}
