#include "../tools/test_headers.h"
#include "libftprintf.h"

int		main(void)
{
	FILE	*printf_, *printf_ret, *ft_printf_ret;
	int		ret1, ret2;

	printf_ = fopen("../testing_results/test_m034_printf_print", "w");
	printf_ret = fopen("../testing_results/test_m034_printf_ret", "w");
	ft_printf_ret = fopen("../testing_results/test_m034_ft_printf_ret", "w");
	setvbuf(printf_, NULL, _IONBF, 0);
	setvbuf(printf_ret, NULL, _IONBF, 0);
	setvbuf(ft_printf_ret, NULL, _IONBF, 0);

	
//@
	ft_printf("\n#0000");
	fprintf(printf_, "\n#0000");
	ret1 = fprintf(printf_, "|%10.20s|", L"casual stringα");
	ret2 = ft_printf("|%10.20s|", L"casual stringα");
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m034_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0001");
	fprintf(printf_, "\n#0001");
	ret1 = fprintf(printf_, "|%10.20ls|", L"casual stringα");
	ret2 = ft_printf("|%10.20ls|", L"casual stringα");
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m034_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0002");
	fprintf(printf_, "\n#0002");
	ret1 = fprintf(printf_, "|%10.20S|", L"casual stringα");
	ret2 = ft_printf("|%10.20S|", L"casual stringα");
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m034_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0003");
	fprintf(printf_, "\n#0003");
	ret1 = fprintf(printf_, "|% 10.20s|", L"casual stringα");
	ret2 = ft_printf("|% 10.20s|", L"casual stringα");
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m034_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0004");
	fprintf(printf_, "\n#0004");
	ret1 = fprintf(printf_, "|% 10.20ls|", L"casual stringα");
	ret2 = ft_printf("|% 10.20ls|", L"casual stringα");
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m034_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0005");
	fprintf(printf_, "\n#0005");
	ret1 = fprintf(printf_, "|% 10.20S|", L"casual stringα");
	ret2 = ft_printf("|% 10.20S|", L"casual stringα");
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m034_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0006");
	fprintf(printf_, "\n#0006");
	ret1 = fprintf(printf_, "|%010.20s|", L"casual stringα");
	ret2 = ft_printf("|%010.20s|", L"casual stringα");
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m034_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0007");
	fprintf(printf_, "\n#0007");
	ret1 = fprintf(printf_, "|%010.20ls|", L"casual stringα");
	ret2 = ft_printf("|%010.20ls|", L"casual stringα");
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m034_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0008");
	fprintf(printf_, "\n#0008");
	ret1 = fprintf(printf_, "|%010.20S|", L"casual stringα");
	ret2 = ft_printf("|%010.20S|", L"casual stringα");
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m034_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0009");
	fprintf(printf_, "\n#0009");
	ret1 = fprintf(printf_, "|% 010.20s|", L"casual stringα");
	ret2 = ft_printf("|% 010.20s|", L"casual stringα");
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m034_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0010");
	fprintf(printf_, "\n#0010");
	ret1 = fprintf(printf_, "|% 010.20ls|", L"casual stringα");
	ret2 = ft_printf("|% 010.20ls|", L"casual stringα");
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m034_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0011");
	fprintf(printf_, "\n#0011");
	ret1 = fprintf(printf_, "|% 010.20S|", L"casual stringα");
	ret2 = ft_printf("|% 010.20S|", L"casual stringα");
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m034_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0012");
	fprintf(printf_, "\n#0012");
	ret1 = fprintf(printf_, "|%+10.20s|", L"casual stringα");
	ret2 = ft_printf("|%+10.20s|", L"casual stringα");
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m034_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0013");
	fprintf(printf_, "\n#0013");
	ret1 = fprintf(printf_, "|%+10.20ls|", L"casual stringα");
	ret2 = ft_printf("|%+10.20ls|", L"casual stringα");
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m034_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0014");
	fprintf(printf_, "\n#0014");
	ret1 = fprintf(printf_, "|%+10.20S|", L"casual stringα");
	ret2 = ft_printf("|%+10.20S|", L"casual stringα");
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m034_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0015");
	fprintf(printf_, "\n#0015");
	ret1 = fprintf(printf_, "|% +10.20s|", L"casual stringα");
	ret2 = ft_printf("|% +10.20s|", L"casual stringα");
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m034_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0016");
	fprintf(printf_, "\n#0016");
	ret1 = fprintf(printf_, "|% +10.20ls|", L"casual stringα");
	ret2 = ft_printf("|% +10.20ls|", L"casual stringα");
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m034_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0017");
	fprintf(printf_, "\n#0017");
	ret1 = fprintf(printf_, "|% +10.20S|", L"casual stringα");
	ret2 = ft_printf("|% +10.20S|", L"casual stringα");
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m034_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0018");
	fprintf(printf_, "\n#0018");
	ret1 = fprintf(printf_, "|%0+10.20s|", L"casual stringα");
	ret2 = ft_printf("|%0+10.20s|", L"casual stringα");
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m034_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0019");
	fprintf(printf_, "\n#0019");
	ret1 = fprintf(printf_, "|%0+10.20ls|", L"casual stringα");
	ret2 = ft_printf("|%0+10.20ls|", L"casual stringα");
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m034_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0020");
	fprintf(printf_, "\n#0020");
	ret1 = fprintf(printf_, "|%0+10.20S|", L"casual stringα");
	ret2 = ft_printf("|%0+10.20S|", L"casual stringα");
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m034_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0021");
	fprintf(printf_, "\n#0021");
	ret1 = fprintf(printf_, "|% 0+10.20s|", L"casual stringα");
	ret2 = ft_printf("|% 0+10.20s|", L"casual stringα");
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m034_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0022");
	fprintf(printf_, "\n#0022");
	ret1 = fprintf(printf_, "|% 0+10.20ls|", L"casual stringα");
	ret2 = ft_printf("|% 0+10.20ls|", L"casual stringα");
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m034_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0023");
	fprintf(printf_, "\n#0023");
	ret1 = fprintf(printf_, "|% 0+10.20S|", L"casual stringα");
	ret2 = ft_printf("|% 0+10.20S|", L"casual stringα");
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m034_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0024");
	fprintf(printf_, "\n#0024");
	ret1 = fprintf(printf_, "|%-10.20s|", L"casual stringα");
	ret2 = ft_printf("|%-10.20s|", L"casual stringα");
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m034_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0025");
	fprintf(printf_, "\n#0025");
	ret1 = fprintf(printf_, "|%-10.20ls|", L"casual stringα");
	ret2 = ft_printf("|%-10.20ls|", L"casual stringα");
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m034_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0026");
	fprintf(printf_, "\n#0026");
	ret1 = fprintf(printf_, "|%-10.20S|", L"casual stringα");
	ret2 = ft_printf("|%-10.20S|", L"casual stringα");
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m034_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0027");
	fprintf(printf_, "\n#0027");
	ret1 = fprintf(printf_, "|% -10.20s|", L"casual stringα");
	ret2 = ft_printf("|% -10.20s|", L"casual stringα");
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m034_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0028");
	fprintf(printf_, "\n#0028");
	ret1 = fprintf(printf_, "|% -10.20ls|", L"casual stringα");
	ret2 = ft_printf("|% -10.20ls|", L"casual stringα");
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m034_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0029");
	fprintf(printf_, "\n#0029");
	ret1 = fprintf(printf_, "|% -10.20S|", L"casual stringα");
	ret2 = ft_printf("|% -10.20S|", L"casual stringα");
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m034_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0030");
	fprintf(printf_, "\n#0030");
	ret1 = fprintf(printf_, "|%0-10.20s|", L"casual stringα");
	ret2 = ft_printf("|%0-10.20s|", L"casual stringα");
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m034_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0031");
	fprintf(printf_, "\n#0031");
	ret1 = fprintf(printf_, "|%0-10.20ls|", L"casual stringα");
	ret2 = ft_printf("|%0-10.20ls|", L"casual stringα");
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m034_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0032");
	fprintf(printf_, "\n#0032");
	ret1 = fprintf(printf_, "|%0-10.20S|", L"casual stringα");
	ret2 = ft_printf("|%0-10.20S|", L"casual stringα");
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m034_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0033");
	fprintf(printf_, "\n#0033");
	ret1 = fprintf(printf_, "|% 0-10.20s|", L"casual stringα");
	ret2 = ft_printf("|% 0-10.20s|", L"casual stringα");
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m034_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0034");
	fprintf(printf_, "\n#0034");
	ret1 = fprintf(printf_, "|% 0-10.20ls|", L"casual stringα");
	ret2 = ft_printf("|% 0-10.20ls|", L"casual stringα");
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m034_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0035");
	fprintf(printf_, "\n#0035");
	ret1 = fprintf(printf_, "|% 0-10.20S|", L"casual stringα");
	ret2 = ft_printf("|% 0-10.20S|", L"casual stringα");
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m034_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0036");
	fprintf(printf_, "\n#0036");
	ret1 = fprintf(printf_, "|%+-10.20s|", L"casual stringα");
	ret2 = ft_printf("|%+-10.20s|", L"casual stringα");
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m034_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0037");
	fprintf(printf_, "\n#0037");
	ret1 = fprintf(printf_, "|%+-10.20ls|", L"casual stringα");
	ret2 = ft_printf("|%+-10.20ls|", L"casual stringα");
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m034_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0038");
	fprintf(printf_, "\n#0038");
	ret1 = fprintf(printf_, "|%+-10.20S|", L"casual stringα");
	ret2 = ft_printf("|%+-10.20S|", L"casual stringα");
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m034_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0039");
	fprintf(printf_, "\n#0039");
	ret1 = fprintf(printf_, "|% +-10.20s|", L"casual stringα");
	ret2 = ft_printf("|% +-10.20s|", L"casual stringα");
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m034_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0040");
	fprintf(printf_, "\n#0040");
	ret1 = fprintf(printf_, "|% +-10.20ls|", L"casual stringα");
	ret2 = ft_printf("|% +-10.20ls|", L"casual stringα");
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m034_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0041");
	fprintf(printf_, "\n#0041");
	ret1 = fprintf(printf_, "|% +-10.20S|", L"casual stringα");
	ret2 = ft_printf("|% +-10.20S|", L"casual stringα");
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m034_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0042");
	fprintf(printf_, "\n#0042");
	ret1 = fprintf(printf_, "|%0+-10.20s|", L"casual stringα");
	ret2 = ft_printf("|%0+-10.20s|", L"casual stringα");
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m034_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0043");
	fprintf(printf_, "\n#0043");
	ret1 = fprintf(printf_, "|%0+-10.20ls|", L"casual stringα");
	ret2 = ft_printf("|%0+-10.20ls|", L"casual stringα");
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m034_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0044");
	fprintf(printf_, "\n#0044");
	ret1 = fprintf(printf_, "|%0+-10.20S|", L"casual stringα");
	ret2 = ft_printf("|%0+-10.20S|", L"casual stringα");
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m034_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0045");
	fprintf(printf_, "\n#0045");
	ret1 = fprintf(printf_, "|% 0+-10.20s|", L"casual stringα");
	ret2 = ft_printf("|% 0+-10.20s|", L"casual stringα");
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m034_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0046");
	fprintf(printf_, "\n#0046");
	ret1 = fprintf(printf_, "|% 0+-10.20ls|", L"casual stringα");
	ret2 = ft_printf("|% 0+-10.20ls|", L"casual stringα");
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m034_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0047");
	fprintf(printf_, "\n#0047");
	ret1 = fprintf(printf_, "|% 0+-10.20S|", L"casual stringα");
	ret2 = ft_printf("|% 0+-10.20S|", L"casual stringα");
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m034_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0048");
	fprintf(printf_, "\n#0048");
	ret1 = fprintf(printf_, "|%#10.20s|", L"casual stringα");
	ret2 = ft_printf("|%#10.20s|", L"casual stringα");
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m034_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0049");
	fprintf(printf_, "\n#0049");
	ret1 = fprintf(printf_, "|%#10.20ls|", L"casual stringα");
	ret2 = ft_printf("|%#10.20ls|", L"casual stringα");
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m034_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0050");
	fprintf(printf_, "\n#0050");
	ret1 = fprintf(printf_, "|%#10.20S|", L"casual stringα");
	ret2 = ft_printf("|%#10.20S|", L"casual stringα");
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m034_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0051");
	fprintf(printf_, "\n#0051");
	ret1 = fprintf(printf_, "|% #10.20s|", L"casual stringα");
	ret2 = ft_printf("|% #10.20s|", L"casual stringα");
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m034_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0052");
	fprintf(printf_, "\n#0052");
	ret1 = fprintf(printf_, "|% #10.20ls|", L"casual stringα");
	ret2 = ft_printf("|% #10.20ls|", L"casual stringα");
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m034_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0053");
	fprintf(printf_, "\n#0053");
	ret1 = fprintf(printf_, "|% #10.20S|", L"casual stringα");
	ret2 = ft_printf("|% #10.20S|", L"casual stringα");
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m034_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0054");
	fprintf(printf_, "\n#0054");
	ret1 = fprintf(printf_, "|%0#10.20s|", L"casual stringα");
	ret2 = ft_printf("|%0#10.20s|", L"casual stringα");
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m034_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0055");
	fprintf(printf_, "\n#0055");
	ret1 = fprintf(printf_, "|%0#10.20ls|", L"casual stringα");
	ret2 = ft_printf("|%0#10.20ls|", L"casual stringα");
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m034_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0056");
	fprintf(printf_, "\n#0056");
	ret1 = fprintf(printf_, "|%0#10.20S|", L"casual stringα");
	ret2 = ft_printf("|%0#10.20S|", L"casual stringα");
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m034_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0057");
	fprintf(printf_, "\n#0057");
	ret1 = fprintf(printf_, "|% 0#10.20s|", L"casual stringα");
	ret2 = ft_printf("|% 0#10.20s|", L"casual stringα");
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m034_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0058");
	fprintf(printf_, "\n#0058");
	ret1 = fprintf(printf_, "|% 0#10.20ls|", L"casual stringα");
	ret2 = ft_printf("|% 0#10.20ls|", L"casual stringα");
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m034_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0059");
	fprintf(printf_, "\n#0059");
	ret1 = fprintf(printf_, "|% 0#10.20S|", L"casual stringα");
	ret2 = ft_printf("|% 0#10.20S|", L"casual stringα");
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m034_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0060");
	fprintf(printf_, "\n#0060");
	ret1 = fprintf(printf_, "|%+#10.20s|", L"casual stringα");
	ret2 = ft_printf("|%+#10.20s|", L"casual stringα");
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m034_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0061");
	fprintf(printf_, "\n#0061");
	ret1 = fprintf(printf_, "|%+#10.20ls|", L"casual stringα");
	ret2 = ft_printf("|%+#10.20ls|", L"casual stringα");
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m034_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0062");
	fprintf(printf_, "\n#0062");
	ret1 = fprintf(printf_, "|%+#10.20S|", L"casual stringα");
	ret2 = ft_printf("|%+#10.20S|", L"casual stringα");
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m034_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0063");
	fprintf(printf_, "\n#0063");
	ret1 = fprintf(printf_, "|% +#10.20s|", L"casual stringα");
	ret2 = ft_printf("|% +#10.20s|", L"casual stringα");
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m034_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0064");
	fprintf(printf_, "\n#0064");
	ret1 = fprintf(printf_, "|% +#10.20ls|", L"casual stringα");
	ret2 = ft_printf("|% +#10.20ls|", L"casual stringα");
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m034_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0065");
	fprintf(printf_, "\n#0065");
	ret1 = fprintf(printf_, "|% +#10.20S|", L"casual stringα");
	ret2 = ft_printf("|% +#10.20S|", L"casual stringα");
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m034_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0066");
	fprintf(printf_, "\n#0066");
	ret1 = fprintf(printf_, "|%0+#10.20s|", L"casual stringα");
	ret2 = ft_printf("|%0+#10.20s|", L"casual stringα");
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m034_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0067");
	fprintf(printf_, "\n#0067");
	ret1 = fprintf(printf_, "|%0+#10.20ls|", L"casual stringα");
	ret2 = ft_printf("|%0+#10.20ls|", L"casual stringα");
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m034_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0068");
	fprintf(printf_, "\n#0068");
	ret1 = fprintf(printf_, "|%0+#10.20S|", L"casual stringα");
	ret2 = ft_printf("|%0+#10.20S|", L"casual stringα");
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m034_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0069");
	fprintf(printf_, "\n#0069");
	ret1 = fprintf(printf_, "|% 0+#10.20s|", L"casual stringα");
	ret2 = ft_printf("|% 0+#10.20s|", L"casual stringα");
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m034_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0070");
	fprintf(printf_, "\n#0070");
	ret1 = fprintf(printf_, "|% 0+#10.20ls|", L"casual stringα");
	ret2 = ft_printf("|% 0+#10.20ls|", L"casual stringα");
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m034_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0071");
	fprintf(printf_, "\n#0071");
	ret1 = fprintf(printf_, "|% 0+#10.20S|", L"casual stringα");
	ret2 = ft_printf("|% 0+#10.20S|", L"casual stringα");
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m034_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0072");
	fprintf(printf_, "\n#0072");
	ret1 = fprintf(printf_, "|%-#10.20s|", L"casual stringα");
	ret2 = ft_printf("|%-#10.20s|", L"casual stringα");
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m034_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0073");
	fprintf(printf_, "\n#0073");
	ret1 = fprintf(printf_, "|%-#10.20ls|", L"casual stringα");
	ret2 = ft_printf("|%-#10.20ls|", L"casual stringα");
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m034_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0074");
	fprintf(printf_, "\n#0074");
	ret1 = fprintf(printf_, "|%-#10.20S|", L"casual stringα");
	ret2 = ft_printf("|%-#10.20S|", L"casual stringα");
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m034_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0075");
	fprintf(printf_, "\n#0075");
	ret1 = fprintf(printf_, "|% -#10.20s|", L"casual stringα");
	ret2 = ft_printf("|% -#10.20s|", L"casual stringα");
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m034_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0076");
	fprintf(printf_, "\n#0076");
	ret1 = fprintf(printf_, "|% -#10.20ls|", L"casual stringα");
	ret2 = ft_printf("|% -#10.20ls|", L"casual stringα");
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m034_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0077");
	fprintf(printf_, "\n#0077");
	ret1 = fprintf(printf_, "|% -#10.20S|", L"casual stringα");
	ret2 = ft_printf("|% -#10.20S|", L"casual stringα");
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m034_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0078");
	fprintf(printf_, "\n#0078");
	ret1 = fprintf(printf_, "|%0-#10.20s|", L"casual stringα");
	ret2 = ft_printf("|%0-#10.20s|", L"casual stringα");
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m034_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0079");
	fprintf(printf_, "\n#0079");
	ret1 = fprintf(printf_, "|%0-#10.20ls|", L"casual stringα");
	ret2 = ft_printf("|%0-#10.20ls|", L"casual stringα");
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m034_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0080");
	fprintf(printf_, "\n#0080");
	ret1 = fprintf(printf_, "|%0-#10.20S|", L"casual stringα");
	ret2 = ft_printf("|%0-#10.20S|", L"casual stringα");
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m034_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0081");
	fprintf(printf_, "\n#0081");
	ret1 = fprintf(printf_, "|% 0-#10.20s|", L"casual stringα");
	ret2 = ft_printf("|% 0-#10.20s|", L"casual stringα");
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m034_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0082");
	fprintf(printf_, "\n#0082");
	ret1 = fprintf(printf_, "|% 0-#10.20ls|", L"casual stringα");
	ret2 = ft_printf("|% 0-#10.20ls|", L"casual stringα");
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m034_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0083");
	fprintf(printf_, "\n#0083");
	ret1 = fprintf(printf_, "|% 0-#10.20S|", L"casual stringα");
	ret2 = ft_printf("|% 0-#10.20S|", L"casual stringα");
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m034_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0084");
	fprintf(printf_, "\n#0084");
	ret1 = fprintf(printf_, "|%+-#10.20s|", L"casual stringα");
	ret2 = ft_printf("|%+-#10.20s|", L"casual stringα");
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m034_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0085");
	fprintf(printf_, "\n#0085");
	ret1 = fprintf(printf_, "|%+-#10.20ls|", L"casual stringα");
	ret2 = ft_printf("|%+-#10.20ls|", L"casual stringα");
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m034_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0086");
	fprintf(printf_, "\n#0086");
	ret1 = fprintf(printf_, "|%+-#10.20S|", L"casual stringα");
	ret2 = ft_printf("|%+-#10.20S|", L"casual stringα");
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m034_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0087");
	fprintf(printf_, "\n#0087");
	ret1 = fprintf(printf_, "|% +-#10.20s|", L"casual stringα");
	ret2 = ft_printf("|% +-#10.20s|", L"casual stringα");
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m034_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0088");
	fprintf(printf_, "\n#0088");
	ret1 = fprintf(printf_, "|% +-#10.20ls|", L"casual stringα");
	ret2 = ft_printf("|% +-#10.20ls|", L"casual stringα");
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m034_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0089");
	fprintf(printf_, "\n#0089");
	ret1 = fprintf(printf_, "|% +-#10.20S|", L"casual stringα");
	ret2 = ft_printf("|% +-#10.20S|", L"casual stringα");
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m034_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0090");
	fprintf(printf_, "\n#0090");
	ret1 = fprintf(printf_, "|%0+-#10.20s|", L"casual stringα");
	ret2 = ft_printf("|%0+-#10.20s|", L"casual stringα");
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m034_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0091");
	fprintf(printf_, "\n#0091");
	ret1 = fprintf(printf_, "|%0+-#10.20ls|", L"casual stringα");
	ret2 = ft_printf("|%0+-#10.20ls|", L"casual stringα");
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m034_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0092");
	fprintf(printf_, "\n#0092");
	ret1 = fprintf(printf_, "|%0+-#10.20S|", L"casual stringα");
	ret2 = ft_printf("|%0+-#10.20S|", L"casual stringα");
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m034_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0093");
	fprintf(printf_, "\n#0093");
	ret1 = fprintf(printf_, "|% 0+-#10.20s|", L"casual stringα");
	ret2 = ft_printf("|% 0+-#10.20s|", L"casual stringα");
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m034_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0094");
	fprintf(printf_, "\n#0094");
	ret1 = fprintf(printf_, "|% 0+-#10.20ls|", L"casual stringα");
	ret2 = ft_printf("|% 0+-#10.20ls|", L"casual stringα");
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m034_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
//@
	ft_printf("\n#0095");
	fprintf(printf_, "\n#0095");
	ret1 = fprintf(printf_, "|% 0+-#10.20S|", L"casual stringα");
	ret2 = ft_printf("|% 0+-#10.20S|", L"casual stringα");
	fprintf(printf_ret, "%d\n", ret1);
	fprintf(ft_printf_ret, "%d\n", ret2);
	if (ret1 == -1) {printf_ = fopen("../testing_results/test_m034_printf_print", "a"); setvbuf(printf_, NULL, _IONBF, 0);}
	fclose(printf_);
	fclose(printf_ret);
	fclose(ft_printf_ret);
	return (0);
}

