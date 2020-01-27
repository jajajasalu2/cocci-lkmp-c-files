cocci_test_suite() {
	struct ftp_search {
		const char *pattern;
		size_t plen;
		char skip;
		char term;
		enum nf_ct_ftp_type ftptype;
		int (*getnum)(const char *, size_t, struct nf_conntrack_man *,
			      char, unsigned int *);
	} cocci_id/* net/netfilter/nf_conntrack_ftp.c 68 */[IP_CT_DIR_MAX][2];
	int cocci_id/* net/netfilter/nf_conntrack_ftp.c 63 */(const char *,
							      size_t,
							      struct nf_conntrack_man *,
							      char,
							      unsigned int *);
	struct nf_ct_ftp_master cocci_id/* net/netfilter/nf_conntrack_ftp.c 578 */;
	int __init cocci_id/* net/netfilter/nf_conntrack_ftp.c 574 */;
	void __exit cocci_id/* net/netfilter/nf_conntrack_ftp.c 568 */;
	void cocci_id/* net/netfilter/nf_conntrack_ftp.c 568 */;
	const struct nf_conntrack_expect_policy cocci_id/* net/netfilter/nf_conntrack_ftp.c 563 */;
	struct nf_conntrack_helper cocci_id/* net/netfilter/nf_conntrack_ftp.c 561 */[MAX_PORTS * 2]__read_mostly;
	struct nlattr *cocci_id/* net/netfilter/nf_conntrack_ftp.c 548 */;
	unsigned int (*cocci_id/* net/netfilter/nf_conntrack_ftp.c 50 */)(struct sk_buff *skb,
									  enum ip_conntrack_info ctinfo,
									  enum nf_ct_ftp_type type,
									  unsigned int protoff,
									  unsigned int matchoff,
									  unsigned int matchlen,
									  struct nf_conntrack_expect *exp);
	bool cocci_id/* net/netfilter/nf_conntrack_ftp.c 47 */;
	u_int16_t cocci_id/* net/netfilter/nf_conntrack_ftp.c 43 */[MAX_PORTS];
	typeof(nf_nat_ftp_hook) cocci_id/* net/netfilter/nf_conntrack_ftp.c 392 */;
	struct nf_conntrack_man cocci_id/* net/netfilter/nf_conntrack_ftp.c 389 */;
	union nf_inet_addr *cocci_id/* net/netfilter/nf_conntrack_ftp.c 388 */;
	struct nf_conntrack_expect *cocci_id/* net/netfilter/nf_conntrack_ftp.c 387 */;
	struct nf_ct_ftp_master *cocci_id/* net/netfilter/nf_conntrack_ftp.c 386 */;
	struct tcphdr cocci_id/* net/netfilter/nf_conntrack_ftp.c 380 */;
	char *cocci_id/* net/netfilter/nf_conntrack_ftp.c 38 */;
	const struct tcphdr *cocci_id/* net/netfilter/nf_conntrack_ftp.c 379 */;
	enum ip_conntrack_info cocci_id/* net/netfilter/nf_conntrack_ftp.c 376 */;
	struct nf_conn *cocci_id/* net/netfilter/nf_conntrack_ftp.c 375 */;
	struct sk_buff *cocci_id/* net/netfilter/nf_conntrack_ftp.c 373 */;
	unsigned int cocci_id/* net/netfilter/nf_conntrack_ftp.c 339 */;
	u32 cocci_id/* net/netfilter/nf_conntrack_ftp.c 337 */;
	const struct nf_ct_ftp_master *cocci_id/* net/netfilter/nf_conntrack_ftp.c 337 */;
	int cocci_id/* net/netfilter/nf_conntrack_ftp.c 337 */;
	int (*cocci_id/* net/netfilter/nf_conntrack_ftp.c 296 */)(const char *,
								  size_t,
								  struct nf_conntrack_man *,
								  char,
								  unsigned int *);
	struct nf_conntrack_man *cocci_id/* net/netfilter/nf_conntrack_ftp.c 295 */;
	unsigned int *cocci_id/* net/netfilter/nf_conntrack_ftp.c 293 */;
	char cocci_id/* net/netfilter/nf_conntrack_ftp.c 292 */;
	const char *cocci_id/* net/netfilter/nf_conntrack_ftp.c 290 */;
	size_t cocci_id/* net/netfilter/nf_conntrack_ftp.c 290 */;
	u_int32_t cocci_id/* net/netfilter/nf_conntrack_ftp.c 252 */[4];
	u_int16_t cocci_id/* net/netfilter/nf_conntrack_ftp.c 202 */;
	__be16 *cocci_id/* net/netfilter/nf_conntrack_ftp.c 200 */;
	u_int32_t cocci_id/* net/netfilter/nf_conntrack_ftp.c 159 */[6];
	u_int32_t cocci_id/* net/netfilter/nf_conntrack_ftp.c 125 */;
	u_int32_t cocci_id/* net/netfilter/nf_conntrack_ftp.c 122 */[];
	u8 *cocci_id/* net/netfilter/nf_conntrack_ftp.c 116 */;
	u_int8_t cocci_id/* net/netfilter/nf_conntrack_ftp.c 113 */;
	struct in6_addr *cocci_id/* net/netfilter/nf_conntrack_ftp.c 113 */;
}
