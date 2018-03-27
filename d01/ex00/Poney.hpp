#ifndef PONY_HPP
#define PONY_HPP

class Pony {
    public:
        Pony(void);
        ~Pony(void);
        void setName(std::string);
        std::string getName(void);
    private:
        std::string _name;
};

#endif