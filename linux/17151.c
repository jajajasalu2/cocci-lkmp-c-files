cocci_test_suite() {
	unsigned long cocci_id/* arch/powerpc/kernel/smp-tbsync.c 49 */;
	u64 cocci_id/* arch/powerpc/kernel/smp-tbsync.c 39 */;
	long cocci_id/* arch/powerpc/kernel/smp-tbsync.c 39 */;
	void cocci_id/* arch/powerpc/kernel/smp-tbsync.c 39 */;
	volatile int cocci_id/* arch/powerpc/kernel/smp-tbsync.c 37 */;
	struct {
		volatile u64 tb;
		volatile u64 mark;
		volatile int cmd;
		volatile int handshake;
		int filler[2];
		volatile int ack;
		int filler2[7];
		volatile int race_result;
	} *cocci_id/* arch/powerpc/kernel/smp-tbsync.c 24 */;
	enum{kExit=0, kSetAndTest, kTest,} cocci_id/* arch/powerpc/kernel/smp-tbsync.c 20 */;
	int cocci_id/* arch/powerpc/kernel/smp-tbsync.c 115 */;
}
