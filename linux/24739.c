cocci_test_suite() {
	struct bitstr {
		unsigned char *buf;
		unsigned char *beg;
		unsigned char *end;
		unsigned char *cur;
		unsigned int bit;
	} cocci_id/* net/netfilter/nf_conntrack_h323_asn1.c 91 */;
	Q931 *cocci_id/* net/netfilter/nf_conntrack_h323_asn1.c 871 */;
	MultimediaSystemControlMessage *cocci_id/* net/netfilter/nf_conntrack_h323_asn1.c 854 */;
	char *cocci_id/* net/netfilter/nf_conntrack_h323_asn1.c 850 */;
	struct bitstr cocci_id/* net/netfilter/nf_conntrack_h323_asn1.c 843 */;
	const struct field_t cocci_id/* net/netfilter/nf_conntrack_h323_asn1.c 839 */;
	H323_UserInformation *cocci_id/* net/netfilter/nf_conntrack_h323_asn1.c 837 */;
	size_t cocci_id/* net/netfilter/nf_conntrack_h323_asn1.c 837 */;
	unsigned char *cocci_id/* net/netfilter/nf_conntrack_h323_asn1.c 836 */;
	int cocci_id/* net/netfilter/nf_conntrack_h323_asn1.c 836 */;
	RasMessage *cocci_id/* net/netfilter/nf_conntrack_h323_asn1.c 821 */;
	unsigned int *cocci_id/* net/netfilter/nf_conntrack_h323_asn1.c 772 */;
	unsigned int cocci_id/* net/netfilter/nf_conntrack_h323_asn1.c 380 */;
	const struct field_t *cocci_id/* net/netfilter/nf_conntrack_h323_asn1.c 377 */;
	struct bitstr *cocci_id/* net/netfilter/nf_conntrack_h323_asn1.c 377 */;
	const decoder_t cocci_id/* net/netfilter/nf_conntrack_h323_asn1.c 125 */[];
	int (*cocci_id/* net/netfilter/nf_conntrack_h323_asn1.c 124 */)(struct bitstr *,
									const struct field_t *,
									char *,
									int);
	int cocci_id/* net/netfilter/nf_conntrack_h323_asn1.c 115 */(struct bitstr *bs,
								     const struct field_t *f,
								     char *base,
								     int level);
	unsigned int cocci_id/* net/netfilter/nf_conntrack_h323_asn1.c 107 */(struct bitstr *bs,
									      int b);
	unsigned int cocci_id/* net/netfilter/nf_conntrack_h323_asn1.c 106 */(struct bitstr *bs,
									      unsigned int b);
	unsigned int cocci_id/* net/netfilter/nf_conntrack_h323_asn1.c 104 */(struct bitstr *bs);
	struct field_t {
#if H323_TRACE
		char *name;
#endif
		unsigned char type;
		unsigned char sz;
		unsigned char lb;
		unsigned char ub;
		unsigned short attr;
		unsigned short offset;
		const struct field_t *fields;
	} cocci_id/*  1 */;
}
