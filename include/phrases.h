#ifndef PHRASES_H
#define PHRASES_H


class phrases
{
    public:
        phrases();
        ~phrases();
        void salute();
        std::string exist();
        void addphrase(std::string add);
        std::string lastphrase();
        void meaning(std::string sig);

    protected:

    private:
        std::string valor;
};

#endif // PHRASES_H
