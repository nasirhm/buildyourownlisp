mpc_parser_t* Protocol = mpc_new("protocol");
mpc_parser_t* WorldWideWeb = mpc_new("worldwideweb");
mpc_parser_t* Colon = mpc_new("colon");
mpc_parser_t* Slash = mpc_new("slash");
mpc_parser_t* UrlWebName = mpc_new("urlwebname");
mpc_parser_t* Words = mpc_new("words");
mpc_parser_t* Tld = mpc_new("tld");

mpc_parser_t* FinalWebLink = mpc_new("finalweblink");

mpca_lang(MPCA_LANG_DEFAULT, " \
        protocol : \"http\" | \"https\" ; \
        colon : \":\" ; \
        slash : \"/\" ; \
        worldwideweb : \"www.\" ; \
        words: \"a\" | \"b\" | \"c\" | \"d\" | \"e\" | \"f\" | \"g\" | \"h\" \
               | \"i\" | \"j\" | \"k\" | \"l\" | \"m\" | \"n\" | \"o\" | \"p\" \
               | \"q\" | \"r\" | \"s\" | \"t\" | \"u\" | \"v\" | \"w\" | \"x\" \
               | \"y\" | \"z\" ;
        urlwebname: <words>* '.'; \
        tld: \"com\" | \"org\"; \
        finalweblink: <protocol> <colon> <slash> <slash> <worldwideweb> <urlwebname> \
                      <tld>; \
        ", Protocol, Colon, Slash, WorldWideWeb, Words, UrlWebName, Tld, FinalWebLink);

mpca_cleanup(4, Protocol, Colon, Slash, WorldWideWeb, Words, UrlWebName, Tld, FinalWebLink);
