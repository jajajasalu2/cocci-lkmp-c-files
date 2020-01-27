cocci_test_suite() {
	va_list cocci_id/* drivers/isdn/mISDN/layer1.c 96 */;
	struct va_format cocci_id/* drivers/isdn/mISDN/layer1.c 95 */;
	char *cocci_id/* drivers/isdn/mISDN/layer1.c 92 */;
	char *cocci_id/* drivers/isdn/mISDN/layer1.c 75 */[];
	enum{EV_PH_ACTIVATE, EV_PH_DEACTIVATE, EV_RESET_IND, EV_DEACT_CNF, EV_DEACT_IND, EV_POWER_UP, EV_ANYSIG_IND, EV_INFO2_IND, EV_INFO4_IND, EV_TIMER_DEACT, EV_TIMER_ACT, EV_TIMER3,} cocci_id/* drivers/isdn/mISDN/layer1.c 58 */;
	struct layer1 cocci_id/* drivers/isdn/mISDN/layer1.c 377 */;
	struct layer1 *cocci_id/* drivers/isdn/mISDN/layer1.c 375 */;
	dchannel_l1callback *cocci_id/* drivers/isdn/mISDN/layer1.c 374 */;
	struct dchannel *cocci_id/* drivers/isdn/mISDN/layer1.c 374 */;
	int cocci_id/* drivers/isdn/mISDN/layer1.c 373 */;
	enum{ST_L1_F2, ST_L1_F3, ST_L1_F4, ST_L1_F5, ST_L1_F6, ST_L1_F7, ST_L1_F8,} cocci_id/* drivers/isdn/mISDN/layer1.c 35 */;
	struct Fsm cocci_id/* drivers/isdn/mISDN/layer1.c 33 */;
	u_int cocci_id/* drivers/isdn/mISDN/layer1.c 308 */;
	struct FsmNode cocci_id/* drivers/isdn/mISDN/layer1.c 249 */[];
	struct FsmInst *cocci_id/* drivers/isdn/mISDN/layer1.c 236 */;
	void *cocci_id/* drivers/isdn/mISDN/layer1.c 236 */;
	void cocci_id/* drivers/isdn/mISDN/layer1.c 235 */;
	struct layer1 {
		u_long Flags;
		struct FsmInst l1m;
		struct FsmTimer timer3;
		struct FsmTimer timerX;
		int delay;
		int t3_value;
		struct dchannel *dch;
		dchannel_l1callback *dcb;
	} cocci_id/* drivers/isdn/mISDN/layer1.c 19 */;
	u_int *cocci_id/* drivers/isdn/mISDN/layer1.c 17 */;
}
