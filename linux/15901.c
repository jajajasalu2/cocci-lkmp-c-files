cocci_test_suite() {
	struct gigaset_capi_ctr cocci_id/* drivers/staging/isdn/gigaset/capi.c 998 */;
	capi_register_params *cocci_id/* drivers/staging/isdn/gigaset/capi.c 995 */;
	struct gigaset_capi_ctr {
		struct capi_ctr ctr;
		struct list_head appls;
		struct sk_buff_head sendqueue;
		atomic_t sendqlen;
		_cmsg hcmsg;
		_cmsg acmsg;
		u8 bc_buf[MAX_BC_OCTETS + 1];
		u8 hlc_buf[MAX_HLC_OCTETS + 1];
		u8 cgpty_buf[MAX_NUMBER_DIGITS + 3];
		u8 cdpty_buf[MAX_NUMBER_DIGITS + 2];
	} cocci_id/* drivers/staging/isdn/gigaset/capi.c 90 */;
	struct gigaset_capi_appl {
		struct list_head ctrlist;
		struct gigaset_capi_appl *bcnext;
		u16 id;
		struct capi_register_params rp;
		u16 nextMessageNumber;
		u32 listenInfoMask;
		u32 listenCIPmask;
	} cocci_id/* drivers/staging/isdn/gigaset/capi.c 79 */;
	u32 cocci_id/* drivers/staging/isdn/gigaset/capi.c 498 */;
	struct at_state_t *cocci_id/* drivers/staging/isdn/gigaset/capi.c 492 */;
	char cocci_id/* drivers/staging/isdn/gigaset/capi.c 295 */[3 * MAX_FMT_IE_LEN];
	struct capi_driver cocci_id/* drivers/staging/isdn/gigaset/capi.c 2497 */;
	struct capi_ctr *cocci_id/* drivers/staging/isdn/gigaset/capi.c 2348 */;
	struct seq_file *cocci_id/* drivers/staging/isdn/gigaset/capi.c 2346 */;
	void *cocci_id/* drivers/staging/isdn/gigaset/capi.c 2346 */;
	unsigned char *cocci_id/* drivers/staging/isdn/gigaset/capi.c 229 */;
	capi_send_handler_t cocci_id/* drivers/staging/isdn/gigaset/capi.c 2271 */;
	size_t cocci_id/* drivers/staging/isdn/gigaset/capi.c 2247 */;
	const u16 cocci_id/* drivers/staging/isdn/gigaset/capi.c 2245 */;
	struct {
		u16 cmd;
		capi_send_handler_t handler;
	} cocci_id/* drivers/staging/isdn/gigaset/capi.c 2203 */[];
	void (*cocci_id/* drivers/staging/isdn/gigaset/capi.c 2199 */)(struct gigaset_capi_ctr *,
								       struct gigaset_capi_appl *,
								       struct sk_buff *);
	_cdebbuf *cocci_id/* drivers/staging/isdn/gigaset/capi.c 210 */;
	enum debuglevel cocci_id/* drivers/staging/isdn/gigaset/capi.c 205 */;
	const char *cocci_id/* drivers/staging/isdn/gigaset/capi.c 205 */;
	u8 cocci_id/* drivers/staging/isdn/gigaset/capi.c 1847 */;
	unsigned int cocci_id/* drivers/staging/isdn/gigaset/capi.c 1846 */;
	int cocci_id/* drivers/staging/isdn/gigaset/capi.c 180 */;
	struct bc_state *cocci_id/* drivers/staging/isdn/gigaset/capi.c 1797 */;
	_cmsg *cocci_id/* drivers/staging/isdn/gigaset/capi.c 1796 */;
	u8 *cocci_id/* drivers/staging/isdn/gigaset/capi.c 178 */;
	char *cocci_id/* drivers/staging/isdn/gigaset/capi.c 178 */;
	void cocci_id/* drivers/staging/isdn/gigaset/capi.c 178 */;
	unsigned cocci_id/* drivers/staging/isdn/gigaset/capi.c 1591 */;
	_cstruct cocci_id/* drivers/staging/isdn/gigaset/capi.c 148 */;
	u16 cocci_id/* drivers/staging/isdn/gigaset/capi.c 1337 */;
	unsigned long cocci_id/* drivers/staging/isdn/gigaset/capi.c 1335 */;
	char **cocci_id/* drivers/staging/isdn/gigaset/capi.c 1332 */;
	struct cardstate *cocci_id/* drivers/staging/isdn/gigaset/capi.c 1308 */;
	struct sk_buff *cocci_id/* drivers/staging/isdn/gigaset/capi.c 1306 */;
	struct gigaset_capi_appl *cocci_id/* drivers/staging/isdn/gigaset/capi.c 1305 */;
	struct gigaset_capi_ctr *cocci_id/* drivers/staging/isdn/gigaset/capi.c 1304 */;
	u8 cocci_id/* drivers/staging/isdn/gigaset/capi.c 1150 */[10];
	struct {
		u8 *bc;
		u8 *hlc;
	} cocci_id/* drivers/staging/isdn/gigaset/capi.c 105 */[];
}
