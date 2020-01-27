cocci_test_suite() {
	short cocci_id/* drivers/net/ethernet/i825xx/lib82596.c 974 */;
	struct i596_tbd *cocci_id/* drivers/net/ethernet/i825xx/lib82596.c 973 */;
	netdev_tx_t cocci_id/* drivers/net/ethernet/i825xx/lib82596.c 969 */;
	struct i596_scb cocci_id/* drivers/net/ethernet/i825xx/lib82596.c 894 */;
	struct i596_cmd cocci_id/* drivers/net/ethernet/i825xx/lib82596.c 881 */;
	unsigned long cocci_id/* drivers/net/ethernet/i825xx/lib82596.c 872 */;
	struct i596_dma *cocci_id/* drivers/net/ethernet/i825xx/lib82596.c 871 */;
	struct i596_private *cocci_id/* drivers/net/ethernet/i825xx/lib82596.c 870 */;
	struct net_device *cocci_id/* drivers/net/ethernet/i825xx/lib82596.c 868 */;
	struct i596_cmd *cocci_id/* drivers/net/ethernet/i825xx/lib82596.c 868 */;
	void cocci_id/* drivers/net/ethernet/i825xx/lib82596.c 868 */;
	struct sk_buff *cocci_id/* drivers/net/ethernet/i825xx/lib82596.c 811 */;
	struct tx_cmd *cocci_id/* drivers/net/ethernet/i825xx/lib82596.c 810 */;
	dma_addr_t cocci_id/* drivers/net/ethernet/i825xx/lib82596.c 693 */;
	struct i596_rbd cocci_id/* drivers/net/ethernet/i825xx/lib82596.c 668 */;
	struct i596_rfd cocci_id/* drivers/net/ethernet/i825xx/lib82596.c 662 */;
	struct tdr_cmd cocci_id/* drivers/net/ethernet/i825xx/lib82596.c 616 */;
	struct sa_cmd cocci_id/* drivers/net/ethernet/i825xx/lib82596.c 611 */;
	struct cf_cmd cocci_id/* drivers/net/ethernet/i825xx/lib82596.c 605 */;
	struct i596_iscp cocci_id/* drivers/net/ethernet/i825xx/lib82596.c 579 */;
	struct i596_scp cocci_id/* drivers/net/ethernet/i825xx/lib82596.c 578 */;
	struct i596_dma cocci_id/* drivers/net/ethernet/i825xx/lib82596.c 454 */;
	struct i596_rbd *cocci_id/* drivers/net/ethernet/i825xx/lib82596.c 409 */;
	struct i596_rfd *cocci_id/* drivers/net/ethernet/i825xx/lib82596.c 408 */;
	void cocci_id/* drivers/net/ethernet/i825xx/lib82596.c 358 */(struct net_device *dev,
								      int c,
								      dma_addr_t x);
	void cocci_id/* drivers/net/ethernet/i825xx/lib82596.c 357 */(struct net_device *dev);
	void cocci_id/* drivers/net/ethernet/i825xx/lib82596.c 355 */(unsigned char *buf,
								      char *str);
	void cocci_id/* drivers/net/ethernet/i825xx/lib82596.c 353 */(struct net_device *dev,
								      struct i596_cmd *cmd);
	int cocci_id/* drivers/net/ethernet/i825xx/lib82596.c 352 */(struct net_device *dev);
	irqreturn_t cocci_id/* drivers/net/ethernet/i825xx/lib82596.c 351 */(int irq,
									     void *dev_id);
	netdev_tx_t cocci_id/* drivers/net/ethernet/i825xx/lib82596.c 350 */(struct sk_buff *skb,
									     struct net_device *dev);
	const char cocci_id/* drivers/net/ethernet/i825xx/lib82596.c 332 */[];
	struct i596_private {
		struct i596_dma *dma;
		u32 stat;
		int last_restart;
		struct i596_rfd *rfd_head;
		struct i596_rbd *rbd_head;
		struct i596_cmd *cmd_tail;
		struct i596_cmd *cmd_head;
		int cmd_backlog;
		u32 last_cmd;
		int next_tx_cmd;
		int options;
		spinlock_t lock;
		dma_addr_t dma_addr;
		void __iomem *mpu_port;
		void __iomem *ca;
	} cocci_id/* drivers/net/ethernet/i825xx/lib82596.c 314 */;
	struct i596_dma {
		struct i596_scp scp __attribute__((aligned(32)));
		volatile struct i596_iscp iscp __attribute__((aligned(32)));
		volatile struct i596_scb scb __attribute__((aligned(32)));
		struct sa_cmd sa_cmd __attribute__((aligned(32)));
		struct cf_cmd cf_cmd __attribute__((aligned(32)));
		struct tdr_cmd tdr_cmd __attribute__((aligned(32)));
		struct mc_cmd mc_cmd __attribute__((aligned(32)));
		struct i596_rfd rfds[RX_RING_SIZE]__attribute__((aligned(32)));
		struct i596_rbd rbds[RX_RING_SIZE]__attribute__((aligned(32)));
		struct tx_cmd tx_cmds[TX_RING_SIZE]__attribute__((aligned(32)));
		struct i596_tbd tbds[TX_RING_SIZE]__attribute__((aligned(32)));
	} cocci_id/* drivers/net/ethernet/i825xx/lib82596.c 300 */;
	struct i596_scp {
		u32 sysbus;
		u32 pad;
		u32 iscp;
	} cocci_id/* drivers/net/ethernet/i825xx/lib82596.c 294 */;
	struct i596_iscp {
		u32 stat;
		u32 scb;
	} cocci_id/* drivers/net/ethernet/i825xx/lib82596.c 289 */;
	struct i596_scb {
		unsigned short status;
		unsigned short command;
		u32 cmd;
		u32 rfd;
		u32 crc_err;
		u32 align_err;
		u32 resource_err;
		u32 over_err;
		u32 rcvdt_err;
		u32 short_err;
		unsigned short t_on;
		unsigned short t_off;
	} cocci_id/* drivers/net/ethernet/i825xx/lib82596.c 274 */;
	struct i596_rbd {
		unsigned short count;
		unsigned short zero1;
		u32 b_next;
		u32 b_data;
		unsigned short size;
		unsigned short zero2;
		struct sk_buff *skb;
		struct i596_rbd *v_next;
		u32 b_addr;
		unsigned char *v_data;
#ifdef __LP64__
		u32 cache_pad[4];
#endif
	} cocci_id/* drivers/net/ethernet/i825xx/lib82596.c 250 */;
	struct i596_rfd {
		unsigned short stat;
		unsigned short cmd;
		u32 b_next;
		u32 rbd;
		unsigned short count;
		unsigned short size;
		struct i596_rfd *v_next;
		struct i596_rfd *v_prev;
#ifndef __LP64__
		u32 cache_pad[2];
#endif
	} cocci_id/* drivers/net/ethernet/i825xx/lib82596.c 236 */;
	struct cf_cmd {
		struct i596_cmd cmd;
		char i596_config[16];
	} cocci_id/* drivers/net/ethernet/i825xx/lib82596.c 231 */;
	struct sa_cmd {
		struct i596_cmd cmd;
		char eth_addr[8];
	} cocci_id/* drivers/net/ethernet/i825xx/lib82596.c 226 */;
	struct mc_cmd {
		struct i596_cmd cmd;
		short mc_cnt;
		char mc_addrs[MAX_MC_CNT * 6];
	} cocci_id/* drivers/net/ethernet/i825xx/lib82596.c 220 */;
	struct tdr_cmd {
		struct i596_cmd cmd;
		unsigned short status;
		unsigned short pad;
	} cocci_id/* drivers/net/ethernet/i825xx/lib82596.c 214 */;
	struct tx_cmd {
		struct i596_cmd cmd;
		u32 tbd;
		unsigned short size;
		unsigned short pad;
		struct sk_buff *skb;
		dma_addr_t dma_addr;
#ifdef __LP64__
		u32 cache_pad[6];
#else
		u32 cache_pad[1];
#endif
	} cocci_id/* drivers/net/ethernet/i825xx/lib82596.c 200 */;
	struct i596_cmd {
		struct i596_cmd *v_next;
		unsigned short status;
		unsigned short command;
		u32 b_next;
	} cocci_id/* drivers/net/ethernet/i825xx/lib82596.c 193 */;
	struct i596_tbd {
		unsigned short size;
		unsigned short pad;
		u32 next;
		u32 data;
		u32 cache_pad[5];
	} cocci_id/* drivers/net/ethernet/i825xx/lib82596.c 175 */;
	struct i596_reg {
		unsigned short porthi;
		unsigned short portlo;
		u32 ca;
	} cocci_id/* drivers/net/ethernet/i825xx/lib82596.c 166 */;
	enum commands{CmdNOp=0, CmdSASetup=1, CmdConfigure=2, CmdMulticastList=3, CmdTx=4, CmdTDR=5, CmdDump=6, CmdDiagnose=7,} cocci_id/* drivers/net/ethernet/i825xx/lib82596.c 144 */;
	struct mc_cmd cocci_id/* drivers/net/ethernet/i825xx/lib82596.c 1407 */;
	struct mc_cmd *cocci_id/* drivers/net/ethernet/i825xx/lib82596.c 1390 */;
	struct netdev_hw_addr *cocci_id/* drivers/net/ethernet/i825xx/lib82596.c 1388 */;
	u32 cocci_id/* drivers/net/ethernet/i825xx/lib82596.c 136 */;
	int cocci_id/* drivers/net/ethernet/i825xx/lib82596.c 1300 */;
	struct tdr_cmd *cocci_id/* drivers/net/ethernet/i825xx/lib82596.c 1204 */;
	unsigned short cocci_id/* drivers/net/ethernet/i825xx/lib82596.c 1119 */;
	irqreturn_t cocci_id/* drivers/net/ethernet/i825xx/lib82596.c 1114 */;
	void *cocci_id/* drivers/net/ethernet/i825xx/lib82596.c 1114 */;
	const struct net_device_ops cocci_id/* drivers/net/ethernet/i825xx/lib82596.c 1035 */;
	unsigned char *cocci_id/* drivers/net/ethernet/i825xx/lib82596.c 1030 */;
	char *cocci_id/* drivers/net/ethernet/i825xx/lib82596.c 1030 */;
	struct i596_tbd cocci_id/* drivers/net/ethernet/i825xx/lib82596.c 1018 */;
	struct tx_cmd cocci_id/* drivers/net/ethernet/i825xx/lib82596.c 1017 */;
}
