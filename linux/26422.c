cocci_test_suite() {
	struct msg1 cocci_id/* tools/testing/selftests/ipc/msgque.c 84 */;
	struct msgque_data *cocci_id/* tools/testing/selftests/ipc/msgque.c 82 */;
	int cocci_id/* tools/testing/selftests/ipc/msgque.c 82 */;
	char cocci_id/* tools/testing/selftests/ipc/msgque.c 38 */[32];
	struct msgque_data {
		key_t key;
		int msq_id;
		int qbytes;
		int qnum;
		int mode;
		struct msg1 *messages;
	} cocci_id/* tools/testing/selftests/ipc/msgque.c 26 */;
	struct msgque_data cocci_id/* tools/testing/selftests/ipc/msgque.c 198 */;
	char **cocci_id/* tools/testing/selftests/ipc/msgque.c 195 */;
	struct msg1 {
		int msize;
		long mtype;
		char mtext[MAX_MSG_SIZE];
	} cocci_id/* tools/testing/selftests/ipc/msgque.c 14 */;
	struct msqid_ds cocci_id/* tools/testing/selftests/ipc/msgque.c 133 */;
}
