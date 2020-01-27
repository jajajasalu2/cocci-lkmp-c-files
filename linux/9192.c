cocci_test_suite() {
	unsigned long cocci_id/* drivers/net/ethernet/i825xx/82596.c 941 */;
	struct i596_private *cocci_id/* drivers/net/ethernet/i825xx/82596.c 939 */;
	struct i596_cmd *cocci_id/* drivers/net/ethernet/i825xx/82596.c 937 */;
	struct sk_buff *cocci_id/* drivers/net/ethernet/i825xx/82596.c 890 */;
	struct tx_cmd *cocci_id/* drivers/net/ethernet/i825xx/82596.c 889 */;
	char cocci_id/* drivers/net/ethernet/i825xx/82596.c 62 */[]__initdata;
	irqreturn_t cocci_id/* drivers/net/ethernet/i825xx/82596.c 501 */;
	struct i596_rbd *cocci_id/* drivers/net/ethernet/i825xx/82596.c 461 */;
	struct i596_rfd *cocci_id/* drivers/net/ethernet/i825xx/82596.c 460 */;
	volatile struct i596_cmd *cocci_id/* drivers/net/ethernet/i825xx/82596.c 443 */;
	u32 cocci_id/* drivers/net/ethernet/i825xx/82596.c 397 */;
	volatile void *cocci_id/* drivers/net/ethernet/i825xx/82596.c 392 */;
	int cocci_id/* drivers/net/ethernet/i825xx/82596.c 392 */;
	volatile u32 *cocci_id/* drivers/net/ethernet/i825xx/82596.c 386 */;
	volatile u32 cocci_id/* drivers/net/ethernet/i825xx/82596.c 384 */;
	struct i596_reg *cocci_id/* drivers/net/ethernet/i825xx/82596.c 379 */;
	struct net_device *cocci_id/* drivers/net/ethernet/i825xx/82596.c 375 */;
	void cocci_id/* drivers/net/ethernet/i825xx/82596.c 375 */;
	void cocci_id/* drivers/net/ethernet/i825xx/82596.c 367 */(unsigned char *buf,
								   char *str);
	void cocci_id/* drivers/net/ethernet/i825xx/82596.c 366 */(struct net_device *dev);
	void cocci_id/* drivers/net/ethernet/i825xx/82596.c 365 */(struct net_device *dev,
								   struct i596_cmd *cmd);
	int cocci_id/* drivers/net/ethernet/i825xx/82596.c 364 */(struct net_device *dev);
	irqreturn_t cocci_id/* drivers/net/ethernet/i825xx/82596.c 363 */(int irq,
									  void *dev_id);
	netdev_tx_t cocci_id/* drivers/net/ethernet/i825xx/82596.c 362 */(struct sk_buff *skb,
									  struct net_device *dev);
	char cocci_id/* drivers/net/ethernet/i825xx/82596.c 340 */[];
	struct i596_private {
		volatile struct i596_scp scp;
		volatile struct i596_iscp iscp;
		volatile struct i596_scb scb;
		struct sa_cmd sa_cmd;
		struct cf_cmd cf_cmd;
		struct tdr_cmd tdr_cmd;
		struct mc_cmd mc_cmd;
		unsigned long stat;
		int last_restart __attribute__((aligned(4)));
		struct i596_rfd *rfd_head;
		struct i596_rbd *rbd_head;
		struct i596_cmd *cmd_tail;
		struct i596_cmd *cmd_head;
		int cmd_backlog;
		unsigned long last_cmd;
		struct i596_rfd rfds[RX_RING_SIZE];
		struct i596_rbd rbds[RX_RING_SIZE];
		struct tx_cmd tx_cmds[TX_RING_SIZE];
		struct i596_tbd tbds[TX_RING_SIZE];
		int next_tx_cmd;
		spinlock_t lock;
	} cocci_id/* drivers/net/ethernet/i825xx/82596.c 316 */;
	struct i596_scp {
		unsigned long sysbus;
		unsigned long pad;
		struct i596_iscp *iscp;
	} cocci_id/* drivers/net/ethernet/i825xx/82596.c 310 */;
	struct i596_iscp {
		unsigned long stat;
		struct i596_scb *scb;
	} cocci_id/* drivers/net/ethernet/i825xx/82596.c 305 */;
	struct i596_scb {
		unsigned short status;
		unsigned short command;
		struct i596_cmd *cmd;
		struct i596_rfd *rfd;
		unsigned long crc_err;
		unsigned long align_err;
		unsigned long resource_err;
		unsigned long over_err;
		unsigned long rcvdt_err;
		unsigned long short_err;
		unsigned short t_on;
		unsigned short t_off;
	} cocci_id/* drivers/net/ethernet/i825xx/82596.c 290 */;
	struct i596_rbd {
		unsigned short count;
		unsigned short zero1;
		struct i596_rbd *b_next;
		unsigned char *b_data;
		unsigned short size;
		unsigned short zero2;
		struct sk_buff *skb;
		struct i596_rbd *v_next;
		struct i596_rbd *b_addr;
		unsigned char *v_data;
	} cocci_id/* drivers/net/ethernet/i825xx/82596.c 274 */;
	struct i596_rfd {
		unsigned short stat;
		unsigned short cmd;
		struct i596_rfd *b_next;
		struct i596_rbd *rbd;
		unsigned short count;
		unsigned short size;
		struct i596_rfd *v_next;
		struct i596_rfd *v_prev;
	} cocci_id/* drivers/net/ethernet/i825xx/82596.c 263 */;
	struct cf_cmd {
		struct i596_cmd cmd;
		char i596_config[16];
	} cocci_id/* drivers/net/ethernet/i825xx/82596.c 258 */;
	struct sa_cmd {
		struct i596_cmd cmd;
		char eth_addr[8];
	} cocci_id/* drivers/net/ethernet/i825xx/82596.c 253 */;
	struct mc_cmd {
		struct i596_cmd cmd;
		short mc_cnt;
		char mc_addrs[MAX_MC_CNT * 6];
	} cocci_id/* drivers/net/ethernet/i825xx/82596.c 247 */;
	struct tdr_cmd {
		struct i596_cmd cmd;
		unsigned short status;
		unsigned short pad;
	} cocci_id/* drivers/net/ethernet/i825xx/82596.c 241 */;
	struct tx_cmd {
		struct i596_cmd cmd;
		struct i596_tbd *tbd;
		unsigned short size;
		unsigned short pad;
		struct sk_buff *skb;
	} cocci_id/* drivers/net/ethernet/i825xx/82596.c 233 */;
	struct i596_cmd {
		struct i596_cmd *v_next;
		unsigned short status;
		unsigned short command;
		struct i596_cmd *b_next;
	} cocci_id/* drivers/net/ethernet/i825xx/82596.c 226 */;
	struct i596_tbd {
		unsigned short size;
		unsigned short pad;
		struct i596_tbd *next;
		char *data;
	} cocci_id/* drivers/net/ethernet/i825xx/82596.c 209 */;
	struct i596_reg {
		unsigned short porthi;
		unsigned short portlo;
		unsigned long ca;
	} cocci_id/* drivers/net/ethernet/i825xx/82596.c 200 */;
	enum commands{CmdNOp=0, CmdSASetup=1, CmdConfigure=2, CmdMulticastList=3, CmdTx=4, CmdTDR=5, CmdDump=6, CmdDiagnose=7,} cocci_id/* drivers/net/ethernet/i825xx/82596.c 178 */;
	void *cocci_id/* drivers/net/ethernet/i825xx/82596.c 1541 */;
	void __exit cocci_id/* drivers/net/ethernet/i825xx/82596.c 1533 */;
	int __init cocci_id/* drivers/net/ethernet/i825xx/82596.c 1525 */;
	struct mc_cmd *cocci_id/* drivers/net/ethernet/i825xx/82596.c 1497 */;
	struct netdev_hw_addr *cocci_id/* drivers/net/ethernet/i825xx/82596.c 1495 */;
	volatile unsigned char *cocci_id/* drivers/net/ethernet/i825xx/82596.c 1423 */;
	unsigned char *cocci_id/* drivers/net/ethernet/i825xx/82596.c 1423 */;
	struct tdr_cmd *cocci_id/* drivers/net/ethernet/i825xx/82596.c 1320 */;
	char *cocci_id/* drivers/net/ethernet/i825xx/82596.c 1250 */;
	unsigned short cocci_id/* drivers/net/ethernet/i825xx/82596.c 1245 */;
	short cocci_id/* drivers/net/ethernet/i825xx/82596.c 1244 */;
	struct i596_private cocci_id/* drivers/net/ethernet/i825xx/82596.c 1208 */;
	unsigned char cocci_id/* drivers/net/ethernet/i825xx/82596.c 1167 */;
	unsigned cocci_id/* drivers/net/ethernet/i825xx/82596.c 1160 */;
	struct i596_scb *cocci_id/* drivers/net/ethernet/i825xx/82596.c 115 */;
	struct i596_iscp *cocci_id/* drivers/net/ethernet/i825xx/82596.c 114 */;
	char cocci_id/* drivers/net/ethernet/i825xx/82596.c 1131 */[8];
	struct net_device *__init cocci_id/* drivers/net/ethernet/i825xx/82596.c 1126 */;
	const struct net_device_ops cocci_id/* drivers/net/ethernet/i825xx/82596.c 1116 */;
	struct i596_tbd *cocci_id/* drivers/net/ethernet/i825xx/82596.c 1054 */;
	netdev_tx_t cocci_id/* drivers/net/ethernet/i825xx/82596.c 1050 */;
}
