cocci_test_suite() {
	u64 cocci_id/* net/tipc/crypto.c 961 */;
	struct tipc_crypto_stats __percpu *cocci_id/* net/tipc/crypto.c 885 */;
	struct crypto_async_request *cocci_id/* net/tipc/crypto.c 879 */;
	void cocci_id/* net/tipc/crypto.c 879 */;
	int cocci_id/* net/tipc/crypto.c 83 */;
	u8 *cocci_id/* net/tipc/crypto.c 805 */;
	u32 cocci_id/* net/tipc/crypto.c 804 */;
	void *cocci_id/* net/tipc/crypto.c 803 */;
	struct tipc_ehdr *cocci_id/* net/tipc/crypto.c 801 */;
	struct scatterlist *cocci_id/* net/tipc/crypto.c 800 */;
	struct crypto_aead *cocci_id/* net/tipc/crypto.c 798 */;
	struct aead_request *cocci_id/* net/tipc/crypto.c 797 */;
	struct tipc_crypto_rx_ctx *cocci_id/* net/tipc/crypto.c 796 */;
	struct tipc_bearer *cocci_id/* net/tipc/crypto.c 794 */;
	struct sk_buff *cocci_id/* net/tipc/crypto.c 794 */;
	struct net *cocci_id/* net/tipc/crypto.c 793 */;
	const char *cocci_id/* net/tipc/crypto.c 78 */[MAX_STATS];
	struct tipc_crypto *cocci_id/* net/tipc/crypto.c 757 */;
	struct tipc_crypto_tx_ctx *cocci_id/* net/tipc/crypto.c 643 */;
	struct tipc_node *cocci_id/* net/tipc/crypto.c 640 */;
	struct tipc_media_addr *cocci_id/* net/tipc/crypto.c 639 */;
	enum{STAT_OK, STAT_NOK, STAT_ASYNC, STAT_ASYNC_OK, STAT_ASYNC_NOK, STAT_BADKEYS, STAT_BADMSGS=STAT_BADKEYS, STAT_NOKEYS, STAT_SWITCHES, MAX_STATS,} cocci_id/* net/tipc/crypto.c 63 */;
	struct scatterlist cocci_id/* net/tipc/crypto.c 607 */;
	struct scatterlist **cocci_id/* net/tipc/crypto.c 593 */;
	u8 **cocci_id/* net/tipc/crypto.c 592 */;
	struct aead_request **cocci_id/* net/tipc/crypto.c 592 */;
	unsigned int cocci_id/* net/tipc/crypto.c 591 */;
	struct tipc_tfm *cocci_id/* net/tipc/crypto.c 549 */;
	struct tipc_aead *cocci_id/* net/tipc/crypto.c 531 */;
	struct tipc_aead **cocci_id/* net/tipc/crypto.c 531 */;
	enum{KEY_UNUSED=0, KEY_MIN, KEY_1=KEY_MIN, KEY_2, KEY_3, KEY_MAX=KEY_3,} cocci_id/* net/tipc/crypto.c 51 */;
	u8 cocci_id/* net/tipc/crypto.c 425 */;
	struct tipc_aead_key *cocci_id/* net/tipc/crypto.c 424 */;
	struct tipc_tfm **cocci_id/* net/tipc/crypto.c 405 */;
	struct tipc_aead cocci_id/* net/tipc/crypto.c 326 */;
	struct rcu_head *cocci_id/* net/tipc/crypto.c 324 */;
	struct tipc_aead __rcu *cocci_id/* net/tipc/crypto.c 301 */;
	typeof(rcu_ptr) cocci_id/* net/tipc/crypto.c 265 */;
	char *cocci_id/* net/tipc/crypto.c 251 */(struct tipc_key old,
						  struct tipc_key new,
						  char *buf);
	char *cocci_id/* net/tipc/crypto.c 249 */(struct tipc_crypto *c,
						  char *buf);
	void cocci_id/* net/tipc/crypto.c 248 */(struct net *net, int cmd);
	void cocci_id/* net/tipc/crypto.c 245 */(struct net *net,
						 struct tipc_aead *aead,
						 struct tipc_bearer *b,
						 struct sk_buff **skb,
						 int err);
	int cocci_id/* net/tipc/crypto.c 244 */(struct net *net, u8 tx_key);
	void cocci_id/* net/tipc/crypto.c 242 */(struct tipc_crypto *rx,
						 u8 new_rx_active,
						 struct tipc_msg *hdr);
	struct tipc_aead *cocci_id/* net/tipc/crypto.c 239 */(struct tipc_crypto *tx,
							      struct tipc_crypto *rx,
							      struct sk_buff *skb);
	bool cocci_id/* net/tipc/crypto.c 238 */(struct tipc_crypto *rx,
						 u8 new_pending);
	int cocci_id/* net/tipc/crypto.c 236 */(struct tipc_crypto *c,
						struct tipc_aead *aead,
						u8 pos);
	void cocci_id/* net/tipc/crypto.c 232 */(struct tipc_crypto *c,
						 u8 new_passive,
						 u8 new_active,
						 u8 new_pending);
	int cocci_id/* net/tipc/crypto.c 229 */(struct net *net,
						struct tipc_aead *aead,
						u8 tx_key,
						struct sk_buff *skb,
						struct tipc_crypto *__rx);
	int cocci_id/* net/tipc/crypto.c 228 */(struct tipc_ehdr *ehdr);
	void cocci_id/* net/tipc/crypto.c 227 */(struct crypto_async_request *base,
						 int err);
	int cocci_id/* net/tipc/crypto.c 225 */(struct net *net,
						struct tipc_aead *aead,
						struct sk_buff *skb,
						struct tipc_bearer *b);
	int cocci_id/* net/tipc/crypto.c 220 */(struct tipc_aead *aead,
						struct sk_buff *skb,
						struct tipc_bearer *b,
						struct tipc_media_addr *dst,
						struct tipc_node *__dnode);
	void *cocci_id/* net/tipc/crypto.c 216 */(struct crypto_aead *tfm,
						  unsigned int crypto_ctx_size,
						  u8 **iv,
						  struct aead_request **req,
						  struct scatterlist **sg,
						  int nsg);
	int cocci_id/* net/tipc/crypto.c 215 */(struct tipc_aead **dst,
						struct tipc_aead *src);
	int cocci_id/* net/tipc/crypto.c 213 */(struct tipc_aead **aead,
						struct tipc_aead_key *ukey,
						u8 mode);
	struct crypto_aead *cocci_id/* net/tipc/crypto.c 212 */(struct tipc_aead *aead);
	void cocci_id/* net/tipc/crypto.c 211 */(struct tipc_aead __rcu *aead,
						 int val);
	void cocci_id/* net/tipc/crypto.c 210 */(struct tipc_aead __rcu *aead,
						 int lim);
	int cocci_id/* net/tipc/crypto.c 208 */(struct tipc_aead __rcu *aead);
	void cocci_id/* net/tipc/crypto.c 207 */(struct rcu_head *rp);
	void cocci_id/* net/tipc/crypto.c 206 */(struct tipc_aead *aead);
	struct tipc_aead *cocci_id/* net/tipc/crypto.c 205 */(struct tipc_aead __rcu *aead);
	struct tipc_crypto_rx_ctx {
		struct tipc_aead *aead;
		struct tipc_bearer *bearer;
	} cocci_id/* net/tipc/crypto.c 200 */;
	struct tipc_key *cocci_id/* net/tipc/crypto.c 1959 */;
	struct tipc_crypto_tx_ctx {
		struct tipc_aead *aead;
		struct tipc_bearer *bearer;
		struct tipc_media_addr dst;
	} cocci_id/* net/tipc/crypto.c 193 */;
	char *cocci_id/* net/tipc/crypto.c 1917 */;
	char cocci_id/* net/tipc/crypto.c 1851 */[200];
	struct list_head *cocci_id/* net/tipc/crypto.c 1848 */;
	struct tipc_net *cocci_id/* net/tipc/crypto.c 1846 */;
	struct tipc_crypto {
		struct net *net;
		struct tipc_node *node;
		struct tipc_aead __rcu *aead[KEY_MAX + 1];
		atomic_t peer_rx_active;
		struct tipc_key key;
		u8 working:1;
		struct tipc_crypto_stats __percpu *stats;
		atomic64_t sndnxt ____cacheline_aligned;
		unsigned long timer1;
		unsigned long timer2;
		spinlock_t lock;
	}____cacheline_aligned cocci_id/* net/tipc/crypto.c 176 */;
	struct sk_buff **cocci_id/* net/tipc/crypto.c 1658 */;
	struct tipc_crypto_stats {
		unsigned int stat[MAX_STATS];
	} cocci_id/* net/tipc/crypto.c 158 */;
	struct tipc_aead {
#define TIPC_AEAD_HINT_LEN (5)
			struct tipc_tfm *__percpu *tfm_entry;
		struct tipc_crypto *crypto;
		struct tipc_aead *cloned;
		atomic_t users;
		u32 salt;
		u8 authsize;
		u8 mode;
		char hint[TIPC_AEAD_HINT_LEN + 1];
		struct rcu_head rcu;
		atomic64_t seqno ____cacheline_aligned;
		refcount_t refcnt ____cacheline_aligned;
	}____cacheline_aligned cocci_id/* net/tipc/crypto.c 138 */;
	struct tipc_crypto_stats cocci_id/* net/tipc/crypto.c 1356 */;
	struct tipc_crypto **cocci_id/* net/tipc/crypto.c 1342 */;
	struct tipc_msg *cocci_id/* net/tipc/crypto.c 1284 */;
	struct tipc_skb_cb *cocci_id/* net/tipc/crypto.c 1227 */;
	struct tipc_tfm {
		struct crypto_aead *tfm;
		struct list_head list;
	} cocci_id/* net/tipc/crypto.c 119 */;
	bool cocci_id/* net/tipc/crypto.c 1163 */;
	struct tipc_key cocci_id/* net/tipc/crypto.c 1084 */;
	char cocci_id/* net/tipc/crypto.c 1019 */[32];
	struct tipc_key {
#define KEY_BITS (2)
#define KEY_MASK ((1 << KEY_BITS) - 1)
				union {
					struct {
#if defined(__LITTLE_ENDIAN_BITFIELD)
						u8 pending:2,active:2,passive:2,reserved:2;
#elif defined(__BIG_ENDIAN_BITFIELD)
						u8 reserved:2,passive:2,active:2,pending:2;
#else
#error  "Please fix <asm/byteorder.h>"

#endif
					}__packed;
					u8 keys;
				};
	} cocci_id/*  1 */;
}
