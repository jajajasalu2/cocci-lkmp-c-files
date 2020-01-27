cocci_test_suite() {
	struct capilib_msgidqueue *cocci_id/* drivers/isdn/capi/capilib.c 68 */;
	struct capilib_msgidqueue **cocci_id/* drivers/isdn/capi/capilib.c 65 */;
	int cocci_id/* drivers/isdn/capi/capilib.c 63 */;
	u_int cocci_id/* drivers/isdn/capi/capilib.c 34 */;
	struct capilib_ncci cocci_id/* drivers/isdn/capi/capilib.c 187 */;
	struct capilib_ncci *cocci_id/* drivers/isdn/capi/capilib.c 184 */;
	u32 cocci_id/* drivers/isdn/capi/capilib.c 181 */;
	u16 cocci_id/* drivers/isdn/capi/capilib.c 181 */;
	struct list_head *cocci_id/* drivers/isdn/capi/capilib.c 181 */;
	void cocci_id/* drivers/isdn/capi/capilib.c 181 */;
	struct capilib_ncci {
		struct list_head list;
		u16 applid;
		u32 ncci;
		u32 winsize;
		int nmsg;
		struct capilib_msgidqueue *msgidqueue;
		struct capilib_msgidqueue *msgidlast;
		struct capilib_msgidqueue *msgidfree;
		struct capilib_msgidqueue msgidpool[CAPI_MAXDATAWINDOW];
	} cocci_id/* drivers/isdn/capi/capilib.c 17 */;
	struct capilib_msgidqueue {
		struct capilib_msgidqueue *next;
		u16 msgid;
	} cocci_id/* drivers/isdn/capi/capilib.c 12 */;
}
