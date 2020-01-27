cocci_test_suite() {
	bool cocci_id/* drivers/tee/optee/supp.c 83 */;
	u32 cocci_id/* drivers/tee/optee/supp.c 338 */;
	const u32 cocci_id/* drivers/tee/optee/supp.c 299 */;
	struct tee_param cocci_id/* drivers/tee/optee/supp.c 286 */;
	size_t cocci_id/* drivers/tee/optee/supp.c 237 */;
	struct optee_supp_req *cocci_id/* drivers/tee/optee/supp.c 235 */;
	struct optee *cocci_id/* drivers/tee/optee/supp.c 233 */;
	struct tee_device *cocci_id/* drivers/tee/optee/supp.c 232 */;
	struct tee_param *cocci_id/* drivers/tee/optee/supp.c 230 */;
	u32 *cocci_id/* drivers/tee/optee/supp.c 229 */;
	struct tee_context *cocci_id/* drivers/tee/optee/supp.c 229 */;
	int cocci_id/* drivers/tee/optee/supp.c 229 */;
	struct optee_supp *cocci_id/* drivers/tee/optee/supp.c 22 */;
	void cocci_id/* drivers/tee/optee/supp.c 22 */;
	size_t *cocci_id/* drivers/tee/optee/supp.c 186 */;
	struct optee_supp_req cocci_id/* drivers/tee/optee/supp.c 168 */;
	int *cocci_id/* drivers/tee/optee/supp.c 153 */;
	struct optee_supp_req {
		struct list_head link;
		bool in_queue;
		u32 func;
		u32 ret;
		size_t num_params;
		struct tee_param *param;
		struct completion c;
	} cocci_id/* drivers/tee/optee/supp.c 10 */;
}
