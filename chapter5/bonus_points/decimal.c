int main(int argc, char** argv){
	mpc_parser_t* Numbers = mpc_new("numbers");
    mpc_parser_t* Points = mpc_new("points");
    mpc_parser_t* Decimal = mpc_new("decimal");

    mpca_lang(MPCA_LANG_DEFAULT,"
            decimal : \"1\" | \"2\" | \"3\" | \"4\" | \"5\" | \"6\" | \"7\" \
            | \"8\" | \"9\" | \"0\"; \
            points :  \".\"; \
            numbers : <decimal>* <decpoints> <decimal>*
            ", Decimal, Points, Decimal);

    mpc_cleanup(4, Decimal, Points, Numbers);
}
