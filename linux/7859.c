cocci_test_suite() {
	const char *constcocci_id/* drivers/net/wan/hdlc_ppp.c 94 */[EVENTS];
	const char *constcocci_id/* drivers/net/wan/hdlc_ppp.c 90 */[STATES];
	enum{INV=0x10, IRC=0x20, ZRC=0x40, SCR=0x80, SCA=0x100, SCN=0x200, STR=0x400, STA=0x800, SCJ=0x1000,} cocci_id/* drivers/net/wan/hdlc_ppp.c 86 */;
	enum{START=0, STOP, TO_GOOD, TO_BAD, RCR_GOOD, RCR_BAD, RCA, RCN, RTR, RTA, RUC, RXJ_GOOD, RXJ_BAD, EVENTS,} cocci_id/* drivers/net/wan/hdlc_ppp.c 84 */;
	enum{CLOSED=0, STOPPED, STOPPING, REQ_SENT, ACK_RECV, ACK_SENT, OPENED, STATES, STATE_MASK=0xF,} cocci_id/* drivers/net/wan/hdlc_ppp.c 82 */;
	struct ppp {
		struct proto protos[IDX_COUNT];
		spinlock_t lock;
		unsigned long last_pong;
		unsigned int req_timeout,cr_retries,term_retries;
		unsigned int keepalive_interval,keepalive_timeout;
		u8 seq;
		u8 echo_id;
	} cocci_id/* drivers/net/wan/hdlc_ppp.c 72 */;
	void __exit cocci_id/* drivers/net/wan/hdlc_ppp.c 704 */;
	void cocci_id/* drivers/net/wan/hdlc_ppp.c 704 */;
	int __init cocci_id/* drivers/net/wan/hdlc_ppp.c 697 */;
	struct ppp cocci_id/* drivers/net/wan/hdlc_ppp.c 673 */;
	hdlc_device *cocci_id/* drivers/net/wan/hdlc_ppp.c 649 */;
	struct ifreq *cocci_id/* drivers/net/wan/hdlc_ppp.c 647 */;
	const struct header_ops cocci_id/* drivers/net/wan/hdlc_ppp.c 643 */;
	struct hdlc_proto cocci_id/* drivers/net/wan/hdlc_ppp.c 633 */;
	struct proto {
		struct net_device *dev;
		struct timer_list timer;
		unsigned long timeout;
		u16 pid;
		u8 state;
		u8 cr_id;
		u8 restart_counter;
	} cocci_id/* drivers/net/wan/hdlc_ppp.c 62 */;
	struct timer_list *cocci_id/* drivers/net/wan/hdlc_ppp.c 558 */;
	struct cp_header {
		u8 code;
		u8 id;
		__be16 len;
	} cocci_id/* drivers/net/wan/hdlc_ppp.c 55 */;
	struct hdlc_header {
		u8 address;
		u8 control;
		__be16 protocol;
	} cocci_id/* drivers/net/wan/hdlc_ppp.c 49 */;
	__be16 *cocci_id/* drivers/net/wan/hdlc_ppp.c 489 */;
	enum{LCP_OPTION_MRU=1, LCP_OPTION_ACCM, LCP_OPTION_MAGIC=5,} cocci_id/* drivers/net/wan/hdlc_ppp.c 47 */;
	struct cp_header cocci_id/* drivers/net/wan/hdlc_ppp.c 463 */;
	char *cocci_id/* drivers/net/wan/hdlc_ppp.c 441 */;
	char cocci_id/* drivers/net/wan/hdlc_ppp.c 44 */[64 + 3 * DEBUG_CP];
	unsigned long cocci_id/* drivers/net/wan/hdlc_ppp.c 436 */;
	struct cp_header *cocci_id/* drivers/net/wan/hdlc_ppp.c 435 */;
	const char *constcocci_id/* drivers/net/wan/hdlc_ppp.c 40 */[CP_CODES];
	u8 *cocci_id/* drivers/net/wan/hdlc_ppp.c 377 */;
	const u8 cocci_id/* drivers/net/wan/hdlc_ppp.c 375 */[6];
	const u8 *cocci_id/* drivers/net/wan/hdlc_ppp.c 373 */;
	enum{CP_CONF_REQ=1, CP_CONF_ACK, CP_CONF_NAK, CP_CONF_REJ, CP_TERM_REQ, CP_TERM_ACK, CP_CODE_REJ, LCP_PROTO_REJ, LCP_ECHO_REQ, LCP_ECHO_REPLY, LCP_DISC_REQ, CP_CODES,} cocci_id/* drivers/net/wan/hdlc_ppp.c 36 */;
	enum{IDX_LCP=0, IDX_IPCP, IDX_IPV6CP, IDX_COUNT,} cocci_id/* drivers/net/wan/hdlc_ppp.c 35 */;
	int cocci_id/* drivers/net/wan/hdlc_ppp.c 304 */;
	const void *cocci_id/* drivers/net/wan/hdlc_ppp.c 302 */;
	unsigned int cocci_id/* drivers/net/wan/hdlc_ppp.c 302 */;
	u8 cocci_id/* drivers/net/wan/hdlc_ppp.c 301 */;
	int cocci_id/* drivers/net/wan/hdlc_ppp.c 278 */[EVENTS][STATES];
	u32 cocci_id/* drivers/net/wan/hdlc_ppp.c 210 */;
	struct hdlc_header cocci_id/* drivers/net/wan/hdlc_ppp.c 173 */;
	struct hdlc_header *cocci_id/* drivers/net/wan/hdlc_ppp.c 168 */;
	struct sk_buff *cocci_id/* drivers/net/wan/hdlc_ppp.c 164 */;
	__be16 cocci_id/* drivers/net/wan/hdlc_ppp.c 139 */;
	const char *cocci_id/* drivers/net/wan/hdlc_ppp.c 125 */;
	u16 cocci_id/* drivers/net/wan/hdlc_ppp.c 109 */;
	struct proto *cocci_id/* drivers/net/wan/hdlc_ppp.c 109 */;
	struct ppp *cocci_id/* drivers/net/wan/hdlc_ppp.c 104 */;
	struct net_device *cocci_id/* drivers/net/wan/hdlc_ppp.c 104 */;
	int cocci_id/* drivers/net/wan/hdlc_ppp.c 102 */(struct net_device *dev,
							 struct ifreq *ifr);
	struct sk_buff_head cocci_id/* drivers/net/wan/hdlc_ppp.c 100 */;
}
