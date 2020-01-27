cocci_test_suite() {
	u16 cocci_id/* net/caif/cfmuxl.c 75 */;
	struct list_head *cocci_id/* net/caif/cfmuxl.c 75 */;
	struct cfmuxl cocci_id/* net/caif/cfmuxl.c 50 */;
	struct cfmuxl *cocci_id/* net/caif/cfmuxl.c 50 */;
	struct cflayer *cocci_id/* net/caif/cfmuxl.c 48 */;
	void cocci_id/* net/caif/cfmuxl.c 48 */;
	struct cflayer *cocci_id/* net/caif/cfmuxl.c 46 */(struct cfmuxl *muxl,
							   u16 id);
	void cocci_id/* net/caif/cfmuxl.c 44 */(struct cflayer *layr,
						enum caif_ctrlcmd ctrl,
						int phyid);
	int cocci_id/* net/caif/cfmuxl.c 42 */(struct cflayer *layr,
					       struct cfpkt *pkt);
	int cocci_id/* net/caif/cfmuxl.c 247 */;
	enum caif_ctrlcmd cocci_id/* net/caif/cfmuxl.c 246 */;
	struct cfmuxl {
		struct cflayer layer;
		struct list_head srvl_list;
		struct list_head frml_list;
		struct cflayer *up_cache[UP_CACHE_SIZE];
		struct cflayer *dn_cache[DN_CACHE_SIZE];
		spinlock_t transmit_lock;
		spinlock_t receive_lock;
	} cocci_id/* net/caif/cfmuxl.c 24 */;
	struct caif_payload_info *cocci_id/* net/caif/cfmuxl.c 217 */;
	u8 cocci_id/* net/caif/cfmuxl.c 178 */;
	struct cfpkt *cocci_id/* net/caif/cfmuxl.c 174 */;
	struct dev_info *cocci_id/* net/caif/cfmuxl.c 137 */;
}
