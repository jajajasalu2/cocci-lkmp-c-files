cocci_test_suite() {
	char *cocci_id/* drivers/net/ppp/bsd_comp.c 807 */;
	unsigned short *cocci_id/* drivers/net/ppp/bsd_comp.c 731 */;
	unsigned char cocci_id/* drivers/net/ppp/bsd_comp.c 575 */;
	struct bsd_dict *cocci_id/* drivers/net/ppp/bsd_comp.c 574 */;
	unsigned long cocci_id/* drivers/net/ppp/bsd_comp.c 571 */;
	struct bsd_dict cocci_id/* drivers/net/ppp/bsd_comp.c 409 */;
	struct bsd_db cocci_id/* drivers/net/ppp/bsd_comp.c 398 */;
	struct bsd_db *cocci_id/* drivers/net/ppp/bsd_comp.c 356 */;
	unsigned int cocci_id/* drivers/net/ppp/bsd_comp.c 355 */;
	unsigned char *cocci_id/* drivers/net/ppp/bsd_comp.c 352 */;
	void *cocci_id/* drivers/net/ppp/bsd_comp.c 352 */;
	int cocci_id/* drivers/net/ppp/bsd_comp.c 352 */;
	struct compstat *cocci_id/* drivers/net/ppp/bsd_comp.c 293 */;
	void cocci_id/* drivers/net/ppp/bsd_comp.c 221 */;
	void cocci_id/* drivers/net/ppp/bsd_comp.c 193 */(struct compressor *cp);
	int cocci_id/* drivers/net/ppp/bsd_comp.c 192 */(struct compressor *cp);
	int cocci_id/* drivers/net/ppp/bsd_comp.c 188 */(void *state,
							 unsigned char *ibuf,
							 int isize,
							 unsigned char *obuf,
							 int osize);
	void cocci_id/* drivers/net/ppp/bsd_comp.c 186 */(void *state,
							  unsigned char *ibuf,
							  int icnt);
	int cocci_id/* drivers/net/ppp/bsd_comp.c 184 */(void *state,
							 unsigned char *rptr,
							 unsigned char *obuf,
							 int isize, int osize);
	void cocci_id/* drivers/net/ppp/bsd_comp.c 182 */(void *state,
							  struct compstat *stats);
	int cocci_id/* drivers/net/ppp/bsd_comp.c 177 */(void *state,
							 unsigned char *options,
							 int opt_len,
							 int unit, int opthdr,
							 int mru, int debug);
	int cocci_id/* drivers/net/ppp/bsd_comp.c 175 */(void *state,
							 unsigned char *options,
							 int opt_len,
							 int unit, int opthdr,
							 int debug);
	int cocci_id/* drivers/net/ppp/bsd_comp.c 173 */(void *db,
							 unsigned char *options,
							 int opt_len,
							 int unit, int debug,
							 int decomp);
	void *cocci_id/* drivers/net/ppp/bsd_comp.c 170 */(unsigned char *options,
							   int opt_len);
	void *cocci_id/* drivers/net/ppp/bsd_comp.c 169 */(unsigned char *options,
							   int opt_len,
							   int decomp);
	void cocci_id/* drivers/net/ppp/bsd_comp.c 168 */(void *state);
	struct bsd_db {
		int totlen;
		unsigned int hsize;
		unsigned char hshift;
		unsigned char n_bits;
		unsigned char maxbits;
		unsigned char debug;
		unsigned char unit;
		unsigned short seqno;
		unsigned int mru;
		unsigned int maxmaxcode;
		unsigned int max_ent;
		unsigned int in_count;
		unsigned int bytes_out;
		unsigned int ratio;
		unsigned int checkpoint;
		unsigned int clear_count;
		unsigned int incomp_count;
		unsigned int incomp_bytes;
		unsigned int uncomp_count;
		unsigned int uncomp_bytes;
		unsigned int comp_count;
		unsigned int comp_bytes;
		unsigned short *lens;
		struct bsd_dict *dict;
	} cocci_id/* drivers/net/ppp/bsd_comp.c 136 */;
	void __exit cocci_id/* drivers/net/ppp/bsd_comp.c 1162 */;
	int __init cocci_id/* drivers/net/ppp/bsd_comp.c 1154 */;
	struct compressor cocci_id/* drivers/net/ppp/bsd_comp.c 1132 */;
	struct bsd_dict {
		union {
			unsigned long fcode;
			struct {
#if defined(__LITTLE_ENDIAN)		/* Little endian order */
				unsigned short prefix;
				unsigned char suffix;
				unsigned char pad;
#elif defined(__BIG_ENDIAN)		/* Big endian order */
				unsigned char pad;
				unsigned char suffix;
				unsigned short prefix;
#else
#error Endianness not defined...

#endif
			} hs;
		} f;
		unsigned short codem1;
		unsigned short cptr;
	} cocci_id/*  1 */;
}
